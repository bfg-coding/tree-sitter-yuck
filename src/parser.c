#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_box = 3,
  anon_sym_eventbox = 4,
  anon_sym_revealer = 5,
  anon_sym_combo_DASHbox_DASHtext = 6,
  anon_sym_expander = 7,
  anon_sym_checkbox = 8,
  anon_sym_color_DASHbutton = 9,
  anon_sym_color_DASHchooser = 10,
  anon_sym_scale = 11,
  anon_sym_progress = 12,
  anon_sym_input = 13,
  anon_sym_button = 14,
  anon_sym_image = 15,
  anon_sym_overlay = 16,
  anon_sym_centerbox = 17,
  anon_sym_scroll = 18,
  anon_sym_label = 19,
  anon_sym_literal = 20,
  anon_sym_calendar = 21,
  anon_sym_transform = 22,
  anon_sym_circular_DASHprogress = 23,
  anon_sym_graph = 24,
  anon_sym_children = 25,
  anon_sym_defwidget = 26,
  anon_sym_defvar = 27,
  anon_sym_deflisten = 28,
  anon_sym_defpoll = 29,
  anon_sym_defwindow = 30,
  anon_sym_PLUS = 31,
  anon_sym_DASH = 32,
  anon_sym_STAR = 33,
  anon_sym_SLASH = 34,
  anon_sym_PERCENT = 35,
  anon_sym_QMARK_COLON = 36,
  anon_sym_QMARK_DOT = 37,
  anon_sym_EQ_EQ = 38,
  anon_sym_BANG_EQ = 39,
  anon_sym_LT = 40,
  anon_sym_GT = 41,
  anon_sym_LT_EQ = 42,
  anon_sym_GT_EQ = 43,
  anon_sym_PIPE_PIPE = 44,
  anon_sym_AMP_AMP = 45,
  anon_sym_BANG = 46,
  anon_sym_COLON = 47,
  anon_sym_LBRACK = 48,
  anon_sym_RBRACK = 49,
  anon_sym_LBRACE = 50,
  anon_sym_RBRACE = 51,
  anon_sym_QMARK = 52,
  anon_sym_DQUOTE = 53,
  aux_sym_string_token1 = 54,
  anon_sym_true = 55,
  anon_sym_false = 56,
  anon_sym_DOLLAR_LBRACE = 57,
  sym_comment = 58,
  sym_identifier = 59,
  sym_number = 60,
  sym_source_file = 61,
  sym__statement = 62,
  sym_widget = 63,
  sym__reserved = 64,
  sym_reserved_widget = 65,
  sym_reserved_defs = 66,
  sym_comparison_operators = 67,
  sym_widget_props = 68,
  sym_defwidget = 69,
  sym_literal = 70,
  sym_vars = 71,
  sym_string = 72,
  sym_boolean = 73,
  sym_conditional = 74,
  sym__conditional = 75,
  sym__ternary_seq = 76,
  sym__elvis_seq = 77,
  sym_template_subsitution = 78,
  sym__any = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_widget_repeat1 = 81,
  aux_sym_widget_repeat2 = 82,
  aux_sym_widget_props_repeat1 = 83,
  aux_sym_defwidget_repeat1 = 84,
  aux_sym_defwidget_repeat2 = 85,
  aux_sym_string_repeat1 = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_QMARK_COLON] = "\?:",
  [anon_sym_QMARK_DOT] = "\?.",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_BANG] = "!",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_QMARK] = "\?",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_widget] = "widget",
  [sym__reserved] = "_reserved",
  [sym_reserved_widget] = "reserved_widget",
  [sym_reserved_defs] = "reserved_defs",
  [sym_comparison_operators] = "comparison_operators",
  [sym_widget_props] = "widget_props",
  [sym_defwidget] = "defwidget",
  [sym_literal] = "literal",
  [sym_vars] = "vars",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_conditional] = "conditional",
  [sym__conditional] = "_conditional",
  [sym__ternary_seq] = "_ternary_seq",
  [sym__elvis_seq] = "_elvis_seq",
  [sym_template_subsitution] = "template_subsitution",
  [sym__any] = "_any",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_widget_repeat1] = "widget_repeat1",
  [aux_sym_widget_repeat2] = "widget_repeat2",
  [aux_sym_widget_props_repeat1] = "widget_props_repeat1",
  [aux_sym_defwidget_repeat1] = "defwidget_repeat1",
  [aux_sym_defwidget_repeat2] = "defwidget_repeat2",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_QMARK_COLON] = anon_sym_QMARK_COLON,
  [anon_sym_QMARK_DOT] = anon_sym_QMARK_DOT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_widget] = sym_widget,
  [sym__reserved] = sym__reserved,
  [sym_reserved_widget] = sym_reserved_widget,
  [sym_reserved_defs] = sym_reserved_defs,
  [sym_comparison_operators] = sym_comparison_operators,
  [sym_widget_props] = sym_widget_props,
  [sym_defwidget] = sym_defwidget,
  [sym_literal] = sym_literal,
  [sym_vars] = sym_vars,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_conditional] = sym_conditional,
  [sym__conditional] = sym__conditional,
  [sym__ternary_seq] = sym__ternary_seq,
  [sym__elvis_seq] = sym__elvis_seq,
  [sym_template_subsitution] = sym_template_subsitution,
  [sym__any] = sym__any,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_widget_repeat1] = aux_sym_widget_repeat1,
  [aux_sym_widget_repeat2] = aux_sym_widget_repeat2,
  [aux_sym_widget_props_repeat1] = aux_sym_widget_props_repeat1,
  [aux_sym_defwidget_repeat1] = aux_sym_defwidget_repeat1,
  [aux_sym_defwidget_repeat2] = aux_sym_defwidget_repeat2,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [anon_sym_QMARK_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [sym__reserved] = {
    .visible = false,
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
  [sym_comparison_operators] = {
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
  [sym_literal] = {
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
  [sym__conditional] = {
    .visible = false,
    .named = true,
  },
  [sym__ternary_seq] = {
    .visible = false,
    .named = true,
  },
  [sym__elvis_seq] = {
    .visible = false,
    .named = true,
  },
  [sym_template_subsitution] = {
    .visible = true,
    .named = true,
  },
  [sym__any] = {
    .visible = false,
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
  [aux_sym_widget_props_repeat1] = {
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
  field_var = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
  [1] =
    {field_var, 0},
  [2] =
    {field_var, 0},
    {field_var, 1},
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
  [20] = 5,
  [21] = 7,
  [22] = 6,
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
  [37] = 36,
  [38] = 38,
  [39] = 8,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 38,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '!') ADVANCE(57);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'g') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(57);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'g') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'g') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'g') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(71);
      END_STATE();
    case 10:
      if (lookahead == '|') ADVANCE(55);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_box);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_eventbox);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_revealer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_combo_DASHbox_DASHtext);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_expander);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_checkbox);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_color_DASHbutton);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_color_DASHchooser);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_scale);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_progress);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_button);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_image);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_overlay);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_centerbox);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_scroll);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_literal);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_calendar);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_transform);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_circular_DASHprogress);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_graph);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_children);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_defwidget);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_defvar);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_deflisten);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_defpoll);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_defwindow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_QMARK_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'h') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(232);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(182);
      if (lookahead == 'v') ADVANCE(86);
      if (lookahead == 'w') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_QMARK_COLON] = ACTIONS(1),
    [anon_sym_QMARK_DOT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym__statement] = STATE(28),
    [sym_widget] = STATE(28),
    [sym_defwidget] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
  },
  [2] = {
    [sym__reserved] = STATE(57),
    [sym_reserved_widget] = STATE(57),
    [sym_reserved_defs] = STATE(57),
    [sym_comparison_operators] = STATE(10),
    [sym_string] = STATE(57),
    [sym_boolean] = STATE(57),
    [sym__any] = STATE(57),
    [anon_sym_box] = ACTIONS(7),
    [anon_sym_eventbox] = ACTIONS(7),
    [anon_sym_revealer] = ACTIONS(7),
    [anon_sym_combo_DASHbox_DASHtext] = ACTIONS(7),
    [anon_sym_expander] = ACTIONS(7),
    [anon_sym_checkbox] = ACTIONS(7),
    [anon_sym_color_DASHbutton] = ACTIONS(7),
    [anon_sym_color_DASHchooser] = ACTIONS(7),
    [anon_sym_scale] = ACTIONS(7),
    [anon_sym_progress] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_button] = ACTIONS(7),
    [anon_sym_image] = ACTIONS(7),
    [anon_sym_overlay] = ACTIONS(7),
    [anon_sym_centerbox] = ACTIONS(7),
    [anon_sym_scroll] = ACTIONS(7),
    [anon_sym_label] = ACTIONS(7),
    [anon_sym_literal] = ACTIONS(7),
    [anon_sym_calendar] = ACTIONS(7),
    [anon_sym_transform] = ACTIONS(7),
    [anon_sym_circular_DASHprogress] = ACTIONS(7),
    [anon_sym_graph] = ACTIONS(7),
    [anon_sym_children] = ACTIONS(7),
    [anon_sym_defwidget] = ACTIONS(9),
    [anon_sym_defvar] = ACTIONS(9),
    [anon_sym_deflisten] = ACTIONS(9),
    [anon_sym_defpoll] = ACTIONS(9),
    [anon_sym_defwindow] = ACTIONS(9),
    [anon_sym_QMARK_COLON] = ACTIONS(11),
    [anon_sym_EQ_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_PIPE_PIPE] = ACTIONS(13),
    [anon_sym_AMP_AMP] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_QMARK] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [sym_number] = ACTIONS(23),
  },
  [3] = {
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_box] = ACTIONS(27),
    [anon_sym_eventbox] = ACTIONS(27),
    [anon_sym_revealer] = ACTIONS(27),
    [anon_sym_combo_DASHbox_DASHtext] = ACTIONS(27),
    [anon_sym_expander] = ACTIONS(27),
    [anon_sym_checkbox] = ACTIONS(27),
    [anon_sym_color_DASHbutton] = ACTIONS(27),
    [anon_sym_color_DASHchooser] = ACTIONS(27),
    [anon_sym_scale] = ACTIONS(27),
    [anon_sym_progress] = ACTIONS(27),
    [anon_sym_input] = ACTIONS(27),
    [anon_sym_button] = ACTIONS(27),
    [anon_sym_image] = ACTIONS(27),
    [anon_sym_overlay] = ACTIONS(27),
    [anon_sym_centerbox] = ACTIONS(27),
    [anon_sym_scroll] = ACTIONS(27),
    [anon_sym_label] = ACTIONS(27),
    [anon_sym_literal] = ACTIONS(27),
    [anon_sym_calendar] = ACTIONS(27),
    [anon_sym_transform] = ACTIONS(27),
    [anon_sym_circular_DASHprogress] = ACTIONS(27),
    [anon_sym_graph] = ACTIONS(27),
    [anon_sym_children] = ACTIONS(27),
    [anon_sym_defwidget] = ACTIONS(27),
    [anon_sym_defvar] = ACTIONS(27),
    [anon_sym_deflisten] = ACTIONS(27),
    [anon_sym_defpoll] = ACTIONS(27),
    [anon_sym_defwindow] = ACTIONS(27),
    [anon_sym_QMARK_COLON] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_PIPE_PIPE] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(27),
  },
  [4] = {
    [anon_sym_box] = ACTIONS(29),
    [anon_sym_eventbox] = ACTIONS(29),
    [anon_sym_revealer] = ACTIONS(29),
    [anon_sym_combo_DASHbox_DASHtext] = ACTIONS(29),
    [anon_sym_expander] = ACTIONS(29),
    [anon_sym_checkbox] = ACTIONS(29),
    [anon_sym_color_DASHbutton] = ACTIONS(29),
    [anon_sym_color_DASHchooser] = ACTIONS(29),
    [anon_sym_scale] = ACTIONS(29),
    [anon_sym_progress] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(29),
    [anon_sym_button] = ACTIONS(29),
    [anon_sym_image] = ACTIONS(29),
    [anon_sym_overlay] = ACTIONS(29),
    [anon_sym_centerbox] = ACTIONS(29),
    [anon_sym_scroll] = ACTIONS(29),
    [anon_sym_label] = ACTIONS(29),
    [anon_sym_literal] = ACTIONS(29),
    [anon_sym_calendar] = ACTIONS(29),
    [anon_sym_transform] = ACTIONS(29),
    [anon_sym_circular_DASHprogress] = ACTIONS(29),
    [anon_sym_graph] = ACTIONS(29),
    [anon_sym_children] = ACTIONS(29),
    [anon_sym_defwidget] = ACTIONS(29),
    [anon_sym_defvar] = ACTIONS(29),
    [anon_sym_deflisten] = ACTIONS(29),
    [anon_sym_defpoll] = ACTIONS(29),
    [anon_sym_defwindow] = ACTIONS(29),
    [anon_sym_QMARK_COLON] = ACTIONS(31),
    [anon_sym_EQ_EQ] = ACTIONS(31),
    [anon_sym_BANG_EQ] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(31),
    [anon_sym_GT_EQ] = ACTIONS(31),
    [anon_sym_PIPE_PIPE] = ACTIONS(31),
    [anon_sym_AMP_AMP] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [sym_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
  },
  [5] = {
    [anon_sym_box] = ACTIONS(35),
    [anon_sym_eventbox] = ACTIONS(35),
    [anon_sym_revealer] = ACTIONS(35),
    [anon_sym_combo_DASHbox_DASHtext] = ACTIONS(35),
    [anon_sym_expander] = ACTIONS(35),
    [anon_sym_checkbox] = ACTIONS(35),
    [anon_sym_color_DASHbutton] = ACTIONS(35),
    [anon_sym_color_DASHchooser] = ACTIONS(35),
    [anon_sym_scale] = ACTIONS(35),
    [anon_sym_progress] = ACTIONS(35),
    [anon_sym_input] = ACTIONS(35),
    [anon_sym_button] = ACTIONS(35),
    [anon_sym_image] = ACTIONS(35),
    [anon_sym_overlay] = ACTIONS(35),
    [anon_sym_centerbox] = ACTIONS(35),
    [anon_sym_scroll] = ACTIONS(35),
    [anon_sym_label] = ACTIONS(35),
    [anon_sym_literal] = ACTIONS(35),
    [anon_sym_calendar] = ACTIONS(35),
    [anon_sym_transform] = ACTIONS(35),
    [anon_sym_circular_DASHprogress] = ACTIONS(35),
    [anon_sym_graph] = ACTIONS(35),
    [anon_sym_children] = ACTIONS(35),
    [anon_sym_defwidget] = ACTIONS(35),
    [anon_sym_defvar] = ACTIONS(35),
    [anon_sym_deflisten] = ACTIONS(35),
    [anon_sym_defpoll] = ACTIONS(35),
    [anon_sym_defwindow] = ACTIONS(35),
    [anon_sym_QMARK_COLON] = ACTIONS(37),
    [anon_sym_EQ_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_AMP_AMP] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(35),
  },
  [6] = {
    [anon_sym_box] = ACTIONS(39),
    [anon_sym_eventbox] = ACTIONS(39),
    [anon_sym_revealer] = ACTIONS(39),
    [anon_sym_combo_DASHbox_DASHtext] = ACTIONS(39),
    [anon_sym_expander] = ACTIONS(39),
    [anon_sym_checkbox] = ACTIONS(39),
    [anon_sym_color_DASHbutton] = ACTIONS(39),
    [anon_sym_color_DASHchooser] = ACTIONS(39),
    [anon_sym_scale] = ACTIONS(39),
    [anon_sym_progress] = ACTIONS(39),
    [anon_sym_input] = ACTIONS(39),
    [anon_sym_button] = ACTIONS(39),
    [anon_sym_image] = ACTIONS(39),
    [anon_sym_overlay] = ACTIONS(39),
    [anon_sym_centerbox] = ACTIONS(39),
    [anon_sym_scroll] = ACTIONS(39),
    [anon_sym_label] = ACTIONS(39),
    [anon_sym_literal] = ACTIONS(39),
    [anon_sym_calendar] = ACTIONS(39),
    [anon_sym_transform] = ACTIONS(39),
    [anon_sym_circular_DASHprogress] = ACTIONS(39),
    [anon_sym_graph] = ACTIONS(39),
    [anon_sym_children] = ACTIONS(39),
    [anon_sym_defwidget] = ACTIONS(39),
    [anon_sym_defvar] = ACTIONS(39),
    [anon_sym_deflisten] = ACTIONS(39),
    [anon_sym_defpoll] = ACTIONS(39),
    [anon_sym_defwindow] = ACTIONS(39),
    [anon_sym_QMARK_COLON] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(41),
    [anon_sym_BANG_EQ] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(41),
    [anon_sym_GT_EQ] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(41),
    [anon_sym_AMP_AMP] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [sym_identifier] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
  },
  [7] = {
    [anon_sym_box] = ACTIONS(43),
    [anon_sym_eventbox] = ACTIONS(43),
    [anon_sym_revealer] = ACTIONS(43),
    [anon_sym_combo_DASHbox_DASHtext] = ACTIONS(43),
    [anon_sym_expander] = ACTIONS(43),
    [anon_sym_checkbox] = ACTIONS(43),
    [anon_sym_color_DASHbutton] = ACTIONS(43),
    [anon_sym_color_DASHchooser] = ACTIONS(43),
    [anon_sym_scale] = ACTIONS(43),
    [anon_sym_progress] = ACTIONS(43),
    [anon_sym_input] = ACTIONS(43),
    [anon_sym_button] = ACTIONS(43),
    [anon_sym_image] = ACTIONS(43),
    [anon_sym_overlay] = ACTIONS(43),
    [anon_sym_centerbox] = ACTIONS(43),
    [anon_sym_scroll] = ACTIONS(43),
    [anon_sym_label] = ACTIONS(43),
    [anon_sym_literal] = ACTIONS(43),
    [anon_sym_calendar] = ACTIONS(43),
    [anon_sym_transform] = ACTIONS(43),
    [anon_sym_circular_DASHprogress] = ACTIONS(43),
    [anon_sym_graph] = ACTIONS(43),
    [anon_sym_children] = ACTIONS(43),
    [anon_sym_defwidget] = ACTIONS(43),
    [anon_sym_defvar] = ACTIONS(43),
    [anon_sym_deflisten] = ACTIONS(43),
    [anon_sym_defpoll] = ACTIONS(43),
    [anon_sym_defwindow] = ACTIONS(43),
    [anon_sym_QMARK_COLON] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(45),
    [anon_sym_BANG_EQ] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(45),
    [anon_sym_PIPE_PIPE] = ACTIONS(45),
    [anon_sym_AMP_AMP] = ACTIONS(45),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_QMARK] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [sym_identifier] = ACTIONS(43),
    [sym_number] = ACTIONS(43),
  },
  [8] = {
    [anon_sym_box] = ACTIONS(47),
    [anon_sym_eventbox] = ACTIONS(47),
    [anon_sym_revealer] = ACTIONS(47),
    [anon_sym_combo_DASHbox_DASHtext] = ACTIONS(47),
    [anon_sym_expander] = ACTIONS(47),
    [anon_sym_checkbox] = ACTIONS(47),
    [anon_sym_color_DASHbutton] = ACTIONS(47),
    [anon_sym_color_DASHchooser] = ACTIONS(47),
    [anon_sym_scale] = ACTIONS(47),
    [anon_sym_progress] = ACTIONS(47),
    [anon_sym_input] = ACTIONS(47),
    [anon_sym_button] = ACTIONS(47),
    [anon_sym_image] = ACTIONS(47),
    [anon_sym_overlay] = ACTIONS(47),
    [anon_sym_centerbox] = ACTIONS(47),
    [anon_sym_scroll] = ACTIONS(47),
    [anon_sym_label] = ACTIONS(47),
    [anon_sym_literal] = ACTIONS(47),
    [anon_sym_calendar] = ACTIONS(47),
    [anon_sym_transform] = ACTIONS(47),
    [anon_sym_circular_DASHprogress] = ACTIONS(47),
    [anon_sym_graph] = ACTIONS(47),
    [anon_sym_children] = ACTIONS(47),
    [anon_sym_defwidget] = ACTIONS(47),
    [anon_sym_defvar] = ACTIONS(47),
    [anon_sym_deflisten] = ACTIONS(47),
    [anon_sym_defpoll] = ACTIONS(47),
    [anon_sym_defwindow] = ACTIONS(47),
    [anon_sym_QMARK_COLON] = ACTIONS(49),
    [anon_sym_EQ_EQ] = ACTIONS(49),
    [anon_sym_BANG_EQ] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_AMP_AMP] = ACTIONS(49),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_QMARK] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [sym_identifier] = ACTIONS(47),
    [sym_number] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_number,
    STATE(62), 1,
      sym__conditional,
    ACTIONS(55), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(72), 2,
      sym__ternary_seq,
      sym__elvis_seq,
    ACTIONS(51), 5,
      anon_sym_defwidget,
      anon_sym_defvar,
      anon_sym_deflisten,
      anon_sym_defpoll,
      anon_sym_defwindow,
    STATE(2), 6,
      sym__reserved,
      sym_reserved_widget,
      sym_reserved_defs,
      sym_string,
      sym_boolean,
      sym__any,
    ACTIONS(7), 23,
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
  [61] = 8,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_QMARK_COLON,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(65), 2,
      sym_identifier,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_defwidget,
      anon_sym_defvar,
      anon_sym_deflisten,
      anon_sym_defpoll,
      anon_sym_defwindow,
    STATE(60), 6,
      sym__reserved,
      sym_reserved_widget,
      sym_reserved_defs,
      sym_string,
      sym_boolean,
      sym__any,
    ACTIONS(7), 23,
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
  [119] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 2,
      sym_identifier,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_defwidget,
      anon_sym_defvar,
      anon_sym_deflisten,
      anon_sym_defpoll,
      anon_sym_defwindow,
    STATE(68), 6,
      sym__reserved,
      sym_reserved_widget,
      sym_reserved_defs,
      sym_string,
      sym_boolean,
      sym__any,
    ACTIONS(7), 23,
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
  [171] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(69), 2,
      sym_identifier,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_defwidget,
      anon_sym_defvar,
      anon_sym_deflisten,
      anon_sym_defpoll,
      anon_sym_defwindow,
    STATE(64), 6,
      sym__reserved,
      sym_reserved_widget,
      sym_reserved_defs,
      sym_string,
      sym_boolean,
      sym__any,
    ACTIONS(7), 23,
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
  [223] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(71), 2,
      sym_identifier,
      sym_number,
    ACTIONS(9), 5,
      anon_sym_defwidget,
      anon_sym_defvar,
      anon_sym_deflisten,
      anon_sym_defpoll,
      anon_sym_defwindow,
    STATE(65), 6,
      sym__reserved,
      sym_reserved_widget,
      sym_reserved_defs,
      sym_string,
      sym_boolean,
      sym__any,
    ACTIONS(7), 23,
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
  [275] = 2,
    ACTIONS(75), 2,
      anon_sym_QMARK_COLON,
      anon_sym_DQUOTE,
    ACTIONS(73), 33,
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
      anon_sym_defwidget,
      anon_sym_defvar,
      anon_sym_deflisten,
      anon_sym_defpoll,
      anon_sym_defwindow,
      anon_sym_QMARK,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_number,
  [315] = 5,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(27), 1,
      sym_reserved_widget,
    STATE(70), 1,
      sym_reserved_defs,
    ACTIONS(9), 5,
      anon_sym_defwidget,
      anon_sym_defvar,
      anon_sym_deflisten,
      anon_sym_defpoll,
      anon_sym_defwindow,
    ACTIONS(7), 23,
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
  [357] = 3,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(27), 1,
      sym_reserved_widget,
    ACTIONS(7), 23,
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
  [389] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 2,
      sym_identifier,
      sym_number,
    ACTIONS(79), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
    STATE(19), 5,
      sym_literal,
      sym_string,
      sym_boolean,
      sym_conditional,
      aux_sym_widget_props_repeat1,
  [416] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 2,
      sym_identifier,
      sym_number,
    ACTIONS(85), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
    STATE(17), 5,
      sym_literal,
      sym_string,
      sym_boolean,
      sym_conditional,
      aux_sym_widget_props_repeat1,
  [443] = 6,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(100), 2,
      sym_identifier,
      sym_number,
    ACTIONS(89), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
    STATE(19), 5,
      sym_literal,
      sym_string,
      sym_boolean,
      sym_conditional,
      aux_sym_widget_props_repeat1,
  [470] = 2,
    ACTIONS(35), 5,
      anon_sym_QMARK,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_number,
    ACTIONS(37), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_COLON,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [487] = 2,
    ACTIONS(43), 5,
      anon_sym_QMARK,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_number,
    ACTIONS(45), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_COLON,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [504] = 2,
    ACTIONS(39), 5,
      anon_sym_QMARK,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_number,
    ACTIONS(41), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_COLON,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [521] = 2,
    ACTIONS(105), 4,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_number,
    ACTIONS(103), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [535] = 2,
    ACTIONS(109), 4,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_number,
    ACTIONS(107), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [549] = 5,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    STATE(29), 3,
      sym_widget,
      sym_string,
      aux_sym_defwidget_repeat2,
  [567] = 5,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      anon_sym_COLON,
    STATE(45), 2,
      sym_widget_props,
      aux_sym_widget_repeat1,
    STATE(46), 2,
      sym_widget,
      aux_sym_widget_repeat2,
  [585] = 5,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_COLON,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(26), 2,
      sym_widget_props,
      aux_sym_widget_repeat1,
    STATE(48), 2,
      sym_widget,
      aux_sym_widget_repeat2,
  [603] = 3,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(35), 4,
      sym__statement,
      sym_widget,
      sym_defwidget,
      aux_sym_source_file_repeat1,
  [616] = 4,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(31), 3,
      sym_widget,
      sym_string,
      aux_sym_defwidget_repeat2,
  [631] = 4,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(31), 3,
      sym_widget,
      sym_string,
      aux_sym_defwidget_repeat2,
  [646] = 4,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 1,
      anon_sym_DQUOTE,
    STATE(31), 3,
      sym_widget,
      sym_string,
      aux_sym_defwidget_repeat2,
  [661] = 4,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(30), 3,
      sym_widget,
      sym_string,
      aux_sym_defwidget_repeat2,
  [676] = 4,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(34), 3,
      sym_widget,
      sym_string,
      aux_sym_defwidget_repeat2,
  [691] = 4,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(31), 3,
      sym_widget,
      sym_string,
      aux_sym_defwidget_repeat2,
  [706] = 3,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(35), 4,
      sym__statement,
      sym_widget,
      sym_defwidget,
      aux_sym_source_file_repeat1,
  [719] = 4,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      aux_sym_string_token1,
    ACTIONS(150), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(42), 2,
      sym_template_subsitution,
      aux_sym_string_repeat1,
  [733] = 4,
    ACTIONS(148), 1,
      aux_sym_string_token1,
    ACTIONS(150), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    STATE(42), 2,
      sym_template_subsitution,
      aux_sym_string_repeat1,
  [747] = 4,
    ACTIONS(150), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      aux_sym_string_token1,
    STATE(37), 2,
      sym_template_subsitution,
      aux_sym_string_repeat1,
  [761] = 2,
    ACTIONS(47), 1,
      anon_sym_QMARK,
    ACTIONS(49), 4,
      anon_sym_QMARK_COLON,
      anon_sym_COLON,
      anon_sym_RBRACE,
      sym_identifier,
  [771] = 4,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    ACTIONS(160), 1,
      anon_sym_QMARK,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(41), 2,
      sym_vars,
      aux_sym_defwidget_repeat1,
  [785] = 4,
    ACTIONS(164), 1,
      anon_sym_RBRACK,
    ACTIONS(166), 1,
      anon_sym_QMARK,
    ACTIONS(169), 1,
      sym_identifier,
    STATE(41), 2,
      sym_vars,
      aux_sym_defwidget_repeat1,
  [799] = 4,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      aux_sym_string_token1,
    ACTIONS(177), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(42), 2,
      sym_template_subsitution,
      aux_sym_string_repeat1,
  [813] = 4,
    ACTIONS(150), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      aux_sym_string_token1,
    STATE(36), 2,
      sym_template_subsitution,
      aux_sym_string_repeat1,
  [827] = 4,
    ACTIONS(160), 1,
      anon_sym_QMARK,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    STATE(40), 2,
      sym_vars,
      aux_sym_defwidget_repeat1,
  [841] = 3,
    ACTIONS(188), 1,
      anon_sym_COLON,
    ACTIONS(186), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    STATE(45), 2,
      sym_widget_props,
      aux_sym_widget_repeat1,
  [853] = 3,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(51), 2,
      sym_widget,
      aux_sym_widget_repeat2,
  [864] = 1,
    ACTIONS(193), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
  [871] = 3,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(51), 2,
      sym_widget,
      aux_sym_widget_repeat2,
  [882] = 1,
    ACTIONS(195), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
  [889] = 1,
    ACTIONS(197), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
  [896] = 3,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(51), 2,
      sym_widget,
      aux_sym_widget_repeat2,
  [907] = 1,
    ACTIONS(204), 3,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      sym_identifier,
  [913] = 1,
    ACTIONS(206), 3,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      sym_identifier,
  [919] = 1,
    ACTIONS(208), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_DOLLAR_LBRACE,
  [925] = 1,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [930] = 1,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [935] = 2,
    ACTIONS(61), 1,
      anon_sym_QMARK_COLON,
    ACTIONS(63), 1,
      anon_sym_QMARK,
  [942] = 1,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [947] = 1,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [952] = 2,
    ACTIONS(218), 1,
      anon_sym_QMARK_COLON,
    ACTIONS(220), 1,
      anon_sym_QMARK,
  [959] = 1,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [964] = 2,
    ACTIONS(224), 1,
      anon_sym_QMARK_COLON,
    ACTIONS(226), 1,
      anon_sym_QMARK,
  [971] = 1,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
  [975] = 1,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
  [979] = 1,
    ACTIONS(232), 1,
      anon_sym_COLON,
  [983] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [987] = 1,
    ACTIONS(236), 1,
      sym_identifier,
  [991] = 1,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
  [995] = 1,
    ACTIONS(240), 1,
      sym_identifier,
  [999] = 1,
    ACTIONS(242), 1,
      sym_identifier,
  [1003] = 1,
    ACTIONS(244), 1,
      sym_identifier,
  [1007] = 1,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 61,
  [SMALL_STATE(11)] = 119,
  [SMALL_STATE(12)] = 171,
  [SMALL_STATE(13)] = 223,
  [SMALL_STATE(14)] = 275,
  [SMALL_STATE(15)] = 315,
  [SMALL_STATE(16)] = 357,
  [SMALL_STATE(17)] = 389,
  [SMALL_STATE(18)] = 416,
  [SMALL_STATE(19)] = 443,
  [SMALL_STATE(20)] = 470,
  [SMALL_STATE(21)] = 487,
  [SMALL_STATE(22)] = 504,
  [SMALL_STATE(23)] = 521,
  [SMALL_STATE(24)] = 535,
  [SMALL_STATE(25)] = 549,
  [SMALL_STATE(26)] = 567,
  [SMALL_STATE(27)] = 585,
  [SMALL_STATE(28)] = 603,
  [SMALL_STATE(29)] = 616,
  [SMALL_STATE(30)] = 631,
  [SMALL_STATE(31)] = 646,
  [SMALL_STATE(32)] = 661,
  [SMALL_STATE(33)] = 676,
  [SMALL_STATE(34)] = 691,
  [SMALL_STATE(35)] = 706,
  [SMALL_STATE(36)] = 719,
  [SMALL_STATE(37)] = 733,
  [SMALL_STATE(38)] = 747,
  [SMALL_STATE(39)] = 761,
  [SMALL_STATE(40)] = 771,
  [SMALL_STATE(41)] = 785,
  [SMALL_STATE(42)] = 799,
  [SMALL_STATE(43)] = 813,
  [SMALL_STATE(44)] = 827,
  [SMALL_STATE(45)] = 841,
  [SMALL_STATE(46)] = 853,
  [SMALL_STATE(47)] = 864,
  [SMALL_STATE(48)] = 871,
  [SMALL_STATE(49)] = 882,
  [SMALL_STATE(50)] = 889,
  [SMALL_STATE(51)] = 896,
  [SMALL_STATE(52)] = 907,
  [SMALL_STATE(53)] = 913,
  [SMALL_STATE(54)] = 919,
  [SMALL_STATE(55)] = 925,
  [SMALL_STATE(56)] = 930,
  [SMALL_STATE(57)] = 935,
  [SMALL_STATE(58)] = 942,
  [SMALL_STATE(59)] = 947,
  [SMALL_STATE(60)] = 952,
  [SMALL_STATE(61)] = 959,
  [SMALL_STATE(62)] = 964,
  [SMALL_STATE(63)] = 971,
  [SMALL_STATE(64)] = 975,
  [SMALL_STATE(65)] = 979,
  [SMALL_STATE(66)] = 983,
  [SMALL_STATE(67)] = 987,
  [SMALL_STATE(68)] = 991,
  [SMALL_STATE(69)] = 995,
  [SMALL_STATE(70)] = 999,
  [SMALL_STATE(71)] = 1003,
  [SMALL_STATE(72)] = 1007,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved_widget, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved_widget, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved_defs, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved_defs, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operators, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operators, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget_props, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget_props, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_widget_props_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_widget_props_repeat1, 2), SHIFT_REPEAT(9),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_widget_props_repeat1, 2), SHIFT_REPEAT(43),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_widget_props_repeat1, 2), SHIFT_REPEAT(21),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_widget_props_repeat1, 2), SHIFT_REPEAT(19),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat2, 2), SHIFT_REPEAT(16),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat2, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat2, 2), SHIFT_REPEAT(43),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat1, 2), SHIFT_REPEAT(67),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defwidget_repeat1, 2), SHIFT_REPEAT(52),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(42),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(71),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_widget_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_widget_repeat1, 2), SHIFT_REPEAT(69),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_widget, 5),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_widget_repeat2, 2), SHIFT_REPEAT(16),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_widget_repeat2, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars, 1, .production_id = 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars, 2, .production_id = 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_subsitution, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defwidget, 8, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defwidget, 5, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defwidget, 7, .production_id = 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defwidget, 4, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__conditional, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__conditional, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defwidget, 6, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__elvis_seq, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [234] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_seq, 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
