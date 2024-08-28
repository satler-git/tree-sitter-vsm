#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_line_comment = 2,
  sym_quit_statement = 3,
  aux_sym_ptr_token1 = 4,
  aux_sym_ptr_token2 = 5,
  aux_sym_ptr_token3 = 6,
  anon_sym_LBRACK = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACK = 9,
  aux_sym__num_token1 = 10,
  aux_sym__num_token2 = 11,
  aux_sym__num_token3 = 12,
  aux_sym_immudate_num_token1 = 13,
  aux_sym_immudate_num_token2 = 14,
  aux_sym_immudate_num_token3 = 15,
  aux_sym_immudate_num_token4 = 16,
  aux_sym_immudate_num_token5 = 17,
  aux_sym_immudate_num_token6 = 18,
  anon_sym_imm = 19,
  sym_source_file = 20,
  sym__statement = 21,
  sym_ptr = 22,
  sym__num = 23,
  sym_immudate_num = 24,
  sym_imm_statement = 25,
  aux_sym_source_file_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_line_comment] = "line_comment",
  [sym_quit_statement] = "quit_statement",
  [aux_sym_ptr_token1] = "ptr_token1",
  [aux_sym_ptr_token2] = "ptr_token2",
  [aux_sym_ptr_token3] = "ptr_token3",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [aux_sym__num_token1] = "_num_token1",
  [aux_sym__num_token2] = "_num_token2",
  [aux_sym__num_token3] = "_num_token3",
  [aux_sym_immudate_num_token1] = "immudate_num_token1",
  [aux_sym_immudate_num_token2] = "immudate_num_token2",
  [aux_sym_immudate_num_token3] = "immudate_num_token3",
  [aux_sym_immudate_num_token4] = "immudate_num_token4",
  [aux_sym_immudate_num_token5] = "immudate_num_token5",
  [aux_sym_immudate_num_token6] = "immudate_num_token6",
  [anon_sym_imm] = "imm",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_ptr] = "ptr",
  [sym__num] = "_num",
  [sym_immudate_num] = "immudate_num",
  [sym_imm_statement] = "imm_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_line_comment] = sym_line_comment,
  [sym_quit_statement] = sym_quit_statement,
  [aux_sym_ptr_token1] = aux_sym_ptr_token1,
  [aux_sym_ptr_token2] = aux_sym_ptr_token2,
  [aux_sym_ptr_token3] = aux_sym_ptr_token3,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__num_token1] = aux_sym__num_token1,
  [aux_sym__num_token2] = aux_sym__num_token2,
  [aux_sym__num_token3] = aux_sym__num_token3,
  [aux_sym_immudate_num_token1] = aux_sym_immudate_num_token1,
  [aux_sym_immudate_num_token2] = aux_sym_immudate_num_token2,
  [aux_sym_immudate_num_token3] = aux_sym_immudate_num_token3,
  [aux_sym_immudate_num_token4] = aux_sym_immudate_num_token4,
  [aux_sym_immudate_num_token5] = aux_sym_immudate_num_token5,
  [aux_sym_immudate_num_token6] = aux_sym_immudate_num_token6,
  [anon_sym_imm] = anon_sym_imm,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_ptr] = sym_ptr,
  [sym__num] = sym__num,
  [sym_immudate_num] = sym_immudate_num,
  [sym_imm_statement] = sym_imm_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_quit_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ptr_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ptr_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ptr_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__num_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__num_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__num_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immudate_num_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immudate_num_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immudate_num_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immudate_num_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immudate_num_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_immudate_num_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_imm] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_ptr] = {
    .visible = true,
    .named = true,
  },
  [sym__num] = {
    .visible = false,
    .named = true,
  },
  [sym_immudate_num] = {
    .visible = true,
    .named = true,
  },
  [sym_imm_statement] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '"', 42,
        '#', 26,
        '$', 9,
        ',', 33,
        '0', 29,
        '[', 32,
        ']', 34,
        'i', 4,
        'q', 13,
        's', 3,
        'u', 14,
        'v', 18,
        '+', 39,
        '-', 39,
        'f', 5,
        'h', 5,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == 'q') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 42,
        '#', 26,
        '$', 9,
        ',', 33,
        '0', 29,
        '[', 32,
        ']', 34,
        'i', 4,
        'q', 13,
        's', 3,
        'u', 14,
        'v', 18,
        '+', 39,
        '-', 39,
        'f', 5,
        'h', 5,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'm' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'i' ||
          lookahead == 's') ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'm' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(36);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == 'q') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_quit_statement);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_ptr_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_ptr_token2);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_ptr_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_ptr_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__num_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__num_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__num_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_immudate_num_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_immudate_num_token2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_immudate_num_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_immudate_num_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_immudate_num_token4);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_immudate_num_token5);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_immudate_num_token6);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_imm);
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
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_quit_statement] = ACTIONS(1),
    [aux_sym_ptr_token1] = ACTIONS(1),
    [aux_sym_ptr_token2] = ACTIONS(1),
    [aux_sym_ptr_token3] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__num_token1] = ACTIONS(1),
    [aux_sym__num_token2] = ACTIONS(1),
    [aux_sym__num_token3] = ACTIONS(1),
    [aux_sym_immudate_num_token1] = ACTIONS(1),
    [aux_sym_immudate_num_token2] = ACTIONS(1),
    [aux_sym_immudate_num_token4] = ACTIONS(1),
    [aux_sym_immudate_num_token5] = ACTIONS(1),
    [aux_sym_immudate_num_token6] = ACTIONS(1),
    [anon_sym_imm] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym__statement] = STATE(11),
    [sym_imm_statement] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_quit_statement] = ACTIONS(7),
    [anon_sym_imm] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_quit_statement,
    ACTIONS(9), 1,
      anon_sym_imm,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(11), 2,
      sym__statement,
      sym_imm_statement,
  [20] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_quit_statement,
    ACTIONS(18), 1,
      anon_sym_imm,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(11), 2,
      sym__statement,
      sym_imm_statement,
  [40] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      aux_sym_ptr_token2,
    ACTIONS(25), 1,
      aux_sym_immudate_num_token2,
    STATE(30), 1,
      sym__num,
    ACTIONS(23), 3,
      aux_sym__num_token1,
      aux_sym__num_token2,
      aux_sym__num_token3,
  [58] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      aux_sym_ptr_token2,
    STATE(19), 1,
      sym__num,
    ACTIONS(29), 3,
      aux_sym__num_token1,
      aux_sym__num_token2,
      aux_sym__num_token3,
  [73] = 4,
    ACTIONS(33), 1,
      sym_line_comment,
    ACTIONS(37), 1,
      aux_sym_ptr_token3,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(35), 2,
      sym_quit_statement,
      anon_sym_imm,
  [88] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      aux_sym_ptr_token2,
    STATE(30), 1,
      sym__num,
    ACTIONS(23), 3,
      aux_sym__num_token1,
      aux_sym__num_token2,
      aux_sym__num_token3,
  [103] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      aux_sym_immudate_num_token1,
    ACTIONS(41), 1,
      aux_sym_immudate_num_token5,
    ACTIONS(43), 1,
      aux_sym_immudate_num_token6,
    STATE(15), 1,
      sym_immudate_num,
  [119] = 3,
    ACTIONS(33), 1,
      sym_line_comment,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(47), 2,
      sym_quit_statement,
      anon_sym_imm,
  [131] = 3,
    ACTIONS(33), 1,
      sym_line_comment,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(51), 2,
      sym_quit_statement,
      anon_sym_imm,
  [143] = 4,
    ACTIONS(33), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(57), 2,
      sym_quit_statement,
      anon_sym_imm,
  [157] = 3,
    ACTIONS(33), 1,
      sym_line_comment,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(61), 2,
      sym_quit_statement,
      anon_sym_imm,
  [169] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_quit_statement,
      anon_sym_imm,
  [178] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      aux_sym_immudate_num_token3,
    ACTIONS(63), 1,
      aux_sym_immudate_num_token2,
  [188] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      aux_sym_ptr_token1,
    STATE(12), 1,
      sym_ptr,
  [198] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 1,
      aux_sym_ptr_token2,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
  [208] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      aux_sym_ptr_token1,
  [215] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [222] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(75), 1,
      aux_sym_immudate_num_token4,
  [229] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(77), 1,
      aux_sym_ptr_token2,
  [236] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      aux_sym_ptr_token1,
  [243] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      aux_sym_immudate_num_token3,
  [250] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_COMMA,
  [257] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(83), 1,
      aux_sym_ptr_token2,
  [264] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
  [271] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      aux_sym_ptr_token2,
  [278] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(89), 1,
      anon_sym_COMMA,
  [285] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      aux_sym_ptr_token2,
  [292] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
  [299] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(95), 1,
      aux_sym_immudate_num_token4,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 103,
  [SMALL_STATE(9)] = 119,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 157,
  [SMALL_STATE(13)] = 169,
  [SMALL_STATE(14)] = 178,
  [SMALL_STATE(15)] = 188,
  [SMALL_STATE(16)] = 198,
  [SMALL_STATE(17)] = 208,
  [SMALL_STATE(18)] = 215,
  [SMALL_STATE(19)] = 222,
  [SMALL_STATE(20)] = 229,
  [SMALL_STATE(21)] = 236,
  [SMALL_STATE(22)] = 243,
  [SMALL_STATE(23)] = 250,
  [SMALL_STATE(24)] = 257,
  [SMALL_STATE(25)] = 264,
  [SMALL_STATE(26)] = 271,
  [SMALL_STATE(27)] = 278,
  [SMALL_STATE(28)] = 285,
  [SMALL_STATE(29)] = 292,
  [SMALL_STATE(30)] = 299,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ptr, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 10, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ptr, 10, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ptr, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imm_statement, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imm_statement, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immudate_num, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immudate_num, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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

TS_PUBLIC const TSLanguage *tree_sitter_vsm(void) {
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
