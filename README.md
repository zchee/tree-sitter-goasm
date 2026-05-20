# tree-sitter-goasm

Tree-sitter grammar for Go assembly (Plan 9-style assembly used by the Go
toolchain).

## Neovim / nvim-treesitter local development

`tree-sitter-goasm` keeps its canonical queries in the standard Tree-sitter
layout:

```text
queries/highlights.scm
queries/injections.scm
queries/tags.scm
```

Neovim discovers runtime queries from `queries/{lang}/*.scm` on
`runtimepath`, or from user overrides under `after/queries/{lang}/*.scm`.
This repository ships a small Neovim helper that exposes the canonical query
files by creating symlinks in:

```text
{stdpath('config')}/after/queries/goasm/*.scm
```

The query helper can be installed as a small Neovim runtime plugin. Keep your
`nvim-treesitter` parser configuration for `goasm` separately; this helper only
exposes query files in Neovim's runtime layout.

The simplest `lazy.nvim` local-development setup for the query helper is:

```lua
return {
  {
    dir = vim.fs.joinpath(vim.fn.expand("~/src"), "github.com/zchee/tree-sitter-goasm"),
    lazy = false,
  },
}
```

When the plugin loads, `plugin/tree-sitter-goasm.lua` calls
`require("tree-sitter-goasm").ensure_goasm_query_symlinks()` and repairs the
runtime query links. lazy.nvim also runs the root `build.lua` on install/update
when no explicit `build` option is set, so fresh installs get the links before
the next startup.

If you prefer an explicit lazy.nvim hook, call the helper from `init` and
`build`:

```lua
local function ensure_goasm_query_symlinks(plugin)
  local helper = assert(loadfile(vim.fs.joinpath(
    plugin.dir,
    "lua",
    "tree-sitter-goasm",
    "init.lua"
  )))()

  helper.ensure_goasm_query_symlinks(plugin)
end

return {
  {
    dir = vim.fs.joinpath(vim.fn.expand("~/src"), "github.com/zchee/tree-sitter-goasm"),
    lazy = false,
    init = ensure_goasm_query_symlinks,
    build = ensure_goasm_query_symlinks,
  },
}
```

The helper never overwrites an existing regular file in
`after/queries/goasm`. Existing symlinks are left unchanged when they already
point at this repository's query files, and replaced only when they point
somewhere else.

Validate query discovery inside Neovim with:

```vim
:lua print(vim.inspect(vim.treesitter.query.get_files("goasm", "highlights")))
:lua print(vim.inspect(vim.treesitter.query.get_files("goasm", "injections")))
:lua print(vim.inspect(vim.treesitter.query.get_files("goasm", "tags")))
```
