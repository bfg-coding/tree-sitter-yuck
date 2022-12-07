#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_defwidget = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_RPAREN = 5,
  anon_sym_box = 6,
  anon_sym_COLONorientation = 7,
  anon_sym_COLONclass = 8,
  anon_sym_COLONhalign = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_string_token1 = 11,
  sym_identifier = 12,
  sym_number = 13,
  sym_source_file = 14,
  sym__statement = 15,
  sym_widget = 16,
  sym_defs = 17,
  sym_defwidget = 18,
  sym_box_widget = 19,
  sym_box_widget_props = 20,
  sym_string = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_defwidget_repeat1 = 23,
  aux_sym_box_widget_repeat1 = 24,
  aux_sym_string_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_defwidget] = "defwidget",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RPAREN] = ")",
  [anon_sym_box] = "box",
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
  [sym_defs] = "defs",
  [sym_defwidget] = "defwidget",
  [sym_box_widget] = "box_widget",
  [sym_box_widget_props] = "box_widget_props",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_defwidget_repeat1] = "defwidget_repeat1",
  [aux_sym_box_widget_repeat1] = "box_widget_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_defwidget] = anon_sym_defwidget,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_box] = anon_sym_box,
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
  [sym_defs] = sym_defs,
  [sym_defwidget] = sym_defwidget,
  [sym_box_widget] = sym_box_widget,
  [sym_box_widget_props] = sym_box_widget_props,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_defwidget_repeat1] = aux_sym_defwidget_repeat1,
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
  [anon_sym_defwidget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_box] = {
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
  [sym_defs] = {
    .visible = true,
    .named = true,
  },
  [sym_defwidget] = {
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
  [aux_sym_defwidget_repeat1] = {
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'h') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'w') ADVANCE(14);
      END_STATE();
    case 31:
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_defwidget);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_box);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLONorientation);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLONclass);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLONhalign);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
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
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_defwidget] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_box] = ACTIONS(1),
    [anon_sym_COLONorientation] = ACTIONS(1),
    [anon_sym_COLONclass] = ACTIONS(1),
    [anon_sym_COLONhalign] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym__statement] = STATE(2),
    [sym_widget] = STATE(2),
    [sym_defs] = STATE(2),
    [sym_defwidget] = STATE(20),
    [sym_box_widget] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_box_widget,
    STATE(20), 1,
      sym_defwidget,
    STATE(3), 4,
      sym__statement,
      sym_widget,
      sym_defs,
      aux_sym_source_file_repeat1,
  [19] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_box_widget,
    STATE(20), 1,
      sym_defwidget,
    STATE(3), 4,
      sym__statement,
      sym_widget,
      sym_defs,
      aux_sym_source_file_repeat1,
  [38] = 3,
    ACTIONS(14), 1,
      anon_sym_RPAREN,
    STATE(4), 2,
      sym_box_widget_props,
      aux_sym_box_widget_repeat1,
    ACTIONS(16), 3,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
  [51] = 3,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(6), 2,
      sym_box_widget_props,
      aux_sym_box_widget_repeat1,
    ACTIONS(21), 3,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
  [64] = 3,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(4), 2,
      sym_box_widget_props,
      aux_sym_box_widget_repeat1,
    ACTIONS(21), 3,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
  [77] = 4,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(28), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_box_widget,
    STATE(7), 2,
      sym_widget,
      aux_sym_defwidget_repeat1,
  [91] = 4,
    ACTIONS(30), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_box_widget,
    STATE(9), 2,
      sym_widget,
      aux_sym_defwidget_repeat1,
  [105] = 4,
    ACTIONS(30), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_box_widget,
    STATE(7), 2,
      sym_widget,
      aux_sym_defwidget_repeat1,
  [119] = 1,
    ACTIONS(36), 4,
      anon_sym_RPAREN,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
  [126] = 1,
    ACTIONS(38), 4,
      anon_sym_RPAREN,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
  [133] = 1,
    ACTIONS(40), 4,
      anon_sym_RPAREN,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
  [140] = 1,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [146] = 1,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [152] = 3,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      aux_sym_string_token1,
    STATE(15), 1,
      aux_sym_string_repeat1,
  [162] = 3,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym_string_token1,
    STATE(18), 1,
      aux_sym_string_repeat1,
  [172] = 1,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [178] = 3,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      aux_sym_string_token1,
    STATE(15), 1,
      aux_sym_string_repeat1,
  [188] = 2,
    ACTIONS(61), 1,
      anon_sym_defwidget,
    ACTIONS(63), 1,
      anon_sym_box,
  [195] = 1,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [200] = 1,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [205] = 2,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_string,
  [212] = 1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [217] = 1,
    ACTIONS(73), 1,
      sym_identifier,
  [221] = 1,
    ACTIONS(63), 1,
      anon_sym_box,
  [225] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [229] = 1,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
  [233] = 1,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 91,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 119,
  [SMALL_STATE(11)] = 126,
  [SMALL_STATE(12)] = 133,
  [SMALL_STATE(13)] = 140,
  [SMALL_STATE(14)] = 146,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 162,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 178,
  [SMALL_STATE(19)] = 188,
  [SMALL_STATE(20)] = 195,
  [SMALL_STATE(21)] = 200,
  [SMALL_STATE(22)] = 205,
  [SMALL_STATE(23)] = 212,
  [SMALL_STATE(24)] = 217,
  [SMALL_STATE(25)] = 221,
  [SMALL_STATE(26)] = 225,
  [SMALL_STATE(27)] = 229,
  [SMALL_STATE(28)] = 233,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_box_widget_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_box_widget_repeat1, 2), SHIFT_REPEAT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat1, 2), SHIFT_REPEAT(25),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat1, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box_widget_props, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box_widget, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(15),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box_widget, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defs, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defwidget, 7),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defwidget, 6),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [75] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
