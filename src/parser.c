#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 6
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
  sym__newline = 8,
  sym__indent = 9,
  sym__dedent = 10,
  sym__string_start = 11,
  sym__string_content = 12,
  sym__string_end = 13,
  sym_todotxt = 14,
  sym_task = 15,
  sym_completion_date = 16,
  sym_creation_date = 17,
  sym__description = 18,
  aux_sym_todotxt_repeat1 = 19,
  aux_sym_task_repeat1 = 20,
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
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__string_start] = "_string_start",
  [sym__string_content] = "_string_content",
  [sym__string_end] = "_string_end",
  [sym_todotxt] = "todotxt",
  [sym_task] = "task",
  [sym_completion_date] = "completion_date",
  [sym_creation_date] = "creation_date",
  [sym__description] = "_description",
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
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__string_start] = sym__string_start,
  [sym__string_content] = sym__string_content,
  [sym__string_end] = sym__string_end,
  [sym_todotxt] = sym_todotxt,
  [sym_task] = sym_task,
  [sym_completion_date] = sym_completion_date,
  [sym_creation_date] = sym_creation_date,
  [sym__description] = sym__description,
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
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__string_start] = {
    .visible = false,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__string_end] = {
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
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 2, .external_lex_state = 2},
  [5] = {.lex_state = 2, .external_lex_state = 2},
  [6] = {.lex_state = 2, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 2, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 2, .external_lex_state = 2},
  [17] = {.lex_state = 2, .external_lex_state = 2},
  [18] = {.lex_state = 2, .external_lex_state = 2},
  [19] = {.lex_state = 2, .external_lex_state = 2},
  [20] = {.lex_state = 2, .external_lex_state = 2},
  [21] = {.lex_state = 2, .external_lex_state = 2},
  [22] = {.lex_state = 2, .external_lex_state = 2},
  [23] = {.lex_state = 2, .external_lex_state = 2},
  [24] = {.lex_state = 2, .external_lex_state = 2},
  [25] = {.lex_state = 2, .external_lex_state = 2},
  [26] = {.lex_state = 2, .external_lex_state = 2},
  [27] = {.lex_state = 2, .external_lex_state = 2},
  [28] = {.lex_state = 0},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token__string_start = 3,
  ts_external_token__string_content = 4,
  ts_external_token__string_end = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__string_start] = sym__string_start,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token__string_end] = sym__string_end,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token__string_end] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
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
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__string_start] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym__string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_todotxt] = STATE(28),
    [sym_task] = STATE(3),
    [sym_completion_date] = STATE(10),
    [sym_creation_date] = STATE(24),
    [sym__description] = STATE(21),
    [aux_sym_todotxt_repeat1] = STATE(3),
    [aux_sym_task_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_done] = ACTIONS(5),
    [sym_priority] = ACTIONS(7),
    [sym__date] = ACTIONS(9),
    [sym_word] = ACTIONS(11),
    [sym_project] = ACTIONS(13),
    [sym_context] = ACTIONS(13),
    [sym_tag] = ACTIONS(13),
    [sym__newline] = ACTIONS(15),
  },
  [2] = {
    [sym_task] = STATE(2),
    [sym_completion_date] = STATE(10),
    [sym_creation_date] = STATE(24),
    [sym__description] = STATE(21),
    [aux_sym_todotxt_repeat1] = STATE(2),
    [aux_sym_task_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_done] = ACTIONS(19),
    [sym_priority] = ACTIONS(22),
    [sym__date] = ACTIONS(25),
    [sym_word] = ACTIONS(28),
    [sym_project] = ACTIONS(31),
    [sym_context] = ACTIONS(31),
    [sym_tag] = ACTIONS(31),
    [sym__newline] = ACTIONS(34),
  },
  [3] = {
    [sym_task] = STATE(2),
    [sym_completion_date] = STATE(10),
    [sym_creation_date] = STATE(24),
    [sym__description] = STATE(21),
    [aux_sym_todotxt_repeat1] = STATE(2),
    [aux_sym_task_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_done] = ACTIONS(5),
    [sym_priority] = ACTIONS(7),
    [sym__date] = ACTIONS(9),
    [sym_word] = ACTIONS(11),
    [sym_project] = ACTIONS(13),
    [sym_context] = ACTIONS(13),
    [sym_tag] = ACTIONS(13),
    [sym__newline] = ACTIONS(15),
  },
  [4] = {
    [sym_completion_date] = STATE(14),
    [sym_creation_date] = STATE(16),
    [sym__description] = STATE(18),
    [aux_sym_task_repeat1] = STATE(18),
    [sym_priority] = ACTIONS(39),
    [sym__date] = ACTIONS(9),
    [sym_word] = ACTIONS(41),
    [sym_project] = ACTIONS(43),
    [sym_context] = ACTIONS(43),
    [sym_tag] = ACTIONS(43),
    [sym__newline] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      sym__date,
    ACTIONS(41), 1,
      sym_word,
    ACTIONS(45), 1,
      sym__newline,
    STATE(14), 1,
      sym_completion_date,
    STATE(16), 1,
      sym_creation_date,
    STATE(18), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(43), 3,
      sym_project,
      sym_context,
      sym_tag,
  [25] = 7,
    ACTIONS(9), 1,
      sym__date,
    ACTIONS(47), 1,
      sym_word,
    ACTIONS(51), 1,
      sym__newline,
    STATE(12), 1,
      sym_completion_date,
    STATE(19), 1,
      sym_creation_date,
    STATE(20), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(49), 3,
      sym_project,
      sym_context,
      sym_tag,
  [50] = 2,
    ACTIONS(55), 1,
      sym_word,
    ACTIONS(53), 8,
      sym__newline,
      ts_builtin_sym_end,
      sym_done,
      sym_priority,
      sym__date,
      sym_project,
      sym_context,
      sym_tag,
  [64] = 2,
    ACTIONS(59), 1,
      sym_word,
    ACTIONS(57), 8,
      sym__newline,
      ts_builtin_sym_end,
      sym_done,
      sym_priority,
      sym__date,
      sym_project,
      sym_context,
      sym_tag,
  [78] = 2,
    ACTIONS(63), 1,
      sym_word,
    ACTIONS(61), 8,
      sym__newline,
      ts_builtin_sym_end,
      sym_done,
      sym_priority,
      sym__date,
      sym_project,
      sym_context,
      sym_tag,
  [92] = 6,
    ACTIONS(41), 1,
      sym_word,
    ACTIONS(45), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym__date,
    STATE(16), 1,
      sym_creation_date,
    STATE(18), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(43), 3,
      sym_project,
      sym_context,
      sym_tag,
  [114] = 2,
    ACTIONS(69), 1,
      sym_word,
    ACTIONS(67), 8,
      sym__newline,
      ts_builtin_sym_end,
      sym_done,
      sym_priority,
      sym__date,
      sym_project,
      sym_context,
      sym_tag,
  [128] = 6,
    ACTIONS(65), 1,
      sym__date,
    ACTIONS(71), 1,
      sym_word,
    ACTIONS(75), 1,
      sym__newline,
    STATE(22), 1,
      sym_creation_date,
    STATE(23), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(73), 3,
      sym_project,
      sym_context,
      sym_tag,
  [150] = 2,
    ACTIONS(79), 1,
      sym_word,
    ACTIONS(77), 8,
      sym__newline,
      ts_builtin_sym_end,
      sym_done,
      sym_priority,
      sym__date,
      sym_project,
      sym_context,
      sym_tag,
  [164] = 6,
    ACTIONS(47), 1,
      sym_word,
    ACTIONS(51), 1,
      sym__newline,
    ACTIONS(65), 1,
      sym__date,
    STATE(19), 1,
      sym_creation_date,
    STATE(20), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(49), 3,
      sym_project,
      sym_context,
      sym_tag,
  [186] = 2,
    ACTIONS(83), 1,
      sym_word,
    ACTIONS(81), 8,
      sym__newline,
      ts_builtin_sym_end,
      sym_done,
      sym_priority,
      sym__date,
      sym_project,
      sym_context,
      sym_tag,
  [200] = 4,
    ACTIONS(47), 1,
      sym_word,
    ACTIONS(51), 1,
      sym__newline,
    STATE(20), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(49), 3,
      sym_project,
      sym_context,
      sym_tag,
  [216] = 4,
    ACTIONS(85), 1,
      sym_word,
    ACTIONS(91), 1,
      sym__newline,
    STATE(17), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(88), 3,
      sym_project,
      sym_context,
      sym_tag,
  [232] = 4,
    ACTIONS(51), 1,
      sym__newline,
    ACTIONS(93), 1,
      sym_word,
    STATE(17), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(95), 3,
      sym_project,
      sym_context,
      sym_tag,
  [248] = 4,
    ACTIONS(71), 1,
      sym_word,
    ACTIONS(75), 1,
      sym__newline,
    STATE(23), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(73), 3,
      sym_project,
      sym_context,
      sym_tag,
  [264] = 4,
    ACTIONS(75), 1,
      sym__newline,
    ACTIONS(93), 1,
      sym_word,
    STATE(17), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(95), 3,
      sym_project,
      sym_context,
      sym_tag,
  [280] = 4,
    ACTIONS(45), 1,
      sym__newline,
    ACTIONS(93), 1,
      sym_word,
    STATE(17), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(95), 3,
      sym_project,
      sym_context,
      sym_tag,
  [296] = 4,
    ACTIONS(97), 1,
      sym_word,
    ACTIONS(101), 1,
      sym__newline,
    STATE(25), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(99), 3,
      sym_project,
      sym_context,
      sym_tag,
  [312] = 4,
    ACTIONS(93), 1,
      sym_word,
    ACTIONS(101), 1,
      sym__newline,
    STATE(17), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(95), 3,
      sym_project,
      sym_context,
      sym_tag,
  [328] = 4,
    ACTIONS(41), 1,
      sym_word,
    ACTIONS(45), 1,
      sym__newline,
    STATE(18), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(43), 3,
      sym_project,
      sym_context,
      sym_tag,
  [344] = 4,
    ACTIONS(93), 1,
      sym_word,
    ACTIONS(103), 1,
      sym__newline,
    STATE(17), 2,
      sym__description,
      aux_sym_task_repeat1,
    ACTIONS(95), 3,
      sym_project,
      sym_context,
      sym_tag,
  [360] = 3,
    ACTIONS(105), 1,
      sym__date,
    ACTIONS(107), 1,
      sym_word,
    ACTIONS(109), 4,
      sym__newline,
      sym_project,
      sym_context,
      sym_tag,
  [373] = 2,
    ACTIONS(107), 1,
      sym_word,
    ACTIONS(109), 4,
      sym__newline,
      sym_project,
      sym_context,
      sym_tag,
  [383] = 1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 25,
  [SMALL_STATE(7)] = 50,
  [SMALL_STATE(8)] = 64,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 114,
  [SMALL_STATE(12)] = 128,
  [SMALL_STATE(13)] = 150,
  [SMALL_STATE(14)] = 164,
  [SMALL_STATE(15)] = 186,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 216,
  [SMALL_STATE(18)] = 232,
  [SMALL_STATE(19)] = 248,
  [SMALL_STATE(20)] = 264,
  [SMALL_STATE(21)] = 280,
  [SMALL_STATE(22)] = 296,
  [SMALL_STATE(23)] = 312,
  [SMALL_STATE(24)] = 328,
  [SMALL_STATE(25)] = 344,
  [SMALL_STATE(26)] = 360,
  [SMALL_STATE(27)] = 373,
  [SMALL_STATE(28)] = 383,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todotxt, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_todotxt_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(26),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(21),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(21),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_todotxt_repeat1, 2), SHIFT_REPEAT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_todotxt, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 6),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 6),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(17),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_repeat1, 2), SHIFT_REPEAT(17),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_task_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completion_date, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_creation_date, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_creation_date, 1),
  [111] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_todotxt_external_scanner_create(void);
void tree_sitter_todotxt_external_scanner_destroy(void *);
bool tree_sitter_todotxt_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_todotxt_external_scanner_serialize(void *, char *);
void tree_sitter_todotxt_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_todotxt_external_scanner_create,
      tree_sitter_todotxt_external_scanner_destroy,
      tree_sitter_todotxt_external_scanner_scan,
      tree_sitter_todotxt_external_scanner_serialize,
      tree_sitter_todotxt_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
