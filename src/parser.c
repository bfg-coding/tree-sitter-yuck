#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_defwidget = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_RPAREN = 5,
  anon_sym_QMARK = 6,
  anon_sym_box = 7,
  anon_sym_COLONorientation = 8,
  anon_sym_COLONclass = 9,
  anon_sym_COLONhalign = 10,
  anon_sym_COLONspace_DASHevenly = 11,
  anon_sym_eventbox = 12,
  anon_sym_COLONonhover = 13,
  anon_sym_COLONonhoverlost = 14,
  anon_sym_revealer = 15,
  anon_sym_COLONreveal = 16,
  anon_sym_COLONtransition = 17,
  anon_sym_COLONduration = 18,
  anon_sym_children = 19,
  anon_sym_COLONnth = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_string_token1 = 22,
  anon_sym_LBRACE = 23,
  anon_sym_QMARK_COLON = 24,
  anon_sym_RBRACE = 25,
  sym_identifier = 26,
  sym_number = 27,
  sym_source_file = 28,
  sym__statement = 29,
  sym__widget = 30,
  sym__defs = 31,
  sym_defwidget = 32,
  sym_vars = 33,
  sym_box_widget = 34,
  sym_box_props = 35,
  sym_eventbox_widget = 36,
  sym_eventbox_props = 37,
  sym_revealer_widget = 38,
  sym_revealer_props = 39,
  sym_children = 40,
  sym_string = 41,
  sym_conditional = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_defwidget_repeat1 = 44,
  aux_sym_defwidget_repeat2 = 45,
  aux_sym_box_widget_repeat1 = 46,
  aux_sym_eventbox_widget_repeat1 = 47,
  aux_sym_revealer_widget_repeat1 = 48,
  aux_sym_string_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_defwidget] = "defwidget",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RPAREN] = ")",
  [anon_sym_QMARK] = "\?",
  [anon_sym_box] = "box",
  [anon_sym_COLONorientation] = ":orientation",
  [anon_sym_COLONclass] = ":class",
  [anon_sym_COLONhalign] = ":halign",
  [anon_sym_COLONspace_DASHevenly] = ":space-evenly",
  [anon_sym_eventbox] = "eventbox",
  [anon_sym_COLONonhover] = ":onhover",
  [anon_sym_COLONonhoverlost] = ":onhoverlost",
  [anon_sym_revealer] = "revealer",
  [anon_sym_COLONreveal] = ":reveal",
  [anon_sym_COLONtransition] = ":transition",
  [anon_sym_COLONduration] = ":duration",
  [anon_sym_children] = "children",
  [anon_sym_COLONnth] = ":nth",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_QMARK_COLON] = "\?:",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__widget] = "_widget",
  [sym__defs] = "_defs",
  [sym_defwidget] = "defwidget",
  [sym_vars] = "vars",
  [sym_box_widget] = "box_widget",
  [sym_box_props] = "box_props",
  [sym_eventbox_widget] = "eventbox_widget",
  [sym_eventbox_props] = "eventbox_props",
  [sym_revealer_widget] = "revealer_widget",
  [sym_revealer_props] = "revealer_props",
  [sym_children] = "children",
  [sym_string] = "string",
  [sym_conditional] = "conditional",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_defwidget_repeat1] = "defwidget_repeat1",
  [aux_sym_defwidget_repeat2] = "defwidget_repeat2",
  [aux_sym_box_widget_repeat1] = "box_widget_repeat1",
  [aux_sym_eventbox_widget_repeat1] = "eventbox_widget_repeat1",
  [aux_sym_revealer_widget_repeat1] = "revealer_widget_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_defwidget] = anon_sym_defwidget,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_box] = anon_sym_box,
  [anon_sym_COLONorientation] = anon_sym_COLONorientation,
  [anon_sym_COLONclass] = anon_sym_COLONclass,
  [anon_sym_COLONhalign] = anon_sym_COLONhalign,
  [anon_sym_COLONspace_DASHevenly] = anon_sym_COLONspace_DASHevenly,
  [anon_sym_eventbox] = anon_sym_eventbox,
  [anon_sym_COLONonhover] = anon_sym_COLONonhover,
  [anon_sym_COLONonhoverlost] = anon_sym_COLONonhoverlost,
  [anon_sym_revealer] = anon_sym_revealer,
  [anon_sym_COLONreveal] = anon_sym_COLONreveal,
  [anon_sym_COLONtransition] = anon_sym_COLONtransition,
  [anon_sym_COLONduration] = anon_sym_COLONduration,
  [anon_sym_children] = anon_sym_children,
  [anon_sym_COLONnth] = anon_sym_COLONnth,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_QMARK_COLON] = anon_sym_QMARK_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__widget] = sym__widget,
  [sym__defs] = sym__defs,
  [sym_defwidget] = sym_defwidget,
  [sym_vars] = sym_vars,
  [sym_box_widget] = sym_box_widget,
  [sym_box_props] = sym_box_props,
  [sym_eventbox_widget] = sym_eventbox_widget,
  [sym_eventbox_props] = sym_eventbox_props,
  [sym_revealer_widget] = sym_revealer_widget,
  [sym_revealer_props] = sym_revealer_props,
  [sym_children] = sym_children,
  [sym_string] = sym_string,
  [sym_conditional] = sym_conditional,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_defwidget_repeat1] = aux_sym_defwidget_repeat1,
  [aux_sym_defwidget_repeat2] = aux_sym_defwidget_repeat2,
  [aux_sym_box_widget_repeat1] = aux_sym_box_widget_repeat1,
  [aux_sym_eventbox_widget_repeat1] = aux_sym_eventbox_widget_repeat1,
  [aux_sym_revealer_widget_repeat1] = aux_sym_revealer_widget_repeat1,
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
  [anon_sym_QMARK] = {
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
  [anon_sym_COLONspace_DASHevenly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eventbox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONonhover] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONonhoverlost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_revealer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONreveal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONtransition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONduration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_children] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONnth] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
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
  [sym__widget] = {
    .visible = false,
    .named = true,
  },
  [sym__defs] = {
    .visible = false,
    .named = true,
  },
  [sym_defwidget] = {
    .visible = true,
    .named = true,
  },
  [sym_vars] = {
    .visible = true,
    .named = true,
  },
  [sym_box_widget] = {
    .visible = true,
    .named = true,
  },
  [sym_box_props] = {
    .visible = true,
    .named = true,
  },
  [sym_eventbox_widget] = {
    .visible = true,
    .named = true,
  },
  [sym_eventbox_props] = {
    .visible = true,
    .named = true,
  },
  [sym_revealer_widget] = {
    .visible = true,
    .named = true,
  },
  [sym_revealer_props] = {
    .visible = true,
    .named = true,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [aux_sym_defwidget_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defwidget_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_box_widget_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_eventbox_widget_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_revealer_widget_repeat1] = {
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
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(98);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '?') ADVANCE(105);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == '{') ADVANCE(123);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(124);
      END_STATE();
    case 4:
      if (lookahead == '?') ADVANCE(104);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 5:
      if (lookahead == '?') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(119);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 89:
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 90:
      if (lookahead == 'v') ADVANCE(28);
      END_STATE();
    case 91:
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 92:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 93:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 94:
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 95:
      if (lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 96:
      if (lookahead == 'x') ADVANCE(111);
      END_STATE();
    case 97:
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_defwidget);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == ':') ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_box);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLONorientation);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLONclass);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLONhalign);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLONspace_DASHevenly);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_eventbox);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLONonhover);
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLONonhoverlost);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_revealer);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COLONreveal);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLONtransition);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLONduration);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_children);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COLONnth);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_QMARK_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_defwidget] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_box] = ACTIONS(1),
    [anon_sym_COLONorientation] = ACTIONS(1),
    [anon_sym_COLONclass] = ACTIONS(1),
    [anon_sym_COLONhalign] = ACTIONS(1),
    [anon_sym_COLONspace_DASHevenly] = ACTIONS(1),
    [anon_sym_eventbox] = ACTIONS(1),
    [anon_sym_COLONonhover] = ACTIONS(1),
    [anon_sym_COLONonhoverlost] = ACTIONS(1),
    [anon_sym_revealer] = ACTIONS(1),
    [anon_sym_COLONreveal] = ACTIONS(1),
    [anon_sym_COLONtransition] = ACTIONS(1),
    [anon_sym_COLONduration] = ACTIONS(1),
    [anon_sym_children] = ACTIONS(1),
    [anon_sym_COLONnth] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_QMARK_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym__statement] = STATE(10),
    [sym__widget] = STATE(10),
    [sym__defs] = STATE(10),
    [sym_defwidget] = STATE(10),
    [sym_box_widget] = STATE(10),
    [sym_eventbox_widget] = STATE(10),
    [sym_revealer_widget] = STATE(10),
    [sym_children] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 1,
      anon_sym_COLONspace_DASHevenly,
    STATE(3), 2,
      sym_box_props,
      aux_sym_box_widget_repeat1,
    ACTIONS(11), 3,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
    STATE(19), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [27] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_COLONspace_DASHevenly,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    STATE(12), 2,
      sym_box_props,
      aux_sym_box_widget_repeat1,
    ACTIONS(11), 3,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
    STATE(14), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [54] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      anon_sym_COLONreveal,
    ACTIONS(21), 2,
      anon_sym_COLONtransition,
      anon_sym_COLONduration,
    STATE(24), 2,
      sym_revealer_props,
      aux_sym_revealer_widget_repeat1,
    STATE(21), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [80] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(27), 1,
      anon_sym_COLONonhover,
    ACTIONS(25), 2,
      anon_sym_COLONclass,
      anon_sym_COLONonhoverlost,
    STATE(7), 2,
      sym_eventbox_props,
      aux_sym_eventbox_widget_repeat1,
    STATE(22), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [106] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_COLONreveal,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 2,
      anon_sym_COLONtransition,
      anon_sym_COLONduration,
    STATE(4), 2,
      sym_revealer_props,
      aux_sym_revealer_widget_repeat1,
    STATE(23), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [132] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COLONonhover,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      anon_sym_COLONclass,
      anon_sym_COLONonhoverlost,
    STATE(25), 2,
      sym_eventbox_props,
      aux_sym_eventbox_widget_repeat1,
    STATE(17), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [158] = 2,
    ACTIONS(35), 1,
      anon_sym_COLONonhover,
    ACTIONS(33), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
      anon_sym_COLONspace_DASHevenly,
      anon_sym_COLONonhoverlost,
      anon_sym_COLONreveal,
      anon_sym_COLONtransition,
      anon_sym_COLONduration,
      anon_sym_RBRACE,
  [175] = 2,
    ACTIONS(39), 1,
      anon_sym_COLONonhover,
    ACTIONS(37), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
      anon_sym_COLONspace_DASHevenly,
      anon_sym_COLONonhoverlost,
      anon_sym_COLONreveal,
      anon_sym_COLONtransition,
      anon_sym_COLONduration,
      anon_sym_RBRACE,
  [192] = 3,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(11), 9,
      sym__statement,
      sym__widget,
      sym__defs,
      sym_defwidget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_source_file_repeat1,
  [210] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(11), 9,
      sym__statement,
      sym__widget,
      sym__defs,
      sym_defwidget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_source_file_repeat1,
  [228] = 4,
    ACTIONS(53), 1,
      anon_sym_COLONspace_DASHevenly,
    ACTIONS(48), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(12), 2,
      sym_box_props,
      aux_sym_box_widget_repeat1,
    ACTIONS(50), 3,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
  [245] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    STATE(20), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [260] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    STATE(15), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [275] = 3,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(15), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [290] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(15), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [305] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(15), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [320] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(16), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [335] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    STATE(15), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [350] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(15), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [365] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(15), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [380] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(15), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [395] = 3,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(15), 6,
      sym__widget,
      sym_box_widget,
      sym_eventbox_widget,
      sym_revealer_widget,
      sym_children,
      aux_sym_defwidget_repeat2,
  [410] = 4,
    ACTIONS(75), 1,
      anon_sym_COLONreveal,
    ACTIONS(73), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(78), 2,
      anon_sym_COLONtransition,
      anon_sym_COLONduration,
    STATE(24), 2,
      sym_revealer_props,
      aux_sym_revealer_widget_repeat1,
  [426] = 4,
    ACTIONS(86), 1,
      anon_sym_COLONonhover,
    ACTIONS(81), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(83), 2,
      anon_sym_COLONclass,
      anon_sym_COLONonhoverlost,
    STATE(25), 2,
      sym_eventbox_props,
      aux_sym_eventbox_widget_repeat1,
  [442] = 1,
    ACTIONS(89), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONorientation,
      anon_sym_COLONclass,
      anon_sym_COLONhalign,
      anon_sym_COLONspace_DASHevenly,
  [451] = 1,
    ACTIONS(91), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONreveal,
      anon_sym_COLONtransition,
      anon_sym_COLONduration,
  [459] = 4,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym_identifier,
    STATE(30), 2,
      sym_vars,
      aux_sym_defwidget_repeat1,
  [473] = 4,
    ACTIONS(95), 1,
      anon_sym_QMARK,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(28), 2,
      sym_vars,
      aux_sym_defwidget_repeat1,
  [487] = 4,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    ACTIONS(103), 1,
      anon_sym_QMARK,
    ACTIONS(106), 1,
      sym_identifier,
    STATE(30), 2,
      sym_vars,
      aux_sym_defwidget_repeat1,
  [501] = 1,
    ACTIONS(109), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONreveal,
      anon_sym_COLONtransition,
      anon_sym_COLONduration,
  [509] = 5,
    ACTIONS(111), 1,
      anon_sym_defwidget,
    ACTIONS(113), 1,
      anon_sym_box,
    ACTIONS(115), 1,
      anon_sym_eventbox,
    ACTIONS(117), 1,
      anon_sym_revealer,
    ACTIONS(119), 1,
      anon_sym_children,
  [525] = 2,
    ACTIONS(123), 1,
      anon_sym_COLONonhover,
    ACTIONS(121), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONclass,
      anon_sym_COLONonhoverlost,
  [535] = 3,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(27), 2,
      sym_string,
      sym_conditional,
  [546] = 4,
    ACTIONS(113), 1,
      anon_sym_box,
    ACTIONS(115), 1,
      anon_sym_eventbox,
    ACTIONS(117), 1,
      anon_sym_revealer,
    ACTIONS(119), 1,
      anon_sym_children,
  [559] = 1,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [565] = 1,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [571] = 1,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [577] = 1,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [583] = 3,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      aux_sym_string_token1,
    STATE(40), 1,
      aux_sym_string_repeat1,
  [593] = 1,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [599] = 1,
    ACTIONS(144), 3,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      sym_identifier,
  [605] = 1,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [611] = 1,
    ACTIONS(148), 3,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      sym_identifier,
  [617] = 3,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      aux_sym_string_token1,
    STATE(40), 1,
      aux_sym_string_repeat1,
  [627] = 1,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [633] = 1,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [639] = 3,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      aux_sym_string_token1,
    STATE(45), 1,
      aux_sym_string_repeat1,
  [649] = 1,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [655] = 1,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [661] = 2,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_string,
  [668] = 1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [673] = 2,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_string,
  [680] = 1,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [685] = 2,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym_string,
  [692] = 1,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [697] = 1,
    ACTIONS(172), 1,
      anon_sym_QMARK_COLON,
  [701] = 1,
    ACTIONS(174), 1,
      sym_identifier,
  [705] = 1,
    ACTIONS(176), 1,
      sym_identifier,
  [709] = 1,
    ACTIONS(178), 1,
      sym_identifier,
  [713] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [717] = 1,
    ACTIONS(182), 1,
      sym_identifier,
  [721] = 1,
    ACTIONS(184), 1,
      sym_identifier,
  [725] = 1,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
  [729] = 1,
    ACTIONS(188), 1,
      sym_number,
  [733] = 1,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
  [737] = 1,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
  [741] = 1,
    ACTIONS(194), 1,
      anon_sym_COLONnth,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 158,
  [SMALL_STATE(9)] = 175,
  [SMALL_STATE(10)] = 192,
  [SMALL_STATE(11)] = 210,
  [SMALL_STATE(12)] = 228,
  [SMALL_STATE(13)] = 245,
  [SMALL_STATE(14)] = 260,
  [SMALL_STATE(15)] = 275,
  [SMALL_STATE(16)] = 290,
  [SMALL_STATE(17)] = 305,
  [SMALL_STATE(18)] = 320,
  [SMALL_STATE(19)] = 335,
  [SMALL_STATE(20)] = 350,
  [SMALL_STATE(21)] = 365,
  [SMALL_STATE(22)] = 380,
  [SMALL_STATE(23)] = 395,
  [SMALL_STATE(24)] = 410,
  [SMALL_STATE(25)] = 426,
  [SMALL_STATE(26)] = 442,
  [SMALL_STATE(27)] = 451,
  [SMALL_STATE(28)] = 459,
  [SMALL_STATE(29)] = 473,
  [SMALL_STATE(30)] = 487,
  [SMALL_STATE(31)] = 501,
  [SMALL_STATE(32)] = 509,
  [SMALL_STATE(33)] = 525,
  [SMALL_STATE(34)] = 535,
  [SMALL_STATE(35)] = 546,
  [SMALL_STATE(36)] = 559,
  [SMALL_STATE(37)] = 565,
  [SMALL_STATE(38)] = 571,
  [SMALL_STATE(39)] = 577,
  [SMALL_STATE(40)] = 583,
  [SMALL_STATE(41)] = 593,
  [SMALL_STATE(42)] = 599,
  [SMALL_STATE(43)] = 605,
  [SMALL_STATE(44)] = 611,
  [SMALL_STATE(45)] = 617,
  [SMALL_STATE(46)] = 627,
  [SMALL_STATE(47)] = 633,
  [SMALL_STATE(48)] = 639,
  [SMALL_STATE(49)] = 649,
  [SMALL_STATE(50)] = 655,
  [SMALL_STATE(51)] = 661,
  [SMALL_STATE(52)] = 668,
  [SMALL_STATE(53)] = 673,
  [SMALL_STATE(54)] = 680,
  [SMALL_STATE(55)] = 685,
  [SMALL_STATE(56)] = 692,
  [SMALL_STATE(57)] = 697,
  [SMALL_STATE(58)] = 701,
  [SMALL_STATE(59)] = 705,
  [SMALL_STATE(60)] = 709,
  [SMALL_STATE(61)] = 713,
  [SMALL_STATE(62)] = 717,
  [SMALL_STATE(63)] = 721,
  [SMALL_STATE(64)] = 725,
  [SMALL_STATE(65)] = 729,
  [SMALL_STATE(66)] = 733,
  [SMALL_STATE(67)] = 737,
  [SMALL_STATE(68)] = 741,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_box_widget_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_box_widget_repeat1, 2), SHIFT_REPEAT(53),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_box_widget_repeat1, 2), SHIFT_REPEAT(60),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat2, 2), SHIFT_REPEAT(35),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat2, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_revealer_widget_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_revealer_widget_repeat1, 2), SHIFT_REPEAT(63),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_revealer_widget_repeat1, 2), SHIFT_REPEAT(34),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_eventbox_widget_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_eventbox_widget_repeat1, 2), SHIFT_REPEAT(51),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_eventbox_widget_repeat1, 2), SHIFT_REPEAT(51),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box_props, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revealer_props, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat1, 2), SHIFT_REPEAT(62),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat1, 2), SHIFT_REPEAT(42),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eventbox_props, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eventbox_props, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revealer_widget, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box_widget, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eventbox_widget, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box_widget, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(40),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eventbox_widget, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revealer_widget, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box_widget, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eventbox_widget, 5),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_revealer_widget, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defwidget, 8),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defwidget, 7),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defwidget, 6),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
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
