---
name: regen-parser
description: Regenerate the tree-sitter parser from grammar.js and run corpus tests. Use after editing grammar.js, or whenever src/parser.c may be stale.
---

Run these two commands from the repo root, in order:

```
tree-sitter generate
make test
```

- `tree-sitter generate` rewrites `src/parser.c`, `src/grammar.json`, `src/node-types.json`, and `src/tree_sitter/*.h` from `grammar.js`.
- `make test` runs `tree-sitter test` against the corpus in `test/corpus/`.

If `tree-sitter generate` fails, the grammar has a structural error (left-recursion, conflict, undefined rule) — fix `grammar.js` and rerun. Do not edit anything under `src/` by hand; it is fully overwritten on every run.

If `make test` fails:
1. Read the failing corpus expectation vs. actual S-expression in the output.
2. Decide whether the grammar or the expectation is wrong — usually the grammar.
3. Edit `grammar.js`, rerun this skill.

Commit the regenerated `src/` files together with the `grammar.js` change in the same commit. Commit message format: `grammar: <summary>` with `--gpg-sign`.
