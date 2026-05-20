local source = debug.getinfo(1, "S").source
local build_file = source:sub(1, 1) == "@" and source:sub(2) or "build.lua"
local root = vim.fs.dirname(build_file)
local module_path = vim.fs.joinpath(root, "lua", "tree-sitter-goasm", "init.lua")

local mod = assert(loadfile(module_path))()
mod.ensure_goasm_query_symlinks({
  dir = root,
  error_on_failure = true,
})
