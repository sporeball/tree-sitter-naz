#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_add = 1,
  sym_subtract = 2,
  sym_multiply = 3,
  sym_divide = 4,
  sym_modulo = 5,
  sym_halt = 6,
  sym_negate = 7,
  sym_output = 8,
  sym_read = 9,
  sym_opcode_0 = 10,
  sym_opcode_1 = 11,
  sym_opcode_2 = 12,
  sym_opcode_3 = 13,
  sym_function = 14,
  sym_variable = 15,
  sym_condition = 16,
  sym_source_file = 17,
  sym_arithmetic = 18,
  sym_opcode = 19,
  sym_function_write = 20,
  sym_variable_write = 21,
  sym_conditional = 22,
  aux_sym_source_file_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_add] = "add",
  [sym_subtract] = "subtract",
  [sym_multiply] = "multiply",
  [sym_divide] = "divide",
  [sym_modulo] = "modulo",
  [sym_halt] = "halt",
  [sym_negate] = "negate",
  [sym_output] = "output",
  [sym_read] = "read",
  [sym_opcode_0] = "opcode_0",
  [sym_opcode_1] = "opcode_1",
  [sym_opcode_2] = "opcode_2",
  [sym_opcode_3] = "opcode_3",
  [sym_function] = "function",
  [sym_variable] = "variable",
  [sym_condition] = "condition",
  [sym_source_file] = "source_file",
  [sym_arithmetic] = "arithmetic",
  [sym_opcode] = "opcode",
  [sym_function_write] = "function_write",
  [sym_variable_write] = "variable_write",
  [sym_conditional] = "conditional",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_add] = sym_add,
  [sym_subtract] = sym_subtract,
  [sym_multiply] = sym_multiply,
  [sym_divide] = sym_divide,
  [sym_modulo] = sym_modulo,
  [sym_halt] = sym_halt,
  [sym_negate] = sym_negate,
  [sym_output] = sym_output,
  [sym_read] = sym_read,
  [sym_opcode_0] = sym_opcode_0,
  [sym_opcode_1] = sym_opcode_1,
  [sym_opcode_2] = sym_opcode_2,
  [sym_opcode_3] = sym_opcode_3,
  [sym_function] = sym_function,
  [sym_variable] = sym_variable,
  [sym_condition] = sym_condition,
  [sym_source_file] = sym_source_file,
  [sym_arithmetic] = sym_arithmetic,
  [sym_opcode] = sym_opcode,
  [sym_function_write] = sym_function_write,
  [sym_variable_write] = sym_variable_write,
  [sym_conditional] = sym_conditional,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_subtract] = {
    .visible = true,
    .named = true,
  },
  [sym_multiply] = {
    .visible = true,
    .named = true,
  },
  [sym_divide] = {
    .visible = true,
    .named = true,
  },
  [sym_modulo] = {
    .visible = true,
    .named = true,
  },
  [sym_halt] = {
    .visible = true,
    .named = true,
  },
  [sym_negate] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_read] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode_0] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode_1] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode_2] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode_3] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_function_write] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_write] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '0') ADVANCE(5);
      if (lookahead == '1') ADVANCE(1);
      if (lookahead == '2') ADVANCE(2);
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(17);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(18);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(19);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(21);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(16);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_subtract);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_multiply);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_halt);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_negate);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_output);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_read);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_opcode_0);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_opcode_1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_opcode_2);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_opcode_3);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_function);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_variable);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_condition);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_add] = ACTIONS(1),
    [sym_subtract] = ACTIONS(1),
    [sym_multiply] = ACTIONS(1),
    [sym_divide] = ACTIONS(1),
    [sym_modulo] = ACTIONS(1),
    [sym_halt] = ACTIONS(1),
    [sym_negate] = ACTIONS(1),
    [sym_output] = ACTIONS(1),
    [sym_read] = ACTIONS(1),
    [sym_opcode_0] = ACTIONS(1),
    [sym_opcode_1] = ACTIONS(1),
    [sym_opcode_2] = ACTIONS(1),
    [sym_opcode_3] = ACTIONS(1),
    [sym_function] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_condition] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym_arithmetic] = STATE(2),
    [sym_opcode] = STATE(2),
    [sym_function_write] = STATE(2),
    [sym_variable_write] = STATE(2),
    [sym_conditional] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_add] = ACTIONS(5),
    [sym_subtract] = ACTIONS(5),
    [sym_multiply] = ACTIONS(5),
    [sym_divide] = ACTIONS(5),
    [sym_modulo] = ACTIONS(5),
    [sym_halt] = ACTIONS(7),
    [sym_negate] = ACTIONS(7),
    [sym_output] = ACTIONS(7),
    [sym_read] = ACTIONS(7),
    [sym_opcode_0] = ACTIONS(9),
    [sym_opcode_1] = ACTIONS(11),
    [sym_opcode_2] = ACTIONS(13),
    [sym_opcode_3] = ACTIONS(15),
    [sym_function] = ACTIONS(7),
    [sym_variable] = ACTIONS(7),
  },
  [2] = {
    [sym_arithmetic] = STATE(3),
    [sym_opcode] = STATE(3),
    [sym_function_write] = STATE(3),
    [sym_variable_write] = STATE(3),
    [sym_conditional] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_add] = ACTIONS(5),
    [sym_subtract] = ACTIONS(5),
    [sym_multiply] = ACTIONS(5),
    [sym_divide] = ACTIONS(5),
    [sym_modulo] = ACTIONS(5),
    [sym_halt] = ACTIONS(19),
    [sym_negate] = ACTIONS(19),
    [sym_output] = ACTIONS(19),
    [sym_read] = ACTIONS(19),
    [sym_opcode_0] = ACTIONS(9),
    [sym_opcode_1] = ACTIONS(11),
    [sym_opcode_2] = ACTIONS(13),
    [sym_opcode_3] = ACTIONS(15),
    [sym_function] = ACTIONS(19),
    [sym_variable] = ACTIONS(19),
  },
  [3] = {
    [sym_arithmetic] = STATE(3),
    [sym_opcode] = STATE(3),
    [sym_function_write] = STATE(3),
    [sym_variable_write] = STATE(3),
    [sym_conditional] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_add] = ACTIONS(23),
    [sym_subtract] = ACTIONS(23),
    [sym_multiply] = ACTIONS(23),
    [sym_divide] = ACTIONS(23),
    [sym_modulo] = ACTIONS(23),
    [sym_halt] = ACTIONS(26),
    [sym_negate] = ACTIONS(26),
    [sym_output] = ACTIONS(26),
    [sym_read] = ACTIONS(26),
    [sym_opcode_0] = ACTIONS(29),
    [sym_opcode_1] = ACTIONS(32),
    [sym_opcode_2] = ACTIONS(35),
    [sym_opcode_3] = ACTIONS(38),
    [sym_function] = ACTIONS(26),
    [sym_variable] = ACTIONS(26),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_add] = ACTIONS(41),
    [sym_subtract] = ACTIONS(41),
    [sym_multiply] = ACTIONS(41),
    [sym_divide] = ACTIONS(41),
    [sym_modulo] = ACTIONS(41),
    [sym_halt] = ACTIONS(41),
    [sym_negate] = ACTIONS(41),
    [sym_output] = ACTIONS(41),
    [sym_read] = ACTIONS(41),
    [sym_opcode_0] = ACTIONS(41),
    [sym_opcode_1] = ACTIONS(41),
    [sym_opcode_2] = ACTIONS(41),
    [sym_opcode_3] = ACTIONS(41),
    [sym_function] = ACTIONS(41),
    [sym_variable] = ACTIONS(41),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_add] = ACTIONS(43),
    [sym_subtract] = ACTIONS(43),
    [sym_multiply] = ACTIONS(43),
    [sym_divide] = ACTIONS(43),
    [sym_modulo] = ACTIONS(43),
    [sym_halt] = ACTIONS(43),
    [sym_negate] = ACTIONS(43),
    [sym_output] = ACTIONS(43),
    [sym_read] = ACTIONS(43),
    [sym_opcode_0] = ACTIONS(43),
    [sym_opcode_1] = ACTIONS(43),
    [sym_opcode_2] = ACTIONS(43),
    [sym_opcode_3] = ACTIONS(43),
    [sym_function] = ACTIONS(43),
    [sym_variable] = ACTIONS(43),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_add] = ACTIONS(43),
    [sym_subtract] = ACTIONS(43),
    [sym_multiply] = ACTIONS(43),
    [sym_divide] = ACTIONS(43),
    [sym_modulo] = ACTIONS(43),
    [sym_halt] = ACTIONS(43),
    [sym_negate] = ACTIONS(43),
    [sym_output] = ACTIONS(43),
    [sym_read] = ACTIONS(43),
    [sym_opcode_0] = ACTIONS(43),
    [sym_opcode_1] = ACTIONS(43),
    [sym_opcode_2] = ACTIONS(43),
    [sym_opcode_3] = ACTIONS(43),
    [sym_function] = ACTIONS(45),
    [sym_variable] = ACTIONS(43),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_add] = ACTIONS(43),
    [sym_subtract] = ACTIONS(43),
    [sym_multiply] = ACTIONS(43),
    [sym_divide] = ACTIONS(43),
    [sym_modulo] = ACTIONS(43),
    [sym_halt] = ACTIONS(43),
    [sym_negate] = ACTIONS(43),
    [sym_output] = ACTIONS(43),
    [sym_read] = ACTIONS(43),
    [sym_opcode_0] = ACTIONS(43),
    [sym_opcode_1] = ACTIONS(43),
    [sym_opcode_2] = ACTIONS(43),
    [sym_opcode_3] = ACTIONS(43),
    [sym_function] = ACTIONS(43),
    [sym_variable] = ACTIONS(47),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_add] = ACTIONS(43),
    [sym_subtract] = ACTIONS(43),
    [sym_multiply] = ACTIONS(43),
    [sym_divide] = ACTIONS(43),
    [sym_modulo] = ACTIONS(43),
    [sym_halt] = ACTIONS(43),
    [sym_negate] = ACTIONS(43),
    [sym_output] = ACTIONS(43),
    [sym_read] = ACTIONS(43),
    [sym_opcode_0] = ACTIONS(43),
    [sym_opcode_1] = ACTIONS(43),
    [sym_opcode_2] = ACTIONS(43),
    [sym_opcode_3] = ACTIONS(43),
    [sym_function] = ACTIONS(43),
    [sym_variable] = ACTIONS(49),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_add] = ACTIONS(51),
    [sym_subtract] = ACTIONS(51),
    [sym_multiply] = ACTIONS(51),
    [sym_divide] = ACTIONS(51),
    [sym_modulo] = ACTIONS(51),
    [sym_halt] = ACTIONS(51),
    [sym_negate] = ACTIONS(51),
    [sym_output] = ACTIONS(51),
    [sym_read] = ACTIONS(51),
    [sym_opcode_0] = ACTIONS(51),
    [sym_opcode_1] = ACTIONS(51),
    [sym_opcode_2] = ACTIONS(51),
    [sym_opcode_3] = ACTIONS(51),
    [sym_function] = ACTIONS(51),
    [sym_variable] = ACTIONS(51),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_add] = ACTIONS(53),
    [sym_subtract] = ACTIONS(53),
    [sym_multiply] = ACTIONS(53),
    [sym_divide] = ACTIONS(53),
    [sym_modulo] = ACTIONS(53),
    [sym_halt] = ACTIONS(53),
    [sym_negate] = ACTIONS(53),
    [sym_output] = ACTIONS(53),
    [sym_read] = ACTIONS(53),
    [sym_opcode_0] = ACTIONS(53),
    [sym_opcode_1] = ACTIONS(53),
    [sym_opcode_2] = ACTIONS(53),
    [sym_opcode_3] = ACTIONS(53),
    [sym_function] = ACTIONS(53),
    [sym_variable] = ACTIONS(53),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_add] = ACTIONS(55),
    [sym_subtract] = ACTIONS(55),
    [sym_multiply] = ACTIONS(55),
    [sym_divide] = ACTIONS(55),
    [sym_modulo] = ACTIONS(55),
    [sym_halt] = ACTIONS(55),
    [sym_negate] = ACTIONS(55),
    [sym_output] = ACTIONS(55),
    [sym_read] = ACTIONS(55),
    [sym_opcode_0] = ACTIONS(55),
    [sym_opcode_1] = ACTIONS(55),
    [sym_opcode_2] = ACTIONS(55),
    [sym_opcode_3] = ACTIONS(55),
    [sym_function] = ACTIONS(55),
    [sym_variable] = ACTIONS(55),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [4] = 1,
    ACTIONS(59), 1,
      sym_condition,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 4,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_write, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_write, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_naz(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
