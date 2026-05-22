; Tree-sitter injections for Go (Plan 9) assembly.

; Block and line comments use C-style syntax; inject the `comment` grammar so
; TODO/FIXME and similar tokens can be highlighted by editors that ship one.
((comment) @injection.content
  (#set! injection.language "comment"))
