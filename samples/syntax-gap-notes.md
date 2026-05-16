# task-5 syntax-gap observations for worker-1

From the sample set above, the grammar should cover these forms end-to-end:
- Multi-operand branch targets and labels with local jumps/calls in amd64/arm64/riscv64.
- Per-arch register names and callee-saved argument patterns:
  - amd64: DI/SI/AX/BX/SP/FP
  - arm64: R0/R1/R2/R29/SP and condition branch opcodes
  - riscv64: A0/A1/T0/T1/RA and zero/register variants
- Cross-arch pseudo-registers and helpers that may appear in reduced real-world files:
  - `CTXT`, `g`, and ABI temporaries like `T0/T1` in amd64/arm64/riscv64 snippets.
- Directive/value forms:
  - `TEXT .* , NOSPLIT|NOFRAME, $framesize-args`
  - typed `DATA symbol(SB)/8, $const`
  - `GLOBL symbol(SB), RODATA, $size`
- Operand classes:
  - `symbol(SB)` references
  - `name+offset(FP)` frame-address loads/stores
- Jump/branch forms with label-only target and with pseudo-ops:
  - amd64 `JBE fallback`, return fallthrough
  - arm64 `BLT/B/DONE`
  - riscv64 `BEQZ`, `JALR RA, Treg`, `CALL func(SB)`

## Additional parser coverage to verify before corpus handoff

- Framing and flag combinations:
  - `NOSPLIT|TOPFRAME`, `NOSPLIT|NOFRAME`, and stack arguments in `TEXT` forms.
- Addressing/memory shapes:
  - register-indirect forms like `(8*3)(X2)` and `(g_sched+gobuf_sp)(g)` that include symbolic base and scaling.
  - literal suffixes such as `/4`, `/8` on `DATA` payload types.
- Calling-convention forms:
  - `RET` and `JALR ZERO, T0`/`CALL runtime·f(SB)` in same file style.
  - label-only branch destinations with no explicit condition suffix variants.
- Comment/directive split:
  - `//` comments should remain distinct from `#`-prefixed line directives.

Please keep these checks in mind while resolving lane-2 corpus expectations and before final `syntax.go` finalization.

Please confirm these are represented in rule precedence and tokenization before corpus conversion.
