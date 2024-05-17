#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_set = 1,
  anon_sym_to = 2,
  sym_global_identifier = 3,
  sym_element_identifier = 4,
  sym_local_identifier = 5,
  sym_num_literal = 6,
  sym_string_literal = 7,
  sym_class_literal = 8,
  sym_id_literal = 9,
  sym_query_literal = 10,
  sym_attribute_literal = 11,
  sym_style_literal = 12,
  sym_source_file = 13,
  sym__statement = 14,
  sym_set_statement = 15,
  sym_expression = 16,
  sym__identifier = 17,
  sym__literal = 18,
  sym_dom_literal = 19,
  aux_sym_source_file_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_set] = "set",
  [anon_sym_to] = "to",
  [sym_global_identifier] = "global_identifier",
  [sym_element_identifier] = "element_identifier",
  [sym_local_identifier] = "local_identifier",
  [sym_num_literal] = "num_literal",
  [sym_string_literal] = "string_literal",
  [sym_class_literal] = "class_literal",
  [sym_id_literal] = "id_literal",
  [sym_query_literal] = "query_literal",
  [sym_attribute_literal] = "attribute_literal",
  [sym_style_literal] = "style_literal",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_set_statement] = "set_statement",
  [sym_expression] = "expression",
  [sym__identifier] = "_identifier",
  [sym__literal] = "_literal",
  [sym_dom_literal] = "dom_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_to] = anon_sym_to,
  [sym_global_identifier] = sym_global_identifier,
  [sym_element_identifier] = sym_element_identifier,
  [sym_local_identifier] = sym_local_identifier,
  [sym_num_literal] = sym_num_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_class_literal] = sym_class_literal,
  [sym_id_literal] = sym_id_literal,
  [sym_query_literal] = sym_query_literal,
  [sym_attribute_literal] = sym_attribute_literal,
  [sym_style_literal] = sym_style_literal,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_set_statement] = sym_set_statement,
  [sym_expression] = sym_expression,
  [sym__identifier] = sym__identifier,
  [sym__literal] = sym__literal,
  [sym_dom_literal] = sym_dom_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [sym_global_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_element_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_local_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_num_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_class_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_id_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_query_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_style_literal] = {
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
  [sym_set_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_dom_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      ADVANCE_MAP(
        '"', 1,
        '#', 32,
        '$', 30,
        '\'', 2,
        '*', 33,
        '.', 34,
        ':', 31,
        '<', 36,
        '@', 35,
        '`', 5,
        'e', 14,
        'g', 15,
        'l', 19,
        's', 10,
        't', 20,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '`') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 24:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 25:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 26:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 27:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 28:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 29:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(4);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_global_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_element_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_local_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_num_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_class_literal);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_id_literal);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_query_literal);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_attribute_literal);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_style_literal);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(51);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [sym_global_identifier] = ACTIONS(1),
    [sym_element_identifier] = ACTIONS(1),
    [sym_local_identifier] = ACTIONS(1),
    [sym_num_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_class_literal] = ACTIONS(1),
    [sym_id_literal] = ACTIONS(1),
    [sym_query_literal] = ACTIONS(1),
    [sym_attribute_literal] = ACTIONS(1),
    [sym_style_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(9),
    [sym__statement] = STATE(3),
    [sym_set_statement] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_set] = ACTIONS(5),
  },
  [2] = {
    [sym_expression] = STATE(7),
    [sym__identifier] = STATE(8),
    [sym__literal] = STATE(8),
    [sym_dom_literal] = STATE(8),
    [sym_global_identifier] = ACTIONS(7),
    [sym_element_identifier] = ACTIONS(7),
    [sym_local_identifier] = ACTIONS(7),
    [sym_num_literal] = ACTIONS(7),
    [sym_string_literal] = ACTIONS(7),
    [sym_class_literal] = ACTIONS(9),
    [sym_id_literal] = ACTIONS(9),
    [sym_query_literal] = ACTIONS(9),
    [sym_attribute_literal] = ACTIONS(9),
    [sym_style_literal] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_set,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(4), 3,
      sym__statement,
      sym_set_statement,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_set,
    STATE(4), 3,
      sym__statement,
      sym_set_statement,
      aux_sym_source_file_repeat1,
  [24] = 2,
    STATE(10), 1,
      sym__identifier,
    ACTIONS(18), 3,
      sym_global_identifier,
      sym_element_identifier,
      sym_local_identifier,
  [33] = 1,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      anon_sym_set,
  [38] = 1,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      anon_sym_set,
  [43] = 1,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      anon_sym_set,
  [48] = 1,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
  [52] = 1,
    ACTIONS(28), 1,
      anon_sym_to,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 12,
  [SMALL_STATE(5)] = 24,
  [SMALL_STATE(6)] = 33,
  [SMALL_STATE(7)] = 38,
  [SMALL_STATE(8)] = 43,
  [SMALL_STATE(9)] = 48,
  [SMALL_STATE(10)] = 52,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dom_literal, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_statement, 4, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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

TS_PUBLIC const TSLanguage *tree_sitter__hyperscript(void) {
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
