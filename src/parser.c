#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 4

enum {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_box = 4,
  anon_sym_eventbox = 5,
  anon_sym_revealer = 6,
  anon_sym_combo_DASHbox_DASHtext = 7,
  anon_sym_expander = 8,
  anon_sym_checkbox = 9,
  anon_sym_color_DASHbutton = 10,
  anon_sym_color_DASHchooser = 11,
  anon_sym_scale = 12,
  anon_sym_progress = 13,
  anon_sym_input = 14,
  anon_sym_button = 15,
  anon_sym_image = 16,
  anon_sym_overlay = 17,
  anon_sym_centerbox = 18,
  anon_sym_scroll = 19,
  anon_sym_label = 20,
  anon_sym_literal = 21,
  anon_sym_calendar = 22,
  anon_sym_transform = 23,
  anon_sym_circular_DASHprogress = 24,
  anon_sym_graph = 25,
  anon_sym_children = 26,
  anon_sym_defwidget = 27,
  anon_sym_defvar = 28,
  anon_sym_deflisten = 29,
  anon_sym_defpoll = 30,
  anon_sym_defwindow = 31,
  anon_sym_COLON = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_QMARK = 35,
  anon_sym_DQUOTE = 36,
  aux_sym_string_token1 = 37,
  anon_sym_true = 38,
  anon_sym_false = 39,
  anon_sym_LBRACE = 40,
  anon_sym_QMARK_COLON = 41,
  anon_sym_RBRACE = 42,
  anon_sym_DOLLAR_LBRACE = 43,
  sym_comment = 44,
  sym_number = 45,
  sym_source_file = 46,
  sym__statement = 47,
  sym_widget = 48,
  sym_reserved_widget = 49,
  sym_reserved_defs = 50,
  sym_widget_props = 51,
  sym_defwidget = 52,
  sym_vars = 53,
  sym_string = 54,
  sym_boolean = 55,
  sym_conditional = 56,
  sym_template_subsitution = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_widget_repeat1 = 59,
  aux_sym_widget_repeat2 = 60,
  aux_sym_defwidget_repeat1 = 61,
  aux_sym_defwidget_repeat2 = 62,
  aux_sym_string_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_box] = "box",
  [anon_sym_eventbox] = "eventbox",
  [anon_sym_revealer] = "revealer",
  [anon_sym_combo_DASHbox_DASHtext] = "combo-box-text",
  [anon_sym_expander] = "expander",
  [anon_sym_checkbox] = "checkbox",
  [anon_sym_color_DASHbutton] = "color-button",
  [anon_sym_color_DASHchooser] = "color-chooser",
  [anon_sym_scale] = "scale",
  [anon_sym_progress] = "progress",
  [anon_sym_input] = "input",
  [anon_sym_button] = "button",
  [anon_sym_image] = "image",
  [anon_sym_overlay] = "overlay",
  [anon_sym_centerbox] = "centerbox",
  [anon_sym_scroll] = "scroll",
  [anon_sym_label] = "label",
  [anon_sym_literal] = "literal",
  [anon_sym_calendar] = "calendar",
  [anon_sym_transform] = "transform",
  [anon_sym_circular_DASHprogress] = "circular-progress",
  [anon_sym_graph] = "graph",
  [anon_sym_children] = "children",
  [anon_sym_defwidget] = "defwidget",
  [anon_sym_defvar] = "defvar",
  [anon_sym_deflisten] = "deflisten",
  [anon_sym_defpoll] = "defpoll",
  [anon_sym_defwindow] = "defwindow",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACE] = "{",
  [anon_sym_QMARK_COLON] = "\?:",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [sym_comment] = "comment",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_widget] = "widget",
  [sym_reserved_widget] = "reserved_widget",
  [sym_reserved_defs] = "reserved_defs",
  [sym_widget_props] = "widget_props",
  [sym_defwidget] = "defwidget",
  [sym_vars] = "vars",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_conditional] = "conditional",
  [sym_template_subsitution] = "template_subsitution",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_widget_repeat1] = "widget_repeat1",
  [aux_sym_widget_repeat2] = "widget_repeat2",
  [aux_sym_defwidget_repeat1] = "defwidget_repeat1",
  [aux_sym_defwidget_repeat2] = "defwidget_repeat2",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_box] = anon_sym_box,
  [anon_sym_eventbox] = anon_sym_eventbox,
  [anon_sym_revealer] = anon_sym_revealer,
  [anon_sym_combo_DASHbox_DASHtext] = anon_sym_combo_DASHbox_DASHtext,
  [anon_sym_expander] = anon_sym_expander,
  [anon_sym_checkbox] = anon_sym_checkbox,
  [anon_sym_color_DASHbutton] = anon_sym_color_DASHbutton,
  [anon_sym_color_DASHchooser] = anon_sym_color_DASHchooser,
  [anon_sym_scale] = anon_sym_scale,
  [anon_sym_progress] = anon_sym_progress,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_button] = anon_sym_button,
  [anon_sym_image] = anon_sym_image,
  [anon_sym_overlay] = anon_sym_overlay,
  [anon_sym_centerbox] = anon_sym_centerbox,
  [anon_sym_scroll] = anon_sym_scroll,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_literal] = anon_sym_literal,
  [anon_sym_calendar] = anon_sym_calendar,
  [anon_sym_transform] = anon_sym_transform,
  [anon_sym_circular_DASHprogress] = anon_sym_circular_DASHprogress,
  [anon_sym_graph] = anon_sym_graph,
  [anon_sym_children] = anon_sym_children,
  [anon_sym_defwidget] = anon_sym_defwidget,
  [anon_sym_defvar] = anon_sym_defvar,
  [anon_sym_deflisten] = anon_sym_deflisten,
  [anon_sym_defpoll] = anon_sym_defpoll,
  [anon_sym_defwindow] = anon_sym_defwindow,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_QMARK_COLON] = anon_sym_QMARK_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [sym_comment] = sym_comment,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_widget] = sym_widget,
  [sym_reserved_widget] = sym_reserved_widget,
  [sym_reserved_defs] = sym_reserved_defs,
  [sym_widget_props] = sym_widget_props,
  [sym_defwidget] = sym_defwidget,
  [sym_vars] = sym_vars,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_conditional] = sym_conditional,
  [sym_template_subsitution] = sym_template_subsitution,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_widget_repeat1] = aux_sym_widget_repeat1,
  [aux_sym_widget_repeat2] = aux_sym_widget_repeat2,
  [aux_sym_defwidget_repeat1] = aux_sym_defwidget_repeat1,
  [aux_sym_defwidget_repeat2] = aux_sym_defwidget_repeat2,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
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
  [anon_sym_eventbox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_revealer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_combo_DASHbox_DASHtext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expander] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_checkbox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color_DASHbutton] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color_DASHchooser] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scale] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_progress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_button] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overlay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_centerbox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scroll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_literal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calendar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_circular_DASHprogress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_graph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_children] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defwidget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deflisten] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defpoll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defwindow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_QMARK] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
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
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
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
  [sym_reserved_widget] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved_defs] = {
    .visible = true,
    .named = true,
  },
  [sym_widget_props] = {
    .visible = true,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_template_subsitution] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_widget_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_widget_repeat2] = {
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
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 2},
  [2] =
    {field_name, 0},
    {field_name, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '{') ADVANCE(21);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_QMARK_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'g') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'v') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_box);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == 'v') ADVANCE(70);
      if (lookahead == 'w') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'k') ADVANCE(90);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 'b') ADVANCE(116);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(119);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(126);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_graph);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_scale);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_button);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 115:
      if (lookahead == 'b') ADVANCE(135);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_defvar);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 129:
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_scroll);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 136:
      if (lookahead == 'x') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(159);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_defpoll);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 146:
      if (lookahead == 'x') ADVANCE(164);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_literal);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_overlay);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_calendar);
      END_STATE();
    case 154:
      if (lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_checkbox);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_children);
      END_STATE();
    case 157:
      if (lookahead == '-') ADVANCE(170);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 160:
      if (lookahead == 'x') ADVANCE(173);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 163:
      if (lookahead == 'w') ADVANCE(176);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_eventbox);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_expander);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_progress);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_revealer);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_centerbox);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 173:
      if (lookahead == '-') ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_deflisten);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_defwidget);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_defwindow);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_transform);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 184:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 185:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 186:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_color_DASHbutton);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 189:
      if (lookahead == 'x') ADVANCE(192);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_color_DASHchooser);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_combo_DASHbox_DASHtext);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_circular_DASHprogress);
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
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_box] = ACTIONS(1),
    [anon_sym_eventbox] = ACTIONS(1),
    [anon_sym_revealer] = ACTIONS(1),
    [anon_sym_combo_DASHbox_DASHtext] = ACTIONS(1),
    [anon_sym_expander] = ACTIONS(1),
    [anon_sym_checkbox] = ACTIONS(1),
    [anon_sym_color_DASHbutton] = ACTIONS(1),
    [anon_sym_color_DASHchooser] = ACTIONS(1),
    [anon_sym_scale] = ACTIONS(1),
    [anon_sym_progress] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_button] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_overlay] = ACTIONS(1),
    [anon_sym_centerbox] = ACTIONS(1),
    [anon_sym_scroll] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_literal] = ACTIONS(1),
    [anon_sym_calendar] = ACTIONS(1),
    [anon_sym_transform] = ACTIONS(1),
    [anon_sym_circular_DASHprogress] = ACTIONS(1),
    [anon_sym_graph] = ACTIONS(1),
    [anon_sym_children] = ACTIONS(1),
    [anon_sym_defwidget] = ACTIONS(1),
    [anon_sym_defvar] = ACTIONS(1),
    [anon_sym_deflisten] = ACTIONS(1),
    [anon_sym_defpoll] = ACTIONS(1),
    [anon_sym_defwindow] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_QMARK_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym__statement] = STATE(8),
    [sym_widget] = STATE(8),
    [sym_defwidget] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      sym_identifier,
    STATE(5), 1,
      sym_reserved_widget,
    STATE(42), 1,
      sym_reserved_defs,
    ACTIONS(11), 5,
      anon_sym_defwidget,
      anon_sym_defvar,
      anon_sym_deflisten,
      anon_sym_defpoll,
      anon_sym_defwindow,
    ACTIONS(9), 23,
      anon_sym_box,
      anon_sym_eventbox,
      anon_sym_revealer,
      anon_sym_combo_DASHbox_DASHtext,
      anon_sym_expander,
      anon_sym_checkbox,
      anon_sym_color_DASHbutton,
      anon_sym_color_DASHchooser,
      anon_sym_scale,
      anon_sym_progress,
      anon_sym_input,
      anon_sym_button,
      anon_sym_image,
      anon_sym_overlay,
      anon_sym_centerbox,
      anon_sym_scroll,
      anon_sym_label,
      anon_sym_literal,
      anon_sym_calendar,
      anon_sym_transform,
      anon_sym_circular_DASHprogress,
      anon_sym_graph,
      anon_sym_children,
  [42] = 3,
    ACTIONS(7), 1,
      sym_identifier,
    STATE(5), 1,
      sym_reserved_widget,
    ACTIONS(9), 23,
      anon_sym_box,
      anon_sym_eventbox,
      anon_sym_revealer,
      anon_sym_combo_DASHbox_DASHtext,
      anon_sym_expander,
      anon_sym_checkbox,
      anon_sym_color_DASHbutton,
      anon_sym_color_DASHchooser,
      anon_sym_scale,
      anon_sym_progress,
      anon_sym_input,
      anon_sym_button,
      anon_sym_image,
      anon_sym_overlay,
      anon_sym_centerbox,
      anon_sym_scroll,
      anon_sym_label,
      anon_sym_literal,
      anon_sym_calendar,
      anon_sym_transform,
      anon_sym_circular_DASHprogress,
      anon_sym_graph,
      anon_sym_children,
  [74] = 5,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 2,
      sym_identifier,
      sym_number,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 3,
      sym_string,
      sym_boolean,
      sym_conditional,
  [94] = 5,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      anon_sym_COLON,
    STATE(6), 2,
      sym_widget_props,
      aux_sym_widget_repeat1,
    STATE(23), 2,
      sym_widget,
      aux_sym_widget_repeat2,
  [112] = 5,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(16), 2,
      sym_widget_props,
      aux_sym_widget_repeat1,
    STATE(25), 2,
      sym_widget,
      aux_sym_widget_repeat2,
  [130] = 4,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(9), 3,
      sym_widget,
      sym_string,
      aux_sym_defwidget_repeat2,
  [145] = 3,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(11), 4,
      sym__statement,
      sym_widget,
      sym_defwidget,
      aux_sym_source_file_repeat1,
  [158] = 4,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(36), 1,
      anon_sym_RPAREN,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    STATE(9), 3,
      sym_widget,
      sym_string,
      aux_sym_defwidget_repeat2,
  [173] = 4,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(12), 3,
      sym_widget,
      sym_string,
      aux_sym_defwidget_repeat2,
  [188] = 3,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(11), 4,
      sym__statement,
      sym_widget,
      sym_defwidget,
      aux_sym_source_file_repeat1,
  [201] = 4,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(9), 3,
      sym_widget,
      sym_string,
      aux_sym_defwidget_repeat2,
  [216] = 4,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(7), 3,
      sym_widget,
      sym_string,
      aux_sym_defwidget_repeat2,
  [231] = 4,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_RBRACK,
    ACTIONS(54), 1,
      anon_sym_QMARK,
    STATE(22), 2,
      sym_vars,
      aux_sym_defwidget_repeat1,
  [245] = 4,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    STATE(15), 2,
      sym_vars,
      aux_sym_defwidget_repeat1,
  [259] = 3,
    ACTIONS(66), 1,
      anon_sym_COLON,
    ACTIONS(64), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(16), 2,
      sym_widget_props,
      aux_sym_widget_repeat1,
  [271] = 1,
    ACTIONS(69), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [279] = 4,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      aux_sym_string_token1,
    ACTIONS(75), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(20), 2,
      sym_template_subsitution,
      aux_sym_string_repeat1,
  [293] = 4,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      aux_sym_string_token1,
    ACTIONS(82), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(19), 2,
      sym_template_subsitution,
      aux_sym_string_repeat1,
  [307] = 4,
    ACTIONS(75), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      aux_sym_string_token1,
    STATE(19), 2,
      sym_template_subsitution,
      aux_sym_string_repeat1,
  [321] = 1,
    ACTIONS(89), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [329] = 4,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_QMARK,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(15), 2,
      sym_vars,
      aux_sym_defwidget_repeat1,
  [343] = 3,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(26), 2,
      sym_widget,
      aux_sym_widget_repeat2,
  [354] = 1,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
  [361] = 3,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(26), 2,
      sym_widget,
      aux_sym_widget_repeat2,
  [372] = 3,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(26), 2,
      sym_widget,
      aux_sym_widget_repeat2,
  [383] = 1,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
  [390] = 1,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
  [397] = 1,
    ACTIONS(106), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [403] = 1,
    ACTIONS(108), 3,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      sym_identifier,
  [409] = 1,
    ACTIONS(110), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [415] = 1,
    ACTIONS(112), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_DOLLAR_LBRACE,
  [421] = 1,
    ACTIONS(114), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [427] = 1,
    ACTIONS(116), 3,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      sym_identifier,
  [433] = 1,
    ACTIONS(118), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [439] = 2,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_string,
  [446] = 1,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [451] = 1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [456] = 1,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [461] = 1,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
  [465] = 1,
    ACTIONS(128), 1,
      sym_identifier,
  [469] = 1,
    ACTIONS(130), 1,
      sym_identifier,
  [473] = 1,
    ACTIONS(132), 1,
      sym_identifier,
  [477] = 1,
    ACTIONS(134), 1,
      sym_identifier,
  [481] = 1,
    ACTIONS(136), 1,
      sym_identifier,
  [485] = 1,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
  [489] = 1,
    ACTIONS(140), 1,
      sym_identifier,
  [493] = 1,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
  [497] = 1,
    ACTIONS(144), 1,
      anon_sym_QMARK_COLON,
  [501] = 1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 145,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 173,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 201,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 231,
  [SMALL_STATE(15)] = 245,
  [SMALL_STATE(16)] = 259,
  [SMALL_STATE(17)] = 271,
  [SMALL_STATE(18)] = 279,
  [SMALL_STATE(19)] = 293,
  [SMALL_STATE(20)] = 307,
  [SMALL_STATE(21)] = 321,
  [SMALL_STATE(22)] = 329,
  [SMALL_STATE(23)] = 343,
  [SMALL_STATE(24)] = 354,
  [SMALL_STATE(25)] = 361,
  [SMALL_STATE(26)] = 372,
  [SMALL_STATE(27)] = 383,
  [SMALL_STATE(28)] = 390,
  [SMALL_STATE(29)] = 397,
  [SMALL_STATE(30)] = 403,
  [SMALL_STATE(31)] = 409,
  [SMALL_STATE(32)] = 415,
  [SMALL_STATE(33)] = 421,
  [SMALL_STATE(34)] = 427,
  [SMALL_STATE(35)] = 433,
  [SMALL_STATE(36)] = 439,
  [SMALL_STATE(37)] = 446,
  [SMALL_STATE(38)] = 451,
  [SMALL_STATE(39)] = 456,
  [SMALL_STATE(40)] = 461,
  [SMALL_STATE(41)] = 465,
  [SMALL_STATE(42)] = 469,
  [SMALL_STATE(43)] = 473,
  [SMALL_STATE(44)] = 477,
  [SMALL_STATE(45)] = 481,
  [SMALL_STATE(46)] = 485,
  [SMALL_STATE(47)] = 489,
  [SMALL_STATE(48)] = 493,
  [SMALL_STATE(49)] = 497,
  [SMALL_STATE(50)] = 501,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat2, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat2, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat2, 2), SHIFT_REPEAT(18),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat1, 2), SHIFT_REPEAT(30),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat1, 2), SHIFT_REPEAT(44),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_widget_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_widget_repeat1, 2), SHIFT_REPEAT(41),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(19),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(43),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_widget_repeat2, 2), SHIFT_REPEAT(3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_widget_repeat2, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget_props, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars, 1, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_subsitution, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved_widget, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars, 2, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defwidget, 8, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defwidget, 6, .production_id = 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defwidget, 7, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved_defs, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [146] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
