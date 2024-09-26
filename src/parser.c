#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_COMMA = 2,
  anon_sym_COLON = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_label = 6,
  anon_sym_const = 7,
  anon_sym_TEXTu00b7 = 8,
  anon_sym_byte = 9,
  anon_sym_word = 10,
  anon_sym_dword = 11,
  anon_sym_qword = 12,
  anon_sym_ptr = 13,
  anon_sym_u00b7 = 14,
  anon_sym_LBRACK = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_RBRACK = 18,
  anon_sym_STAR = 19,
  anon_sym_rel = 20,
  anon_sym_BANG = 21,
  anon_sym_SLASH = 22,
  anon_sym_PERCENT = 23,
  anon_sym_PIPE = 24,
  anon_sym_CARET = 25,
  anon_sym_AMP = 26,
  anon_sym_POUND = 27,
  aux_sym_int_token1 = 28,
  aux_sym_int_token2 = 29,
  sym_float = 30,
  sym_string = 31,
  sym_word = 32,
  sym__reg = 33,
  sym_address = 34,
  sym_meta_ident = 35,
  sym__ident = 36,
  aux_sym_line_comment_token1 = 37,
  aux_sym_line_comment_token2 = 38,
  sym_block_comment = 39,
  sym_program = 40,
  sym__item = 41,
  sym_meta = 42,
  sym_label = 43,
  sym_const = 44,
  sym_instruction = 45,
  sym__expr = 46,
  sym_ptr = 47,
  sym__tc_expr = 48,
  sym_tc_infix = 49,
  sym_int = 50,
  sym_reg = 51,
  sym_ident = 52,
  sym_line_comment = 53,
  aux_sym_program_repeat1 = 54,
  aux_sym_program_repeat2 = 55,
  aux_sym_meta_repeat1 = 56,
  aux_sym_meta_repeat2 = 57,
  aux_sym_meta_repeat3 = 58,
  aux_sym_instruction_repeat1 = 59,
  aux_sym_instruction_repeat2 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_label] = "label",
  [anon_sym_const] = "const",
  [anon_sym_TEXTu00b7] = "TEXT \u00b7",
  [anon_sym_byte] = "byte",
  [anon_sym_word] = "word",
  [anon_sym_dword] = "dword",
  [anon_sym_qword] = "qword",
  [anon_sym_ptr] = "ptr",
  [anon_sym_u00b7] = "\u00b7",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [anon_sym_rel] = "rel",
  [anon_sym_BANG] = "!",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_POUND] = "#",
  [aux_sym_int_token1] = "int_token1",
  [aux_sym_int_token2] = "int_token2",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_word] = "word",
  [sym__reg] = "_reg",
  [sym_address] = "address",
  [sym_meta_ident] = "meta_ident",
  [sym__ident] = "_ident",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [aux_sym_line_comment_token2] = "line_comment_token2",
  [sym_block_comment] = "block_comment",
  [sym_program] = "program",
  [sym__item] = "_item",
  [sym_meta] = "meta",
  [sym_label] = "label",
  [sym_const] = "const",
  [sym_instruction] = "instruction",
  [sym__expr] = "_expr",
  [sym_ptr] = "ptr",
  [sym__tc_expr] = "_tc_expr",
  [sym_tc_infix] = "tc_infix",
  [sym_int] = "int",
  [sym_reg] = "reg",
  [sym_ident] = "ident",
  [sym_line_comment] = "line_comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_meta_repeat2] = "meta_repeat2",
  [aux_sym_meta_repeat3] = "meta_repeat3",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_instruction_repeat2] = "instruction_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_TEXTu00b7] = anon_sym_TEXTu00b7,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_dword] = anon_sym_dword,
  [anon_sym_qword] = anon_sym_qword,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_u00b7] = anon_sym_u00b7,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_rel] = anon_sym_rel,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_int_token2] = aux_sym_int_token2,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_word] = sym_word,
  [sym__reg] = sym__reg,
  [sym_address] = sym_address,
  [sym_meta_ident] = sym_meta_ident,
  [sym__ident] = sym__ident,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [aux_sym_line_comment_token2] = aux_sym_line_comment_token2,
  [sym_block_comment] = sym_block_comment,
  [sym_program] = sym_program,
  [sym__item] = sym__item,
  [sym_meta] = sym_meta,
  [sym_label] = sym_label,
  [sym_const] = sym_const,
  [sym_instruction] = sym_instruction,
  [sym__expr] = sym__expr,
  [sym_ptr] = sym_ptr,
  [sym__tc_expr] = sym__tc_expr,
  [sym_tc_infix] = sym_tc_infix,
  [sym_int] = sym_int,
  [sym_reg] = sym_reg,
  [sym_ident] = sym_ident,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
  [aux_sym_meta_repeat2] = aux_sym_meta_repeat2,
  [aux_sym_meta_repeat3] = aux_sym_meta_repeat3,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_instruction_repeat2] = aux_sym_instruction_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEXTu00b7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u00b7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym__reg] = {
    .visible = false,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_ident] = {
    .visible = true,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_ptr] = {
    .visible = true,
    .named = true,
  },
  [sym__tc_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_tc_infix] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_reg] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_kind = 1,
  field_lhs = 2,
  field_name = 3,
  field_op = 4,
  field_rhs = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_op] = "op",
  [field_rhs] = "rhs",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 1},
    {field_value, 2},
  [4] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_ident,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 14,
  [23] = 15,
  [24] = 17,
  [25] = 13,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 26,
  [30] = 30,
  [31] = 27,
  [32] = 32,
  [33] = 33,
  [34] = 28,
  [35] = 33,
  [36] = 30,
  [37] = 37,
  [38] = 38,
  [39] = 8,
  [40] = 16,
  [41] = 10,
  [42] = 12,
  [43] = 43,
  [44] = 6,
  [45] = 9,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 116,
  [123] = 123,
  [124] = 124,
  [125] = 125,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '!', 57,
        '"', 1,
        '#', 64,
        '$', 20,
        '%', 59,
        '&', 63,
        '(', 33,
        ')', 34,
        '*', 54,
        '+', 50,
        ',', 31,
        '-', 52,
        '.', 148,
        '/', 58,
        '0', 73,
        ':', 32,
        ';', 155,
        'T', 94,
        '[', 49,
        ']', 53,
        '^', 62,
        'b', 136,
        'c', 112,
        'd', 131,
        'l', 97,
        'p', 127,
        'q', 132,
        'r', 105,
        'w', 114,
        '|', 61,
        0xb7, 48,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(92);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 64,
        '$', 21,
        '-', 7,
        '/', 10,
        '0', 83,
        ';', 155,
        'p', 16,
        'r', 13,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == ';') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ';') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '0') ADVANCE(83);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '0') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '0') ADVANCE(66);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(155);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 0xb7) ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      END_STATE();
    case 19:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(67);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 25:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '"', 1,
        '#', 64,
        '$', 20,
        '%', 23,
        '(', 33,
        '*', 54,
        '-', 8,
        '.', 148,
        '/', 10,
        '0', 78,
        ';', 155,
        'T', 94,
        '[', 49,
        'b', 135,
        'd', 133,
        'q', 134,
        'w', 113,
        0xb7, 48,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 26:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '"', 1,
        '#', 64,
        '$', 20,
        '%', 23,
        '-', 8,
        '.', 148,
        '/', 10,
        '0', 78,
        ':', 32,
        ';', 155,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '"', 1,
        '#', 64,
        '$', 20,
        '%', 60,
        '&', 63,
        '*', 54,
        '+', 50,
        ',', 31,
        '-', 52,
        '.', 148,
        '/', 58,
        '0', 70,
        ':', 32,
        ';', 155,
        '^', 62,
        '|', 61,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '#', 64,
        '%', 59,
        '&', 63,
        '(', 33,
        ')', 34,
        '*', 54,
        '+', 50,
        ',', 31,
        '-', 51,
        '.', 148,
        '/', 58,
        ';', 155,
        ']', 53,
        '^', 62,
        'c', 112,
        'l', 97,
        '|', 61,
        0xb7, 48,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_TEXTu00b7);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_u00b7);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '0') ADVANCE(83);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_rel);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_rel);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(155);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == 'b') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(137);
      if (lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(74);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(90);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'E') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'T') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'X') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'a') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 's') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 't') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 't') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'w') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'w') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'w') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'w') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(74);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ';') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 27},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 28},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 28},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 25},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 152},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 0},
  [124] = {(TSStateId)(-1)},
  [125] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_TEXTu00b7] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_dword] = ACTIONS(1),
    [anon_sym_qword] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_u00b7] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_rel] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_int_token2] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
    [sym_meta_ident] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(123),
    [sym_line_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_line_comment_token2] = ACTIONS(5),
    [sym_block_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_TEXTu00b7,
    ACTIONS(21), 1,
      anon_sym_u00b7,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_string,
    STATE(2), 1,
      sym_line_comment,
    STATE(4), 1,
      aux_sym_instruction_repeat1,
    STATE(24), 1,
      sym_reg,
    STATE(70), 1,
      sym_int,
    STATE(81), 1,
      sym__expr,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    STATE(80), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(35), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(19), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [72] = 20,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      anon_sym_TEXTu00b7,
    ACTIONS(50), 1,
      anon_sym_u00b7,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      aux_sym_int_token2,
    ACTIONS(65), 1,
      sym_float,
    ACTIONS(68), 1,
      sym_string,
    STATE(24), 1,
      sym_reg,
    STATE(70), 1,
      sym_int,
    STATE(118), 1,
      sym__expr,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(74), 2,
      sym_meta_ident,
      sym__ident,
    STATE(3), 2,
      sym_line_comment,
      aux_sym_instruction_repeat1,
    STATE(80), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(71), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(47), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [142] = 21,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_TEXTu00b7,
    ACTIONS(21), 1,
      anon_sym_u00b7,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    ACTIONS(31), 1,
      sym_float,
    ACTIONS(33), 1,
      sym_string,
    STATE(3), 1,
      aux_sym_instruction_repeat1,
    STATE(4), 1,
      sym_line_comment,
    STATE(24), 1,
      sym_reg,
    STATE(70), 1,
      sym_int,
    STATE(79), 1,
      sym__expr,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(80), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(35), 3,
      sym_word,
      sym__reg,
      sym_address,
    ACTIONS(19), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [214] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(5), 1,
      sym_line_comment,
    ACTIONS(39), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LPAREN,
      anon_sym_TEXTu00b7,
      anon_sym_u00b7,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_string,
    ACTIONS(79), 11,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
      aux_sym_int_token2,
      sym_float,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [248] = 10,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(89), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_CARET,
    ACTIONS(93), 1,
      anon_sym_AMP,
    STATE(6), 1,
      sym_line_comment,
    ACTIONS(87), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_POUND,
      sym_string,
    ACTIONS(83), 7,
      anon_sym_DASH,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [290] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      anon_sym_STAR,
    ACTIONS(89), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_CARET,
    ACTIONS(93), 1,
      anon_sym_AMP,
    ACTIONS(97), 1,
      anon_sym_PLUS,
    ACTIONS(99), 1,
      anon_sym_DASH,
    STATE(7), 1,
      sym_line_comment,
    ACTIONS(87), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      sym_string,
    ACTIONS(101), 6,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [336] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(8), 1,
      sym_line_comment,
    ACTIONS(81), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(83), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [368] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(93), 1,
      anon_sym_AMP,
    STATE(9), 1,
      sym_line_comment,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_POUND,
      sym_string,
    ACTIONS(83), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [402] = 7,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(91), 1,
      anon_sym_CARET,
    ACTIONS(93), 1,
      anon_sym_AMP,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_POUND,
      sym_string,
    ACTIONS(83), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [438] = 15,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_COLON,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      aux_sym_int_token2,
    ACTIONS(113), 1,
      sym_string,
    STATE(7), 1,
      sym__tc_expr,
    STATE(11), 1,
      sym_line_comment,
    STATE(17), 1,
      sym_reg,
    STATE(19), 1,
      aux_sym_instruction_repeat2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(117), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(115), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [490] = 8,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(89), 1,
      anon_sym_PIPE,
    ACTIONS(91), 1,
      anon_sym_CARET,
    ACTIONS(93), 1,
      anon_sym_AMP,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_string,
    ACTIONS(83), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [528] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(119), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(121), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [560] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(123), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(125), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [592] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(127), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(129), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [624] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(131), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(133), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [656] = 5,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(135), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
    ACTIONS(137), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_address,
      sym_meta_ident,
      sym__ident,
  [688] = 12,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(141), 1,
      anon_sym_POUND,
    ACTIONS(144), 1,
      aux_sym_int_token2,
    ACTIONS(147), 1,
      sym_string,
    STATE(7), 1,
      sym__tc_expr,
    STATE(17), 1,
      sym_reg,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(153), 2,
      sym_meta_ident,
      sym__ident,
    STATE(18), 2,
      sym_line_comment,
      aux_sym_instruction_repeat2,
    ACTIONS(150), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [732] = 13,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      aux_sym_int_token2,
    ACTIONS(113), 1,
      sym_string,
    STATE(7), 1,
      sym__tc_expr,
    STATE(17), 1,
      sym_reg,
    STATE(18), 1,
      aux_sym_instruction_repeat2,
    STATE(19), 1,
      sym_line_comment,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(117), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(115), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [778] = 14,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    ACTIONS(158), 1,
      anon_sym_COLON,
    ACTIONS(160), 1,
      sym_float,
    ACTIONS(162), 1,
      sym_string,
    STATE(20), 1,
      sym_line_comment,
    STATE(24), 1,
      sym_reg,
    STATE(71), 1,
      sym_int,
    STATE(93), 1,
      sym_ident,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(35), 3,
      sym_word,
      sym__reg,
      sym_address,
  [825] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      anon_sym_label,
    ACTIONS(168), 1,
      anon_sym_const,
    ACTIONS(170), 1,
      sym_word,
    ACTIONS(172), 1,
      sym_meta_ident,
    ACTIONS(174), 1,
      sym__ident,
    STATE(21), 1,
      sym_line_comment,
    STATE(38), 1,
      aux_sym_program_repeat2,
    STATE(48), 1,
      aux_sym_program_repeat1,
    STATE(77), 1,
      sym__item,
    STATE(90), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [874] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH,
    STATE(22), 1,
      sym_line_comment,
    ACTIONS(123), 13,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_u00b7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [905] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(129), 1,
      anon_sym_SLASH,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(127), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [935] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    STATE(24), 1,
      sym_line_comment,
    ACTIONS(135), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [965] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(121), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(119), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [995] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      aux_sym_int_token2,
    ACTIONS(113), 1,
      sym_string,
    STATE(6), 1,
      sym__tc_expr,
    STATE(17), 1,
      sym_reg,
    STATE(26), 1,
      sym_line_comment,
    ACTIONS(117), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(115), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1034] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    ACTIONS(176), 1,
      sym_string,
    STATE(24), 1,
      sym_reg,
    STATE(27), 1,
      sym_line_comment,
    STATE(41), 1,
      sym__tc_expr,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(35), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(40), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1073] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      aux_sym_int_token2,
    ACTIONS(113), 1,
      sym_string,
    STATE(8), 1,
      sym__tc_expr,
    STATE(17), 1,
      sym_reg,
    STATE(28), 1,
      sym_line_comment,
    ACTIONS(117), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(115), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1112] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    ACTIONS(176), 1,
      sym_string,
    STATE(24), 1,
      sym_reg,
    STATE(29), 1,
      sym_line_comment,
    STATE(44), 1,
      sym__tc_expr,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(35), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(40), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1151] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      aux_sym_int_token2,
    ACTIONS(113), 1,
      sym_string,
    STATE(9), 1,
      sym__tc_expr,
    STATE(17), 1,
      sym_reg,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(117), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(115), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1190] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      aux_sym_int_token2,
    ACTIONS(113), 1,
      sym_string,
    STATE(10), 1,
      sym__tc_expr,
    STATE(17), 1,
      sym_reg,
    STATE(31), 1,
      sym_line_comment,
    ACTIONS(117), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(115), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1229] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    ACTIONS(176), 1,
      sym_string,
    STATE(24), 1,
      sym_reg,
    STATE(32), 1,
      sym_line_comment,
    STATE(43), 1,
      sym__tc_expr,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(35), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(40), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1268] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      aux_sym_int_token2,
    ACTIONS(113), 1,
      sym_string,
    STATE(12), 1,
      sym__tc_expr,
    STATE(17), 1,
      sym_reg,
    STATE(33), 1,
      sym_line_comment,
    ACTIONS(117), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(115), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(16), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1307] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    ACTIONS(176), 1,
      sym_string,
    STATE(24), 1,
      sym_reg,
    STATE(34), 1,
      sym_line_comment,
    STATE(39), 1,
      sym__tc_expr,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(35), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(40), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1346] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    ACTIONS(176), 1,
      sym_string,
    STATE(24), 1,
      sym_reg,
    STATE(35), 1,
      sym_line_comment,
    STATE(42), 1,
      sym__tc_expr,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(35), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(40), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1385] = 11,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    ACTIONS(176), 1,
      sym_string,
    STATE(24), 1,
      sym_reg,
    STATE(36), 1,
      sym_line_comment,
    STATE(45), 1,
      sym__tc_expr,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(35), 3,
      sym_word,
      sym__reg,
      sym_address,
    STATE(40), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1424] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      anon_sym_label,
    ACTIONS(183), 1,
      anon_sym_const,
    ACTIONS(186), 1,
      sym_word,
    ACTIONS(189), 1,
      sym_meta_ident,
    ACTIONS(192), 1,
      sym__ident,
    STATE(95), 1,
      sym__item,
    STATE(37), 2,
      sym_line_comment,
      aux_sym_program_repeat2,
    STATE(90), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1465] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(166), 1,
      anon_sym_label,
    ACTIONS(168), 1,
      anon_sym_const,
    ACTIONS(170), 1,
      sym_word,
    ACTIONS(172), 1,
      sym_meta_ident,
    ACTIONS(174), 1,
      sym__ident,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_program_repeat2,
    STATE(38), 1,
      sym_line_comment,
    STATE(72), 1,
      sym__item,
    STATE(90), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1508] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    STATE(39), 1,
      sym_line_comment,
    ACTIONS(81), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1535] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    STATE(40), 1,
      sym_line_comment,
    ACTIONS(131), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1562] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(197), 1,
      anon_sym_CARET,
    ACTIONS(199), 1,
      anon_sym_AMP,
    STATE(41), 1,
      sym_line_comment,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
  [1593] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(197), 1,
      anon_sym_CARET,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    STATE(42), 1,
      sym_line_comment,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1626] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      anon_sym_CARET,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(43), 1,
      sym_line_comment,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1663] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      anon_sym_CARET,
    ACTIONS(199), 1,
      anon_sym_AMP,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(44), 1,
      sym_line_comment,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1698] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(83), 1,
      anon_sym_SLASH,
    ACTIONS(199), 1,
      anon_sym_AMP,
    STATE(45), 1,
      sym_line_comment,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1727] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    STATE(24), 1,
      sym_reg,
    STATE(46), 1,
      sym_line_comment,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    STATE(104), 2,
      sym_int,
      sym_ident,
    ACTIONS(35), 3,
      sym_word,
      sym__reg,
      sym_address,
  [1759] = 9,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      aux_sym_int_token2,
    STATE(24), 1,
      sym_reg,
    STATE(47), 1,
      sym_line_comment,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
    STATE(108), 2,
      sym_int,
      sym_ident,
    ACTIONS(35), 3,
      sym_word,
      sym__reg,
      sym_address,
  [1791] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      anon_sym_LF,
    STATE(48), 2,
      sym_line_comment,
      aux_sym_program_repeat1,
    ACTIONS(216), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [1818] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(48), 1,
      aux_sym_program_repeat1,
    STATE(49), 1,
      sym_line_comment,
    ACTIONS(218), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [1847] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(220), 1,
      sym_address,
    STATE(24), 1,
      sym_reg,
    STATE(50), 1,
      sym_line_comment,
    STATE(100), 1,
      sym_ident,
    ACTIONS(35), 2,
      sym_word,
      sym__reg,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
  [1877] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(51), 1,
      sym_line_comment,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(224), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [1901] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(220), 1,
      sym_address,
    STATE(24), 1,
      sym_reg,
    STATE(52), 1,
      sym_line_comment,
    STATE(109), 1,
      sym_ident,
    ACTIONS(35), 2,
      sym_word,
      sym__reg,
    ACTIONS(37), 2,
      sym_meta_ident,
      sym__ident,
  [1931] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(53), 2,
      sym_line_comment,
      aux_sym_meta_repeat2,
  [1952] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      sym_line_comment,
    STATE(58), 1,
      aux_sym_meta_repeat3,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [1975] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      sym__reg,
    STATE(55), 1,
      sym_line_comment,
    STATE(107), 1,
      sym_reg,
    ACTIONS(220), 2,
      sym_word,
      sym_address,
  [1998] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_meta_repeat2,
    STATE(56), 1,
      sym_line_comment,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2021] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_BANG,
    STATE(57), 1,
      sym_line_comment,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2042] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      sym_line_comment,
    STATE(68), 1,
      aux_sym_meta_repeat3,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2065] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      sym__reg,
    STATE(59), 1,
      sym_line_comment,
    STATE(67), 1,
      sym_reg,
    ACTIONS(220), 2,
      sym_word,
      sym_address,
  [2088] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      sym_line_comment,
    STATE(65), 1,
      aux_sym_meta_repeat1,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2111] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_line_comment,
    ACTIONS(245), 3,
      anon_sym_u00b7,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2132] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_meta_repeat2,
    STATE(62), 1,
      sym_line_comment,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2155] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(251), 1,
      anon_sym_BANG,
    STATE(63), 1,
      sym_line_comment,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2176] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      sym__reg,
    STATE(61), 1,
      sym_reg,
    STATE(64), 1,
      sym_line_comment,
    ACTIONS(220), 2,
      sym_word,
      sym_address,
  [2199] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(65), 2,
      sym_line_comment,
      aux_sym_meta_repeat1,
  [2220] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      sym__reg,
    STATE(66), 1,
      sym_line_comment,
    STATE(96), 1,
      sym_reg,
    ACTIONS(220), 2,
      sym_word,
      sym_address,
  [2243] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_line_comment,
    ACTIONS(258), 3,
      anon_sym_u00b7,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2264] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(68), 2,
      sym_line_comment,
      aux_sym_meta_repeat3,
  [2285] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      sym__reg,
    STATE(69), 1,
      sym_line_comment,
    STATE(106), 1,
      sym_reg,
    ACTIONS(220), 2,
      sym_word,
      sym_address,
  [2308] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_line_comment,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2329] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_meta_repeat1,
    STATE(71), 1,
      sym_line_comment,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2352] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      aux_sym_program_repeat1,
    STATE(72), 1,
      sym_line_comment,
  [2374] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(73), 1,
      sym_line_comment,
    ACTIONS(226), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2392] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(74), 1,
      sym_line_comment,
    ACTIONS(262), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2410] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(75), 1,
      sym_line_comment,
    ACTIONS(273), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2428] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(76), 1,
      sym_line_comment,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2446] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      aux_sym_program_repeat1,
    STATE(77), 1,
      sym_line_comment,
  [2468] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(78), 1,
      sym_line_comment,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2486] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      sym_line_comment,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2506] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(80), 1,
      sym_line_comment,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2524] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      sym_line_comment,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2544] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(82), 1,
      sym_line_comment,
    ACTIONS(279), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2562] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(83), 1,
      sym_line_comment,
    ACTIONS(281), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2580] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_line_comment,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2600] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_line_comment,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2620] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(86), 1,
      sym_line_comment,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2638] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(87), 1,
      sym_line_comment,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2656] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(88), 1,
      sym_line_comment,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2673] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      aux_sym_int_token2,
    STATE(89), 1,
      sym_line_comment,
    STATE(98), 1,
      sym_int,
  [2692] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(90), 1,
      sym_line_comment,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2709] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(91), 1,
      sym_line_comment,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2726] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(92), 1,
      sym_line_comment,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2743] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    STATE(93), 1,
      sym_line_comment,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2760] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      aux_sym_int_token2,
    STATE(76), 1,
      sym_int,
    STATE(94), 1,
      sym_line_comment,
  [2779] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LF,
    STATE(49), 1,
      aux_sym_program_repeat1,
    STATE(95), 1,
      sym_line_comment,
  [2798] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      sym_line_comment,
  [2817] = 6,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      aux_sym_int_token2,
    STATE(97), 1,
      sym_line_comment,
    STATE(111), 1,
      sym_int,
  [2836] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      sym_line_comment,
  [2852] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(307), 1,
      sym_float,
    STATE(99), 1,
      sym_line_comment,
  [2868] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_line_comment,
  [2884] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(311), 1,
      anon_sym_u00b7,
    STATE(101), 1,
      sym_line_comment,
  [2900] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(313), 1,
      sym_word,
    STATE(102), 1,
      sym_line_comment,
  [2916] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      anon_sym_LBRACK,
    STATE(103), 1,
      sym_line_comment,
  [2932] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym_line_comment,
  [2948] = 5,
    ACTIONS(317), 1,
      anon_sym_POUND,
    ACTIONS(319), 1,
      aux_sym_line_comment_token1,
    ACTIONS(321), 1,
      aux_sym_line_comment_token2,
    ACTIONS(323), 1,
      sym_block_comment,
    STATE(105), 1,
      sym_line_comment,
  [2964] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_line_comment,
  [2980] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      sym_line_comment,
  [2996] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      sym_line_comment,
  [3012] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_line_comment,
  [3028] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(331), 1,
      sym_string,
    STATE(110), 1,
      sym_line_comment,
  [3044] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      sym_line_comment,
  [3060] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(335), 1,
      anon_sym_rel,
    STATE(112), 1,
      sym_line_comment,
  [3076] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(337), 1,
      sym_word,
    STATE(113), 1,
      sym_line_comment,
  [3092] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(339), 1,
      anon_sym_ptr,
    STATE(114), 1,
      sym_line_comment,
  [3108] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(341), 1,
      anon_sym_LBRACK,
    STATE(115), 1,
      sym_line_comment,
  [3124] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(343), 1,
      aux_sym_int_token1,
    STATE(116), 1,
      sym_line_comment,
  [3140] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    STATE(117), 1,
      sym_line_comment,
  [3156] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      sym_line_comment,
  [3172] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(107), 1,
      anon_sym_COLON,
    STATE(119), 1,
      sym_line_comment,
  [3188] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(347), 1,
      sym_word,
    STATE(120), 1,
      sym_line_comment,
  [3204] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(349), 1,
      sym_word,
    STATE(121), 1,
      sym_line_comment,
  [3220] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(351), 1,
      aux_sym_int_token1,
    STATE(122), 1,
      sym_line_comment,
  [3236] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      aux_sym_line_comment_token2,
    ACTIONS(7), 1,
      sym_block_comment,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      sym_line_comment,
  [3252] = 1,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
  [3256] = 1,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 214,
  [SMALL_STATE(6)] = 248,
  [SMALL_STATE(7)] = 290,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 368,
  [SMALL_STATE(10)] = 402,
  [SMALL_STATE(11)] = 438,
  [SMALL_STATE(12)] = 490,
  [SMALL_STATE(13)] = 528,
  [SMALL_STATE(14)] = 560,
  [SMALL_STATE(15)] = 592,
  [SMALL_STATE(16)] = 624,
  [SMALL_STATE(17)] = 656,
  [SMALL_STATE(18)] = 688,
  [SMALL_STATE(19)] = 732,
  [SMALL_STATE(20)] = 778,
  [SMALL_STATE(21)] = 825,
  [SMALL_STATE(22)] = 874,
  [SMALL_STATE(23)] = 905,
  [SMALL_STATE(24)] = 935,
  [SMALL_STATE(25)] = 965,
  [SMALL_STATE(26)] = 995,
  [SMALL_STATE(27)] = 1034,
  [SMALL_STATE(28)] = 1073,
  [SMALL_STATE(29)] = 1112,
  [SMALL_STATE(30)] = 1151,
  [SMALL_STATE(31)] = 1190,
  [SMALL_STATE(32)] = 1229,
  [SMALL_STATE(33)] = 1268,
  [SMALL_STATE(34)] = 1307,
  [SMALL_STATE(35)] = 1346,
  [SMALL_STATE(36)] = 1385,
  [SMALL_STATE(37)] = 1424,
  [SMALL_STATE(38)] = 1465,
  [SMALL_STATE(39)] = 1508,
  [SMALL_STATE(40)] = 1535,
  [SMALL_STATE(41)] = 1562,
  [SMALL_STATE(42)] = 1593,
  [SMALL_STATE(43)] = 1626,
  [SMALL_STATE(44)] = 1663,
  [SMALL_STATE(45)] = 1698,
  [SMALL_STATE(46)] = 1727,
  [SMALL_STATE(47)] = 1759,
  [SMALL_STATE(48)] = 1791,
  [SMALL_STATE(49)] = 1818,
  [SMALL_STATE(50)] = 1847,
  [SMALL_STATE(51)] = 1877,
  [SMALL_STATE(52)] = 1901,
  [SMALL_STATE(53)] = 1931,
  [SMALL_STATE(54)] = 1952,
  [SMALL_STATE(55)] = 1975,
  [SMALL_STATE(56)] = 1998,
  [SMALL_STATE(57)] = 2021,
  [SMALL_STATE(58)] = 2042,
  [SMALL_STATE(59)] = 2065,
  [SMALL_STATE(60)] = 2088,
  [SMALL_STATE(61)] = 2111,
  [SMALL_STATE(62)] = 2132,
  [SMALL_STATE(63)] = 2155,
  [SMALL_STATE(64)] = 2176,
  [SMALL_STATE(65)] = 2199,
  [SMALL_STATE(66)] = 2220,
  [SMALL_STATE(67)] = 2243,
  [SMALL_STATE(68)] = 2264,
  [SMALL_STATE(69)] = 2285,
  [SMALL_STATE(70)] = 2308,
  [SMALL_STATE(71)] = 2329,
  [SMALL_STATE(72)] = 2352,
  [SMALL_STATE(73)] = 2374,
  [SMALL_STATE(74)] = 2392,
  [SMALL_STATE(75)] = 2410,
  [SMALL_STATE(76)] = 2428,
  [SMALL_STATE(77)] = 2446,
  [SMALL_STATE(78)] = 2468,
  [SMALL_STATE(79)] = 2486,
  [SMALL_STATE(80)] = 2506,
  [SMALL_STATE(81)] = 2524,
  [SMALL_STATE(82)] = 2544,
  [SMALL_STATE(83)] = 2562,
  [SMALL_STATE(84)] = 2580,
  [SMALL_STATE(85)] = 2600,
  [SMALL_STATE(86)] = 2620,
  [SMALL_STATE(87)] = 2638,
  [SMALL_STATE(88)] = 2656,
  [SMALL_STATE(89)] = 2673,
  [SMALL_STATE(90)] = 2692,
  [SMALL_STATE(91)] = 2709,
  [SMALL_STATE(92)] = 2726,
  [SMALL_STATE(93)] = 2743,
  [SMALL_STATE(94)] = 2760,
  [SMALL_STATE(95)] = 2779,
  [SMALL_STATE(96)] = 2798,
  [SMALL_STATE(97)] = 2817,
  [SMALL_STATE(98)] = 2836,
  [SMALL_STATE(99)] = 2852,
  [SMALL_STATE(100)] = 2868,
  [SMALL_STATE(101)] = 2884,
  [SMALL_STATE(102)] = 2900,
  [SMALL_STATE(103)] = 2916,
  [SMALL_STATE(104)] = 2932,
  [SMALL_STATE(105)] = 2948,
  [SMALL_STATE(106)] = 2964,
  [SMALL_STATE(107)] = 2980,
  [SMALL_STATE(108)] = 2996,
  [SMALL_STATE(109)] = 3012,
  [SMALL_STATE(110)] = 3028,
  [SMALL_STATE(111)] = 3044,
  [SMALL_STATE(112)] = 3060,
  [SMALL_STATE(113)] = 3076,
  [SMALL_STATE(114)] = 3092,
  [SMALL_STATE(115)] = 3108,
  [SMALL_STATE(116)] = 3124,
  [SMALL_STATE(117)] = 3140,
  [SMALL_STATE(118)] = 3156,
  [SMALL_STATE(119)] = 3172,
  [SMALL_STATE(120)] = 3188,
  [SMALL_STATE(121)] = 3204,
  [SMALL_STATE(122)] = 3220,
  [SMALL_STATE(123)] = 3236,
  [SMALL_STATE(124)] = 3252,
  [SMALL_STATE(125)] = 3256,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(116),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(15),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(16),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(14),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(17),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, 0, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0), SHIFT_REPEAT(121),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0), SHIFT_REPEAT(120),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0), SHIFT_REPEAT(11),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0), SHIFT_REPEAT(20),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0), SHIFT_REPEAT(119),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, 0, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0), SHIFT_REPEAT(99),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, 0, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, 0, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0), SHIFT_REPEAT(110),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 9, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 6, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [353] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_goasm(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
