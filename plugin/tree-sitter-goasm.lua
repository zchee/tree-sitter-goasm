if vim.g.loaded_tree_sitter_goasm == 1 then
  return
end
vim.g.loaded_tree_sitter_goasm = 1

local source = debug.getinfo(1, "S").source
local plugin_file = source:sub(1, 1) == "@" and source:sub(2) or "plugin/tree-sitter-goasm.lua"
local root = vim.fs.dirname(vim.fs.dirname(plugin_file))
local module_path = vim.fs.joinpath(root, "lua", "tree-sitter-goasm", "init.lua")
local chunk, err = loadfile(module_path)
if not chunk then
  vim.notify(
    ("tree-sitter-goasm: failed to load Neovim helper: %s"):format(err),
    vim.log.levels.ERROR
  )
  return
end

chunk().ensure_goasm_query_symlinks({
  dir = root,
})
