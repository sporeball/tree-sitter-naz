#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_opcode_0 = 1,
  sym_opcode_1 = 2,
  sym_opcode_2 = 3,
  sym_opcode_3 = 4,
  sym_function = 5,
  sym_variable = 6,
  sym_condition = 7,
  sym_source_file = 8,
  sym_opcode = 9,
  sym_function_write = 10,
  sym_variable_write = 11,
  sym_conditional = 12,
  aux_sym_source_file_repeat1 = 13,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_opcode_0] = "opcode_0",
  [sym_opcode_1] = "opcode_1",
  [sym_opcode_2] = "opcode_2",
  [sym_opcode_3] = "opcode_3",
  [sym_function] = "function",
  [sym_variable] = "variable",
  [sym_condition] = "condition",
  [sym_source_file] = "source_file",
  [sym_opcode] = "opcode",
  [sym_function_write] = "function_write",
  [sym_variable_write] = "variable_write",
  [sym_conditional] = "conditional",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_opcode_0] = sym_opcode_0,
  [sym_opcode_1] = sym_opcode_1,
  [sym_opcode_2] = sym_opcode_2,
  [sym_opcode_3] = sym_opcode_3,
  [sym_function] = sym_function,
  [sym_variable] = sym_variable,
  [sym_condition] = sym_condition,
  [sym_source_file] = sym_source_file,
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
      if (lookahead == '0') ADVANCE(1);
      if (lookahead == '1') ADVANCE(2);
      if (lookahead == '2') ADVANCE(3);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(7);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(8);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(9);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(10);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      if (('e' <= lookahead && lookahead <= 'g') ||
          lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_opcode_0);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_opcode_1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_opcode_2);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_opcode_3);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_function);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_variable);
      END_STATE();
    case 13:
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
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_opcode_0] = ACTIONS(1),
    [sym_opcode_1] = ACTIONS(1),
    [sym_opcode_2] = ACTIONS(1),
    [sym_opcode_3] = ACTIONS(1),
    [sym_function] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_condition] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym_opcode] = STATE(2),
    [sym_function_write] = STATE(2),
    [sym_variable_write] = STATE(2),
    [sym_conditional] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_opcode_0] = ACTIONS(5),
    [sym_opcode_1] = ACTIONS(7),
    [sym_opcode_2] = ACTIONS(9),
    [sym_opcode_3] = ACTIONS(11),
    [sym_function] = ACTIONS(13),
    [sym_variable] = ACTIONS(13),
  },
  [2] = {
    [sym_opcode] = STATE(3),
    [sym_function_write] = STATE(3),
    [sym_variable_write] = STATE(3),
    [sym_conditional] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_opcode_0] = ACTIONS(5),
    [sym_opcode_1] = ACTIONS(7),
    [sym_opcode_2] = ACTIONS(9),
    [sym_opcode_3] = ACTIONS(11),
    [sym_function] = ACTIONS(17),
    [sym_variable] = ACTIONS(17),
  },
  [3] = {
    [sym_opcode] = STATE(3),
    [sym_function_write] = STATE(3),
    [sym_variable_write] = STATE(3),
    [sym_conditional] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_opcode_0] = ACTIONS(21),
    [sym_opcode_1] = ACTIONS(24),
    [sym_opcode_2] = ACTIONS(27),
    [sym_opcode_3] = ACTIONS(30),
    [sym_function] = ACTIONS(33),
    [sym_variable] = ACTIONS(33),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(36), 7,
      ts_builtin_sym_end,
      sym_opcode_0,
      sym_opcode_1,
      sym_opcode_2,
      sym_opcode_3,
      sym_function,
      sym_variable,
  [10] = 2,
    ACTIONS(38), 1,
      sym_function,
    ACTIONS(36), 6,
      ts_builtin_sym_end,
      sym_opcode_0,
      sym_opcode_1,
      sym_opcode_2,
      sym_opcode_3,
      sym_variable,
  [22] = 2,
    ACTIONS(40), 1,
      sym_variable,
    ACTIONS(36), 6,
      ts_builtin_sym_end,
      sym_opcode_0,
      sym_opcode_1,
      sym_opcode_2,
      sym_opcode_3,
      sym_function,
  [34] = 2,
    ACTIONS(42), 1,
      sym_variable,
    ACTIONS(36), 6,
      ts_builtin_sym_end,
      sym_opcode_0,
      sym_opcode_1,
      sym_opcode_2,
      sym_opcode_3,
      sym_function,
  [46] = 1,
    ACTIONS(44), 7,
      ts_builtin_sym_end,
      sym_opcode_0,
      sym_opcode_1,
      sym_opcode_2,
      sym_opcode_3,
      sym_function,
      sym_variable,
  [56] = 1,
    ACTIONS(46), 7,
      ts_builtin_sym_end,
      sym_opcode_0,
      sym_opcode_1,
      sym_opcode_2,
      sym_opcode_3,
      sym_function,
      sym_variable,
  [66] = 1,
    ACTIONS(48), 7,
      ts_builtin_sym_end,
      sym_opcode_0,
      sym_opcode_1,
      sym_opcode_2,
      sym_opcode_3,
      sym_function,
      sym_variable,
  [76] = 1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
  [80] = 1,
    ACTIONS(52), 1,
      sym_condition,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 10,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 46,
  [SMALL_STATE(9)] = 56,
  [SMALL_STATE(10)] = 66,
  [SMALL_STATE(11)] = 76,
  [SMALL_STATE(12)] = 80,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_write, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_write, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [50] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
