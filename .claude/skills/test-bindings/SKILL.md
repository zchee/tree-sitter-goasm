---
name: test-bindings
description: Run parser tests across every language binding (node, python, go, rust, zig, swift) and report which passed and failed. Use to verify a grammar change doesn't break any binding's smoke test.
---

This grammar ships with seven bindings (c, go, node, python, rust, swift, zig — see `tree-sitter.json`). Each has its own test command; run them in sequence and collect a pass/fail table.

**Prerequisite:** `src/parser.c` must exist and be current. If `grammar.js` was edited since the last generation, run `/regen-parser` first.

Run each of the following from the repo root. Capture exit code and the last few lines of output for each.

| Binding | Command | Skip if |
|---|---|---|
| Grammar corpus | `make test` | always run |
| Node | `pnpm test` | `pnpm` not on PATH |
| Python | `python -m pytest bindings/python/tests` | `pytest` not installed; tell the user to `pip install -e '.[core]' pytest` |
| Go | `go test ./bindings/go/...` | `go` not on PATH |
| Rust | `cargo test` | `cargo` not on PATH |
| Zig | `zig build test` | `zig` not on PATH |
| Swift | `swift test` | non-macOS or `swift` not on PATH |

Report a summary table at the end:

```
binding   result
-------   ------
corpus    PASS
node      PASS
python    SKIP (pytest missing)
go        FAIL — see output above
...
```

Do not mark the task complete if anything other than SKIP is FAIL. If a binding fails, surface the actual error — most cross-binding breakage comes from ABI version mismatches between the runtime `tree-sitter` and the generated `parser.c`. Check the `LANGUAGE_VERSION` line near the top of `src/parser.c` against each binding's tree-sitter runtime version.
