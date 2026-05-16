; Tree-sitter injections for Go (Plan 9) assembly.

; Block and line comments use C-style syntax; inject the `comment` grammar so
; TODO/FIXME and similar tokens can be highlighted by editors that ship one.
((comment) @injection.content
  (#set! injection.language "comment"))

; `#include "header.h"` — treat the path token as C. The grammar emits the
; argument as a single text token that still carries the surrounding quotes,
; so trim one byte on each side via injection.offset so the C parser doesn't
; choke on stray `"` characters.
((preprocessor_directive
   name: (preprocessor_name) @_kind
   argument: (preprocessor_argument) @injection.content)
  (#eq? @_kind "include")
  (#set! injection.language "c")
  (#set! injection.combined)
  (#offset! @injection.content 0 1 0 -1))
