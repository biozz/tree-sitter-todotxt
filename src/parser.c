#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_done = 1,
  sym__newline = 2,
  sym_project = 3,
  sym_context = 4,
  sym_tag = 5,
  sym_priority = 6,
  sym__date = 7,
  sym__word = 8,
  sym_todotxt = 9,
  sym_task = 10,
  sym__content = 11,
  aux_sym_todotxt_repeat1 = 12,
  aux_sym_task_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_done] = "done",
  [sym__newline] = "_newline",
  [sym_project] = "project",
  [sym_context] = "context",
  [sym_tag] = "tag",
  [sym_priority] = "priority",
  [sym__date] = "_date",
  [sym__word] = "_word",
  [sym_todotxt] = "todotxt",
  [sym_task] = "task",
  [sym__content] = "_content",
  [aux_sym_todotxt_repeat1] = "todotxt_repeat1",
  [aux_sym_task_repeat1] = "task_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_done] = sym_done,
  [sym__newline] = sym__newline,
  [sym_project] = sym_project,
  [sym_context] = sym_context,
  [sym_tag] = sym_tag,
  [sym_priority] = sym_priority,
  [sym__date] = sym__date,
  [sym__word] = sym__word,
  [sym_todotxt] = sym_todotxt,
  [sym_task] = sym_task,
  [sym__content] = sym__content,
  [aux_sym_todotxt_repeat1] = aux_sym_todotxt_repeat1,
  [aux_sym_task_repeat1] = aux_sym_task_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_done] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [sym__date] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_todotxt] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym__content] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_todotxt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_task_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '@') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 12:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_done);
      if (lookahead == ':') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_done);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_project);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_project);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_context);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_context);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_priority);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__date);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == '@') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == '@') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__word);
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == '@') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_done] = ACTIONS(1),
    [sym_project] = ACTIONS(1),
    [sym_context] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_priority] = ACTIONS(1),
    [sym__date] = ACTIONS(1),
  },
  [1] = {
    [sym_todotxt] = STATE(11),
    [sym_task] = STATE(2),
    [sym__content] = STATE(6),
    [aux_sym_todotxt_repeat1] = STATE(2),
    [aux_sym_task_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_done] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym_project] = ACTIONS(9),
    [sym_context] = ACTIONS(9),
    [sym_tag] = ACTIONS(9),
    [sym__word] = ACTIONS(9),
  },
  [2] = {
    [sym_task] = STATE(3),
    [sym__content] = STATE(6),
    [aux_sym_todotxt_repeat1] = STATE(3),
    [aux_sym_task_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_done] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym_project] = ACTIONS(9),
    [sym_context] = ACTIONS(9),
    [sym_tag] = ACTIONS(9),
    [sym__word] = ACTIONS(9),
  },
  [3] = {
    [sym_task] = STATE(3),
    [sym__content] = STATE(6),
    [aux_sym_todotxt_repeat1] = STATE(3),
    [aux_sym_task_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_done] = ACTIONS(15),
    [sym__newline] = ACTIONS(18),
    [sym_project] = ACTIONS(21),
    [sym_context] = ACTIONS(21),
    [sym_tag] = ACTIONS(21),
    [sym__word] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(24), 1,
      sym__newline,
    STATE(8), 2,
      sym__content,
      aux_sym_task_repeat1,
    ACTIONS(26), 4,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [14] = 2,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 6,
      sym_done,
      sym__newline,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [26] = 3,
    ACTIONS(24), 1,
      sym__newline,
    STATE(9), 2,
      sym__content,
      aux_sym_task_repeat1,
    ACTIONS(32), 4,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [40] = 2,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 6,
      sym_done,
      sym__newline,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [52] = 3,
    ACTIONS(38), 1,
      sym__newline,
    STATE(9), 2,
      sym__content,
      aux_sym_task_repeat1,
    ACTIONS(32), 4,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [66] = 3,
    ACTIONS(40), 1,
      sym__newline,
    STATE(9), 2,
      sym__content,
      aux_sym_task_repeat1,
    ACTIONS(42), 4,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [80] = 2,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 6,
      sym_done,
      sym__newline,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [92] = 1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 40,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 66,
  [SMALL_STATE(10)] = 80,
  [SMALL_STATE(11)] = 92,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todotxt, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todotxt, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todotxt_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(5),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(6),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_task_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3),
  [49] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_todotxt(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
