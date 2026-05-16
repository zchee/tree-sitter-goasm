/**
 * @file Goasm grammar for tree-sitter
 * @author zchee <zchee.io@gmail.com>
 * @license Apache-2.0
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  or: 1,
  xor: 2,
  and: 3,
  shift: 4,
  add: 5,
  mul: 6,
  unary: 7,
};

export default grammar({
  name: "goasm",

  conflicts: ($) => [
    [$.symbol_address, $.expression],
  ],

  extras: ($) => [
    /[\t \f\v]+/,
  ],

  rules: {
    source_file: ($) => seq(
      repeat($._line),
      optional($._statement),
    ),

    _line: ($) => seq(
      optional($._statement),
      $._line_ending,
    ),

    _line_ending: ($) => /\r?\n/,

    _statement: ($) => choice(
      $.comment,
      $.preprocessor_directive,
      $.label_definition,
      $.directive,
      $.instruction,
    ),

    comment: ($) => choice(
      token(/\/\/[^\n\r]*/),
      token(/\/\*([^*]|\*+[^/*])*\*+\//),
    ),

    preprocessor_directive: ($) => seq(
      "#",
      field("name", $.preprocessor_name),
      optional(seq(
        $._ws,
        field("argument", $.preprocessor_argument),
      )),
    ),

    preprocessor_name: ($) => choice(
      "include",
      "define",
      "undef",
      "ifdef",
      "ifndef",
      "if",
      "elif",
      "else",
      "endif",
      "line",
      /[a-zA-Z_][a-zA-Z0-9_]*/,
    ),

    preprocessor_argument: ($) => choice(
      $.string_literal,
      $.expression,
      $.identifier,
      /[^\r\n]+/,
    ),

    label_definition: ($) => token(/[A-Za-z_·∕][A-Za-z0-9_·∕<>.]*:/u),

    directive: ($) => choice(
      $.text_directive,
      $.data_directive,
      $.global_directive,
      $.funcdata_directive,
      $.pcdata_directive,
      $.pcalign_directive,
      $.generic_directive,
    ),

    text_directive: ($) => seq(
      "TEXT",
      $._ws,
      field("symbol", $.symbol_address),
      ",",
      $._ws,
      field("flags", $.flag_set),
      ",",
      $._ws,
      field("size", $.text_frame),
    ),

    text_frame: ($) => seq(
      "$",
      field("framesize", $.frame_size),
      optional(seq(
        "-",
        field("argsize", $.frame_size),
      )),
    ),

    frame_size: ($) => choice(
      $.number_literal,
      $.symbol_reference,
      $.parenthesized_expression,
    ),

    data_directive: ($) => seq(
      "DATA",
      $._ws,
      field("symbol", $.symbol_address),
      ",",
      $._ws,
      field("value", $.data_value),
    ),

    global_directive: ($) => seq(
      "GLOBL",
      $._ws,
      field("symbol", $.symbol_address),
      optional(seq(
        ",",
        $._ws,
        field("flags", $.flag_set),
      )),
      optional(seq(
        ",",
        $._ws,
        field("size", $.immediate),
      )),
    ),

    funcdata_directive: ($) => seq(
      "FUNCDATA",
      $._ws,
      field("index", choice($.immediate, $.number_literal)),
      ",",
      $._ws,
      field("symbol", $.symbol_address),
    ),

    pcdata_directive: ($) => seq(
      "PCDATA",
      $._ws,
      field("index", choice($.immediate, $.number_literal)),
      ",",
      $._ws,
      field("value", $.immediate),
    ),

    pcalign_directive: ($) => seq(
      "PCALIGN",
      $._ws,
      field("alignment", $.immediate),
    ),

    generic_directive: ($) => seq(
      field("name", $.identifier),
      optional(seq(
        $._ws,
        field("operands", $.operand_list),
      )),
    ),

    flag_set: ($) => seq(
      field("first", choice($.identifier, $.number_literal)),
      repeat(
        seq(
          optional($._ws),
          field("operator", choice("+", "|")),
          optional($._ws),
          field("more", choice($.identifier, $.number_literal)),
        ),
      ),
    ),

    data_value: ($) => seq(
      choice(
        $.immediate,
        $.string_literal,
        $.rune_literal,
        $.symbol_address,
        $.expression,
      ),
    ),

    instruction: ($) => seq(
      field("mnemonic", $.instruction_name),
      optional(seq(
        $._ws,
        field("operands", $.operand_list),
      )),
    ),

    instruction_name: ($) => token(/g|[A-Za-z_][A-Za-z0-9_\.]*/),

    operand_list: ($) => seq(
      $.operand,
      repeat(
        seq(
          optional($._ws),
          ",",
          optional($._ws),
          $.operand,
        ),
      ),
    ),

    operand: ($) => choice(
      $.address,
      $.register_pair,
      $.immediate,
      $.register,
      $.pseudo_register,
      $.string_literal,
      $.rune_literal,
      $.expression,
    ),

    address: ($) => choice(
      $.symbol_address,
      $.offset_address,
      $.indirect_address,
    ),

    offset_address: ($) => seq(
      field("offset", $.expression),
      field("indirection", $.indirection),
      optional(field("index", $.address_index)),
      optional(field("width", $.address_width)),
    ),

    symbol_address: ($) => seq(
      field("base", $.symbol_reference),
      optional(field("offset", $.offset)),
      field("indirection", $.indirection),
      optional(field("width", $.address_width)),
    ),

    indirect_address: ($) => seq(
      field("indirection", $.indirection),
      optional(field("index", $.address_index)),
      optional(field("width", $.address_width)),
    ),

    indirection: ($) => seq(
      "(",
      field("base", choice($.pseudo_register, $.register, $.register_pair)),
      ")",
    ),

    address_index: ($) => seq(
      "(",
      field("base", choice($.register, $.pseudo_register, $.register_pair)),
      choice(
        seq(
          "*",
          field("scale", $.number_literal),
        ),
        seq(
          ",",
          field("index", choice($.register, $.pseudo_register)),
        ),
      ),
      ")",
    ),

    register_pair: ($) => seq(
      "(",
      field("low", choice($.register, $.pseudo_register)),
      ",",
      field("high", choice($.register, $.pseudo_register)),
      ")",
    ),

    address_width: ($) => seq(
      "/",
      $.number_literal,
    ),

    immediate: ($) => seq(
      "$",
      choice(
        $.number_literal,
        seq(choice("+", "-"), $.number_literal),
        $.string_literal,
        $.rune_literal,
        $.symbol_address,
        $.symbol_reference,
      ),
    ),

    pseudo_register: ($) => token(choice(
      "SB",
      "FP",
      "SP",
      "PC",
    )),

    register: ($) => token(/[A-Z][A-Z0-9]{1,3}|[A-Z]\d+/),

    symbol_reference: ($) => token(/[A-Za-z_·∕][A-Za-z0-9_·∕<>.]*|<>/u),

    identifier: ($) => token(/[A-Za-z_][A-Za-z0-9_·∕<>.]*/u),

    offset: ($) => seq(
      choice("+", "-"),
      $.expression,
    ),

    expression: ($) => choice(
      $.number_literal,
      $.symbol_reference,
      $.parenthesized_expression,
      prec.left(PREC.mul, seq(
        field("left", $.expression),
        field("operator", choice("*", "/", "%")),
        field("right", $.expression),
      )),
      prec.left(PREC.add, seq(
        field("left", $.expression),
        field("operator", choice("+", "-")),
        field("right", $.expression),
      )),
      prec.left(PREC.shift, seq(
        field("left", $.expression),
        field("operator", choice("<<", ">>")),
        field("right", $.expression),
      )),
      prec.left(PREC.and, seq(
        field("left", $.expression),
        field("operator", "&"),
        field("right", $.expression),
      )),
      prec.left(PREC.xor, seq(
        field("left", $.expression),
        field("operator", "^"),
        field("right", $.expression),
      )),
      prec.left(PREC.or, seq(
        field("left", $.expression),
        field("operator", "|"),
        field("right", $.expression),
      )),
      prec.right(PREC.unary, seq(
        field("operator", choice("+", "-", "~", "^")),
        field("operand", $.expression),
      )),
    ),

    parenthesized_expression: ($) => seq(
      "(",
      $.expression,
      ")",
    ),

    number_literal: ($) => token(choice(
      /0[xX][0-9A-Fa-f_]+/,       // hex
      /0[bB][01_]+/,              // binary
      /0[oO][0-7_]+/,             // octal
      /[0-9][0-9_]*(\.[0-9]+)?/,  // decimal
    )),

    string_literal: ($) => token(/"([^"\\]|\\.)*"/),

    rune_literal: ($) => token(/'([^'\\]|\\.|\\x[0-9A-Fa-f]{2})+'/),

    _ws: ($) => /[ \t\f\v]+/,
  },
});
