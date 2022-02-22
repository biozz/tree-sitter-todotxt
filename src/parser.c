#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_done = 1,
  sym_priority = 2,
  sym__date = 3,
  sym_word = 4,
  sym_project = 5,
  sym_context = 6,
  sym_tag = 7,
  aux_sym__end_of_task_token1 = 8,
  aux_sym__end_of_task_token2 = 9,
  aux_sym__end_of_task_token3 = 10,
  sym_todotxt = 11,
  sym_task = 12,
  sym_completion_date = 13,
  sym_creation_date = 14,
  sym__description = 15,
  sym__end_of_task = 16,
  aux_sym_todotxt_repeat1 = 17,
  aux_sym_task_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_done] = "done",
  [sym_priority] = "priority",
  [sym__date] = "_date",
  [sym_word] = "word",
  [sym_project] = "project",
  [sym_context] = "context",
  [sym_tag] = "tag",
  [aux_sym__end_of_task_token1] = "_end_of_task_token1",
  [aux_sym__end_of_task_token2] = "_end_of_task_token2",
  [aux_sym__end_of_task_token3] = "_end_of_task_token3",
  [sym_todotxt] = "todotxt",
  [sym_task] = "task",
  [sym_completion_date] = "completion_date",
  [sym_creation_date] = "creation_date",
  [sym__description] = "_description",
  [sym__end_of_task] = "_end_of_task",
  [aux_sym_todotxt_repeat1] = "todotxt_repeat1",
  [aux_sym_task_repeat1] = "task_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_done] = sym_done,
  [sym_priority] = sym_priority,
  [sym__date] = sym__date,
  [sym_word] = sym_word,
  [sym_project] = sym_project,
  [sym_context] = sym_context,
  [sym_tag] = sym_tag,
  [aux_sym__end_of_task_token1] = aux_sym__end_of_task_token1,
  [aux_sym__end_of_task_token2] = aux_sym__end_of_task_token2,
  [aux_sym__end_of_task_token3] = aux_sym__end_of_task_token3,
  [sym_todotxt] = sym_todotxt,
  [sym_task] = sym_task,
  [sym_completion_date] = sym_completion_date,
  [sym_creation_date] = sym_creation_date,
  [sym__description] = sym__description,
  [sym__end_of_task] = sym__end_of_task,
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
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [sym__date] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
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
  [aux_sym__end_of_task_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__end_of_task_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__end_of_task_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_todotxt] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_completion_date] = {
    .visible = true,
    .named = true,
  },
  [sym_creation_date] = {
    .visible = true,
    .named = true,
  },
  [sym__description] = {
    .visible = false,
    .named = true,
  },
  [sym__end_of_task] = {
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
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 8232) ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 8232) ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 8232) ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 11:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(3);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_done);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_priority);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__date);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_project);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_project);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_context);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__end_of_task_token1);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__end_of_task_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__end_of_task_token2);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__end_of_task_token2);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__end_of_task_token3);
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
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_done] = ACTIONS(1),
    [sym_priority] = ACTIONS(1),
    [sym__date] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_project] = ACTIONS(1),
    [sym_context] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [aux_sym__end_of_task_token1] = ACTIONS(1),
    [aux_sym__end_of_task_token2] = ACTIONS(1),
    [aux_sym__end_of_task_token3] = ACTIONS(1),
  },
  [1] = {
    [sym_todotxt] = STATE(28),
    [sym_task] = STATE(3),
    [sym_completion_date] = STATE(9),
    [sym_creation_date] = STATE(19),
    [sym__description] = STATE(16),
    [sym__end_of_task] = STATE(11),
    [aux_sym_todotxt_repeat1] = STATE(3),
    [aux_sym_task_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_done] = ACTIONS(5),
    [sym_priority] = ACTIONS(7),
    [sym__date] = ACTIONS(9),
    [sym_word] = ACTIONS(11),
    [sym_project] = ACTIONS(11),
    [sym_context] = ACTIONS(11),
    [sym_tag] = ACTIONS(11),
    [aux_sym__end_of_task_token1] = ACTIONS(13),
    [aux_sym__end_of_task_token2] = ACTIONS(13),
    [aux_sym__end_of_task_token3] = ACTIONS(13),
  },
  [2] = {
    [sym_task] = STATE(2),
    [sym_completion_date] = STATE(9),
    [sym_creation_date] = STATE(19),
    [sym__description] = STATE(16),
    [sym__end_of_task] = STATE(11),
    [aux_sym_todotxt_repeat1] = STATE(2),
    [aux_sym_task_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_done] = ACTIONS(17),
    [sym_priority] = ACTIONS(20),
    [sym__date] = ACTIONS(23),
    [sym_word] = ACTIONS(26),
    [sym_project] = ACTIONS(26),
    [sym_context] = ACTIONS(26),
    [sym_tag] = ACTIONS(26),
    [aux_sym__end_of_task_token1] = ACTIONS(29),
    [aux_sym__end_of_task_token2] = ACTIONS(29),
    [aux_sym__end_of_task_token3] = ACTIONS(29),
  },
  [3] = {
    [sym_task] = STATE(2),
    [sym_completion_date] = STATE(9),
    [sym_creation_date] = STATE(19),
    [sym__description] = STATE(16),
    [sym__end_of_task] = STATE(11),
    [aux_sym_todotxt_repeat1] = STATE(2),
    [aux_sym_task_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_done] = ACTIONS(5),
    [sym_priority] = ACTIONS(7),
    [sym__date] = ACTIONS(9),
    [sym_word] = ACTIONS(11),
    [sym_project] = ACTIONS(11),
    [sym_context] = ACTIONS(11),
    [sym_tag] = ACTIONS(11),
    [aux_sym__end_of_task_token1] = ACTIONS(13),
    [aux_sym__end_of_task_token2] = ACTIONS(13),
    [aux_sym__end_of_task_token3] = ACTIONS(13),
  },
  [4] = {
    [sym_completion_date] = STATE(7),
    [sym_creation_date] = STATE(17),
    [sym__description] = STATE(18),
    [sym__end_of_task] = STATE(12),
    [aux_sym_task_repeat1] = STATE(18),
    [sym_priority] = ACTIONS(34),
    [sym__date] = ACTIONS(9),
    [sym_word] = ACTIONS(36),
    [sym_project] = ACTIONS(36),
    [sym_context] = ACTIONS(36),
    [sym_tag] = ACTIONS(36),
    [aux_sym__end_of_task_token1] = ACTIONS(38),
    [aux_sym__end_of_task_token2] = ACTIONS(38),
    [aux_sym__end_of_task_token3] = ACTIONS(38),
  },
  [5] = {
    [sym_completion_date] = STATE(7),
    [sym_creation_date] = STATE(17),
    [sym__description] = STATE(18),
    [sym__end_of_task] = STATE(12),
    [aux_sym_task_repeat1] = STATE(18),
    [sym__date] = ACTIONS(9),
    [sym_word] = ACTIONS(36),
    [sym_project] = ACTIONS(36),
    [sym_context] = ACTIONS(36),
    [sym_tag] = ACTIONS(36),
    [aux_sym__end_of_task_token1] = ACTIONS(38),
    [aux_sym__end_of_task_token2] = ACTIONS(38),
    [aux_sym__end_of_task_token3] = ACTIONS(38),
  },
  [6] = {
    [sym_completion_date] = STATE(8),
    [sym_creation_date] = STATE(20),
    [sym__description] = STATE(21),
    [sym__end_of_task] = STATE(10),
    [aux_sym_task_repeat1] = STATE(21),
    [sym__date] = ACTIONS(9),
    [sym_word] = ACTIONS(40),
    [sym_project] = ACTIONS(40),
    [sym_context] = ACTIONS(40),
    [sym_tag] = ACTIONS(40),
    [aux_sym__end_of_task_token1] = ACTIONS(42),
    [aux_sym__end_of_task_token2] = ACTIONS(42),
    [aux_sym__end_of_task_token3] = ACTIONS(42),
  },
  [7] = {
    [sym_creation_date] = STATE(20),
    [sym__description] = STATE(21),
    [sym__end_of_task] = STATE(10),
    [aux_sym_task_repeat1] = STATE(21),
    [sym__date] = ACTIONS(44),
    [sym_word] = ACTIONS(40),
    [sym_project] = ACTIONS(40),
    [sym_context] = ACTIONS(40),
    [sym_tag] = ACTIONS(40),
    [aux_sym__end_of_task_token1] = ACTIONS(42),
    [aux_sym__end_of_task_token2] = ACTIONS(42),
    [aux_sym__end_of_task_token3] = ACTIONS(42),
  },
  [8] = {
    [sym_creation_date] = STATE(22),
    [sym__description] = STATE(23),
    [sym__end_of_task] = STATE(13),
    [aux_sym_task_repeat1] = STATE(23),
    [sym__date] = ACTIONS(44),
    [sym_word] = ACTIONS(46),
    [sym_project] = ACTIONS(46),
    [sym_context] = ACTIONS(46),
    [sym_tag] = ACTIONS(46),
    [aux_sym__end_of_task_token1] = ACTIONS(48),
    [aux_sym__end_of_task_token2] = ACTIONS(48),
    [aux_sym__end_of_task_token3] = ACTIONS(48),
  },
  [9] = {
    [sym_creation_date] = STATE(17),
    [sym__description] = STATE(18),
    [sym__end_of_task] = STATE(12),
    [aux_sym_task_repeat1] = STATE(18),
    [sym__date] = ACTIONS(44),
    [sym_word] = ACTIONS(36),
    [sym_project] = ACTIONS(36),
    [sym_context] = ACTIONS(36),
    [sym_tag] = ACTIONS(36),
    [aux_sym__end_of_task_token1] = ACTIONS(38),
    [aux_sym__end_of_task_token2] = ACTIONS(38),
    [aux_sym__end_of_task_token3] = ACTIONS(38),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [sym_done] = ACTIONS(52),
    [sym_priority] = ACTIONS(52),
    [sym__date] = ACTIONS(52),
    [sym_word] = ACTIONS(52),
    [sym_project] = ACTIONS(52),
    [sym_context] = ACTIONS(52),
    [sym_tag] = ACTIONS(52),
    [aux_sym__end_of_task_token1] = ACTIONS(52),
    [aux_sym__end_of_task_token2] = ACTIONS(52),
    [aux_sym__end_of_task_token3] = ACTIONS(52),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_done] = ACTIONS(56),
    [sym_priority] = ACTIONS(56),
    [sym__date] = ACTIONS(56),
    [sym_word] = ACTIONS(56),
    [sym_project] = ACTIONS(56),
    [sym_context] = ACTIONS(56),
    [sym_tag] = ACTIONS(56),
    [aux_sym__end_of_task_token1] = ACTIONS(56),
    [aux_sym__end_of_task_token2] = ACTIONS(56),
    [aux_sym__end_of_task_token3] = ACTIONS(56),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_done] = ACTIONS(60),
    [sym_priority] = ACTIONS(60),
    [sym__date] = ACTIONS(60),
    [sym_word] = ACTIONS(60),
    [sym_project] = ACTIONS(60),
    [sym_context] = ACTIONS(60),
    [sym_tag] = ACTIONS(60),
    [aux_sym__end_of_task_token1] = ACTIONS(60),
    [aux_sym__end_of_task_token2] = ACTIONS(60),
    [aux_sym__end_of_task_token3] = ACTIONS(60),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_done] = ACTIONS(64),
    [sym_priority] = ACTIONS(64),
    [sym__date] = ACTIONS(64),
    [sym_word] = ACTIONS(64),
    [sym_project] = ACTIONS(64),
    [sym_context] = ACTIONS(64),
    [sym_tag] = ACTIONS(64),
    [aux_sym__end_of_task_token1] = ACTIONS(64),
    [aux_sym__end_of_task_token2] = ACTIONS(64),
    [aux_sym__end_of_task_token3] = ACTIONS(64),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_done] = ACTIONS(68),
    [sym_priority] = ACTIONS(68),
    [sym__date] = ACTIONS(68),
    [sym_word] = ACTIONS(68),
    [sym_project] = ACTIONS(68),
    [sym_context] = ACTIONS(68),
    [sym_tag] = ACTIONS(68),
    [aux_sym__end_of_task_token1] = ACTIONS(68),
    [aux_sym__end_of_task_token2] = ACTIONS(68),
    [aux_sym__end_of_task_token3] = ACTIONS(68),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_done] = ACTIONS(72),
    [sym_priority] = ACTIONS(72),
    [sym__date] = ACTIONS(72),
    [sym_word] = ACTIONS(72),
    [sym_project] = ACTIONS(72),
    [sym_context] = ACTIONS(72),
    [sym_tag] = ACTIONS(72),
    [aux_sym__end_of_task_token1] = ACTIONS(72),
    [aux_sym__end_of_task_token2] = ACTIONS(72),
    [aux_sym__end_of_task_token3] = ACTIONS(72),
  },
  [16] = {
    [sym__description] = STATE(25),
    [sym__end_of_task] = STATE(12),
    [aux_sym_task_repeat1] = STATE(25),
    [sym_word] = ACTIONS(74),
    [sym_project] = ACTIONS(74),
    [sym_context] = ACTIONS(74),
    [sym_tag] = ACTIONS(74),
    [aux_sym__end_of_task_token1] = ACTIONS(38),
    [aux_sym__end_of_task_token2] = ACTIONS(38),
    [aux_sym__end_of_task_token3] = ACTIONS(38),
  },
  [17] = {
    [sym__description] = STATE(21),
    [sym__end_of_task] = STATE(10),
    [aux_sym_task_repeat1] = STATE(21),
    [sym_word] = ACTIONS(40),
    [sym_project] = ACTIONS(40),
    [sym_context] = ACTIONS(40),
    [sym_tag] = ACTIONS(40),
    [aux_sym__end_of_task_token1] = ACTIONS(42),
    [aux_sym__end_of_task_token2] = ACTIONS(42),
    [aux_sym__end_of_task_token3] = ACTIONS(42),
  },
  [18] = {
    [sym__description] = STATE(25),
    [sym__end_of_task] = STATE(10),
    [aux_sym_task_repeat1] = STATE(25),
    [sym_word] = ACTIONS(74),
    [sym_project] = ACTIONS(74),
    [sym_context] = ACTIONS(74),
    [sym_tag] = ACTIONS(74),
    [aux_sym__end_of_task_token1] = ACTIONS(42),
    [aux_sym__end_of_task_token2] = ACTIONS(42),
    [aux_sym__end_of_task_token3] = ACTIONS(42),
  },
  [19] = {
    [sym__description] = STATE(18),
    [sym__end_of_task] = STATE(12),
    [aux_sym_task_repeat1] = STATE(18),
    [sym_word] = ACTIONS(36),
    [sym_project] = ACTIONS(36),
    [sym_context] = ACTIONS(36),
    [sym_tag] = ACTIONS(36),
    [aux_sym__end_of_task_token1] = ACTIONS(38),
    [aux_sym__end_of_task_token2] = ACTIONS(38),
    [aux_sym__end_of_task_token3] = ACTIONS(38),
  },
  [20] = {
    [sym__description] = STATE(23),
    [sym__end_of_task] = STATE(13),
    [aux_sym_task_repeat1] = STATE(23),
    [sym_word] = ACTIONS(46),
    [sym_project] = ACTIONS(46),
    [sym_context] = ACTIONS(46),
    [sym_tag] = ACTIONS(46),
    [aux_sym__end_of_task_token1] = ACTIONS(48),
    [aux_sym__end_of_task_token2] = ACTIONS(48),
    [aux_sym__end_of_task_token3] = ACTIONS(48),
  },
  [21] = {
    [sym__description] = STATE(25),
    [sym__end_of_task] = STATE(13),
    [aux_sym_task_repeat1] = STATE(25),
    [sym_word] = ACTIONS(74),
    [sym_project] = ACTIONS(74),
    [sym_context] = ACTIONS(74),
    [sym_tag] = ACTIONS(74),
    [aux_sym__end_of_task_token1] = ACTIONS(48),
    [aux_sym__end_of_task_token2] = ACTIONS(48),
    [aux_sym__end_of_task_token3] = ACTIONS(48),
  },
  [22] = {
    [sym__description] = STATE(24),
    [sym__end_of_task] = STATE(14),
    [aux_sym_task_repeat1] = STATE(24),
    [sym_word] = ACTIONS(76),
    [sym_project] = ACTIONS(76),
    [sym_context] = ACTIONS(76),
    [sym_tag] = ACTIONS(76),
    [aux_sym__end_of_task_token1] = ACTIONS(78),
    [aux_sym__end_of_task_token2] = ACTIONS(78),
    [aux_sym__end_of_task_token3] = ACTIONS(78),
  },
  [23] = {
    [sym__description] = STATE(25),
    [sym__end_of_task] = STATE(14),
    [aux_sym_task_repeat1] = STATE(25),
    [sym_word] = ACTIONS(74),
    [sym_project] = ACTIONS(74),
    [sym_context] = ACTIONS(74),
    [sym_tag] = ACTIONS(74),
    [aux_sym__end_of_task_token1] = ACTIONS(78),
    [aux_sym__end_of_task_token2] = ACTIONS(78),
    [aux_sym__end_of_task_token3] = ACTIONS(78),
  },
  [24] = {
    [sym__description] = STATE(25),
    [sym__end_of_task] = STATE(15),
    [aux_sym_task_repeat1] = STATE(25),
    [sym_word] = ACTIONS(74),
    [sym_project] = ACTIONS(74),
    [sym_context] = ACTIONS(74),
    [sym_tag] = ACTIONS(74),
    [aux_sym__end_of_task_token1] = ACTIONS(80),
    [aux_sym__end_of_task_token2] = ACTIONS(80),
    [aux_sym__end_of_task_token3] = ACTIONS(80),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(25), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(85), 3,
      aux_sym__end_of_task_token1,
      aux_sym__end_of_task_token2,
      aux_sym__end_of_task_token3,
    ACTIONS(82), 4,
      sym_word,
      sym_project,
      sym_context,
      sym_tag,
  [16] = 2,
    ACTIONS(87), 1,
      sym__date,
    ACTIONS(89), 7,
      sym_word,
      sym_project,
      sym_context,
      sym_tag,
      aux_sym__end_of_task_token1,
      aux_sym__end_of_task_token2,
      aux_sym__end_of_task_token3,
  [29] = 1,
    ACTIONS(89), 7,
      sym_word,
      sym_project,
      sym_context,
      sym_tag,
      aux_sym__end_of_task_token1,
      aux_sym__end_of_task_token2,
      aux_sym__end_of_task_token3,
  [39] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 16,
  [SMALL_STATE(27)] = 29,
  [SMALL_STATE(28)] = 39,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todotxt, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todotxt_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(5),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(26),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(16),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(11),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todotxt, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 5),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 5),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 6),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 6),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(25),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_task_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_completion_date, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_creation_date, 1),
  [91] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
