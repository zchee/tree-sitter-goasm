local root = vim.fn.fnamemodify(debug.getinfo(1, "S").source:sub(2), ":p:h:h")
package.path = table.concat({
  vim.fs.joinpath(root, "lua", "?.lua"),
  vim.fs.joinpath(root, "lua", "?", "init.lua"),
  package.path,
}, ";")

local goasm = require("tree-sitter-goasm")
local uv = vim.uv or vim.loop

local function assert_equal(expected, actual, message)
  if not vim.deep_equal(expected, actual) then
    error((message or "values differ") .. ("\nexpected: %s\nactual:   %s"):format(vim.inspect(expected), vim.inspect(actual)), 2)
  end
end

local function assert_truthy(value, message)
  if not value then
    error(message or "expected truthy value", 2)
  end
end

local function mkdir(path)
  vim.fn.mkdir(path, "p")
end

local tmp = vim.fs.joinpath(vim.fn.tempname(), "tree-sitter-goasm-query-test")
local source_dir = vim.fs.joinpath(tmp, "source", "queries")
local config_dir = vim.fs.joinpath(tmp, "config")
mkdir(source_dir)

for _, name in ipairs({ "highlights", "injections", "tags" }) do
  vim.fn.writefile({ "; " .. name }, vim.fs.joinpath(source_dir, name .. ".scm"))
end

local results = goasm.ensure_goasm_query_symlinks({
  source_dir = source_dir,
  config_dir = config_dir,
  notify = false,
})

assert_equal(3, #results, "helper should return one result per query")
for _, result in ipairs(results) do
  assert_equal("created", result.status, "first run should create symlink for " .. result.name)
  assert_equal(vim.fs.normalize(result.source), vim.fs.normalize(uv.fs_readlink(result.target)), "symlink should point to source")
end

local second = goasm.ensure_goasm_query_symlinks({
  source_dir = source_dir,
  config_dir = config_dir,
  notify = false,
})

for _, result in ipairs(second) do
  assert_equal("unchanged", result.status, "second run should be idempotent for " .. result.name)
end

local blocked_target = vim.fs.joinpath(config_dir, "after", "queries", "goasm", "tags.scm")
uv.fs_unlink(blocked_target)
vim.fn.writefile({ "; user override" }, blocked_target)

local blocked = goasm.ensure_goasm_query_symlinks({
  source_dir = source_dir,
  config_dir = config_dir,
  query_names = { "tags" },
  notify = false,
})

assert_equal("blocked_existing_target", blocked[1].status, "helper should not overwrite regular files")
assert_equal({ "; user override" }, vim.fn.readfile(blocked_target), "regular file content should remain untouched")

local missing = goasm.ensure_goasm_query_symlinks({
  source_dir = source_dir,
  config_dir = config_dir,
  query_names = { "locals" },
  notify = false,
})

assert_equal("missing_source", missing[1].status, "missing query files should be reported and skipped")
assert_truthy(not uv.fs_lstat(vim.fs.joinpath(config_dir, "after", "queries", "goasm", "locals.scm")), "missing source should not create target")

vim.fn.delete(tmp, "rf")
