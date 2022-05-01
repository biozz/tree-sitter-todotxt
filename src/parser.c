#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_done = 1,
  sym_project = 2,
  sym_context = 3,
  sym_tag = 4,
  sym_priority = 5,
  sym__date = 6,
  sym__newline = 7,
  sym__word = 8,
  sym_todotxt = 9,
  sym_task = 10,
  sym__content = 11,
  sym_completion_date = 12,
  sym_creation_date = 13,
  aux_sym_todotxt_repeat1 = 14,
  aux_sym_task_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_done] = "done",
  [sym_project] = "project",
  [sym_context] = "context",
  [sym_tag] = "tag",
  [sym_priority] = "priority",
  [sym__date] = "_date",
  [sym__newline] = "_newline",
  [sym__word] = "_word",
  [sym_todotxt] = "todotxt",
  [sym_task] = "task",
  [sym__content] = "_content",
  [sym_completion_date] = "completion_date",
  [sym_creation_date] = "creation_date",
  [aux_sym_todotxt_repeat1] = "todotxt_repeat1",
  [aux_sym_task_repeat1] = "task_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_done] = sym_done,
  [sym_project] = sym_project,
  [sym_context] = sym_context,
  [sym_tag] = sym_tag,
  [sym_priority] = sym_priority,
  [sym__date] = sym__date,
  [sym__newline] = sym__newline,
  [sym__word] = sym__word,
  [sym_todotxt] = sym_todotxt,
  [sym_task] = sym_task,
  [sym__content] = sym__content,
  [sym_completion_date] = sym_completion_date,
  [sym_creation_date] = sym_creation_date,
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
  [sym__newline] = {
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
  [sym_completion_date] = {
    .visible = true,
    .named = true,
  },
  [sym_creation_date] = {
    .visible = true,
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
      ACCEPT_TOKEN(sym__word);
      if (eof) ADVANCE(1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_done);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_project);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_context);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_priority);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__date);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '@') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__word);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(27);
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
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 0},
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
    [sym__newline] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
  },
  [1] = {
    [sym_todotxt] = STATE(28),
    [sym_task] = STATE(3),
    [sym__content] = STATE(21),
    [sym_completion_date] = STATE(10),
    [sym_creation_date] = STATE(24),
    [aux_sym_todotxt_repeat1] = STATE(3),
    [aux_sym_task_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_done] = ACTIONS(5),
    [sym_project] = ACTIONS(7),
    [sym_context] = ACTIONS(7),
    [sym_tag] = ACTIONS(7),
    [sym_priority] = ACTIONS(9),
    [sym__date] = ACTIONS(11),
    [sym__newline] = ACTIONS(13),
    [sym__word] = ACTIONS(7),
  },
  [2] = {
    [sym_task] = STATE(2),
    [sym__content] = STATE(21),
    [sym_completion_date] = STATE(10),
    [sym_creation_date] = STATE(24),
    [aux_sym_todotxt_repeat1] = STATE(2),
    [aux_sym_task_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_done] = ACTIONS(17),
    [sym_project] = ACTIONS(20),
    [sym_context] = ACTIONS(20),
    [sym_tag] = ACTIONS(20),
    [sym_priority] = ACTIONS(23),
    [sym__date] = ACTIONS(26),
    [sym__newline] = ACTIONS(29),
    [sym__word] = ACTIONS(20),
  },
  [3] = {
    [sym_task] = STATE(2),
    [sym__content] = STATE(21),
    [sym_completion_date] = STATE(10),
    [sym_creation_date] = STATE(24),
    [aux_sym_todotxt_repeat1] = STATE(2),
    [aux_sym_task_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_done] = ACTIONS(5),
    [sym_project] = ACTIONS(7),
    [sym_context] = ACTIONS(7),
    [sym_tag] = ACTIONS(7),
    [sym_priority] = ACTIONS(9),
    [sym__date] = ACTIONS(11),
    [sym__newline] = ACTIONS(13),
    [sym__word] = ACTIONS(7),
  },
  [4] = {
    [sym__content] = STATE(18),
    [sym_completion_date] = STATE(14),
    [sym_creation_date] = STATE(16),
    [aux_sym_task_repeat1] = STATE(18),
    [sym_project] = ACTIONS(34),
    [sym_context] = ACTIONS(34),
    [sym_tag] = ACTIONS(34),
    [sym_priority] = ACTIONS(36),
    [sym__date] = ACTIONS(11),
    [sym__newline] = ACTIONS(38),
    [sym__word] = ACTIONS(34),
  },
  [5] = {
    [sym__content] = STATE(18),
    [sym_completion_date] = STATE(14),
    [sym_creation_date] = STATE(16),
    [aux_sym_task_repeat1] = STATE(18),
    [sym_project] = ACTIONS(34),
    [sym_context] = ACTIONS(34),
    [sym_tag] = ACTIONS(34),
    [sym__date] = ACTIONS(11),
    [sym__newline] = ACTIONS(38),
    [sym__word] = ACTIONS(34),
  },
  [6] = {
    [sym__content] = STATE(20),
    [sym_completion_date] = STATE(12),
    [sym_creation_date] = STATE(19),
    [aux_sym_task_repeat1] = STATE(20),
    [sym_project] = ACTIONS(40),
    [sym_context] = ACTIONS(40),
    [sym_tag] = ACTIONS(40),
    [sym__date] = ACTIONS(11),
    [sym__newline] = ACTIONS(42),
    [sym__word] = ACTIONS(40),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_done] = ACTIONS(46),
    [sym_project] = ACTIONS(46),
    [sym_context] = ACTIONS(46),
    [sym_tag] = ACTIONS(46),
    [sym_priority] = ACTIONS(46),
    [sym__date] = ACTIONS(46),
    [sym__newline] = ACTIONS(46),
    [sym__word] = ACTIONS(46),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_done] = ACTIONS(50),
    [sym_project] = ACTIONS(50),
    [sym_context] = ACTIONS(50),
    [sym_tag] = ACTIONS(50),
    [sym_priority] = ACTIONS(50),
    [sym__date] = ACTIONS(50),
    [sym__newline] = ACTIONS(50),
    [sym__word] = ACTIONS(50),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_done] = ACTIONS(54),
    [sym_project] = ACTIONS(54),
    [sym_context] = ACTIONS(54),
    [sym_tag] = ACTIONS(54),
    [sym_priority] = ACTIONS(54),
    [sym__date] = ACTIONS(54),
    [sym__newline] = ACTIONS(54),
    [sym__word] = ACTIONS(54),
  },
  [10] = {
    [sym__content] = STATE(18),
    [sym_creation_date] = STATE(16),
    [aux_sym_task_repeat1] = STATE(18),
    [sym_project] = ACTIONS(34),
    [sym_context] = ACTIONS(34),
    [sym_tag] = ACTIONS(34),
    [sym__date] = ACTIONS(56),
    [sym__newline] = ACTIONS(38),
    [sym__word] = ACTIONS(34),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_done] = ACTIONS(60),
    [sym_project] = ACTIONS(60),
    [sym_context] = ACTIONS(60),
    [sym_tag] = ACTIONS(60),
    [sym_priority] = ACTIONS(60),
    [sym__date] = ACTIONS(60),
    [sym__newline] = ACTIONS(60),
    [sym__word] = ACTIONS(60),
  },
  [12] = {
    [sym__content] = STATE(23),
    [sym_creation_date] = STATE(22),
    [aux_sym_task_repeat1] = STATE(23),
    [sym_project] = ACTIONS(62),
    [sym_context] = ACTIONS(62),
    [sym_tag] = ACTIONS(62),
    [sym__date] = ACTIONS(56),
    [sym__newline] = ACTIONS(64),
    [sym__word] = ACTIONS(62),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_done] = ACTIONS(68),
    [sym_project] = ACTIONS(68),
    [sym_context] = ACTIONS(68),
    [sym_tag] = ACTIONS(68),
    [sym_priority] = ACTIONS(68),
    [sym__date] = ACTIONS(68),
    [sym__newline] = ACTIONS(68),
    [sym__word] = ACTIONS(68),
  },
  [14] = {
    [sym__content] = STATE(20),
    [sym_creation_date] = STATE(19),
    [aux_sym_task_repeat1] = STATE(20),
    [sym_project] = ACTIONS(40),
    [sym_context] = ACTIONS(40),
    [sym_tag] = ACTIONS(40),
    [sym__date] = ACTIONS(56),
    [sym__newline] = ACTIONS(42),
    [sym__word] = ACTIONS(40),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_done] = ACTIONS(72),
    [sym_project] = ACTIONS(72),
    [sym_context] = ACTIONS(72),
    [sym_tag] = ACTIONS(72),
    [sym_priority] = ACTIONS(72),
    [sym__date] = ACTIONS(72),
    [sym__newline] = ACTIONS(72),
    [sym__word] = ACTIONS(72),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(42), 1,
      sym__newline,
    STATE(20), 2,
      sym__content,
      aux_sym_task_repeat1,
    ACTIONS(40), 4,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [14] = 3,
    ACTIONS(77), 1,
      sym__newline,
    STATE(17), 2,
      sym__content,
      aux_sym_task_repeat1,
    ACTIONS(74), 4,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [28] = 3,
    ACTIONS(42), 1,
      sym__newline,
    STATE(17), 2,
      sym__content,
      aux_sym_task_repeat1,
    ACTIONS(79), 4,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [42] = 3,
    ACTIONS(64), 1,
      sym__newline,
    STATE(23), 2,
      sym__content,
      aux_sym_task_repeat1,
    ACTIONS(62), 4,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [56] = 3,
    ACTIONS(64), 1,
      sym__newline,
    STATE(17), 2,
      sym__content,
      aux_sym_task_repeat1,
    ACTIONS(79), 4,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [70] = 3,
    ACTIONS(38), 1,
      sym__newline,
    STATE(17), 2,
      sym__content,
      aux_sym_task_repeat1,
    ACTIONS(79), 4,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [84] = 3,
    ACTIONS(83), 1,
      sym__newline,
    STATE(25), 2,
      sym__content,
      aux_sym_task_repeat1,
    ACTIONS(81), 4,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [98] = 3,
    ACTIONS(83), 1,
      sym__newline,
    STATE(17), 2,
      sym__content,
      aux_sym_task_repeat1,
    ACTIONS(79), 4,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [112] = 3,
    ACTIONS(38), 1,
      sym__newline,
    STATE(18), 2,
      sym__content,
      aux_sym_task_repeat1,
    ACTIONS(34), 4,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [126] = 3,
    ACTIONS(85), 1,
      sym__newline,
    STATE(17), 2,
      sym__content,
      aux_sym_task_repeat1,
    ACTIONS(79), 4,
      sym_project,
      sym_context,
      sym_tag,
      sym__word,
  [140] = 2,
    ACTIONS(89), 1,
      sym__date,
    ACTIONS(87), 5,
      sym_project,
      sym_context,
      sym_tag,
      sym__newline,
      sym__word,
  [151] = 1,
    ACTIONS(87), 5,
      sym_project,
      sym_context,
      sym_tag,
      sym__newline,
      sym__word,
  [159] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 14,
  [SMALL_STATE(18)] = 28,
  [SMALL_STATE(19)] = 42,
  [SMALL_STATE(20)] = 56,
  [SMALL_STATE(21)] = 70,
  [SMALL_STATE(22)] = 84,
  [SMALL_STATE(23)] = 98,
  [SMALL_STATE(24)] = 112,
  [SMALL_STATE(25)] = 126,
  [SMALL_STATE(26)] = 140,
  [SMALL_STATE(27)] = 151,
  [SMALL_STATE(28)] = 159,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todotxt, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todotxt_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(21),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(26),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(8),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todotxt, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 6),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 6),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 5),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 5),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(17),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_task_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_creation_date, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_completion_date, 1),
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
