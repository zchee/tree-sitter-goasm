local M = {}

local default_query_names = { "highlights", "injections", "tags" }

local function uv()
  return vim.uv or vim.loop
end

local function module_root()
  local source = debug.getinfo(1, "S").source
  if source:sub(1, 1) == "@" then
    local init_lua = source:sub(2)
    return vim.fs.dirname(vim.fs.dirname(vim.fs.dirname(init_lua)))
  end
  return vim.fn.getcwd()
end

local function normalize_path(path)
  return vim.fs.normalize(path)
end

local function default_config_dir()
  return vim.fn.stdpath("config")
end

local function default_target_dir(config_dir)
  return vim.fs.joinpath(config_dir, "after", "queries", "goasm")
end

local function notify(message, level, opts)
  if opts and opts.notify == false then
    return
  end
  vim.notify(message, level or vim.log.levels.INFO)
end

local function list_contains_path(paths, path)
  local normalized = normalize_path(path)
  for _, item in ipairs(paths) do
    if normalize_path(item) == normalized then
      return true
    end
  end
  return false
end

local function refresh_runtimepath(config_dir)
  local after_dir = normalize_path(vim.fs.joinpath(config_dir, "after"))
  local paths = vim.opt.runtimepath:get()
  if not list_contains_path(paths, after_dir) then
    vim.opt.runtimepath:append(after_dir)
    return
  end

  -- Reassign the option to invalidate runtimepath lookup state after creating
  -- a previously missing after/queries/{lang} directory during startup.
  vim.opt.runtimepath = paths
end

local function is_same_link(target, source)
  local link = uv().fs_readlink(target)
  if not link then
    return false
  end
  return normalize_path(link) == normalize_path(source)
end

local function remove_symlink(target)
  local ok, err = uv().fs_unlink(target)
  if ok then
    return true
  end
  return nil, err
end

local function ensure_query_symlink(source, target, opts)
  if not uv().fs_stat(source) then
    return {
      name = opts.name,
      source = source,
      target = target,
      status = "missing_source",
    }
  end

  local target_stat = uv().fs_lstat(target)
  if target_stat then
    if target_stat.type ~= "link" then
      return {
        name = opts.name,
        source = source,
        target = target,
        status = "blocked_existing_target",
        message = "target exists and is not a symlink",
      }
    end

    if is_same_link(target, source) then
      return {
        name = opts.name,
        source = source,
        target = target,
        status = "unchanged",
      }
    end

    local ok, err = remove_symlink(target)
    if not ok then
      return {
        name = opts.name,
        source = source,
        target = target,
        status = "error",
        message = "failed to remove existing symlink: " .. tostring(err),
      }
    end
  end

  local ok, err = uv().fs_symlink(source, target)
  if not ok then
    return {
      name = opts.name,
      source = source,
      target = target,
      status = "error",
      message = "failed to create symlink: " .. tostring(err),
    }
  end

  return {
    name = opts.name,
    source = source,
    target = target,
    status = "created",
  }
end

local function resolve_plugin_dir(plugin_or_opts)
  if type(plugin_or_opts) == "table" then
    return plugin_or_opts.dir or plugin_or_opts.plugin_dir or plugin_or_opts.root
  end
  if type(plugin_or_opts) == "string" then
    return plugin_or_opts
  end
  return nil
end

---Ensure Neovim can discover goasm Tree-sitter query files.
---
---This creates symlinks from the grammar repository's canonical query files:
---  {plugin_dir}/queries/{highlights,injections,tags}.scm
---to Neovim's runtime query layout:
---  {stdpath('config')}/after/queries/goasm/*.scm
---
---Existing regular files are never overwritten. Existing symlinks are replaced
---only when they point somewhere else.
---
---@param plugin_or_opts? LazyPlugin|table|string lazy.nvim plugin table, opts, or plugin dir
---@return table[] results one result per query file
function M.ensure_goasm_query_symlinks(plugin_or_opts)
  local opts = type(plugin_or_opts) == "table" and plugin_or_opts or {}
  local plugin_dir = resolve_plugin_dir(plugin_or_opts) or module_root()
  local query_names = opts.query_names or default_query_names
  local config_dir = opts.config_dir or default_config_dir()
  local target_dir = opts.target_dir or default_target_dir(config_dir)
  local source_dir = opts.source_dir or vim.fs.joinpath(plugin_dir, "queries")

  plugin_dir = normalize_path(plugin_dir)
  source_dir = normalize_path(source_dir)
  target_dir = normalize_path(target_dir)

  vim.fn.mkdir(target_dir, "p")

  local results = {}
  local changed = false
  for _, name in ipairs(query_names) do
    local result = ensure_query_symlink(
      normalize_path(vim.fs.joinpath(source_dir, name .. ".scm")),
      normalize_path(vim.fs.joinpath(target_dir, name .. ".scm")),
      { name = name }
    )
    results[#results + 1] = result
    if result.status == "created" then
      changed = true
    end

    if result.status == "missing_source" then
      notify(("tree-sitter-goasm query source missing: %s"):format(result.source), vim.log.levels.WARN, opts)
    elseif result.status == "blocked_existing_target" then
      notify(("tree-sitter-goasm query target not overwritten: %s (%s)"):format(result.target, result.message), vim.log.levels.WARN, opts)
    elseif result.status == "error" then
      notify(("tree-sitter-goasm query symlink failed: %s -> %s (%s)"):format(result.target, result.source, result.message), vim.log.levels.ERROR, opts)
      if opts.error_on_failure then
        error(result.message)
      end
    end
  end

  if changed and opts.refresh_runtimepath ~= false then
    refresh_runtimepath(config_dir)
  end

  return results
end

return M
