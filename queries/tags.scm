; Tree-sitter tags for Go (Plan 9) assembly.
; Used by ctags-style tools and nvim-treesitter `:TSTagsSetup`.

; Function definitions — every TEXT directive declares a function symbol.
(text_directive
  symbol: (symbol_address
            base: (symbol_reference) @name)) @definition.function

; Data symbol definitions.
(global_directive
  symbol: (symbol_address
            base: (symbol_reference) @name)) @definition.constant

(data_directive
  symbol: (symbol_address
            base: (symbol_reference) @name)) @definition.constant

; Label definitions. The `label_definition` token includes the trailing `:`;
; ctags consumers normally strip it, so emit the same node as both name and
; definition for compatibility.
((label_definition) @name @definition.label)

; Preprocessor macro definitions. The grammar wraps the argument in a single
; unnamed text token, so capture the whole argument as the name.
((preprocessor_directive
   name: (preprocessor_name) @_kind
   argument: (preprocessor_argument) @name)
  (#eq? @_kind "define")) @definition.macro

; Call sites — CALL/BL/BLR/JAL/JALR with a symbol target.
((instruction
   mnemonic: (instruction_name) @_mn
   (operand_list
     (operand
       (address
         (symbol_address
           base: (symbol_reference) @name)))))
  (#any-of? @_mn "CALL" "BL" "BLR" "JAL" "JALR")) @reference.call

; Jumps with label-only targets. Restrict to known Plan 9 control-flow
; mnemonics to avoid matching unrelated `B*` mnemonics like BYTE / BSWAP / BT.
((instruction
   mnemonic: (instruction_name) @_mn
   (operand_list
     (operand
       (expression (symbol_reference) @name))))
  (#any-of? @_mn
    "JMP" "JEQ" "JNE" "JLT" "JLE" "JGT" "JGE" "JCS" "JCC" "JMI" "JPL"
    "JVS" "JVC" "JHI" "JLS" "JOS" "JOC" "JBE" "JA" "JAE" "JB" "JNB"
    "JC" "JNC" "JZ" "JNZ" "JS" "JNS" "JP" "JNP" "JPE" "JPO" "JO" "JNO"
    "B" "BEQ" "BNE" "BLT" "BLE" "BGT" "BGE" "BCS" "BCC" "BMI" "BPL"
    "BVS" "BVC" "BHI" "BLS" "BNV" "BAL" "BL" "BLR"
    "BEQZ" "BNEZ" "BLTZ" "BGEZ" "BLEZ" "BGTZ" "BLTU" "BGEU"
    "CBZ" "CBNZ" "TBZ" "TBNZ")) @reference.label
