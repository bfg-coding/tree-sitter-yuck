#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_box = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COLONorientation = 4,
  anon_sym_COLONclass = 5,
  anon_sym_COLONhalign = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_token1 = 8,
  sym_identifier = 9,
  sym_number = 10,
  sym_source_file = 11,
  sym__statement = 12,
  sym_widget = 13,
  sym_box_widget = 14,
  sym_box_widget_props = 15,
  sym_string = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_box_widget_repeat1 = 18,
  aux_sym_string_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_box] = "box",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLONorientation] = ":orientation",
  [anon_sym_COLONclass] = ":class",
  [anon_sym_COLONhalign] = ":halign",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_widget] = "widget",
  [sym_box_widget] = "box_widget",
  [sym_box_widget_props] = "box_widget_props",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_box_widget_repeat1] = "box_widget_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_box] = anon_sym_box,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLONorientation] = anon_sym_COLONorientation,
  [anon_sym_COLONclass] = anon_sym_COLONclass,
  [anon_sym_COLONhalign] = anon_sym_COLONhalign,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_widget] = sym_widget,
  [sym_box_widget] = sym_box_widget,
  [sym_box_widget_props] = sym_box_widget_props,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_box_widget_repeat1] = aux_sym_box_widget_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONorientation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONclass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONhalign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_widget] = {
    .visible = true,
    .named = true,
  },
  [sym_box_widget] = {
    .visible = true,
    .named = true,
  },
  [sym_box_widget_props] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_box_widget_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'h') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_box);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_box);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLONorientation);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLONclass);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLONhalign);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
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
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_box] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLONorientation] = ACTIONS(1),
    [anon_sym_COLONclass] = ACTIONS(1),
    [anon_sym_COLONhalign] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym__statement] = STATE(2),
    [sym_widget] = STATE(2),
    [sym_box_widget] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_box_widget,
    STATE(4), 3,
      sym__statement,
      sym_widget,
      aux_sym_source_file_repeat1,
  [15] = 3,
    ACTIONS(9), 1,
      anon_sym_RPAREN,
    STATE(5), 2,
      sym_box_widget_props,
      aux_sym_box_widget_repeat1,
    ACTIONS(11), 3,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
  [28] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_box_widget,
    STATE(4), 3,
      sym__statement,
      sym_widget,
      aux_sym_source_file_repeat1,
  [43] = 3,
    ACTIONS(18), 1,
      anon_sym_RPAREN,
    STATE(6), 2,
      sym_box_widget_props,
      aux_sym_box_widget_repeat1,
    ACTIONS(11), 3,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
  [56] = 3,
    ACTIONS(20), 1,
      anon_sym_RPAREN,
    STATE(6), 2,
      sym_box_widget_props,
      aux_sym_box_widget_repeat1,
    ACTIONS(22), 3,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
  [69] = 1,
    ACTIONS(25), 4,
      anon_sym_RPAREN,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
  [76] = 1,
    ACTIONS(27), 4,
      anon_sym_RPAREN,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
  [83] = 1,
    ACTIONS(29), 4,
      anon_sym_RPAREN,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
  [90] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_string_token1,
    STATE(11), 1,
      aux_sym_string_repeat1,
  [100] = 3,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_string_token1,
    STATE(12), 1,
      aux_sym_string_repeat1,
  [110] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      aux_sym_string_token1,
    STATE(12), 1,
      aux_sym_string_repeat1,
  [120] = 1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [125] = 1,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [130] = 2,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_string,
  [137] = 1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [142] = 1,
    ACTIONS(52), 1,
      anon_sym_box,
  [146] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 43,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 83,
  [SMALL_STATE(10)] = 90,
  [SMALL_STATE(11)] = 100,
  [SMALL_STATE(12)] = 110,
  [SMALL_STATE(13)] = 120,
  [SMALL_STATE(14)] = 125,
  [SMALL_STATE(15)] = 130,
  [SMALL_STATE(16)] = 137,
  [SMALL_STATE(17)] = 142,
  [SMALL_STATE(18)] = 146,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_box_widget_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_box_widget_repeat1, 2), SHIFT_REPEAT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box_widget_props, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(12),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box_widget, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box_widget, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [54] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_yuck(void) {
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
