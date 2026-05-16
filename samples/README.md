# goasm sample lane fixtures (task-5)

This folder contains reduced, real-world Go assembly snippets per architecture family:

- `amd64.s`: x86-64 control-flow, stack-arg loading, `CALL`, typed `DATA/GLOBL`.
- `arm64.s`: Arm64 `TEXT`/calling convention, `BL/BLT/B`, `ADD` three-operand form, typed `DATA/GLOBL`.
- `riscv64.s`: RISC-V register moves, `BEQZ`, `JALR`, `CALL`, typed `DATA/GLOBL`.

These intentionally avoid duplicating minimal-canonical corpus cases and are meant for
syntax-gap review and integration guidance with the grammar core.
