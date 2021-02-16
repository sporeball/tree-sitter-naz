#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
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
  sym_comment = 17,
  sym_whitespace = 18,
  sym_newline = 19,
  sym_source_file = 20,
  sym_arithmetic = 21,
  sym_opcode = 22,
  sym_function_write = 23,
  sym_variable_write = 24,
  sym_conditional = 25,
  sym_fragment = 26,
  sym_group_good = 27,
  sym_group_bad = 28,
  aux_sym_source_file_repeat1 = 29,
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
  [sym_comment] = "comment",
  [sym_whitespace] = "whitespace",
  [sym_newline] = "newline",
  [sym_source_file] = "source_file",
  [sym_arithmetic] = "arithmetic",
  [sym_opcode] = "opcode",
  [sym_function_write] = "function_write",
  [sym_variable_write] = "variable_write",
  [sym_conditional] = "conditional",
  [sym_fragment] = "fragment",
  [sym_group_good] = "group_good",
  [sym_group_bad] = "group_bad",
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
  [sym_comment] = sym_comment,
  [sym_whitespace] = sym_whitespace,
  [sym_newline] = sym_newline,
  [sym_source_file] = sym_source_file,
  [sym_arithmetic] = sym_arithmetic,
  [sym_opcode] = sym_opcode,
  [sym_function_write] = sym_function_write,
  [sym_variable_write] = sym_variable_write,
  [sym_conditional] = sym_conditional,
  [sym_fragment] = sym_fragment,
  [sym_group_good] = sym_group_good,
  [sym_group_bad] = sym_group_bad,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
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
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_group_good] = {
    .visible = true,
    .named = true,
  },
  [sym_group_bad] = {
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
      if (eof) ADVANCE(12);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == '2') ADVANCE(5);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(23);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(24);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(25);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(27);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(22);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == '1') ADVANCE(2);
      if (lookahead == '2') ADVANCE(4);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(11)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_subtract);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_multiply);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_divide);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_modulo);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_halt);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_negate);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_output);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_read);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_opcode_0);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_opcode_1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_opcode_2);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_opcode_3);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_function);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_variable);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_condition);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_whitespace);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
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
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym_arithmetic] = STATE(5),
    [sym_opcode] = STATE(5),
    [sym_function_write] = STATE(5),
    [sym_variable_write] = STATE(5),
    [sym_conditional] = STATE(5),
    [sym_fragment] = STATE(10),
    [sym_group_good] = STATE(2),
    [sym_group_bad] = STATE(2),
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
    [sym_comment] = ACTIONS(17),
    [sym_whitespace] = ACTIONS(17),
    [sym_newline] = ACTIONS(17),
  },
  [2] = {
    [sym_arithmetic] = STATE(5),
    [sym_opcode] = STATE(5),
    [sym_function_write] = STATE(5),
    [sym_variable_write] = STATE(5),
    [sym_conditional] = STATE(5),
    [sym_fragment] = STATE(10),
    [sym_group_good] = STATE(3),
    [sym_group_bad] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
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
    [sym_comment] = ACTIONS(21),
    [sym_whitespace] = ACTIONS(21),
    [sym_newline] = ACTIONS(21),
  },
  [3] = {
    [sym_arithmetic] = STATE(5),
    [sym_opcode] = STATE(5),
    [sym_function_write] = STATE(5),
    [sym_variable_write] = STATE(5),
    [sym_conditional] = STATE(5),
    [sym_fragment] = STATE(10),
    [sym_group_good] = STATE(3),
    [sym_group_bad] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_add] = ACTIONS(25),
    [sym_subtract] = ACTIONS(25),
    [sym_multiply] = ACTIONS(25),
    [sym_divide] = ACTIONS(25),
    [sym_modulo] = ACTIONS(25),
    [sym_halt] = ACTIONS(28),
    [sym_negate] = ACTIONS(28),
    [sym_output] = ACTIONS(28),
    [sym_read] = ACTIONS(28),
    [sym_opcode_0] = ACTIONS(31),
    [sym_opcode_1] = ACTIONS(34),
    [sym_opcode_2] = ACTIONS(37),
    [sym_opcode_3] = ACTIONS(40),
    [sym_function] = ACTIONS(28),
    [sym_variable] = ACTIONS(28),
    [sym_comment] = ACTIONS(43),
    [sym_whitespace] = ACTIONS(43),
    [sym_newline] = ACTIONS(43),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [sym_add] = ACTIONS(48),
    [sym_subtract] = ACTIONS(48),
    [sym_multiply] = ACTIONS(48),
    [sym_divide] = ACTIONS(48),
    [sym_modulo] = ACTIONS(48),
    [sym_halt] = ACTIONS(48),
    [sym_negate] = ACTIONS(48),
    [sym_output] = ACTIONS(48),
    [sym_read] = ACTIONS(48),
    [sym_opcode_0] = ACTIONS(48),
    [sym_opcode_1] = ACTIONS(48),
    [sym_opcode_2] = ACTIONS(48),
    [sym_opcode_3] = ACTIONS(48),
    [sym_function] = ACTIONS(48),
    [sym_variable] = ACTIONS(48),
    [sym_comment] = ACTIONS(48),
    [sym_whitespace] = ACTIONS(48),
    [sym_newline] = ACTIONS(48),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [sym_add] = ACTIONS(52),
    [sym_subtract] = ACTIONS(52),
    [sym_multiply] = ACTIONS(52),
    [sym_divide] = ACTIONS(52),
    [sym_modulo] = ACTIONS(52),
    [sym_halt] = ACTIONS(52),
    [sym_negate] = ACTIONS(52),
    [sym_output] = ACTIONS(52),
    [sym_read] = ACTIONS(52),
    [sym_opcode_0] = ACTIONS(52),
    [sym_opcode_1] = ACTIONS(52),
    [sym_opcode_2] = ACTIONS(52),
    [sym_opcode_3] = ACTIONS(52),
    [sym_function] = ACTIONS(52),
    [sym_variable] = ACTIONS(52),
    [sym_comment] = ACTIONS(52),
    [sym_whitespace] = ACTIONS(52),
    [sym_newline] = ACTIONS(52),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_add] = ACTIONS(56),
    [sym_subtract] = ACTIONS(56),
    [sym_multiply] = ACTIONS(56),
    [sym_divide] = ACTIONS(56),
    [sym_modulo] = ACTIONS(56),
    [sym_halt] = ACTIONS(56),
    [sym_negate] = ACTIONS(56),
    [sym_output] = ACTIONS(56),
    [sym_read] = ACTIONS(56),
    [sym_opcode_0] = ACTIONS(56),
    [sym_opcode_1] = ACTIONS(56),
    [sym_opcode_2] = ACTIONS(56),
    [sym_opcode_3] = ACTIONS(56),
    [sym_function] = ACTIONS(56),
    [sym_variable] = ACTIONS(56),
    [sym_comment] = ACTIONS(56),
    [sym_whitespace] = ACTIONS(56),
    [sym_newline] = ACTIONS(56),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_add] = ACTIONS(56),
    [sym_subtract] = ACTIONS(56),
    [sym_multiply] = ACTIONS(56),
    [sym_divide] = ACTIONS(56),
    [sym_modulo] = ACTIONS(56),
    [sym_halt] = ACTIONS(56),
    [sym_negate] = ACTIONS(56),
    [sym_output] = ACTIONS(56),
    [sym_read] = ACTIONS(56),
    [sym_opcode_0] = ACTIONS(56),
    [sym_opcode_1] = ACTIONS(56),
    [sym_opcode_2] = ACTIONS(56),
    [sym_opcode_3] = ACTIONS(56),
    [sym_function] = ACTIONS(58),
    [sym_variable] = ACTIONS(56),
    [sym_comment] = ACTIONS(56),
    [sym_whitespace] = ACTIONS(56),
    [sym_newline] = ACTIONS(56),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_add] = ACTIONS(56),
    [sym_subtract] = ACTIONS(56),
    [sym_multiply] = ACTIONS(56),
    [sym_divide] = ACTIONS(56),
    [sym_modulo] = ACTIONS(56),
    [sym_halt] = ACTIONS(56),
    [sym_negate] = ACTIONS(56),
    [sym_output] = ACTIONS(56),
    [sym_read] = ACTIONS(56),
    [sym_opcode_0] = ACTIONS(56),
    [sym_opcode_1] = ACTIONS(56),
    [sym_opcode_2] = ACTIONS(56),
    [sym_opcode_3] = ACTIONS(56),
    [sym_function] = ACTIONS(56),
    [sym_variable] = ACTIONS(60),
    [sym_comment] = ACTIONS(56),
    [sym_whitespace] = ACTIONS(56),
    [sym_newline] = ACTIONS(56),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_add] = ACTIONS(56),
    [sym_subtract] = ACTIONS(56),
    [sym_multiply] = ACTIONS(56),
    [sym_divide] = ACTIONS(56),
    [sym_modulo] = ACTIONS(56),
    [sym_halt] = ACTIONS(56),
    [sym_negate] = ACTIONS(56),
    [sym_output] = ACTIONS(56),
    [sym_read] = ACTIONS(56),
    [sym_opcode_0] = ACTIONS(56),
    [sym_opcode_1] = ACTIONS(56),
    [sym_opcode_2] = ACTIONS(56),
    [sym_opcode_3] = ACTIONS(56),
    [sym_function] = ACTIONS(56),
    [sym_variable] = ACTIONS(62),
    [sym_comment] = ACTIONS(56),
    [sym_whitespace] = ACTIONS(56),
    [sym_newline] = ACTIONS(56),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_add] = ACTIONS(66),
    [sym_subtract] = ACTIONS(66),
    [sym_multiply] = ACTIONS(66),
    [sym_divide] = ACTIONS(66),
    [sym_modulo] = ACTIONS(66),
    [sym_halt] = ACTIONS(66),
    [sym_negate] = ACTIONS(66),
    [sym_output] = ACTIONS(66),
    [sym_read] = ACTIONS(66),
    [sym_opcode_0] = ACTIONS(66),
    [sym_opcode_1] = ACTIONS(66),
    [sym_opcode_2] = ACTIONS(66),
    [sym_opcode_3] = ACTIONS(66),
    [sym_function] = ACTIONS(66),
    [sym_variable] = ACTIONS(66),
    [sym_comment] = ACTIONS(68),
    [sym_whitespace] = ACTIONS(70),
    [sym_newline] = ACTIONS(66),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym_add] = ACTIONS(74),
    [sym_subtract] = ACTIONS(74),
    [sym_multiply] = ACTIONS(74),
    [sym_divide] = ACTIONS(74),
    [sym_modulo] = ACTIONS(74),
    [sym_halt] = ACTIONS(74),
    [sym_negate] = ACTIONS(74),
    [sym_output] = ACTIONS(74),
    [sym_read] = ACTIONS(74),
    [sym_opcode_0] = ACTIONS(74),
    [sym_opcode_1] = ACTIONS(74),
    [sym_opcode_2] = ACTIONS(74),
    [sym_opcode_3] = ACTIONS(74),
    [sym_function] = ACTIONS(74),
    [sym_variable] = ACTIONS(74),
    [sym_comment] = ACTIONS(74),
    [sym_whitespace] = ACTIONS(74),
    [sym_newline] = ACTIONS(74),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_add] = ACTIONS(78),
    [sym_subtract] = ACTIONS(78),
    [sym_multiply] = ACTIONS(78),
    [sym_divide] = ACTIONS(78),
    [sym_modulo] = ACTIONS(78),
    [sym_halt] = ACTIONS(78),
    [sym_negate] = ACTIONS(78),
    [sym_output] = ACTIONS(78),
    [sym_read] = ACTIONS(78),
    [sym_opcode_0] = ACTIONS(78),
    [sym_opcode_1] = ACTIONS(78),
    [sym_opcode_2] = ACTIONS(78),
    [sym_opcode_3] = ACTIONS(78),
    [sym_function] = ACTIONS(78),
    [sym_variable] = ACTIONS(78),
    [sym_comment] = ACTIONS(78),
    [sym_whitespace] = ACTIONS(78),
    [sym_newline] = ACTIONS(78),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym_add] = ACTIONS(82),
    [sym_subtract] = ACTIONS(82),
    [sym_multiply] = ACTIONS(82),
    [sym_divide] = ACTIONS(82),
    [sym_modulo] = ACTIONS(82),
    [sym_halt] = ACTIONS(82),
    [sym_negate] = ACTIONS(82),
    [sym_output] = ACTIONS(82),
    [sym_read] = ACTIONS(82),
    [sym_opcode_0] = ACTIONS(82),
    [sym_opcode_1] = ACTIONS(82),
    [sym_opcode_2] = ACTIONS(82),
    [sym_opcode_3] = ACTIONS(82),
    [sym_function] = ACTIONS(82),
    [sym_variable] = ACTIONS(82),
    [sym_comment] = ACTIONS(82),
    [sym_whitespace] = ACTIONS(82),
    [sym_newline] = ACTIONS(82),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_add] = ACTIONS(86),
    [sym_subtract] = ACTIONS(86),
    [sym_multiply] = ACTIONS(86),
    [sym_divide] = ACTIONS(86),
    [sym_modulo] = ACTIONS(86),
    [sym_halt] = ACTIONS(86),
    [sym_negate] = ACTIONS(86),
    [sym_output] = ACTIONS(86),
    [sym_read] = ACTIONS(86),
    [sym_opcode_0] = ACTIONS(86),
    [sym_opcode_1] = ACTIONS(86),
    [sym_opcode_2] = ACTIONS(86),
    [sym_opcode_3] = ACTIONS(86),
    [sym_function] = ACTIONS(86),
    [sym_variable] = ACTIONS(86),
    [sym_comment] = ACTIONS(86),
    [sym_whitespace] = ACTIONS(86),
    [sym_newline] = ACTIONS(86),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_add] = ACTIONS(90),
    [sym_subtract] = ACTIONS(90),
    [sym_multiply] = ACTIONS(90),
    [sym_divide] = ACTIONS(90),
    [sym_modulo] = ACTIONS(90),
    [sym_halt] = ACTIONS(90),
    [sym_negate] = ACTIONS(90),
    [sym_output] = ACTIONS(90),
    [sym_read] = ACTIONS(90),
    [sym_opcode_0] = ACTIONS(90),
    [sym_opcode_1] = ACTIONS(90),
    [sym_opcode_2] = ACTIONS(90),
    [sym_opcode_3] = ACTIONS(90),
    [sym_function] = ACTIONS(90),
    [sym_variable] = ACTIONS(90),
    [sym_comment] = ACTIONS(90),
    [sym_whitespace] = ACTIONS(90),
    [sym_newline] = ACTIONS(90),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
  [4] = 1,
    ACTIONS(94), 1,
      sym_condition,
  [8] = 1,
    ACTIONS(96), 1,
      sym_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 4,
  [SMALL_STATE(18)] = 8,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fragment, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_write, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_write, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_write, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_write, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_bad, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_bad, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_good, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_good, 3),
  [92] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
