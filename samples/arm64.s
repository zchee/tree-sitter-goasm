// arm64 fixture: real-world operand and branch shapes.
#include "textflag.h"

TEXT ·goasm_arm64_entry(SB), NOSPLIT, $0-16
    MOVD    a+0(FP), R0
    MOVD    b+8(FP), R1
    ADD     R0, R1, R2
    MOVD    R2, sum+16(FP)
    RET

TEXT ·goasm_arm64_call(SB), NOSPLIT|NOFRAME, $0-24
    MOVD    len+0(FP), R0
    MOVD    off+8(FP), R1
    CMP     R0, R1
    BLT     slow_path
    B       done

slow_path:
    BL      runtime·panicIndex(SB)

done:
    MOVD    R0, ret+16(FP)
    ADD     $8, SP, R29
    RET

// DATA + GLOBL with flag-style access form.
DATA ·goasmText(SB)/8, $0x7f
GLOBL ·goasmText(SB), RODATA, $8
