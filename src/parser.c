#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 23
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  aux_sym_mod_definition_token1 = 1,
  anon_sym_RPAREN = 2,
  aux_sym_parameter_token1 = 3,
  anon_sym_LPAREN = 4,
  anon_sym_DOT = 5,
  sym_comment = 6,
  sym_hexadecimal = 7,
  sym_integer = 8,
  sym_string = 9,
  aux_sym_function_def_token1 = 10,
  aux_sym_constant_def_token1 = 11,
  sym_constant_ref = 12,
  aux_sym_list_op_token1 = 13,
  aux_sym_if_token1 = 14,
  aux_sym_raise_token1 = 15,
  aux_sym_ops_token1 = 16,
  aux_sym_quote_token1 = 17,
  aux_sym_builtin_token1 = 18,
  aux_sym_opcode_token1 = 19,
  sym_source_file = 20,
  sym__definition = 21,
  sym_mod_definition = 22,
  sym_parameter = 23,
  sym_multiple_parameters = 24,
  sym_statement = 25,
  sym_primitive = 26,
  sym_variable = 27,
  sym_function_def = 28,
  sym_function_identifier = 29,
  sym_function_call = 30,
  sym_constant_def = 31,
  sym_list_op = 32,
  sym_list = 33,
  sym_if = 34,
  sym_raise = 35,
  sym_ops = 36,
  sym_quote = 37,
  sym_builtin = 38,
  sym_opcode = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_mod_definition_repeat1 = 41,
  aux_sym_multiple_parameters_repeat1 = 42,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_mod_definition_token1] = "mod_definition_token1",
  [anon_sym_RPAREN] = ")",
  [aux_sym_parameter_token1] = "parameter_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DOT] = ".",
  [sym_comment] = "comment",
  [sym_hexadecimal] = "hexadecimal",
  [sym_integer] = "integer",
  [sym_string] = "string",
  [aux_sym_function_def_token1] = "function_def_token1",
  [aux_sym_constant_def_token1] = "constant_def_token1",
  [sym_constant_ref] = "constant_ref",
  [aux_sym_list_op_token1] = "list_op_token1",
  [aux_sym_if_token1] = "if_token1",
  [aux_sym_raise_token1] = "raise_token1",
  [aux_sym_ops_token1] = "ops_token1",
  [aux_sym_quote_token1] = "quote_token1",
  [aux_sym_builtin_token1] = "builtin_token1",
  [aux_sym_opcode_token1] = "opcode_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_mod_definition] = "mod_definition",
  [sym_parameter] = "parameter",
  [sym_multiple_parameters] = "multiple_parameters",
  [sym_statement] = "statement",
  [sym_primitive] = "primitive",
  [sym_variable] = "variable",
  [sym_function_def] = "function_def",
  [sym_function_identifier] = "function_identifier",
  [sym_function_call] = "function_call",
  [sym_constant_def] = "constant_def",
  [sym_list_op] = "list_op",
  [sym_list] = "list",
  [sym_if] = "if",
  [sym_raise] = "raise",
  [sym_ops] = "ops",
  [sym_quote] = "quote",
  [sym_builtin] = "builtin",
  [sym_opcode] = "opcode",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_mod_definition_repeat1] = "mod_definition_repeat1",
  [aux_sym_multiple_parameters_repeat1] = "multiple_parameters_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_mod_definition_token1] = aux_sym_mod_definition_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_comment] = sym_comment,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_integer] = sym_integer,
  [sym_string] = sym_string,
  [aux_sym_function_def_token1] = aux_sym_function_def_token1,
  [aux_sym_constant_def_token1] = aux_sym_constant_def_token1,
  [sym_constant_ref] = sym_constant_ref,
  [aux_sym_list_op_token1] = aux_sym_list_op_token1,
  [aux_sym_if_token1] = aux_sym_if_token1,
  [aux_sym_raise_token1] = aux_sym_raise_token1,
  [aux_sym_ops_token1] = aux_sym_ops_token1,
  [aux_sym_quote_token1] = aux_sym_quote_token1,
  [aux_sym_builtin_token1] = aux_sym_builtin_token1,
  [aux_sym_opcode_token1] = aux_sym_opcode_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_mod_definition] = sym_mod_definition,
  [sym_parameter] = sym_parameter,
  [sym_multiple_parameters] = sym_multiple_parameters,
  [sym_statement] = sym_statement,
  [sym_primitive] = sym_primitive,
  [sym_variable] = sym_variable,
  [sym_function_def] = sym_function_def,
  [sym_function_identifier] = sym_function_identifier,
  [sym_function_call] = sym_function_call,
  [sym_constant_def] = sym_constant_def,
  [sym_list_op] = sym_list_op,
  [sym_list] = sym_list,
  [sym_if] = sym_if,
  [sym_raise] = sym_raise,
  [sym_ops] = sym_ops,
  [sym_quote] = sym_quote,
  [sym_builtin] = sym_builtin,
  [sym_opcode] = sym_opcode,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_mod_definition_repeat1] = aux_sym_mod_definition_repeat1,
  [aux_sym_multiple_parameters_repeat1] = aux_sym_multiple_parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_mod_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parameter_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_def_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_def_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_constant_ref] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_list_op_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raise_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ops_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_builtin_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opcode_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_mod_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_multiple_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_function_def] = {
    .visible = true,
    .named = true,
  },
  [sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_def] = {
    .visible = true,
    .named = true,
  },
  [sym_list_op] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_raise] = {
    .visible = true,
    .named = true,
  },
  [sym_ops] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mod_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiple_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(111);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == ';') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(127);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == ';') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(103);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '5') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(90);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(14);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'k') ADVANCE(30);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 74:
      if (lookahead == 'q') ADVANCE(94);
      END_STATE();
    case 75:
      if (lookahead == 'q') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 95:
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 96:
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 97:
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 98:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 100:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 102:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 103:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 104:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 105:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 106:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 107:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(107)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(130);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(103);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 110:
      if (eof) ADVANCE(111);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == '0') ADVANCE(125);
      if (lookahead == ';') ADVANCE(3);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(110)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_mod_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == 'x') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'a' ||
          lookahead == 'c' ||
          lookahead == 'f' ||
          lookahead == 'r') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '=') ADVANCE(99);
      if (lookahead == '5') ADVANCE(108);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'f' ||
          lookahead == 'r') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 'q') ADVANCE(75);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(133);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_function_def_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_constant_def_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_constant_ref);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_list_op_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_if_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_raise_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_ops_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_quote_token1);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_quote_token1);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_quote_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_builtin_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_opcode_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 110},
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
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
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
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 110},
  [57] = {.lex_state = 110},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 110},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 110},
  [65] = {.lex_state = 110},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 107},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_parameter_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_function_def_token1] = ACTIONS(1),
    [aux_sym_constant_def_token1] = ACTIONS(1),
    [sym_constant_ref] = ACTIONS(1),
    [aux_sym_list_op_token1] = ACTIONS(1),
    [aux_sym_if_token1] = ACTIONS(1),
    [aux_sym_raise_token1] = ACTIONS(1),
    [aux_sym_ops_token1] = ACTIONS(1),
    [aux_sym_quote_token1] = ACTIONS(1),
    [aux_sym_builtin_token1] = ACTIONS(1),
    [aux_sym_opcode_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym__definition] = STATE(57),
    [sym_mod_definition] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_mod_definition_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [2] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(9),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [3] = {
    [sym_statement] = STATE(9),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(9),
    [anon_sym_RPAREN] = ACTIONS(41),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(43),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [4] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(45),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [5] = {
    [sym_statement] = STATE(4),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(4),
    [anon_sym_RPAREN] = ACTIONS(47),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(49),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [6] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(51),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [7] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(53),
    [aux_sym_parameter_token1] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(58),
    [sym_comment] = ACTIONS(61),
    [sym_hexadecimal] = ACTIONS(64),
    [sym_integer] = ACTIONS(64),
    [sym_string] = ACTIONS(67),
    [aux_sym_function_def_token1] = ACTIONS(70),
    [aux_sym_constant_def_token1] = ACTIONS(73),
    [sym_constant_ref] = ACTIONS(76),
    [aux_sym_list_op_token1] = ACTIONS(79),
    [aux_sym_if_token1] = ACTIONS(82),
    [aux_sym_raise_token1] = ACTIONS(85),
    [aux_sym_ops_token1] = ACTIONS(88),
    [aux_sym_quote_token1] = ACTIONS(91),
    [aux_sym_builtin_token1] = ACTIONS(94),
    [aux_sym_opcode_token1] = ACTIONS(97),
  },
  [8] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(100),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [9] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(102),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [10] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(104),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [11] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(106),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [12] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(108),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [13] = {
    [sym_statement] = STATE(16),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(16),
    [anon_sym_RPAREN] = ACTIONS(110),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(112),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [14] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(114),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [15] = {
    [sym_statement] = STATE(8),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(8),
    [anon_sym_RPAREN] = ACTIONS(116),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(118),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [16] = {
    [sym_statement] = STATE(7),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(7),
    [anon_sym_RPAREN] = ACTIONS(120),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [17] = {
    [sym_statement] = STATE(6),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(6),
    [anon_sym_RPAREN] = ACTIONS(122),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(124),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [18] = {
    [sym_statement] = STATE(14),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(14),
    [anon_sym_RPAREN] = ACTIONS(126),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(128),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [19] = {
    [sym_statement] = STATE(2),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(2),
    [anon_sym_RPAREN] = ACTIONS(130),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(132),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [20] = {
    [sym_statement] = STATE(12),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(12),
    [anon_sym_RPAREN] = ACTIONS(134),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(136),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [21] = {
    [sym_statement] = STATE(11),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(11),
    [anon_sym_RPAREN] = ACTIONS(138),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(140),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
  [22] = {
    [sym_statement] = STATE(10),
    [sym_primitive] = STATE(26),
    [sym_variable] = STATE(26),
    [sym_function_def] = STATE(26),
    [sym_function_call] = STATE(26),
    [sym_constant_def] = STATE(26),
    [sym_list_op] = STATE(26),
    [sym_list] = STATE(26),
    [sym_if] = STATE(26),
    [sym_raise] = STATE(26),
    [sym_ops] = STATE(26),
    [sym_quote] = STATE(26),
    [sym_builtin] = STATE(26),
    [sym_opcode] = STATE(26),
    [aux_sym_mod_definition_repeat1] = STATE(10),
    [anon_sym_RPAREN] = ACTIONS(142),
    [aux_sym_parameter_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_comment] = ACTIONS(144),
    [sym_hexadecimal] = ACTIONS(17),
    [sym_integer] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [aux_sym_function_def_token1] = ACTIONS(21),
    [aux_sym_constant_def_token1] = ACTIONS(23),
    [sym_constant_ref] = ACTIONS(25),
    [aux_sym_list_op_token1] = ACTIONS(27),
    [aux_sym_if_token1] = ACTIONS(29),
    [aux_sym_raise_token1] = ACTIONS(31),
    [aux_sym_ops_token1] = ACTIONS(33),
    [aux_sym_quote_token1] = ACTIONS(35),
    [aux_sym_builtin_token1] = ACTIONS(37),
    [aux_sym_opcode_token1] = ACTIONS(39),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(148), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(146), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [22] = 2,
    ACTIONS(152), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(150), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [44] = 2,
    ACTIONS(156), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(154), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [66] = 2,
    ACTIONS(160), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(158), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [88] = 2,
    ACTIONS(164), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(162), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [110] = 2,
    ACTIONS(168), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(166), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [132] = 2,
    ACTIONS(172), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(170), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [154] = 2,
    ACTIONS(176), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(174), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [176] = 2,
    ACTIONS(180), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(178), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [198] = 2,
    ACTIONS(184), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(182), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [220] = 2,
    ACTIONS(188), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(186), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [242] = 2,
    ACTIONS(192), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(190), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [264] = 2,
    ACTIONS(196), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(194), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [286] = 2,
    ACTIONS(200), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(198), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [308] = 2,
    ACTIONS(204), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(202), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [330] = 2,
    ACTIONS(208), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(206), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [352] = 2,
    ACTIONS(212), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(210), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [374] = 2,
    ACTIONS(216), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(214), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [396] = 2,
    ACTIONS(220), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(218), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [418] = 2,
    ACTIONS(224), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(222), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [440] = 2,
    ACTIONS(228), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(226), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [462] = 2,
    ACTIONS(232), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(230), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [484] = 2,
    ACTIONS(236), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(234), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [506] = 2,
    ACTIONS(240), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(238), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [528] = 2,
    ACTIONS(244), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(242), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [550] = 2,
    ACTIONS(248), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(246), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [572] = 2,
    ACTIONS(252), 4,
      anon_sym_LPAREN,
      sym_hexadecimal,
      sym_integer,
      sym_constant_ref,
    ACTIONS(250), 13,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      sym_comment,
      sym_string,
      aux_sym_function_def_token1,
      aux_sym_constant_def_token1,
      aux_sym_list_op_token1,
      aux_sym_if_token1,
      aux_sym_raise_token1,
      aux_sym_ops_token1,
      aux_sym_quote_token1,
      aux_sym_builtin_token1,
      aux_sym_opcode_token1,
  [594] = 5,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(256), 1,
      aux_sym_parameter_token1,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 2,
      anon_sym_DOT,
      sym_comment,
    STATE(52), 3,
      sym_multiple_parameters,
      sym_variable,
      aux_sym_multiple_parameters_repeat1,
  [613] = 5,
    ACTIONS(256), 1,
      aux_sym_parameter_token1,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    ACTIONS(264), 2,
      anon_sym_DOT,
      sym_comment,
    STATE(54), 3,
      sym_multiple_parameters,
      sym_variable,
      aux_sym_multiple_parameters_repeat1,
  [632] = 5,
    ACTIONS(256), 1,
      aux_sym_parameter_token1,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    ACTIONS(264), 2,
      anon_sym_DOT,
      sym_comment,
    STATE(54), 3,
      sym_multiple_parameters,
      sym_variable,
      aux_sym_multiple_parameters_repeat1,
  [651] = 5,
    ACTIONS(256), 1,
      aux_sym_parameter_token1,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    ACTIONS(270), 2,
      anon_sym_DOT,
      sym_comment,
    STATE(51), 3,
      sym_multiple_parameters,
      sym_variable,
      aux_sym_multiple_parameters_repeat1,
  [670] = 5,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    ACTIONS(274), 1,
      aux_sym_parameter_token1,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 2,
      anon_sym_DOT,
      sym_comment,
    STATE(54), 3,
      sym_multiple_parameters,
      sym_variable,
      aux_sym_multiple_parameters_repeat1,
  [689] = 5,
    ACTIONS(27), 1,
      aux_sym_list_op_token1,
    ACTIONS(283), 1,
      aux_sym_parameter_token1,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_function_identifier,
    STATE(70), 2,
      sym_function_call,
      sym_list_op,
  [706] = 4,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 1,
      aux_sym_mod_definition_token1,
    ACTIONS(292), 1,
      sym_comment,
    STATE(56), 3,
      sym__definition,
      sym_mod_definition,
      aux_sym_source_file_repeat1,
  [721] = 4,
    ACTIONS(5), 1,
      aux_sym_mod_definition_token1,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 1,
      sym_comment,
    STATE(56), 3,
      sym__definition,
      sym_mod_definition,
      aux_sym_source_file_repeat1,
  [736] = 1,
    ACTIONS(162), 5,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_comment,
  [744] = 1,
    ACTIONS(154), 5,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_comment,
  [752] = 1,
    ACTIONS(242), 5,
      anon_sym_RPAREN,
      aux_sym_parameter_token1,
      anon_sym_LPAREN,
      anon_sym_DOT,
      sym_comment,
  [760] = 3,
    ACTIONS(299), 1,
      aux_sym_parameter_token1,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(13), 2,
      sym_parameter,
      sym_multiple_parameters,
  [771] = 3,
    ACTIONS(17), 1,
      sym_integer,
    STATE(71), 1,
      sym_primitive,
    ACTIONS(19), 2,
      sym_hexadecimal,
      sym_string,
  [782] = 3,
    ACTIONS(299), 1,
      aux_sym_parameter_token1,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(5), 2,
      sym_parameter,
      sym_multiple_parameters,
  [793] = 1,
    ACTIONS(303), 3,
      ts_builtin_sym_end,
      aux_sym_mod_definition_token1,
      sym_comment,
  [799] = 1,
    ACTIONS(305), 3,
      ts_builtin_sym_end,
      aux_sym_mod_definition_token1,
      sym_comment,
  [805] = 2,
    ACTIONS(307), 1,
      aux_sym_parameter_token1,
    STATE(63), 1,
      sym_function_identifier,
  [812] = 2,
    ACTIONS(283), 1,
      aux_sym_parameter_token1,
    STATE(17), 1,
      sym_function_identifier,
  [819] = 1,
    ACTIONS(170), 2,
      aux_sym_parameter_token1,
      anon_sym_LPAREN,
  [824] = 1,
    ACTIONS(309), 1,
      sym_constant_ref,
  [828] = 1,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
  [832] = 1,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
  [836] = 1,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(23)] = 0,
  [SMALL_STATE(24)] = 22,
  [SMALL_STATE(25)] = 44,
  [SMALL_STATE(26)] = 66,
  [SMALL_STATE(27)] = 88,
  [SMALL_STATE(28)] = 110,
  [SMALL_STATE(29)] = 132,
  [SMALL_STATE(30)] = 154,
  [SMALL_STATE(31)] = 176,
  [SMALL_STATE(32)] = 198,
  [SMALL_STATE(33)] = 220,
  [SMALL_STATE(34)] = 242,
  [SMALL_STATE(35)] = 264,
  [SMALL_STATE(36)] = 286,
  [SMALL_STATE(37)] = 308,
  [SMALL_STATE(38)] = 330,
  [SMALL_STATE(39)] = 352,
  [SMALL_STATE(40)] = 374,
  [SMALL_STATE(41)] = 396,
  [SMALL_STATE(42)] = 418,
  [SMALL_STATE(43)] = 440,
  [SMALL_STATE(44)] = 462,
  [SMALL_STATE(45)] = 484,
  [SMALL_STATE(46)] = 506,
  [SMALL_STATE(47)] = 528,
  [SMALL_STATE(48)] = 550,
  [SMALL_STATE(49)] = 572,
  [SMALL_STATE(50)] = 594,
  [SMALL_STATE(51)] = 613,
  [SMALL_STATE(52)] = 632,
  [SMALL_STATE(53)] = 651,
  [SMALL_STATE(54)] = 670,
  [SMALL_STATE(55)] = 689,
  [SMALL_STATE(56)] = 706,
  [SMALL_STATE(57)] = 721,
  [SMALL_STATE(58)] = 736,
  [SMALL_STATE(59)] = 744,
  [SMALL_STATE(60)] = 752,
  [SMALL_STATE(61)] = 760,
  [SMALL_STATE(62)] = 771,
  [SMALL_STATE(63)] = 782,
  [SMALL_STATE(64)] = 793,
  [SMALL_STATE(65)] = 799,
  [SMALL_STATE(66)] = 805,
  [SMALL_STATE(67)] = 812,
  [SMALL_STATE(68)] = 819,
  [SMALL_STATE(69)] = 824,
  [SMALL_STATE(70)] = 828,
  [SMALL_STATE(71)] = 832,
  [SMALL_STATE(72)] = 836,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(25),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(55),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(7),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(36),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(36),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(66),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(69),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(26),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(18),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(19),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(20),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(21),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(22),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(3),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mod_definition_repeat1, 2), SHIFT_REPEAT(15),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_op, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_op, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiple_parameters, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiple_parameters, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 5),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_identifier, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_def, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant_def, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_def, 4),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_def, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_op, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_op, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ops, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ops, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raise, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raise, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ops, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ops, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raise, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raise, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opcode, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opcode, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiple_parameters, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiple_parameters, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiple_parameters_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiple_parameters_repeat1, 2), SHIFT_REPEAT(59),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiple_parameters_repeat1, 2), SHIFT_REPEAT(53),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiple_parameters_repeat1, 2), SHIFT_REPEAT(54),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_definition, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_definition, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [315] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Chialisp(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
