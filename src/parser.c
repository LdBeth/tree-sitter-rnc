#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_namespace = 1,
  anon_sym_EQ = 2,
  anon_sym_default = 3,
  anon_sym_datatypes = 4,
  anon_sym_PIPE_EQ = 5,
  anon_sym_AMP_EQ = 6,
  anon_sym_element = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_attribute = 10,
  anon_sym_list = 11,
  anon_sym_mixed = 12,
  anon_sym_parent = 13,
  anon_sym_DASH = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_STAR = 17,
  anon_sym_PLUS = 18,
  anon_sym_QMARK = 19,
  anon_sym_PIPE = 20,
  anon_sym_COMMA = 21,
  anon_sym_AMP = 22,
  anon_sym_inherit = 23,
  anon_sym_TILDE = 24,
  sym_literalSegment = 25,
  anon_sym_COLON = 26,
  anon_sym_string = 27,
  anon_sym_token = 28,
  anon_sym_BSLASH = 29,
  anon_sym_COLON_STAR = 30,
  sym__NCName = 31,
  anon_sym_div = 32,
  anon_sym_empty = 33,
  anon_sym_external = 34,
  anon_sym_grammar = 35,
  anon_sym_include = 36,
  anon_sym_notAllowed = 37,
  anon_sym_start = 38,
  anon_sym_text = 39,
  sym_comment = 40,
  sym_source_file = 41,
  sym_declares = 42,
  sym__grammarContent = 43,
  sym_define = 44,
  sym_pattern = 45,
  sym__primaryPattern = 46,
  sym_param = 47,
  sym__repeatedPattern = 48,
  sym__particle = 49,
  sym__patternChoice = 50,
  sym__patternGroup = 51,
  sym__patternInterleave = 52,
  sym__namespaceURILiteral = 53,
  sym_literal = 54,
  sym_nameClass = 55,
  sym__simpleNameClass = 56,
  sym__nameClassChoice = 57,
  sym_datatypeName = 58,
  sym_identifier = 59,
  sym_name = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_source_file_repeat2 = 62,
  aux_sym__primaryPattern_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_namespace] = "namespace",
  [anon_sym_EQ] = "=",
  [anon_sym_default] = "default",
  [anon_sym_datatypes] = "datatypes",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_element] = "element",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_attribute] = "attribute",
  [anon_sym_list] = "list",
  [anon_sym_mixed] = "mixed",
  [anon_sym_parent] = "parent",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PIPE] = "|",
  [anon_sym_COMMA] = ",",
  [anon_sym_AMP] = "&",
  [anon_sym_inherit] = "inherit",
  [anon_sym_TILDE] = "~",
  [sym_literalSegment] = "literalSegment",
  [anon_sym_COLON] = ":",
  [anon_sym_string] = "string",
  [anon_sym_token] = "token",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_COLON_STAR] = ":*",
  [sym__NCName] = "_NCName",
  [anon_sym_div] = "div",
  [anon_sym_empty] = "empty",
  [anon_sym_external] = "external",
  [anon_sym_grammar] = "grammar",
  [anon_sym_include] = "include",
  [anon_sym_notAllowed] = "notAllowed",
  [anon_sym_start] = "start",
  [anon_sym_text] = "text",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_declares] = "declares",
  [sym__grammarContent] = "_grammarContent",
  [sym_define] = "define",
  [sym_pattern] = "pattern",
  [sym__primaryPattern] = "_primaryPattern",
  [sym_param] = "param",
  [sym__repeatedPattern] = "_repeatedPattern",
  [sym__particle] = "_particle",
  [sym__patternChoice] = "_patternChoice",
  [sym__patternGroup] = "_patternGroup",
  [sym__patternInterleave] = "_patternInterleave",
  [sym__namespaceURILiteral] = "_namespaceURILiteral",
  [sym_literal] = "literal",
  [sym_nameClass] = "nameClass",
  [sym__simpleNameClass] = "_simpleNameClass",
  [sym__nameClassChoice] = "_nameClassChoice",
  [sym_datatypeName] = "datatypeName",
  [sym_identifier] = "identifier",
  [sym_name] = "name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym__primaryPattern_repeat1] = "_primaryPattern_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_datatypes] = anon_sym_datatypes,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_element] = anon_sym_element,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_mixed] = anon_sym_mixed,
  [anon_sym_parent] = anon_sym_parent,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_inherit] = anon_sym_inherit,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [sym_literalSegment] = sym_literalSegment,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_token] = anon_sym_token,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_COLON_STAR] = anon_sym_COLON_STAR,
  [sym__NCName] = sym__NCName,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_empty] = anon_sym_empty,
  [anon_sym_external] = anon_sym_external,
  [anon_sym_grammar] = anon_sym_grammar,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_notAllowed] = anon_sym_notAllowed,
  [anon_sym_start] = anon_sym_start,
  [anon_sym_text] = anon_sym_text,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_declares] = sym_declares,
  [sym__grammarContent] = sym__grammarContent,
  [sym_define] = sym_define,
  [sym_pattern] = sym_pattern,
  [sym__primaryPattern] = sym__primaryPattern,
  [sym_param] = sym_param,
  [sym__repeatedPattern] = sym__repeatedPattern,
  [sym__particle] = sym__particle,
  [sym__patternChoice] = sym__patternChoice,
  [sym__patternGroup] = sym__patternGroup,
  [sym__patternInterleave] = sym__patternInterleave,
  [sym__namespaceURILiteral] = sym__namespaceURILiteral,
  [sym_literal] = sym_literal,
  [sym_nameClass] = sym_nameClass,
  [sym__simpleNameClass] = sym__simpleNameClass,
  [sym__nameClassChoice] = sym__nameClassChoice,
  [sym_datatypeName] = sym_datatypeName,
  [sym_identifier] = sym_identifier,
  [sym_name] = sym_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym__primaryPattern_repeat1] = aux_sym__primaryPattern_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datatypes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_element] = {
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
  [anon_sym_attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mixed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inherit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_literalSegment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_token] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym__NCName] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grammar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notAllowed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_declares] = {
    .visible = true,
    .named = true,
  },
  [sym__grammarContent] = {
    .visible = false,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__primaryPattern] = {
    .visible = false,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym__repeatedPattern] = {
    .visible = false,
    .named = true,
  },
  [sym__particle] = {
    .visible = false,
    .named = true,
  },
  [sym__patternChoice] = {
    .visible = false,
    .named = true,
  },
  [sym__patternGroup] = {
    .visible = false,
    .named = true,
  },
  [sym__patternInterleave] = {
    .visible = false,
    .named = true,
  },
  [sym__namespaceURILiteral] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_nameClass] = {
    .visible = true,
    .named = true,
  },
  [sym__simpleNameClass] = {
    .visible = false,
    .named = true,
  },
  [sym__nameClassChoice] = {
    .visible = false,
    .named = true,
  },
  [sym_datatypeName] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__primaryPattern_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 0},
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
  [24] = 13,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 16,
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
  [56] = 13,
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
  [68] = 16,
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
  [80] = 79,
  [81] = 79,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(100);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'g') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '}') ADVANCE(113);
      if (lookahead == '~') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'm') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(143);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(6);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'x') ADVANCE(83);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 92:
      if (lookahead == 'v') ADVANCE(199);
      END_STATE();
    case 93:
      if (lookahead == 'w') ADVANCE(29);
      END_STATE();
    case 94:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 95:
      if (lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 96:
      if (lookahead == 'y') ADVANCE(200);
      END_STATE();
    case 97:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 98:
      if (eof) ADVANCE(100);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(125);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == ',') ADVANCE(129);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '?') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '}') ADVANCE(113);
      if (lookahead == '~') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 99:
      if (eof) ADVANCE(100);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'm') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'p') ADVANCE(143);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '~') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(99)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_datatypes);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_datatypes);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_element);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_element);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_attribute);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_mixed);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_mixed);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_parent);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_inherit);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_literalSegment);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '*') ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_token);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_token);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_COLON_STAR);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'b') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'c') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'g') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'k') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'm') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'p') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'r') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'u') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'x') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == 'y') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__NCName);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_grammar);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_notAllowed);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 99},
  [2] = {.lex_state = 99},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 98},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 98},
  [12] = {.lex_state = 99},
  [13] = {.lex_state = 99},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 99},
  [17] = {.lex_state = 99},
  [18] = {.lex_state = 99},
  [19] = {.lex_state = 98},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 98},
  [22] = {.lex_state = 98},
  [23] = {.lex_state = 98},
  [24] = {.lex_state = 98},
  [25] = {.lex_state = 98},
  [26] = {.lex_state = 98},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 98},
  [29] = {.lex_state = 98},
  [30] = {.lex_state = 98},
  [31] = {.lex_state = 98},
  [32] = {.lex_state = 98},
  [33] = {.lex_state = 98},
  [34] = {.lex_state = 98},
  [35] = {.lex_state = 98},
  [36] = {.lex_state = 98},
  [37] = {.lex_state = 98},
  [38] = {.lex_state = 98},
  [39] = {.lex_state = 98},
  [40] = {.lex_state = 98},
  [41] = {.lex_state = 98},
  [42] = {.lex_state = 98},
  [43] = {.lex_state = 98},
  [44] = {.lex_state = 98},
  [45] = {.lex_state = 98},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 98},
  [48] = {.lex_state = 98},
  [49] = {.lex_state = 98},
  [50] = {.lex_state = 98},
  [51] = {.lex_state = 98},
  [52] = {.lex_state = 98},
  [53] = {.lex_state = 98},
  [54] = {.lex_state = 98},
  [55] = {.lex_state = 98},
  [56] = {.lex_state = 98},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 98},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 98},
  [66] = {.lex_state = 98},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 98},
  [69] = {.lex_state = 98},
  [70] = {.lex_state = 98},
  [71] = {.lex_state = 98},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 98},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 98},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 98},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 98},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_datatypes] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_element] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_mixed] = ACTIONS(1),
    [anon_sym_parent] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_inherit] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_literalSegment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_token] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_COLON_STAR] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [anon_sym_grammar] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_notAllowed] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(90),
    [sym_declares] = STATE(2),
    [sym__grammarContent] = STATE(41),
    [sym_define] = STATE(41),
    [sym_pattern] = STATE(88),
    [sym__primaryPattern] = STATE(34),
    [sym__repeatedPattern] = STATE(38),
    [sym__particle] = STATE(64),
    [sym__patternChoice] = STATE(52),
    [sym__patternGroup] = STATE(52),
    [sym__patternInterleave] = STATE(52),
    [sym_literal] = STATE(34),
    [sym_datatypeName] = STATE(19),
    [sym_identifier] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_namespace] = ACTIONS(7),
    [anon_sym_default] = ACTIONS(9),
    [anon_sym_datatypes] = ACTIONS(11),
    [anon_sym_element] = ACTIONS(13),
    [anon_sym_attribute] = ACTIONS(13),
    [anon_sym_list] = ACTIONS(15),
    [anon_sym_mixed] = ACTIONS(15),
    [anon_sym_parent] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [sym_literalSegment] = ACTIONS(21),
    [anon_sym_string] = ACTIONS(23),
    [anon_sym_token] = ACTIONS(23),
    [anon_sym_BSLASH] = ACTIONS(25),
    [sym__NCName] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_namespace,
    ACTIONS(9), 1,
      anon_sym_default,
    ACTIONS(11), 1,
      anon_sym_datatypes,
    ACTIONS(17), 1,
      anon_sym_parent,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_literalSegment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__NCName,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_datatypeName,
    STATE(27), 1,
      sym_identifier,
    STATE(38), 1,
      sym__repeatedPattern,
    STATE(64), 1,
      sym__particle,
    STATE(84), 1,
      sym_pattern,
    ACTIONS(13), 2,
      anon_sym_element,
      anon_sym_attribute,
    ACTIONS(15), 2,
      anon_sym_list,
      anon_sym_mixed,
    ACTIONS(23), 2,
      anon_sym_string,
      anon_sym_token,
    STATE(12), 2,
      sym_declares,
      aux_sym_source_file_repeat1,
    STATE(34), 2,
      sym__primaryPattern,
      sym_literal,
    STATE(44), 3,
      sym__grammarContent,
      sym_define,
      aux_sym_source_file_repeat2,
    STATE(52), 3,
      sym__patternChoice,
      sym__patternGroup,
      sym__patternInterleave,
  [76] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_parent,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_literalSegment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__NCName,
    STATE(19), 1,
      sym_datatypeName,
    STATE(26), 1,
      sym_identifier,
    STATE(38), 1,
      sym__repeatedPattern,
    STATE(64), 1,
      sym__particle,
    STATE(75), 1,
      sym_pattern,
    ACTIONS(13), 2,
      anon_sym_element,
      anon_sym_attribute,
    ACTIONS(15), 2,
      anon_sym_list,
      anon_sym_mixed,
    ACTIONS(23), 2,
      anon_sym_string,
      anon_sym_token,
    STATE(34), 2,
      sym__primaryPattern,
      sym_literal,
    STATE(52), 3,
      sym__patternChoice,
      sym__patternGroup,
      sym__patternInterleave,
  [131] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_parent,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_literalSegment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__NCName,
    STATE(19), 1,
      sym_datatypeName,
    STATE(26), 1,
      sym_identifier,
    STATE(38), 1,
      sym__repeatedPattern,
    STATE(64), 1,
      sym__particle,
    STATE(96), 1,
      sym_pattern,
    ACTIONS(13), 2,
      anon_sym_element,
      anon_sym_attribute,
    ACTIONS(15), 2,
      anon_sym_list,
      anon_sym_mixed,
    ACTIONS(23), 2,
      anon_sym_string,
      anon_sym_token,
    STATE(34), 2,
      sym__primaryPattern,
      sym_literal,
    STATE(52), 3,
      sym__patternChoice,
      sym__patternGroup,
      sym__patternInterleave,
  [186] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_parent,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_literalSegment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__NCName,
    STATE(19), 1,
      sym_datatypeName,
    STATE(26), 1,
      sym_identifier,
    STATE(38), 1,
      sym__repeatedPattern,
    STATE(64), 1,
      sym__particle,
    STATE(87), 1,
      sym_pattern,
    ACTIONS(13), 2,
      anon_sym_element,
      anon_sym_attribute,
    ACTIONS(15), 2,
      anon_sym_list,
      anon_sym_mixed,
    ACTIONS(23), 2,
      anon_sym_string,
      anon_sym_token,
    STATE(34), 2,
      sym__primaryPattern,
      sym_literal,
    STATE(52), 3,
      sym__patternChoice,
      sym__patternGroup,
      sym__patternInterleave,
  [241] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_parent,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_literalSegment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__NCName,
    STATE(19), 1,
      sym_datatypeName,
    STATE(26), 1,
      sym_identifier,
    STATE(38), 1,
      sym__repeatedPattern,
    STATE(64), 1,
      sym__particle,
    STATE(98), 1,
      sym_pattern,
    ACTIONS(13), 2,
      anon_sym_element,
      anon_sym_attribute,
    ACTIONS(15), 2,
      anon_sym_list,
      anon_sym_mixed,
    ACTIONS(23), 2,
      anon_sym_string,
      anon_sym_token,
    STATE(34), 2,
      sym__primaryPattern,
      sym_literal,
    STATE(52), 3,
      sym__patternChoice,
      sym__patternGroup,
      sym__patternInterleave,
  [296] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_parent,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_literalSegment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__NCName,
    STATE(19), 1,
      sym_datatypeName,
    STATE(26), 1,
      sym_identifier,
    STATE(53), 1,
      sym__patternInterleave,
    ACTIONS(13), 2,
      anon_sym_element,
      anon_sym_attribute,
    ACTIONS(15), 2,
      anon_sym_list,
      anon_sym_mixed,
    ACTIONS(23), 2,
      anon_sym_string,
      anon_sym_token,
    STATE(30), 2,
      sym__primaryPattern,
      sym_literal,
    STATE(49), 2,
      sym__repeatedPattern,
      sym__particle,
  [344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(31), 16,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_COMMA,
      sym_literalSegment,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__NCName,
  [370] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_parent,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_literalSegment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__NCName,
    STATE(19), 1,
      sym_datatypeName,
    STATE(26), 1,
      sym_identifier,
    STATE(54), 1,
      sym__patternChoice,
    ACTIONS(13), 2,
      anon_sym_element,
      anon_sym_attribute,
    ACTIONS(15), 2,
      anon_sym_list,
      anon_sym_mixed,
    ACTIONS(23), 2,
      anon_sym_string,
      anon_sym_token,
    STATE(30), 2,
      sym__primaryPattern,
      sym_literal,
    STATE(50), 2,
      sym__repeatedPattern,
      sym__particle,
  [418] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_parent,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_literalSegment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__NCName,
    STATE(19), 1,
      sym_datatypeName,
    STATE(26), 1,
      sym_identifier,
    STATE(55), 1,
      sym__patternGroup,
    ACTIONS(13), 2,
      anon_sym_element,
      anon_sym_attribute,
    ACTIONS(15), 2,
      anon_sym_list,
      anon_sym_mixed,
    ACTIONS(23), 2,
      anon_sym_string,
      anon_sym_token,
    STATE(30), 2,
      sym__primaryPattern,
      sym_literal,
    STATE(51), 2,
      sym__repeatedPattern,
      sym__particle,
  [466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(35), 16,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_COMMA,
      sym_literalSegment,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__NCName,
  [492] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_namespace,
    ACTIONS(44), 1,
      anon_sym_default,
    ACTIONS(47), 1,
      anon_sym_datatypes,
    STATE(12), 2,
      sym_declares,
      aux_sym_source_file_repeat1,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_literalSegment,
      anon_sym_BSLASH,
    ACTIONS(50), 8,
      anon_sym_element,
      anon_sym_attribute,
      anon_sym_list,
      anon_sym_mixed,
      anon_sym_parent,
      anon_sym_string,
      anon_sym_token,
      sym__NCName,
  [525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_TILDE,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_literalSegment,
      anon_sym_BSLASH,
    ACTIONS(54), 11,
      anon_sym_namespace,
      anon_sym_default,
      anon_sym_datatypes,
      anon_sym_element,
      anon_sym_attribute,
      anon_sym_list,
      anon_sym_mixed,
      anon_sym_parent,
      anon_sym_string,
      anon_sym_token,
      sym__NCName,
  [551] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_parent,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_literalSegment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__NCName,
    STATE(19), 1,
      sym_datatypeName,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(13), 2,
      anon_sym_element,
      anon_sym_attribute,
    ACTIONS(15), 2,
      anon_sym_list,
      anon_sym_mixed,
    ACTIONS(23), 2,
      anon_sym_string,
      anon_sym_token,
    STATE(31), 2,
      sym__primaryPattern,
      sym_literal,
  [592] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_parent,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_literalSegment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__NCName,
    STATE(19), 1,
      sym_datatypeName,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(13), 2,
      anon_sym_element,
      anon_sym_attribute,
    ACTIONS(15), 2,
      anon_sym_list,
      anon_sym_mixed,
    ACTIONS(23), 2,
      anon_sym_string,
      anon_sym_token,
    STATE(35), 2,
      sym__primaryPattern,
      sym_literal,
  [633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_literalSegment,
      anon_sym_BSLASH,
    ACTIONS(60), 11,
      anon_sym_namespace,
      anon_sym_default,
      anon_sym_datatypes,
      anon_sym_element,
      anon_sym_attribute,
      anon_sym_list,
      anon_sym_mixed,
      anon_sym_parent,
      anon_sym_string,
      anon_sym_token,
      sym__NCName,
  [656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_literalSegment,
      anon_sym_BSLASH,
    ACTIONS(64), 11,
      anon_sym_namespace,
      anon_sym_default,
      anon_sym_datatypes,
      anon_sym_element,
      anon_sym_attribute,
      anon_sym_list,
      anon_sym_mixed,
      anon_sym_parent,
      anon_sym_string,
      anon_sym_token,
      sym__NCName,
  [679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_literalSegment,
      anon_sym_BSLASH,
    ACTIONS(68), 11,
      anon_sym_namespace,
      anon_sym_default,
      anon_sym_datatypes,
      anon_sym_element,
      anon_sym_attribute,
      anon_sym_list,
      anon_sym_mixed,
      anon_sym_parent,
      anon_sym_string,
      anon_sym_token,
      sym__NCName,
  [702] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_literalSegment,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_DASH,
    STATE(33), 1,
      sym_literal,
    ACTIONS(70), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_BSLASH,
      sym__NCName,
  [731] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_parent,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_literalSegment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__NCName,
    STATE(19), 1,
      sym_datatypeName,
    STATE(26), 1,
      sym_identifier,
    ACTIONS(13), 2,
      anon_sym_element,
      anon_sym_attribute,
    ACTIONS(15), 2,
      anon_sym_list,
      anon_sym_mixed,
    ACTIONS(23), 2,
      anon_sym_string,
      anon_sym_token,
    STATE(29), 2,
      sym__primaryPattern,
      sym_literal,
  [772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      sym_literalSegment,
      anon_sym_BSLASH,
      sym__NCName,
  [792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      sym_literalSegment,
      anon_sym_BSLASH,
      sym__NCName,
  [812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(80), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_BSLASH,
      sym__NCName,
  [832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_TILDE,
    ACTIONS(52), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_BSLASH,
      sym__NCName,
  [852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_DASH,
    ACTIONS(86), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_BSLASH,
      sym__NCName,
  [872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_COLON,
    ACTIONS(70), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_BSLASH,
      sym__NCName,
  [892] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_COLON,
    ACTIONS(94), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(92), 3,
      anon_sym_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_COMMA,
  [915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_BSLASH,
      sym__NCName,
  [932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_BSLASH,
      sym__NCName,
  [949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(96), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_BSLASH,
      sym__NCName,
  [968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_BSLASH,
      sym__NCName,
  [985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_BSLASH,
      sym__NCName,
  [1002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_BSLASH,
      sym__NCName,
  [1019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 3,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
    ACTIONS(98), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__NCName,
  [1040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 11,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_BSLASH,
      sym__NCName,
  [1057] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_STAR,
    ACTIONS(112), 1,
      anon_sym_BSLASH,
    ACTIONS(114), 1,
      sym__NCName,
    STATE(63), 1,
      sym_name,
    STATE(67), 1,
      sym__simpleNameClass,
    STATE(77), 1,
      sym_nameClass,
    STATE(82), 1,
      sym__nameClassChoice,
  [1085] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_STAR,
    ACTIONS(112), 1,
      anon_sym_BSLASH,
    ACTIONS(114), 1,
      sym__NCName,
    STATE(63), 1,
      sym_name,
    STATE(67), 1,
      sym__simpleNameClass,
    STATE(82), 1,
      sym__nameClassChoice,
    STATE(92), 1,
      sym_nameClass,
  [1113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 3,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__NCName,
  [1129] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_STAR,
    ACTIONS(112), 1,
      anon_sym_BSLASH,
    ACTIONS(114), 1,
      sym__NCName,
    STATE(63), 1,
      sym_name,
    STATE(67), 1,
      sym__simpleNameClass,
    STATE(82), 1,
      sym__nameClassChoice,
    STATE(97), 1,
      sym_nameClass,
  [1157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_BSLASH,
      sym__NCName,
  [1171] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      sym__NCName,
    STATE(72), 1,
      sym_identifier,
    STATE(43), 3,
      sym__grammarContent,
      sym_define,
      aux_sym_source_file_repeat2,
  [1192] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_STAR,
    ACTIONS(112), 1,
      anon_sym_BSLASH,
    ACTIONS(114), 1,
      sym__NCName,
    STATE(76), 1,
      sym__nameClassChoice,
    STATE(73), 2,
      sym__simpleNameClass,
      sym_name,
  [1215] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      anon_sym_BSLASH,
    ACTIONS(125), 1,
      sym__NCName,
    STATE(72), 1,
      sym_identifier,
    STATE(43), 3,
      sym__grammarContent,
      sym_define,
      aux_sym_source_file_repeat2,
  [1236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(118), 1,
      sym__NCName,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_identifier,
    STATE(43), 3,
      sym__grammarContent,
      sym_define,
      aux_sym_source_file_repeat2,
  [1257] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(118), 1,
      sym__NCName,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_identifier,
    STATE(48), 2,
      sym_param,
      aux_sym__primaryPattern_repeat1,
  [1277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_COLON,
    ACTIONS(136), 1,
      anon_sym_COLON_STAR,
    ACTIONS(132), 4,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1293] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(118), 1,
      sym__NCName,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      sym_identifier,
    STATE(45), 2,
      sym_param,
      aux_sym__primaryPattern_repeat1,
  [1313] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      anon_sym_BSLASH,
    ACTIONS(145), 1,
      sym__NCName,
    STATE(86), 1,
      sym_identifier,
    STATE(48), 2,
      sym_param,
      aux_sym__primaryPattern_repeat1,
  [1333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_AMP,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__NCName,
  [1347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_PIPE,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__NCName,
  [1361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__NCName,
  [1375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__NCName,
  [1386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__NCName,
  [1397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__NCName,
  [1408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      sym__NCName,
  [1419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_TILDE,
    ACTIONS(52), 3,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym__NCName,
  [1431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 4,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_inherit,
    ACTIONS(166), 1,
      sym_literalSegment,
    STATE(18), 2,
      sym__namespaceURILiteral,
      sym_literal,
  [1455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_literalSegment,
    ACTIONS(168), 1,
      anon_sym_inherit,
    STATE(17), 2,
      sym__namespaceURILiteral,
      sym_literal,
  [1469] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(118), 1,
      sym__NCName,
    ACTIONS(170), 1,
      anon_sym_EQ,
    STATE(99), 1,
      sym_identifier,
  [1485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 4,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 4,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DASH,
    ACTIONS(174), 3,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_PIPE,
    ACTIONS(158), 1,
      anon_sym_COMMA,
  [1530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(118), 1,
      sym__NCName,
    STATE(93), 1,
      sym_identifier,
  [1543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(118), 1,
      sym__NCName,
    STATE(89), 1,
      sym_identifier,
  [1556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_PIPE,
    ACTIONS(178), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 3,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym__NCName,
  [1576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(118), 1,
      sym__NCName,
    STATE(22), 1,
      sym_identifier,
  [1589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(118), 1,
      sym__NCName,
    STATE(33), 1,
      sym_identifier,
  [1602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym__NCName,
  [1611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      anon_sym_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_AMP_EQ,
  [1620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_PIPE,
    ACTIONS(184), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      sym__NCName,
  [1649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_literalSegment,
    STATE(17), 1,
      sym_literal,
  [1675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_literalSegment,
    STATE(68), 1,
      sym_literal,
  [1685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_literalSegment,
    STATE(16), 1,
      sym_literal,
  [1695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_literalSegment,
    STATE(28), 1,
      sym_literal,
  [1705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_literalSegment,
    STATE(71), 1,
      sym_literal,
  [1723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [1730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym__NCName,
  [1737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_EQ,
  [1744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
  [1751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
  [1758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_EQ,
  [1765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
  [1772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym__NCName,
  [1779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
  [1786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_EQ,
  [1793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
  [1800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym__NCName,
  [1807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
  [1814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
  [1821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
  [1828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_EQ,
  [1835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_namespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 76,
  [SMALL_STATE(4)] = 131,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 241,
  [SMALL_STATE(7)] = 296,
  [SMALL_STATE(8)] = 344,
  [SMALL_STATE(9)] = 370,
  [SMALL_STATE(10)] = 418,
  [SMALL_STATE(11)] = 466,
  [SMALL_STATE(12)] = 492,
  [SMALL_STATE(13)] = 525,
  [SMALL_STATE(14)] = 551,
  [SMALL_STATE(15)] = 592,
  [SMALL_STATE(16)] = 633,
  [SMALL_STATE(17)] = 656,
  [SMALL_STATE(18)] = 679,
  [SMALL_STATE(19)] = 702,
  [SMALL_STATE(20)] = 731,
  [SMALL_STATE(21)] = 772,
  [SMALL_STATE(22)] = 792,
  [SMALL_STATE(23)] = 812,
  [SMALL_STATE(24)] = 832,
  [SMALL_STATE(25)] = 852,
  [SMALL_STATE(26)] = 872,
  [SMALL_STATE(27)] = 892,
  [SMALL_STATE(28)] = 915,
  [SMALL_STATE(29)] = 932,
  [SMALL_STATE(30)] = 949,
  [SMALL_STATE(31)] = 968,
  [SMALL_STATE(32)] = 985,
  [SMALL_STATE(33)] = 1002,
  [SMALL_STATE(34)] = 1019,
  [SMALL_STATE(35)] = 1040,
  [SMALL_STATE(36)] = 1057,
  [SMALL_STATE(37)] = 1085,
  [SMALL_STATE(38)] = 1113,
  [SMALL_STATE(39)] = 1129,
  [SMALL_STATE(40)] = 1157,
  [SMALL_STATE(41)] = 1171,
  [SMALL_STATE(42)] = 1192,
  [SMALL_STATE(43)] = 1215,
  [SMALL_STATE(44)] = 1236,
  [SMALL_STATE(45)] = 1257,
  [SMALL_STATE(46)] = 1277,
  [SMALL_STATE(47)] = 1293,
  [SMALL_STATE(48)] = 1313,
  [SMALL_STATE(49)] = 1333,
  [SMALL_STATE(50)] = 1347,
  [SMALL_STATE(51)] = 1361,
  [SMALL_STATE(52)] = 1375,
  [SMALL_STATE(53)] = 1386,
  [SMALL_STATE(54)] = 1397,
  [SMALL_STATE(55)] = 1408,
  [SMALL_STATE(56)] = 1419,
  [SMALL_STATE(57)] = 1431,
  [SMALL_STATE(58)] = 1441,
  [SMALL_STATE(59)] = 1455,
  [SMALL_STATE(60)] = 1469,
  [SMALL_STATE(61)] = 1485,
  [SMALL_STATE(62)] = 1495,
  [SMALL_STATE(63)] = 1505,
  [SMALL_STATE(64)] = 1517,
  [SMALL_STATE(65)] = 1530,
  [SMALL_STATE(66)] = 1543,
  [SMALL_STATE(67)] = 1556,
  [SMALL_STATE(68)] = 1567,
  [SMALL_STATE(69)] = 1576,
  [SMALL_STATE(70)] = 1589,
  [SMALL_STATE(71)] = 1602,
  [SMALL_STATE(72)] = 1611,
  [SMALL_STATE(73)] = 1620,
  [SMALL_STATE(74)] = 1631,
  [SMALL_STATE(75)] = 1640,
  [SMALL_STATE(76)] = 1649,
  [SMALL_STATE(77)] = 1657,
  [SMALL_STATE(78)] = 1665,
  [SMALL_STATE(79)] = 1675,
  [SMALL_STATE(80)] = 1685,
  [SMALL_STATE(81)] = 1695,
  [SMALL_STATE(82)] = 1705,
  [SMALL_STATE(83)] = 1713,
  [SMALL_STATE(84)] = 1723,
  [SMALL_STATE(85)] = 1730,
  [SMALL_STATE(86)] = 1737,
  [SMALL_STATE(87)] = 1744,
  [SMALL_STATE(88)] = 1751,
  [SMALL_STATE(89)] = 1758,
  [SMALL_STATE(90)] = 1765,
  [SMALL_STATE(91)] = 1772,
  [SMALL_STATE(92)] = 1779,
  [SMALL_STATE(93)] = 1786,
  [SMALL_STATE(94)] = 1793,
  [SMALL_STATE(95)] = 1800,
  [SMALL_STATE(96)] = 1807,
  [SMALL_STATE(97)] = 1814,
  [SMALL_STATE(98)] = 1821,
  [SMALL_STATE(99)] = 1828,
  [SMALL_STATE(100)] = 1835,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declares, 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declares, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declares, 5),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declares, 5),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primaryPattern, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatypeName, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatypeName, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primaryPattern, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primaryPattern, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primaryPattern, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__particle, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primaryPattern, 6),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primaryPattern, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primaryPattern, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeatedPattern, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(91),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(11),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__primaryPattern_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__primaryPattern_repeat1, 2), SHIFT_REPEAT(91),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__primaryPattern_repeat1, 2), SHIFT_REPEAT(11),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__patternInterleave, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__patternChoice, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__patternGroup, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simpleNameClass, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nameClass, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nameClassChoice, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simpleNameClass, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nameClass, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rnc(void) {
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
