// riscv64 fixture: mixed MOV/JALR/branch forms from runtime-style code.
#include "textflag.h"

TEXT ·goasm_riscv64_entry(SB), NOSPLIT, $0-16
    MOV     a+0(FP), A0
    MOV     b+8(FP), A1
    ADD     A0, A1, T0
    MOV     T0, sum+16(FP)
    BEQZ    T0, empty
    RET

empty:
    MOV     $runtime·panicIndex(SB), T1
    JALR    RA, T1
    CALL    runtime·check(SB)

    MOV     $123, A0
    RET

// DATA + GLOBL with ABI flag examples.
DATA ·goasmTable(SB)/8, $0x1
GLOBL ·goasmTable(SB), RODATA, $8
