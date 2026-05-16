// amd64 fixture: reduced real-world syntax from Go runtime startup patterns.
#include "textflag.h"

// Function prologue/signature with explicit frame size and NOSPLIT flags.
TEXT ·goasm_amd64_entry(SB), NOSPLIT, $0-8
    MOVQ    0(SP), DI
    MOVQ    8(SP), SI
    MOVQ    DI, ret+16(FP)

// Branch + call form plus relocation-like symbol references.
TEXT ·goasm_amd64_tail(SB), NOSPLIT|NOFRAME, $0-16
    MOVQ    a+0(FP), AX
    MOVQ    b+8(FP), BX
    ADDQ    BX, AX
    CMPQ    AX, $0
    JBE     fallback
    CALL    runtime·abort(SB)
fallback:
    MOVQ    AX, ret+16(FP)
    RET

// DATA and GLOBL directives with typed literal payload.
DATA ·goasmConst(SB)/8, $123
GLOBL ·goasmConst(SB), RODATA, $8
