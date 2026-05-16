# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project

Tree-sitter grammar for **Go assembly** (goasm) — Plan 9-style assembly used by the Go toolchain, not GNU/Intel syntax. Reference: https://go.dev/doc/asm.

Status: stub. `grammar.js` currently defines only `source_file: $ => "hello"` with a TODO. Most work will be growing the grammar.

## Toolchain

- Package manager: **pnpm** (not npm). Lockfile is `pnpm-lock.yaml`; `pnpm-workspace.yaml` whitelists `tree-sitter` and `tree-sitter-cli` for `allowBuilds`.
- Node: **24** (`.node-version`).
- `tree-sitter-cli` ^0.26.8; runtime `tree-sitter` ^0.25.0.

## Regenerating the parser

`src/parser.c`, `src/grammar.json`, `src/node-types.json`, and `src/tree_sitter/*.h` are **generated** from `grammar.js`. After any `grammar.js` edit:

```
tree-sitter generate          # regenerates grammar.json + parser.c
make test                     # runs `tree-sitter test`
```

A `PostToolUse` hook auto-runs `tree-sitter generate --no-parser` after edits to `grammar.js` to keep `grammar.json` in sync, but the full `tree-sitter generate` (which writes `parser.c`) must be run manually before testing or committing.

Do not hand-edit anything under `src/` — it will be overwritten.

## Test commands

| Surface | Command |
|---|---|
| Grammar (corpus) | `make test` (= `tree-sitter test`) |
| Node binding | `pnpm test` (= `node --test bindings/node/*_test.js`) |
| Python binding | `python -m pytest bindings/python/tests` |
| Go binding | `go test ./bindings/go/...` |
| Rust binding | `cargo test` |
| Zig binding | `zig build test` |
| Swift binding | `swift test` |

Corpus tests live in `test/corpus/*.txt` (directory doesn't exist yet — create it when adding tests).

## Build

`make` produces `libtree-sitter-goasm.{a,so/dylib}` and a pkg-config file. CMake, Cargo, Zig, node-gyp, and setuptools all consume `src/parser.c` directly — see `Makefile`, `CMakeLists.txt`, `build.zig`, `binding.gyp`, `setup.py`, `Package.swift`.

Playground: `pnpm start` (builds WASM then opens `tree-sitter playground`).

## Style

`.editorconfig` is authoritative. Notable: `*.{c,cc,h}` and `parser.h`/`alloc.h`/`array.h` are 4-space; **`parser.c` is 2-space**; `Makefile` and `*.go` are tab/8.

## Commit convention

- Format: `<area>: <imperative summary>` — lowercase scope prefix, Go-project style. Examples: `grammar: add TEXT directive`, `bindings/go: bump go-tree-sitter to v0.24.1`, `make: install queries only when present`.
- **Always GPG-sign**: `git commit --gpg-sign`. No exceptions.

## Architecture notes for the grammar itself

When extending `grammar.js`, keep in mind that Go assembly:

- Uses Plan 9 mnemonics and pseudo-registers (`SB`, `FP`, `SP`, `PC`).
- Has directives `TEXT`, `DATA`, `GLOBL`, `FUNCDATA`, `PCDATA`.
- Is multi-arch: amd64, arm64, riscv64, etc. File suffixes `_amd64.s`, `_arm64.s` select the arch. Mnemonics differ per arch — design rules to be arch-agnostic where possible and arch-specific only where required.
- Comments: `//` line and `/* */` block. `#` is reserved for line directives, not comments.
