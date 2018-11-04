#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 333
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comma = 1,
  anon_sym_query = 2,
  anon_sym_mutation = 3,
  anon_sym_subscription = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_COLON = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_DOT_DOT_DOT = 10,
  anon_sym_fragment = 11,
  anon_sym_on = 12,
  anon_sym_false = 13,
  anon_sym_true = 14,
  sym_NullValue = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  sym_IntValue = 18,
  sym_FloatValue = 19,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 20,
  aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_RBRACK_PIPE_BSLASHn_PIPE_DQUOTE_DQUOTE_QMARK_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_STAR_SLASH = 23,
  anon_sym_DOLLAR = 24,
  anon_sym_EQ = 25,
  anon_sym_BANG = 26,
  anon_sym_AT = 27,
  anon_sym_schema = 28,
  anon_sym_extend = 29,
  anon_sym_scalar = 30,
  anon_sym_type = 31,
  anon_sym_interface = 32,
  anon_sym_union = 33,
  anon_sym_enum = 34,
  anon_sym_input = 35,
  anon_sym_implements = 36,
  anon_sym_AMP = 37,
  anon_sym_PIPE = 38,
  anon_sym_directive = 39,
  anon_sym_QUERY = 40,
  anon_sym_MUTATION = 41,
  anon_sym_SUBSCRIPTION = 42,
  anon_sym_FIELD = 43,
  anon_sym_FRAGMENT_DEFINITION = 44,
  anon_sym_FRAGMENT_SPREAD = 45,
  anon_sym_INLINE_FRAGMENT = 46,
  anon_sym_VARIABLE_DEFINITION = 47,
  anon_sym_SCHEMA = 48,
  anon_sym_SCALAR = 49,
  anon_sym_OBJECT = 50,
  anon_sym_FIELD_DEFINITION = 51,
  anon_sym_ARGUMENT_DEFINITION = 52,
  anon_sym_INTERFACE = 53,
  anon_sym_UNION = 54,
  anon_sym_ENUM = 55,
  anon_sym_ENUM_VALUE = 56,
  anon_sym_INPUT_OBJECT = 57,
  anon_sym_INPUT_FIELD_DEFINITION = 58,
  sym_comment = 59,
  sym_Name = 60,
  sym_source_file = 61,
  sym_Document = 62,
  sym_Definition = 63,
  sym_ExecutableDefinition = 64,
  sym_OperationDefinition = 65,
  sym_OperationType = 66,
  sym_SelectionSet = 67,
  sym_Selection = 68,
  sym_Field = 69,
  sym_Alias = 70,
  sym_Arguments = 71,
  sym_Argument = 72,
  sym_FragmentSpread = 73,
  sym_InlineFragment = 74,
  sym_FragmentDefinition = 75,
  sym_FragmentName = 76,
  sym_TypeCondition = 77,
  sym_Value = 78,
  sym_BooleanValue = 79,
  sym_EnumValue = 80,
  sym_ListValue = 81,
  sym_ObjectValue = 82,
  sym_ObjectField = 83,
  sym_StringValue = 84,
  sym_VariableDefinitions = 85,
  sym_VariableDefinition = 86,
  sym_Variable = 87,
  sym_DefaultValue = 88,
  sym_Type = 89,
  sym_NamedType = 90,
  sym_ListType = 91,
  sym_NonNullType = 92,
  sym_Directives = 93,
  sym_Directive = 94,
  sym_TypeSystemDefinition = 95,
  sym_TypeSystemExtension = 96,
  sym_SchemaDefinition = 97,
  sym_SchemaExtension = 98,
  sym_TypeExtension = 99,
  sym_ScalarTypeExtension = 100,
  sym_ObjectTypeExtension = 101,
  sym_InterfaceTypeExtension = 102,
  sym_UnionTypeExtension = 103,
  sym_EnumTypeExtension = 104,
  sym_InputObjectTypeExtension = 105,
  sym_OperationTypeDefinition = 106,
  sym_Description = 107,
  sym_TypeDefinition = 108,
  sym_ScalarTypeDefinition = 109,
  sym_ObjectTypeDefinition = 110,
  sym_ImplementsInterfaces = 111,
  sym_FieldsDefinition = 112,
  sym_FieldDefinition = 113,
  sym_ArgumentsDefinition = 114,
  sym_InputValueDefinition = 115,
  sym_InterfaceTypeDefinition = 116,
  sym_UnionTypeDefinition = 117,
  sym_UnionMemberTypes = 118,
  sym_EnumTypeDefinition = 119,
  sym_EnumValuesDefinition = 120,
  sym_EnumValueDefinition = 121,
  sym_InputObjectTypeDefinition = 122,
  sym_InputFieldsDefinition = 123,
  sym_DirectiveDefinition = 124,
  sym_DirectiveLocations = 125,
  sym_DirectiveLocation = 126,
  sym_ExecutableDirectiveLocation = 127,
  sym_TypeSystemDirectiveLocation = 128,
  aux_sym_Document_repeat1 = 129,
  aux_sym_SelectionSet_repeat1 = 130,
  aux_sym_Arguments_repeat1 = 131,
  aux_sym_ListValue_repeat1 = 132,
  aux_sym_ObjectValue_repeat1 = 133,
  aux_sym_VariableDefinitions_repeat1 = 134,
  aux_sym_Directives_repeat1 = 135,
  aux_sym_SchemaDefinition_repeat1 = 136,
  aux_sym_ImplementsInterfaces_repeat1 = 137,
  aux_sym_FieldsDefinition_repeat1 = 138,
  aux_sym_ArgumentsDefinition_repeat1 = 139,
  aux_sym_UnionMemberTypes_repeat1 = 140,
  aux_sym_EnumValuesDefinition_repeat1 = 141,
  aux_sym_DirectiveLocations_repeat1 = 142,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comma] = "comma",
  [anon_sym_query] = "query",
  [anon_sym_mutation] = "mutation",
  [anon_sym_subscription] = "subscription",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_fragment] = "fragment",
  [anon_sym_on] = "on",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [sym_NullValue] = "NullValue",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_IntValue] = "IntValue",
  [sym_FloatValue] = "FloatValue",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_RBRACK_PIPE_BSLASHn_PIPE_DQUOTE_DQUOTE_QMARK_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH] = "/([^\"]|\\n|\"\"?[^\"])*/",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_STAR_SLASH] = "/[^\"\\\\\\n]*/",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG] = "!",
  [anon_sym_AT] = "@",
  [anon_sym_schema] = "schema",
  [anon_sym_extend] = "extend",
  [anon_sym_scalar] = "scalar",
  [anon_sym_type] = "type",
  [anon_sym_interface] = "interface",
  [anon_sym_union] = "union",
  [anon_sym_enum] = "enum",
  [anon_sym_input] = "input",
  [anon_sym_implements] = "implements",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_directive] = "directive",
  [anon_sym_QUERY] = "QUERY",
  [anon_sym_MUTATION] = "MUTATION",
  [anon_sym_SUBSCRIPTION] = "SUBSCRIPTION",
  [anon_sym_FIELD] = "FIELD",
  [anon_sym_FRAGMENT_DEFINITION] = "FRAGMENT_DEFINITION",
  [anon_sym_FRAGMENT_SPREAD] = "FRAGMENT_SPREAD",
  [anon_sym_INLINE_FRAGMENT] = "INLINE_FRAGMENT",
  [anon_sym_VARIABLE_DEFINITION] = "VARIABLE_DEFINITION",
  [anon_sym_SCHEMA] = "SCHEMA",
  [anon_sym_SCALAR] = "SCALAR",
  [anon_sym_OBJECT] = "OBJECT",
  [anon_sym_FIELD_DEFINITION] = "FIELD_DEFINITION",
  [anon_sym_ARGUMENT_DEFINITION] = "ARGUMENT_DEFINITION",
  [anon_sym_INTERFACE] = "INTERFACE",
  [anon_sym_UNION] = "UNION",
  [anon_sym_ENUM] = "ENUM",
  [anon_sym_ENUM_VALUE] = "ENUM_VALUE",
  [anon_sym_INPUT_OBJECT] = "INPUT_OBJECT",
  [anon_sym_INPUT_FIELD_DEFINITION] = "INPUT_FIELD_DEFINITION",
  [sym_comment] = "comment",
  [sym_Name] = "Name",
  [sym_source_file] = "source_file",
  [sym_Document] = "Document",
  [sym_Definition] = "Definition",
  [sym_ExecutableDefinition] = "ExecutableDefinition",
  [sym_OperationDefinition] = "OperationDefinition",
  [sym_OperationType] = "OperationType",
  [sym_SelectionSet] = "SelectionSet",
  [sym_Selection] = "Selection",
  [sym_Field] = "Field",
  [sym_Alias] = "Alias",
  [sym_Arguments] = "Arguments",
  [sym_Argument] = "Argument",
  [sym_FragmentSpread] = "FragmentSpread",
  [sym_InlineFragment] = "InlineFragment",
  [sym_FragmentDefinition] = "FragmentDefinition",
  [sym_FragmentName] = "FragmentName",
  [sym_TypeCondition] = "TypeCondition",
  [sym_Value] = "Value",
  [sym_BooleanValue] = "BooleanValue",
  [sym_EnumValue] = "EnumValue",
  [sym_ListValue] = "ListValue",
  [sym_ObjectValue] = "ObjectValue",
  [sym_ObjectField] = "ObjectField",
  [sym_StringValue] = "StringValue",
  [sym_VariableDefinitions] = "VariableDefinitions",
  [sym_VariableDefinition] = "VariableDefinition",
  [sym_Variable] = "Variable",
  [sym_DefaultValue] = "DefaultValue",
  [sym_Type] = "Type",
  [sym_NamedType] = "NamedType",
  [sym_ListType] = "ListType",
  [sym_NonNullType] = "NonNullType",
  [sym_Directives] = "Directives",
  [sym_Directive] = "Directive",
  [sym_TypeSystemDefinition] = "TypeSystemDefinition",
  [sym_TypeSystemExtension] = "TypeSystemExtension",
  [sym_SchemaDefinition] = "SchemaDefinition",
  [sym_SchemaExtension] = "SchemaExtension",
  [sym_TypeExtension] = "TypeExtension",
  [sym_ScalarTypeExtension] = "ScalarTypeExtension",
  [sym_ObjectTypeExtension] = "ObjectTypeExtension",
  [sym_InterfaceTypeExtension] = "InterfaceTypeExtension",
  [sym_UnionTypeExtension] = "UnionTypeExtension",
  [sym_EnumTypeExtension] = "EnumTypeExtension",
  [sym_InputObjectTypeExtension] = "InputObjectTypeExtension",
  [sym_OperationTypeDefinition] = "OperationTypeDefinition",
  [sym_Description] = "Description",
  [sym_TypeDefinition] = "TypeDefinition",
  [sym_ScalarTypeDefinition] = "ScalarTypeDefinition",
  [sym_ObjectTypeDefinition] = "ObjectTypeDefinition",
  [sym_ImplementsInterfaces] = "ImplementsInterfaces",
  [sym_FieldsDefinition] = "FieldsDefinition",
  [sym_FieldDefinition] = "FieldDefinition",
  [sym_ArgumentsDefinition] = "ArgumentsDefinition",
  [sym_InputValueDefinition] = "InputValueDefinition",
  [sym_InterfaceTypeDefinition] = "InterfaceTypeDefinition",
  [sym_UnionTypeDefinition] = "UnionTypeDefinition",
  [sym_UnionMemberTypes] = "UnionMemberTypes",
  [sym_EnumTypeDefinition] = "EnumTypeDefinition",
  [sym_EnumValuesDefinition] = "EnumValuesDefinition",
  [sym_EnumValueDefinition] = "EnumValueDefinition",
  [sym_InputObjectTypeDefinition] = "InputObjectTypeDefinition",
  [sym_InputFieldsDefinition] = "InputFieldsDefinition",
  [sym_DirectiveDefinition] = "DirectiveDefinition",
  [sym_DirectiveLocations] = "DirectiveLocations",
  [sym_DirectiveLocation] = "DirectiveLocation",
  [sym_ExecutableDirectiveLocation] = "ExecutableDirectiveLocation",
  [sym_TypeSystemDirectiveLocation] = "TypeSystemDirectiveLocation",
  [aux_sym_Document_repeat1] = "Document_repeat1",
  [aux_sym_SelectionSet_repeat1] = "SelectionSet_repeat1",
  [aux_sym_Arguments_repeat1] = "Arguments_repeat1",
  [aux_sym_ListValue_repeat1] = "ListValue_repeat1",
  [aux_sym_ObjectValue_repeat1] = "ObjectValue_repeat1",
  [aux_sym_VariableDefinitions_repeat1] = "VariableDefinitions_repeat1",
  [aux_sym_Directives_repeat1] = "Directives_repeat1",
  [aux_sym_SchemaDefinition_repeat1] = "SchemaDefinition_repeat1",
  [aux_sym_ImplementsInterfaces_repeat1] = "ImplementsInterfaces_repeat1",
  [aux_sym_FieldsDefinition_repeat1] = "FieldsDefinition_repeat1",
  [aux_sym_ArgumentsDefinition_repeat1] = "ArgumentsDefinition_repeat1",
  [aux_sym_UnionMemberTypes_repeat1] = "UnionMemberTypes_repeat1",
  [aux_sym_EnumValuesDefinition_repeat1] = "EnumValuesDefinition_repeat1",
  [aux_sym_DirectiveLocations_repeat1] = "DirectiveLocations_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mutation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subscription] = {
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
  [anon_sym_COLON] = {
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
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [sym_NullValue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_IntValue] = {
    .visible = true,
    .named = true,
  },
  [sym_FloatValue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_RBRACK_PIPE_BSLASHn_PIPE_DQUOTE_DQUOTE_QMARK_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_schema] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scalar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_directive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QUERY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MUTATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUBSCRIPTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIELD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FRAGMENT_DEFINITION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FRAGMENT_SPREAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INLINE_FRAGMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARIABLE_DEFINITION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCHEMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCALAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OBJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIELD_DEFINITION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ARGUMENT_DEFINITION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTERFACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENUM_VALUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INPUT_OBJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INPUT_FIELD_DEFINITION] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_Name] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_Document] = {
    .visible = true,
    .named = true,
  },
  [sym_Definition] = {
    .visible = true,
    .named = true,
  },
  [sym_ExecutableDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_OperationDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_OperationType] = {
    .visible = true,
    .named = true,
  },
  [sym_SelectionSet] = {
    .visible = true,
    .named = true,
  },
  [sym_Selection] = {
    .visible = true,
    .named = true,
  },
  [sym_Field] = {
    .visible = true,
    .named = true,
  },
  [sym_Alias] = {
    .visible = true,
    .named = true,
  },
  [sym_Arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_Argument] = {
    .visible = true,
    .named = true,
  },
  [sym_FragmentSpread] = {
    .visible = true,
    .named = true,
  },
  [sym_InlineFragment] = {
    .visible = true,
    .named = true,
  },
  [sym_FragmentDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_FragmentName] = {
    .visible = true,
    .named = true,
  },
  [sym_TypeCondition] = {
    .visible = true,
    .named = true,
  },
  [sym_Value] = {
    .visible = true,
    .named = true,
  },
  [sym_BooleanValue] = {
    .visible = true,
    .named = true,
  },
  [sym_EnumValue] = {
    .visible = true,
    .named = true,
  },
  [sym_ListValue] = {
    .visible = true,
    .named = true,
  },
  [sym_ObjectValue] = {
    .visible = true,
    .named = true,
  },
  [sym_ObjectField] = {
    .visible = true,
    .named = true,
  },
  [sym_StringValue] = {
    .visible = true,
    .named = true,
  },
  [sym_VariableDefinitions] = {
    .visible = true,
    .named = true,
  },
  [sym_VariableDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_Variable] = {
    .visible = true,
    .named = true,
  },
  [sym_DefaultValue] = {
    .visible = true,
    .named = true,
  },
  [sym_Type] = {
    .visible = true,
    .named = true,
  },
  [sym_NamedType] = {
    .visible = true,
    .named = true,
  },
  [sym_ListType] = {
    .visible = true,
    .named = true,
  },
  [sym_NonNullType] = {
    .visible = true,
    .named = true,
  },
  [sym_Directives] = {
    .visible = true,
    .named = true,
  },
  [sym_Directive] = {
    .visible = true,
    .named = true,
  },
  [sym_TypeSystemDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_TypeSystemExtension] = {
    .visible = true,
    .named = true,
  },
  [sym_SchemaDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_SchemaExtension] = {
    .visible = true,
    .named = true,
  },
  [sym_TypeExtension] = {
    .visible = true,
    .named = true,
  },
  [sym_ScalarTypeExtension] = {
    .visible = true,
    .named = true,
  },
  [sym_ObjectTypeExtension] = {
    .visible = true,
    .named = true,
  },
  [sym_InterfaceTypeExtension] = {
    .visible = true,
    .named = true,
  },
  [sym_UnionTypeExtension] = {
    .visible = true,
    .named = true,
  },
  [sym_EnumTypeExtension] = {
    .visible = true,
    .named = true,
  },
  [sym_InputObjectTypeExtension] = {
    .visible = true,
    .named = true,
  },
  [sym_OperationTypeDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_Description] = {
    .visible = true,
    .named = true,
  },
  [sym_TypeDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_ScalarTypeDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_ObjectTypeDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_ImplementsInterfaces] = {
    .visible = true,
    .named = true,
  },
  [sym_FieldsDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_FieldDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_ArgumentsDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_InputValueDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_InterfaceTypeDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_UnionTypeDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_UnionMemberTypes] = {
    .visible = true,
    .named = true,
  },
  [sym_EnumTypeDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_EnumValuesDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_EnumValueDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_InputObjectTypeDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_InputFieldsDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_DirectiveDefinition] = {
    .visible = true,
    .named = true,
  },
  [sym_DirectiveLocations] = {
    .visible = true,
    .named = true,
  },
  [sym_DirectiveLocation] = {
    .visible = true,
    .named = true,
  },
  [sym_ExecutableDirectiveLocation] = {
    .visible = true,
    .named = true,
  },
  [sym_TypeSystemDirectiveLocation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_Document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SelectionSet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ListValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ObjectValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_VariableDefinitions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Directives_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SchemaDefinition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ImplementsInterfaces_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_FieldsDefinition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ArgumentsDefinition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_UnionMemberTypes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_EnumValuesDefinition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_DirectiveLocations_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\"')
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 6:
      if (lookahead == ' ')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 13:
      if (lookahead == '0')
        ADVANCE(14);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_IntValue);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'E')
        ADVANCE(17);
      if (lookahead == 'e')
        ADVANCE(17);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_FloatValue);
      if (lookahead == 'E')
        ADVANCE(17);
      if (lookahead == 'e')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_FloatValue);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_IntValue);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'E')
        ADVANCE(17);
      if (lookahead == 'e')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '.')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '.')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_Name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_RBRACK_PIPE_BSLASHn_PIPE_DQUOTE_DQUOTE_QMARK_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(36);
      if (lookahead == '\"')
        ADVANCE(37);
      if (lookahead == '#')
        ADVANCE(40);
      if (lookahead == ',')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(36);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_RBRACK_PIPE_BSLASHn_PIPE_DQUOTE_DQUOTE_QMARK_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(36);
      if (lookahead == '\"')
        ADVANCE(37);
      if (lookahead == '#')
        ADVANCE(40);
      if (lookahead == ',')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(36);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == '\"')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_RBRACK_PIPE_BSLASHn_PIPE_DQUOTE_DQUOTE_QMARK_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '\"')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_RBRACK_PIPE_BSLASHn_PIPE_DQUOTE_DQUOTE_QMARK_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == ' ')
        ADVANCE(41);
      if (lookahead == '\"')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_RBRACK_PIPE_BSLASHn_PIPE_DQUOTE_DQUOTE_QMARK_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '\"')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '\"')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '\"')
        ADVANCE(7);
      if (lookahead != 0)
        ADVANCE(41);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comma);
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '\"')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_STAR_SLASH);
      if (lookahead == '\n')
        SKIP(45);
      if (lookahead == '#')
        ADVANCE(46);
      if (lookahead == ',')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '\\')
        ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_STAR_SLASH);
      if (lookahead == ' ')
        ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\"' &&
          lookahead != '\\')
        ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_STAR_SLASH);
      if (lookahead == '\"' ||
          lookahead == '\\')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\"' &&
          lookahead != '\\')
        ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comma);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\"' &&
          lookahead != '\\')
        ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(46);
      if (lookahead == ',')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '\\')
        ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(51);
      END_STATE();
    case 52:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 53:
      if (lookahead == '\"')
        ADVANCE(54);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 55:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 56:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 57:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(58);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 59:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 60:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 61:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 62:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 63:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == ']')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 64:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 65:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(65);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 66:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(66);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 67:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 68:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == ']')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    case 70:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 'A')
        ADVANCE(1);
      if (lookahead == 'E')
        ADVANCE(20);
      if (lookahead == 'F')
        ADVANCE(30);
      if (lookahead == 'I')
        ADVANCE(70);
      if (lookahead == 'M')
        ADVANCE(118);
      if (lookahead == 'O')
        ADVANCE(126);
      if (lookahead == 'Q')
        ADVANCE(132);
      if (lookahead == 'S')
        ADVANCE(137);
      if (lookahead == 'U')
        ADVANCE(158);
      if (lookahead == 'V')
        ADVANCE(163);
      if (lookahead == 'd')
        ADVANCE(182);
      if (lookahead == 'e')
        ADVANCE(191);
      if (lookahead == 'f')
        ADVANCE(200);
      if (lookahead == 'i')
        ADVANCE(212);
      if (lookahead == 'm')
        ADVANCE(233);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 'o')
        ADVANCE(245);
      if (lookahead == 'q')
        ADVANCE(247);
      if (lookahead == 's')
        ADVANCE(252);
      if (lookahead == 't')
        ADVANCE(273);
      if (lookahead == 'u')
        ADVANCE(280);
      END_STATE();
    case 1:
      if (lookahead == 'R')
        ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'G')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'U')
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'M')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'E')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'N')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'T')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '_')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'D')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'E')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'F')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'I')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'N')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'I')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'T')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'I')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'O')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'N')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_ARGUMENT_DEFINITION);
      END_STATE();
    case 20:
      if (lookahead == 'N')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'U')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'M')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_ENUM);
      if (lookahead == '_')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'V')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'A')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'L')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'U')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'E')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_ENUM_VALUE);
      END_STATE();
    case 30:
      if (lookahead == 'I')
        ADVANCE(31);
      if (lookahead == 'R')
        ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'E')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'L')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'D')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_FIELD);
      if (lookahead == '_')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'D')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'E')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'F')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'I')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'N')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'I')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'T')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'I')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'O')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'N')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_FIELD_DEFINITION);
      END_STATE();
    case 46:
      if (lookahead == 'A')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'G')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'M')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'E')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'N')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'T')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '_')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'D')
        ADVANCE(54);
      if (lookahead == 'S')
        ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'E')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'F')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'I')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'N')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'I')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'T')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'I')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'O')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'N')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_FRAGMENT_DEFINITION);
      END_STATE();
    case 64:
      if (lookahead == 'P')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'R')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'E')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'A')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'D')
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_FRAGMENT_SPREAD);
      END_STATE();
    case 70:
      if (lookahead == 'N')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'L')
        ADVANCE(72);
      if (lookahead == 'P')
        ADVANCE(85);
      if (lookahead == 'T')
        ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == 'I')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'N')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'E')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == '_')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'F')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'R')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'A')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'G')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'M')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'E')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'N')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'T')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_INLINE_FRAGMENT);
      END_STATE();
    case 85:
      if (lookahead == 'U')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'T')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == '_')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'F')
        ADVANCE(89);
      if (lookahead == 'O')
        ADVANCE(105);
      END_STATE();
    case 89:
      if (lookahead == 'I')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'E')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'L')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'D')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == '_')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'D')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'E')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'F')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'I')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'N')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'I')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'T')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'I')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'O')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'N')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_INPUT_FIELD_DEFINITION);
      END_STATE();
    case 105:
      if (lookahead == 'B')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'J')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'E')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'C')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'T')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_INPUT_OBJECT);
      END_STATE();
    case 111:
      if (lookahead == 'E')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'R')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'F')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'A')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'C')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'E')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_INTERFACE);
      END_STATE();
    case 118:
      if (lookahead == 'U')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'T')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'A')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'T')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'I')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'O')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'N')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_MUTATION);
      END_STATE();
    case 126:
      if (lookahead == 'B')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'J')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'E')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'C')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'T')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_OBJECT);
      END_STATE();
    case 132:
      if (lookahead == 'U')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'E')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'R')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'Y')
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 137:
      if (lookahead == 'C')
        ADVANCE(138);
      if (lookahead == 'U')
        ADVANCE(147);
      END_STATE();
    case 138:
      if (lookahead == 'A')
        ADVANCE(139);
      if (lookahead == 'H')
        ADVANCE(143);
      END_STATE();
    case 139:
      if (lookahead == 'L')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'A')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'R')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SCALAR);
      END_STATE();
    case 143:
      if (lookahead == 'E')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'M')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'A')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SCHEMA);
      END_STATE();
    case 147:
      if (lookahead == 'B')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'S')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'C')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'R')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'I')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'P')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'T')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'I')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'O')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'N')
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SUBSCRIPTION);
      END_STATE();
    case 158:
      if (lookahead == 'N')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'I')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'O')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'N')
        ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_UNION);
      END_STATE();
    case 163:
      if (lookahead == 'A')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'R')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'I')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'A')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'B')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'L')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'E')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == '_')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'D')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'E')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'F')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'I')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'N')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'I')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'T')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'I')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'O')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'N')
        ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_VARIABLE_DEFINITION);
      END_STATE();
    case 182:
      if (lookahead == 'i')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'r')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'e')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'c')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 't')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'i')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'v')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'e')
        ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_directive);
      END_STATE();
    case 191:
      if (lookahead == 'n')
        ADVANCE(192);
      if (lookahead == 'x')
        ADVANCE(195);
      END_STATE();
    case 192:
      if (lookahead == 'u')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'm')
        ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 195:
      if (lookahead == 't')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'e')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'n')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'd')
        ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 200:
      if (lookahead == 'a')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(205);
      END_STATE();
    case 201:
      if (lookahead == 'l')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 's')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'e')
        ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 205:
      if (lookahead == 'a')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'g')
        ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'm')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == 'e')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'n')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 't')
        ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_fragment);
      END_STATE();
    case 212:
      if (lookahead == 'm')
        ADVANCE(213);
      if (lookahead == 'n')
        ADVANCE(222);
      END_STATE();
    case 213:
      if (lookahead == 'p')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 'l')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'e')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'm')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'e')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'n')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 't')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 's')
        ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 222:
      if (lookahead == 'p')
        ADVANCE(223);
      if (lookahead == 't')
        ADVANCE(226);
      END_STATE();
    case 223:
      if (lookahead == 'u')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 't')
        ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 226:
      if (lookahead == 'e')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'r')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'f')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'a')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'c')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'e')
        ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 233:
      if (lookahead == 'u')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == 't')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 'a')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 't')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'i')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'o')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'n')
        ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_mutation);
      END_STATE();
    case 241:
      if (lookahead == 'u')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'l')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 'l')
        ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_NullValue);
      END_STATE();
    case 245:
      if (lookahead == 'n')
        ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 247:
      if (lookahead == 'u')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'e')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'r')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'y')
        ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 252:
      if (lookahead == 'c')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(262);
      END_STATE();
    case 253:
      if (lookahead == 'a')
        ADVANCE(254);
      if (lookahead == 'h')
        ADVANCE(258);
      END_STATE();
    case 254:
      if (lookahead == 'l')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'a')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'r')
        ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_scalar);
      END_STATE();
    case 258:
      if (lookahead == 'e')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'm')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'a')
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_schema);
      END_STATE();
    case 262:
      if (lookahead == 'b')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 's')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'c')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'r')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'i')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'p')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 't')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'i')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'o')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'n')
        ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_subscription);
      END_STATE();
    case 273:
      if (lookahead == 'r')
        ADVANCE(274);
      if (lookahead == 'y')
        ADVANCE(277);
      END_STATE();
    case 274:
      if (lookahead == 'u')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 'e')
        ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 277:
      if (lookahead == 'p')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 'e')
        ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 280:
      if (lookahead == 'n')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 'i')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'o')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'n')
        ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 45},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 51},
  [17] = {.lex_state = 51},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 52},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 52},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 34},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 34},
  [34] = {.lex_state = 34},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 53},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 55},
  [50] = {.lex_state = 55},
  [51] = {.lex_state = 55},
  [52] = {.lex_state = 56},
  [53] = {.lex_state = 55},
  [54] = {.lex_state = 55},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 53},
  [57] = {.lex_state = 33},
  [58] = {.lex_state = 52},
  [59] = {.lex_state = 33},
  [60] = {.lex_state = 33},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 33},
  [68] = {.lex_state = 52},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 34},
  [71] = {.lex_state = 34},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 34},
  [77] = {.lex_state = 34},
  [78] = {.lex_state = 34},
  [79] = {.lex_state = 34},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 57},
  [82] = {.lex_state = 34},
  [83] = {.lex_state = 33},
  [84] = {.lex_state = 58},
  [85] = {.lex_state = 34},
  [86] = {.lex_state = 33},
  [87] = {.lex_state = 59},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 33},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 52},
  [92] = {.lex_state = 55},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 33},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 33},
  [99] = {.lex_state = 52},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 60},
  [102] = {.lex_state = 52},
  [103] = {.lex_state = 55},
  [104] = {.lex_state = 52},
  [105] = {.lex_state = 52},
  [106] = {.lex_state = 52},
  [107] = {.lex_state = 61},
  [108] = {.lex_state = 62},
  [109] = {.lex_state = 52},
  [110] = {.lex_state = 56},
  [111] = {.lex_state = 33},
  [112] = {.lex_state = 52},
  [113] = {.lex_state = 52},
  [114] = {.lex_state = 33},
  [115] = {.lex_state = 52},
  [116] = {.lex_state = 52},
  [117] = {.lex_state = 33},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 34},
  [120] = {.lex_state = 53},
  [121] = {.lex_state = 52},
  [122] = {.lex_state = 33},
  [123] = {.lex_state = 33},
  [124] = {.lex_state = 55},
  [125] = {.lex_state = 55},
  [126] = {.lex_state = 55},
  [127] = {.lex_state = 56},
  [128] = {.lex_state = 55},
  [129] = {.lex_state = 55},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 63},
  [132] = {.lex_state = 33},
  [133] = {.lex_state = 34},
  [134] = {.lex_state = 34},
  [135] = {.lex_state = 34},
  [136] = {.lex_state = 33},
  [137] = {.lex_state = 34},
  [138] = {.lex_state = 53},
  [139] = {.lex_state = 34},
  [140] = {.lex_state = 34},
  [141] = {.lex_state = 34},
  [142] = {.lex_state = 34},
  [143] = {.lex_state = 52},
  [144] = {.lex_state = 33},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 52},
  [147] = {.lex_state = 33},
  [148] = {.lex_state = 64},
  [149] = {.lex_state = 33},
  [150] = {.lex_state = 33},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 55},
  [153] = {.lex_state = 52},
  [154] = {.lex_state = 52},
  [155] = {.lex_state = 55},
  [156] = {.lex_state = 52},
  [157] = {.lex_state = 52},
  [158] = {.lex_state = 52},
  [159] = {.lex_state = 62},
  [160] = {.lex_state = 52},
  [161] = {.lex_state = 52},
  [162] = {.lex_state = 52},
  [163] = {.lex_state = 52},
  [164] = {.lex_state = 52},
  [165] = {.lex_state = 34},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 33},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 60},
  [170] = {.lex_state = 52},
  [171] = {.lex_state = 52},
  [172] = {.lex_state = 52},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 61},
  [175] = {.lex_state = 52},
  [176] = {.lex_state = 56},
  [177] = {.lex_state = 58},
  [178] = {.lex_state = 33},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 33},
  [181] = {.lex_state = 52},
  [182] = {.lex_state = 34},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 33},
  [185] = {.lex_state = 52},
  [186] = {.lex_state = 33},
  [187] = {.lex_state = 61},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 65},
  [190] = {.lex_state = 66},
  [191] = {.lex_state = 33},
  [192] = {.lex_state = 53},
  [193] = {.lex_state = 52},
  [194] = {.lex_state = 33},
  [195] = {.lex_state = 52},
  [196] = {.lex_state = 55},
  [197] = {.lex_state = 52},
  [198] = {.lex_state = 62},
  [199] = {.lex_state = 52},
  [200] = {.lex_state = 52},
  [201] = {.lex_state = 33},
  [202] = {.lex_state = 34},
  [203] = {.lex_state = 34},
  [204] = {.lex_state = 66},
  [205] = {.lex_state = 64},
  [206] = {.lex_state = 53},
  [207] = {.lex_state = 34},
  [208] = {.lex_state = 34},
  [209] = {.lex_state = 52},
  [210] = {.lex_state = 33},
  [211] = {.lex_state = 52},
  [212] = {.lex_state = 52},
  [213] = {.lex_state = 33},
  [214] = {.lex_state = 52},
  [215] = {.lex_state = 52},
  [216] = {.lex_state = 52},
  [217] = {.lex_state = 52},
  [218] = {.lex_state = 52},
  [219] = {.lex_state = 52},
  [220] = {.lex_state = 66},
  [221] = {.lex_state = 34},
  [222] = {.lex_state = 34},
  [223] = {.lex_state = 52},
  [224] = {.lex_state = 33},
  [225] = {.lex_state = 60},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 60},
  [228] = {.lex_state = 52},
  [229] = {.lex_state = 61},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 61},
  [232] = {.lex_state = 33},
  [233] = {.lex_state = 33},
  [234] = {.lex_state = 33},
  [235] = {.lex_state = 52},
  [236] = {.lex_state = 33},
  [237] = {.lex_state = 66},
  [238] = {.lex_state = 34},
  [239] = {.lex_state = 52},
  [240] = {.lex_state = 33},
  [241] = {.lex_state = 34},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 67},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 61},
  [246] = {.lex_state = 61},
  [247] = {.lex_state = 52},
  [248] = {.lex_state = 61},
  [249] = {.lex_state = 61},
  [250] = {.lex_state = 61},
  [251] = {.lex_state = 66},
  [252] = {.lex_state = 53},
  [253] = {.lex_state = 68},
  [254] = {.lex_state = 68},
  [255] = {.lex_state = 52},
  [256] = {.lex_state = 52},
  [257] = {.lex_state = 52},
  [258] = {.lex_state = 52},
  [259] = {.lex_state = 52},
  [260] = {.lex_state = 52},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 33},
  [263] = {.lex_state = 58},
  [264] = {.lex_state = 58},
  [265] = {.lex_state = 66},
  [266] = {.lex_state = 53},
  [267] = {.lex_state = 34},
  [268] = {.lex_state = 52},
  [269] = {.lex_state = 52},
  [270] = {.lex_state = 33},
  [271] = {.lex_state = 66},
  [272] = {.lex_state = 34},
  [273] = {.lex_state = 60},
  [274] = {.lex_state = 60},
  [275] = {.lex_state = 60},
  [276] = {.lex_state = 61},
  [277] = {.lex_state = 61},
  [278] = {.lex_state = 61},
  [279] = {.lex_state = 33},
  [280] = {.lex_state = 33},
  [281] = {.lex_state = 33},
  [282] = {.lex_state = 66},
  [283] = {.lex_state = 66},
  [284] = {.lex_state = 34},
  [285] = {.lex_state = 34},
  [286] = {.lex_state = 67},
  [287] = {.lex_state = 61},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 61},
  [290] = {.lex_state = 52},
  [291] = {.lex_state = 66},
  [292] = {.lex_state = 66},
  [293] = {.lex_state = 53},
  [294] = {.lex_state = 68},
  [295] = {.lex_state = 52},
  [296] = {.lex_state = 61},
  [297] = {.lex_state = 58},
  [298] = {.lex_state = 34},
  [299] = {.lex_state = 33},
  [300] = {.lex_state = 58},
  [301] = {.lex_state = 66},
  [302] = {.lex_state = 33},
  [303] = {.lex_state = 33},
  [304] = {.lex_state = 66},
  [305] = {.lex_state = 33},
  [306] = {.lex_state = 69},
  [307] = {.lex_state = 33},
  [308] = {.lex_state = 67},
  [309] = {.lex_state = 66},
  [310] = {.lex_state = 61},
  [311] = {.lex_state = 61},
  [312] = {.lex_state = 61},
  [313] = {.lex_state = 68},
  [314] = {.lex_state = 70},
  [315] = {.lex_state = 52},
  [316] = {.lex_state = 66},
  [317] = {.lex_state = 58},
  [318] = {.lex_state = 33},
  [319] = {.lex_state = 58},
  [320] = {.lex_state = 66},
  [321] = {.lex_state = 33},
  [322] = {.lex_state = 33},
  [323] = {.lex_state = 69},
  [324] = {.lex_state = 33},
  [325] = {.lex_state = 67},
  [326] = {.lex_state = 67},
  [327] = {.lex_state = 67},
  [328] = {.lex_state = 33},
  [329] = {.lex_state = 33},
  [330] = {.lex_state = 69},
  [331] = {.lex_state = 67},
  [332] = {.lex_state = 67},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(3),
    [anon_sym_mutation] = ACTIONS(3),
    [anon_sym_subscription] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_fragment] = ACTIONS(3),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(3),
    [sym_NullValue] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_IntValue] = ACTIONS(3),
    [sym_FloatValue] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_schema] = ACTIONS(3),
    [anon_sym_extend] = ACTIONS(3),
    [anon_sym_scalar] = ACTIONS(3),
    [anon_sym_type] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(3),
    [anon_sym_union] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(3),
    [anon_sym_input] = ACTIONS(3),
    [anon_sym_implements] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_directive] = ACTIONS(3),
    [anon_sym_QUERY] = ACTIONS(3),
    [anon_sym_MUTATION] = ACTIONS(3),
    [anon_sym_SUBSCRIPTION] = ACTIONS(3),
    [anon_sym_FIELD] = ACTIONS(3),
    [anon_sym_FRAGMENT_DEFINITION] = ACTIONS(3),
    [anon_sym_FRAGMENT_SPREAD] = ACTIONS(3),
    [anon_sym_INLINE_FRAGMENT] = ACTIONS(3),
    [anon_sym_VARIABLE_DEFINITION] = ACTIONS(3),
    [anon_sym_SCHEMA] = ACTIONS(3),
    [anon_sym_SCALAR] = ACTIONS(3),
    [anon_sym_OBJECT] = ACTIONS(3),
    [anon_sym_FIELD_DEFINITION] = ACTIONS(3),
    [anon_sym_ARGUMENT_DEFINITION] = ACTIONS(3),
    [anon_sym_INTERFACE] = ACTIONS(3),
    [anon_sym_UNION] = ACTIONS(3),
    [anon_sym_ENUM] = ACTIONS(3),
    [anon_sym_ENUM_VALUE] = ACTIONS(3),
    [anon_sym_INPUT_OBJECT] = ACTIONS(3),
    [anon_sym_INPUT_FIELD_DEFINITION] = ACTIONS(3),
    [sym_comment] = ACTIONS(1),
    [sym_Name] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym_Document] = STATE(17),
    [sym_Definition] = STATE(28),
    [sym_ExecutableDefinition] = STATE(18),
    [sym_OperationDefinition] = STATE(19),
    [sym_OperationType] = STATE(20),
    [sym_SelectionSet] = STATE(21),
    [sym_FragmentDefinition] = STATE(19),
    [sym_StringValue] = STATE(22),
    [sym_TypeSystemDefinition] = STATE(18),
    [sym_TypeSystemExtension] = STATE(18),
    [sym_SchemaDefinition] = STATE(23),
    [sym_SchemaExtension] = STATE(24),
    [sym_TypeExtension] = STATE(24),
    [sym_ScalarTypeExtension] = STATE(25),
    [sym_ObjectTypeExtension] = STATE(25),
    [sym_InterfaceTypeExtension] = STATE(25),
    [sym_UnionTypeExtension] = STATE(25),
    [sym_EnumTypeExtension] = STATE(25),
    [sym_InputObjectTypeExtension] = STATE(25),
    [sym_Description] = STATE(26),
    [sym_TypeDefinition] = STATE(23),
    [sym_ScalarTypeDefinition] = STATE(27),
    [sym_ObjectTypeDefinition] = STATE(27),
    [sym_InterfaceTypeDefinition] = STATE(27),
    [sym_UnionTypeDefinition] = STATE(27),
    [sym_EnumTypeDefinition] = STATE(27),
    [sym_InputObjectTypeDefinition] = STATE(27),
    [sym_DirectiveDefinition] = STATE(23),
    [aux_sym_Document_repeat1] = STATE(28),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_fragment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_schema] = ACTIONS(17),
    [anon_sym_extend] = ACTIONS(19),
    [anon_sym_scalar] = ACTIONS(21),
    [anon_sym_type] = ACTIONS(23),
    [anon_sym_interface] = ACTIONS(25),
    [anon_sym_union] = ACTIONS(27),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_directive] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
  },
  [2] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(35),
  },
  [3] = {
    [sym_Selection] = STATE(33),
    [sym_Field] = STATE(31),
    [sym_Alias] = STATE(32),
    [sym_FragmentSpread] = STATE(31),
    [sym_InlineFragment] = STATE(31),
    [aux_sym_SelectionSet_repeat1] = STATE(33),
    [sym_comma] = ACTIONS(5),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(39),
  },
  [4] = {
    [sym_FragmentName] = STATE(35),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(41),
  },
  [5] = {
    [sym_comma] = ACTIONS(43),
    [aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_RBRACK_PIPE_BSLASHn_PIPE_DQUOTE_DQUOTE_QMARK_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH] = ACTIONS(45),
    [sym_comment] = ACTIONS(43),
  },
  [6] = {
    [sym_comma] = ACTIONS(43),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(47),
    [sym_comment] = ACTIONS(43),
  },
  [7] = {
    [sym_Directives] = STATE(40),
    [sym_Directive] = STATE(41),
    [aux_sym_Directives_repeat1] = STATE(41),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [8] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_schema] = ACTIONS(53),
    [anon_sym_scalar] = ACTIONS(55),
    [anon_sym_type] = ACTIONS(57),
    [anon_sym_interface] = ACTIONS(59),
    [anon_sym_union] = ACTIONS(61),
    [anon_sym_enum] = ACTIONS(63),
    [anon_sym_input] = ACTIONS(65),
    [sym_comment] = ACTIONS(5),
  },
  [9] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(67),
  },
  [10] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(69),
  },
  [11] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(71),
  },
  [12] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(73),
  },
  [13] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(75),
  },
  [14] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(77),
  },
  [15] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(85),
    [anon_sym_mutation] = ACTIONS(85),
    [anon_sym_subscription] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_fragment] = ACTIONS(85),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_schema] = ACTIONS(85),
    [anon_sym_extend] = ACTIONS(85),
    [anon_sym_scalar] = ACTIONS(85),
    [anon_sym_type] = ACTIONS(85),
    [anon_sym_interface] = ACTIONS(85),
    [anon_sym_union] = ACTIONS(85),
    [anon_sym_enum] = ACTIONS(85),
    [anon_sym_input] = ACTIONS(85),
    [anon_sym_directive] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(89),
    [anon_sym_mutation] = ACTIONS(89),
    [anon_sym_subscription] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_fragment] = ACTIONS(89),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_schema] = ACTIONS(89),
    [anon_sym_extend] = ACTIONS(89),
    [anon_sym_scalar] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_union] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_input] = ACTIONS(89),
    [anon_sym_directive] = ACTIONS(89),
    [sym_comment] = ACTIONS(5),
  },
  [20] = {
    [sym_SelectionSet] = STATE(58),
    [sym_VariableDefinitions] = STATE(59),
    [sym_Directives] = STATE(60),
    [sym_Directive] = STATE(41),
    [aux_sym_Directives_repeat1] = STATE(41),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(95),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(97),
    [anon_sym_mutation] = ACTIONS(97),
    [anon_sym_subscription] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_fragment] = ACTIONS(97),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_schema] = ACTIONS(97),
    [anon_sym_extend] = ACTIONS(97),
    [anon_sym_scalar] = ACTIONS(97),
    [anon_sym_type] = ACTIONS(97),
    [anon_sym_interface] = ACTIONS(97),
    [anon_sym_union] = ACTIONS(97),
    [anon_sym_enum] = ACTIONS(97),
    [anon_sym_input] = ACTIONS(97),
    [anon_sym_directive] = ACTIONS(97),
    [sym_comment] = ACTIONS(5),
  },
  [22] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_scalar] = ACTIONS(101),
    [anon_sym_type] = ACTIONS(101),
    [anon_sym_interface] = ACTIONS(101),
    [anon_sym_union] = ACTIONS(101),
    [anon_sym_enum] = ACTIONS(101),
    [anon_sym_input] = ACTIONS(101),
    [anon_sym_directive] = ACTIONS(101),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(101),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(103),
    [anon_sym_mutation] = ACTIONS(103),
    [anon_sym_subscription] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_fragment] = ACTIONS(103),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_schema] = ACTIONS(103),
    [anon_sym_extend] = ACTIONS(103),
    [anon_sym_scalar] = ACTIONS(103),
    [anon_sym_type] = ACTIONS(103),
    [anon_sym_interface] = ACTIONS(103),
    [anon_sym_union] = ACTIONS(103),
    [anon_sym_enum] = ACTIONS(103),
    [anon_sym_input] = ACTIONS(103),
    [anon_sym_directive] = ACTIONS(103),
    [sym_comment] = ACTIONS(5),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(107),
    [anon_sym_mutation] = ACTIONS(107),
    [anon_sym_subscription] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_fragment] = ACTIONS(107),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_schema] = ACTIONS(107),
    [anon_sym_extend] = ACTIONS(107),
    [anon_sym_scalar] = ACTIONS(107),
    [anon_sym_type] = ACTIONS(107),
    [anon_sym_interface] = ACTIONS(107),
    [anon_sym_union] = ACTIONS(107),
    [anon_sym_enum] = ACTIONS(107),
    [anon_sym_input] = ACTIONS(107),
    [anon_sym_directive] = ACTIONS(107),
    [sym_comment] = ACTIONS(5),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(111),
    [anon_sym_mutation] = ACTIONS(111),
    [anon_sym_subscription] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_fragment] = ACTIONS(111),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_schema] = ACTIONS(111),
    [anon_sym_extend] = ACTIONS(111),
    [anon_sym_scalar] = ACTIONS(111),
    [anon_sym_type] = ACTIONS(111),
    [anon_sym_interface] = ACTIONS(111),
    [anon_sym_union] = ACTIONS(111),
    [anon_sym_enum] = ACTIONS(111),
    [anon_sym_input] = ACTIONS(111),
    [anon_sym_directive] = ACTIONS(111),
    [sym_comment] = ACTIONS(5),
  },
  [26] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_scalar] = ACTIONS(115),
    [anon_sym_type] = ACTIONS(117),
    [anon_sym_interface] = ACTIONS(119),
    [anon_sym_union] = ACTIONS(121),
    [anon_sym_enum] = ACTIONS(123),
    [anon_sym_input] = ACTIONS(125),
    [anon_sym_directive] = ACTIONS(127),
    [sym_comment] = ACTIONS(5),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(129),
    [anon_sym_mutation] = ACTIONS(129),
    [anon_sym_subscription] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_fragment] = ACTIONS(129),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [anon_sym_schema] = ACTIONS(129),
    [anon_sym_extend] = ACTIONS(129),
    [anon_sym_scalar] = ACTIONS(129),
    [anon_sym_type] = ACTIONS(129),
    [anon_sym_interface] = ACTIONS(129),
    [anon_sym_union] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(129),
    [anon_sym_input] = ACTIONS(129),
    [anon_sym_directive] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
  },
  [28] = {
    [sym_Definition] = STATE(68),
    [sym_ExecutableDefinition] = STATE(18),
    [sym_OperationDefinition] = STATE(19),
    [sym_OperationType] = STATE(20),
    [sym_SelectionSet] = STATE(21),
    [sym_FragmentDefinition] = STATE(19),
    [sym_StringValue] = STATE(22),
    [sym_TypeSystemDefinition] = STATE(18),
    [sym_TypeSystemExtension] = STATE(18),
    [sym_SchemaDefinition] = STATE(23),
    [sym_SchemaExtension] = STATE(24),
    [sym_TypeExtension] = STATE(24),
    [sym_ScalarTypeExtension] = STATE(25),
    [sym_ObjectTypeExtension] = STATE(25),
    [sym_InterfaceTypeExtension] = STATE(25),
    [sym_UnionTypeExtension] = STATE(25),
    [sym_EnumTypeExtension] = STATE(25),
    [sym_InputObjectTypeExtension] = STATE(25),
    [sym_Description] = STATE(26),
    [sym_TypeDefinition] = STATE(23),
    [sym_ScalarTypeDefinition] = STATE(27),
    [sym_ObjectTypeDefinition] = STATE(27),
    [sym_InterfaceTypeDefinition] = STATE(27),
    [sym_UnionTypeDefinition] = STATE(27),
    [sym_EnumTypeDefinition] = STATE(27),
    [sym_InputObjectTypeDefinition] = STATE(27),
    [sym_DirectiveDefinition] = STATE(23),
    [aux_sym_Document_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_fragment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_schema] = ACTIONS(17),
    [anon_sym_extend] = ACTIONS(19),
    [anon_sym_scalar] = ACTIONS(21),
    [anon_sym_type] = ACTIONS(23),
    [anon_sym_interface] = ACTIONS(25),
    [anon_sym_union] = ACTIONS(27),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_input] = ACTIONS(31),
    [anon_sym_directive] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
  },
  [29] = {
    [sym_SelectionSet] = STATE(70),
    [sym_FragmentName] = STATE(71),
    [sym_TypeCondition] = STATE(72),
    [sym_Directives] = STATE(73),
    [sym_Directive] = STATE(41),
    [aux_sym_Directives_repeat1] = STATE(41),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_on] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(137),
  },
  [30] = {
    [sym_SelectionSet] = STATE(76),
    [sym_Arguments] = STATE(77),
    [sym_Directives] = STATE(78),
    [sym_Directive] = STATE(79),
    [aux_sym_Directives_repeat1] = STATE(79),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(139),
  },
  [31] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(145),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(145),
  },
  [32] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(147),
  },
  [33] = {
    [sym_Selection] = STATE(82),
    [sym_Field] = STATE(31),
    [sym_Alias] = STATE(32),
    [sym_FragmentSpread] = STATE(31),
    [sym_InlineFragment] = STATE(31),
    [aux_sym_SelectionSet_repeat1] = STATE(82),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(39),
  },
  [34] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(151),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(153),
  },
  [35] = {
    [sym_TypeCondition] = STATE(83),
    [sym_comma] = ACTIONS(5),
    [anon_sym_on] = ACTIONS(155),
    [sym_comment] = ACTIONS(5),
  },
  [36] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(157),
    [sym_comment] = ACTIONS(5),
  },
  [37] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_comment] = ACTIONS(5),
  },
  [38] = {
    [sym_OperationType] = STATE(85),
    [sym_OperationTypeDefinition] = STATE(86),
    [aux_sym_SchemaDefinition_repeat1] = STATE(86),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
  },
  [39] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(159),
  },
  [40] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(161),
    [sym_comment] = ACTIONS(5),
  },
  [41] = {
    [sym_Directive] = STATE(89),
    [aux_sym_Directives_repeat1] = STATE(89),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [42] = {
    [sym_Directives] = STATE(91),
    [sym_Directive] = STATE(92),
    [aux_sym_Directives_repeat1] = STATE(92),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [43] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(167),
  },
  [44] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(169),
  },
  [45] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(171),
  },
  [46] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(173),
  },
  [47] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(175),
  },
  [48] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(177),
  },
  [49] = {
    [sym_Directives] = STATE(99),
    [sym_Directive] = STATE(92),
    [aux_sym_Directives_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(179),
    [anon_sym_mutation] = ACTIONS(179),
    [anon_sym_subscription] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_fragment] = ACTIONS(179),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(179),
    [anon_sym_extend] = ACTIONS(179),
    [anon_sym_scalar] = ACTIONS(179),
    [anon_sym_type] = ACTIONS(179),
    [anon_sym_interface] = ACTIONS(179),
    [anon_sym_union] = ACTIONS(179),
    [anon_sym_enum] = ACTIONS(179),
    [anon_sym_input] = ACTIONS(179),
    [anon_sym_directive] = ACTIONS(179),
    [sym_comment] = ACTIONS(5),
  },
  [50] = {
    [sym_Directives] = STATE(102),
    [sym_Directive] = STATE(92),
    [sym_ImplementsInterfaces] = STATE(103),
    [sym_FieldsDefinition] = STATE(104),
    [aux_sym_Directives_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(183),
    [anon_sym_mutation] = ACTIONS(183),
    [anon_sym_subscription] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_fragment] = ACTIONS(183),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(183),
    [anon_sym_extend] = ACTIONS(183),
    [anon_sym_scalar] = ACTIONS(183),
    [anon_sym_type] = ACTIONS(183),
    [anon_sym_interface] = ACTIONS(183),
    [anon_sym_union] = ACTIONS(183),
    [anon_sym_enum] = ACTIONS(183),
    [anon_sym_input] = ACTIONS(183),
    [anon_sym_implements] = ACTIONS(189),
    [anon_sym_directive] = ACTIONS(183),
    [sym_comment] = ACTIONS(5),
  },
  [51] = {
    [sym_Directives] = STATE(105),
    [sym_Directive] = STATE(92),
    [sym_FieldsDefinition] = STATE(106),
    [aux_sym_Directives_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(191),
    [anon_sym_mutation] = ACTIONS(191),
    [anon_sym_subscription] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_fragment] = ACTIONS(191),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(191),
    [anon_sym_extend] = ACTIONS(191),
    [anon_sym_scalar] = ACTIONS(191),
    [anon_sym_type] = ACTIONS(191),
    [anon_sym_interface] = ACTIONS(191),
    [anon_sym_union] = ACTIONS(191),
    [anon_sym_enum] = ACTIONS(191),
    [anon_sym_input] = ACTIONS(191),
    [anon_sym_directive] = ACTIONS(191),
    [sym_comment] = ACTIONS(5),
  },
  [52] = {
    [sym_Directives] = STATE(108),
    [sym_Directive] = STATE(110),
    [sym_UnionMemberTypes] = STATE(109),
    [aux_sym_Directives_repeat1] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(195),
    [anon_sym_mutation] = ACTIONS(195),
    [anon_sym_subscription] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_fragment] = ACTIONS(195),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(195),
    [anon_sym_extend] = ACTIONS(195),
    [anon_sym_scalar] = ACTIONS(195),
    [anon_sym_type] = ACTIONS(195),
    [anon_sym_interface] = ACTIONS(195),
    [anon_sym_union] = ACTIONS(195),
    [anon_sym_enum] = ACTIONS(195),
    [anon_sym_input] = ACTIONS(195),
    [anon_sym_directive] = ACTIONS(195),
    [sym_comment] = ACTIONS(5),
  },
  [53] = {
    [sym_Directives] = STATE(112),
    [sym_Directive] = STATE(92),
    [sym_EnumValuesDefinition] = STATE(113),
    [aux_sym_Directives_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(201),
    [anon_sym_mutation] = ACTIONS(201),
    [anon_sym_subscription] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_fragment] = ACTIONS(201),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(201),
    [anon_sym_extend] = ACTIONS(201),
    [anon_sym_scalar] = ACTIONS(201),
    [anon_sym_type] = ACTIONS(201),
    [anon_sym_interface] = ACTIONS(201),
    [anon_sym_union] = ACTIONS(201),
    [anon_sym_enum] = ACTIONS(201),
    [anon_sym_input] = ACTIONS(201),
    [anon_sym_directive] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [54] = {
    [sym_Directives] = STATE(115),
    [sym_Directive] = STATE(92),
    [sym_InputFieldsDefinition] = STATE(116),
    [aux_sym_Directives_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(207),
    [anon_sym_mutation] = ACTIONS(207),
    [anon_sym_subscription] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_fragment] = ACTIONS(207),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(207),
    [anon_sym_extend] = ACTIONS(207),
    [anon_sym_scalar] = ACTIONS(207),
    [anon_sym_type] = ACTIONS(207),
    [anon_sym_interface] = ACTIONS(207),
    [anon_sym_union] = ACTIONS(207),
    [anon_sym_enum] = ACTIONS(207),
    [anon_sym_input] = ACTIONS(207),
    [anon_sym_directive] = ACTIONS(207),
    [sym_comment] = ACTIONS(5),
  },
  [55] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(213),
  },
  [56] = {
    [sym_VariableDefinition] = STATE(120),
    [sym_Variable] = STATE(119),
    [aux_sym_VariableDefinitions_repeat1] = STATE(120),
    [sym_comma] = ACTIONS(5),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
  },
  [57] = {
    [sym_SelectionSet] = STATE(121),
    [sym_VariableDefinitions] = STATE(122),
    [sym_Directives] = STATE(123),
    [sym_Directive] = STATE(41),
    [aux_sym_Directives_repeat1] = STATE(41),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(217),
    [anon_sym_mutation] = ACTIONS(217),
    [anon_sym_subscription] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_fragment] = ACTIONS(217),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [anon_sym_schema] = ACTIONS(217),
    [anon_sym_extend] = ACTIONS(217),
    [anon_sym_scalar] = ACTIONS(217),
    [anon_sym_type] = ACTIONS(217),
    [anon_sym_interface] = ACTIONS(217),
    [anon_sym_union] = ACTIONS(217),
    [anon_sym_enum] = ACTIONS(217),
    [anon_sym_input] = ACTIONS(217),
    [anon_sym_directive] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
  },
  [59] = {
    [sym_SelectionSet] = STATE(121),
    [sym_Directives] = STATE(123),
    [sym_Directive] = STATE(41),
    [aux_sym_Directives_repeat1] = STATE(41),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [60] = {
    [sym_SelectionSet] = STATE(121),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
  [61] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(221),
  },
  [62] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(223),
  },
  [63] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(225),
  },
  [64] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(227),
  },
  [65] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(229),
  },
  [66] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(231),
  },
  [67] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
  },
  [68] = {
    [sym_Definition] = STATE(68),
    [sym_ExecutableDefinition] = STATE(18),
    [sym_OperationDefinition] = STATE(19),
    [sym_OperationType] = STATE(20),
    [sym_SelectionSet] = STATE(21),
    [sym_FragmentDefinition] = STATE(19),
    [sym_StringValue] = STATE(22),
    [sym_TypeSystemDefinition] = STATE(18),
    [sym_TypeSystemExtension] = STATE(18),
    [sym_SchemaDefinition] = STATE(23),
    [sym_SchemaExtension] = STATE(24),
    [sym_TypeExtension] = STATE(24),
    [sym_ScalarTypeExtension] = STATE(25),
    [sym_ObjectTypeExtension] = STATE(25),
    [sym_InterfaceTypeExtension] = STATE(25),
    [sym_UnionTypeExtension] = STATE(25),
    [sym_EnumTypeExtension] = STATE(25),
    [sym_InputObjectTypeExtension] = STATE(25),
    [sym_Description] = STATE(26),
    [sym_TypeDefinition] = STATE(23),
    [sym_ScalarTypeDefinition] = STATE(27),
    [sym_ObjectTypeDefinition] = STATE(27),
    [sym_InterfaceTypeDefinition] = STATE(27),
    [sym_UnionTypeDefinition] = STATE(27),
    [sym_EnumTypeDefinition] = STATE(27),
    [sym_InputObjectTypeDefinition] = STATE(27),
    [sym_DirectiveDefinition] = STATE(23),
    [aux_sym_Document_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(237),
    [anon_sym_mutation] = ACTIONS(237),
    [anon_sym_subscription] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(240),
    [anon_sym_fragment] = ACTIONS(243),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_schema] = ACTIONS(252),
    [anon_sym_extend] = ACTIONS(255),
    [anon_sym_scalar] = ACTIONS(258),
    [anon_sym_type] = ACTIONS(261),
    [anon_sym_interface] = ACTIONS(264),
    [anon_sym_union] = ACTIONS(267),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_input] = ACTIONS(273),
    [anon_sym_directive] = ACTIONS(276),
    [sym_comment] = ACTIONS(5),
  },
  [69] = {
    [sym_NamedType] = STATE(132),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [70] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(281),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(281),
  },
  [71] = {
    [sym_Directives] = STATE(133),
    [sym_Directive] = STATE(134),
    [aux_sym_Directives_repeat1] = STATE(134),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(283),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(283),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(283),
  },
  [72] = {
    [sym_SelectionSet] = STATE(135),
    [sym_Directives] = STATE(136),
    [sym_Directive] = STATE(41),
    [aux_sym_Directives_repeat1] = STATE(41),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [73] = {
    [sym_SelectionSet] = STATE(135),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
  [74] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(285),
  },
  [75] = {
    [sym_Argument] = STATE(138),
    [aux_sym_Arguments_repeat1] = STATE(138),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(287),
  },
  [76] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(289),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(289),
  },
  [77] = {
    [sym_SelectionSet] = STATE(139),
    [sym_Directives] = STATE(140),
    [sym_Directive] = STATE(79),
    [aux_sym_Directives_repeat1] = STATE(79),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(289),
  },
  [78] = {
    [sym_SelectionSet] = STATE(139),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(289),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(289),
  },
  [79] = {
    [sym_Directive] = STATE(141),
    [aux_sym_Directives_repeat1] = STATE(141),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(163),
  },
  [80] = {
    [sym_SelectionSet] = STATE(139),
    [sym_Arguments] = STATE(142),
    [sym_Directives] = STATE(140),
    [sym_Directive] = STATE(79),
    [aux_sym_Directives_repeat1] = STATE(79),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(289),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(293),
    [anon_sym_mutation] = ACTIONS(293),
    [anon_sym_subscription] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(291),
    [anon_sym_fragment] = ACTIONS(293),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [anon_sym_schema] = ACTIONS(293),
    [anon_sym_extend] = ACTIONS(293),
    [anon_sym_scalar] = ACTIONS(293),
    [anon_sym_type] = ACTIONS(293),
    [anon_sym_interface] = ACTIONS(293),
    [anon_sym_union] = ACTIONS(293),
    [anon_sym_enum] = ACTIONS(293),
    [anon_sym_input] = ACTIONS(293),
    [anon_sym_directive] = ACTIONS(293),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(293),
  },
  [82] = {
    [sym_Selection] = STATE(82),
    [sym_Field] = STATE(31),
    [sym_Alias] = STATE(32),
    [sym_FragmentSpread] = STATE(31),
    [sym_InlineFragment] = STATE(31),
    [aux_sym_SelectionSet_repeat1] = STATE(82),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(297),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(300),
  },
  [83] = {
    [sym_SelectionSet] = STATE(143),
    [sym_Directives] = STATE(144),
    [sym_Directive] = STATE(41),
    [aux_sym_Directives_repeat1] = STATE(41),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [84] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_false] = ACTIONS(305),
    [anon_sym_true] = ACTIONS(305),
    [sym_NullValue] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_IntValue] = ACTIONS(305),
    [sym_FloatValue] = ACTIONS(303),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(303),
    [anon_sym_AT] = ACTIONS(303),
    [anon_sym_scalar] = ACTIONS(305),
    [anon_sym_type] = ACTIONS(305),
    [anon_sym_interface] = ACTIONS(305),
    [anon_sym_union] = ACTIONS(305),
    [anon_sym_enum] = ACTIONS(305),
    [anon_sym_input] = ACTIONS(305),
    [anon_sym_directive] = ACTIONS(305),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(305),
  },
  [85] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(307),
    [sym_comment] = ACTIONS(5),
  },
  [86] = {
    [sym_OperationType] = STATE(85),
    [sym_OperationTypeDefinition] = STATE(147),
    [aux_sym_SchemaDefinition_repeat1] = STATE(147),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(309),
    [sym_comment] = ACTIONS(5),
  },
  [87] = {
    [sym_Arguments] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(311),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(313),
    [anon_sym_mutation] = ACTIONS(313),
    [anon_sym_subscription] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(311),
    [anon_sym_fragment] = ACTIONS(313),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_AT] = ACTIONS(311),
    [anon_sym_schema] = ACTIONS(313),
    [anon_sym_extend] = ACTIONS(313),
    [anon_sym_scalar] = ACTIONS(313),
    [anon_sym_type] = ACTIONS(313),
    [anon_sym_interface] = ACTIONS(313),
    [anon_sym_union] = ACTIONS(313),
    [anon_sym_enum] = ACTIONS(313),
    [anon_sym_input] = ACTIONS(313),
    [anon_sym_directive] = ACTIONS(313),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(313),
  },
  [88] = {
    [sym_OperationType] = STATE(85),
    [sym_OperationTypeDefinition] = STATE(149),
    [aux_sym_SchemaDefinition_repeat1] = STATE(149),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
  },
  [89] = {
    [sym_Directive] = STATE(89),
    [aux_sym_Directives_repeat1] = STATE(89),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_AT] = ACTIONS(317),
    [sym_comment] = ACTIONS(5),
  },
  [90] = {
    [sym_OperationType] = STATE(85),
    [sym_OperationTypeDefinition] = STATE(150),
    [aux_sym_SchemaDefinition_repeat1] = STATE(150),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(320),
    [anon_sym_mutation] = ACTIONS(320),
    [anon_sym_subscription] = ACTIONS(320),
    [anon_sym_LBRACE] = ACTIONS(320),
    [anon_sym_fragment] = ACTIONS(320),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(322),
    [anon_sym_schema] = ACTIONS(320),
    [anon_sym_extend] = ACTIONS(320),
    [anon_sym_scalar] = ACTIONS(320),
    [anon_sym_type] = ACTIONS(320),
    [anon_sym_interface] = ACTIONS(320),
    [anon_sym_union] = ACTIONS(320),
    [anon_sym_enum] = ACTIONS(320),
    [anon_sym_input] = ACTIONS(320),
    [anon_sym_directive] = ACTIONS(320),
    [sym_comment] = ACTIONS(5),
  },
  [92] = {
    [sym_Directive] = STATE(152),
    [aux_sym_Directives_repeat1] = STATE(152),
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(163),
    [anon_sym_mutation] = ACTIONS(163),
    [anon_sym_subscription] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_fragment] = ACTIONS(163),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(163),
    [anon_sym_extend] = ACTIONS(163),
    [anon_sym_scalar] = ACTIONS(163),
    [anon_sym_type] = ACTIONS(163),
    [anon_sym_interface] = ACTIONS(163),
    [anon_sym_union] = ACTIONS(163),
    [anon_sym_enum] = ACTIONS(163),
    [anon_sym_input] = ACTIONS(163),
    [anon_sym_directive] = ACTIONS(163),
    [sym_comment] = ACTIONS(5),
  },
  [93] = {
    [sym_Directives] = STATE(153),
    [sym_Directive] = STATE(92),
    [aux_sym_Directives_repeat1] = STATE(92),
    [sym_comma] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [94] = {
    [sym_Directives] = STATE(154),
    [sym_Directive] = STATE(92),
    [sym_ImplementsInterfaces] = STATE(155),
    [sym_FieldsDefinition] = STATE(156),
    [aux_sym_Directives_repeat1] = STATE(92),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_implements] = ACTIONS(189),
    [sym_comment] = ACTIONS(5),
  },
  [95] = {
    [sym_Directives] = STATE(157),
    [sym_Directive] = STATE(92),
    [sym_FieldsDefinition] = STATE(158),
    [aux_sym_Directives_repeat1] = STATE(92),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [96] = {
    [sym_Directives] = STATE(159),
    [sym_Directive] = STATE(110),
    [sym_UnionMemberTypes] = STATE(160),
    [aux_sym_Directives_repeat1] = STATE(110),
    [sym_comma] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [97] = {
    [sym_Directives] = STATE(161),
    [sym_Directive] = STATE(92),
    [sym_EnumValuesDefinition] = STATE(162),
    [aux_sym_Directives_repeat1] = STATE(92),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [98] = {
    [sym_Directives] = STATE(163),
    [sym_Directive] = STATE(92),
    [sym_InputFieldsDefinition] = STATE(164),
    [aux_sym_Directives_repeat1] = STATE(92),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(326),
    [anon_sym_mutation] = ACTIONS(326),
    [anon_sym_subscription] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_fragment] = ACTIONS(326),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(326),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [anon_sym_schema] = ACTIONS(326),
    [anon_sym_extend] = ACTIONS(326),
    [anon_sym_scalar] = ACTIONS(326),
    [anon_sym_type] = ACTIONS(326),
    [anon_sym_interface] = ACTIONS(326),
    [anon_sym_union] = ACTIONS(326),
    [anon_sym_enum] = ACTIONS(326),
    [anon_sym_input] = ACTIONS(326),
    [anon_sym_directive] = ACTIONS(326),
    [sym_comment] = ACTIONS(5),
  },
  [100] = {
    [sym_StringValue] = STATE(22),
    [sym_Description] = STATE(166),
    [sym_FieldDefinition] = STATE(167),
    [aux_sym_FieldsDefinition_repeat1] = STATE(167),
    [sym_comma] = ACTIONS(5),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(330),
  },
  [101] = {
    [sym_NamedType] = STATE(169),
    [sym_comma] = ACTIONS(5),
    [anon_sym_AMP] = ACTIONS(332),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [102] = {
    [sym_FieldsDefinition] = STATE(170),
    [ts_builtin_sym_end] = ACTIONS(334),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(334),
    [anon_sym_mutation] = ACTIONS(334),
    [anon_sym_subscription] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_fragment] = ACTIONS(334),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(334),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [anon_sym_schema] = ACTIONS(334),
    [anon_sym_extend] = ACTIONS(334),
    [anon_sym_scalar] = ACTIONS(334),
    [anon_sym_type] = ACTIONS(334),
    [anon_sym_interface] = ACTIONS(334),
    [anon_sym_union] = ACTIONS(334),
    [anon_sym_enum] = ACTIONS(334),
    [anon_sym_input] = ACTIONS(334),
    [anon_sym_directive] = ACTIONS(334),
    [sym_comment] = ACTIONS(5),
  },
  [103] = {
    [sym_Directives] = STATE(171),
    [sym_Directive] = STATE(92),
    [sym_FieldsDefinition] = STATE(170),
    [aux_sym_Directives_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(334),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(334),
    [anon_sym_mutation] = ACTIONS(334),
    [anon_sym_subscription] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_fragment] = ACTIONS(334),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(334),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(334),
    [anon_sym_extend] = ACTIONS(334),
    [anon_sym_scalar] = ACTIONS(334),
    [anon_sym_type] = ACTIONS(334),
    [anon_sym_interface] = ACTIONS(334),
    [anon_sym_union] = ACTIONS(334),
    [anon_sym_enum] = ACTIONS(334),
    [anon_sym_input] = ACTIONS(334),
    [anon_sym_directive] = ACTIONS(334),
    [sym_comment] = ACTIONS(5),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(334),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(334),
    [anon_sym_mutation] = ACTIONS(334),
    [anon_sym_subscription] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(334),
    [anon_sym_fragment] = ACTIONS(334),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(334),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [anon_sym_schema] = ACTIONS(334),
    [anon_sym_extend] = ACTIONS(334),
    [anon_sym_scalar] = ACTIONS(334),
    [anon_sym_type] = ACTIONS(334),
    [anon_sym_interface] = ACTIONS(334),
    [anon_sym_union] = ACTIONS(334),
    [anon_sym_enum] = ACTIONS(334),
    [anon_sym_input] = ACTIONS(334),
    [anon_sym_directive] = ACTIONS(334),
    [sym_comment] = ACTIONS(5),
  },
  [105] = {
    [sym_FieldsDefinition] = STATE(172),
    [ts_builtin_sym_end] = ACTIONS(338),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(338),
    [anon_sym_mutation] = ACTIONS(338),
    [anon_sym_subscription] = ACTIONS(338),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_fragment] = ACTIONS(338),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [anon_sym_schema] = ACTIONS(338),
    [anon_sym_extend] = ACTIONS(338),
    [anon_sym_scalar] = ACTIONS(338),
    [anon_sym_type] = ACTIONS(338),
    [anon_sym_interface] = ACTIONS(338),
    [anon_sym_union] = ACTIONS(338),
    [anon_sym_enum] = ACTIONS(338),
    [anon_sym_input] = ACTIONS(338),
    [anon_sym_directive] = ACTIONS(338),
    [sym_comment] = ACTIONS(5),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(338),
    [anon_sym_mutation] = ACTIONS(338),
    [anon_sym_subscription] = ACTIONS(338),
    [anon_sym_LBRACE] = ACTIONS(338),
    [anon_sym_fragment] = ACTIONS(338),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [anon_sym_schema] = ACTIONS(338),
    [anon_sym_extend] = ACTIONS(338),
    [anon_sym_scalar] = ACTIONS(338),
    [anon_sym_type] = ACTIONS(338),
    [anon_sym_interface] = ACTIONS(338),
    [anon_sym_union] = ACTIONS(338),
    [anon_sym_enum] = ACTIONS(338),
    [anon_sym_input] = ACTIONS(338),
    [anon_sym_directive] = ACTIONS(338),
    [sym_comment] = ACTIONS(5),
  },
  [107] = {
    [sym_NamedType] = STATE(174),
    [sym_comma] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(342),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [108] = {
    [sym_UnionMemberTypes] = STATE(175),
    [ts_builtin_sym_end] = ACTIONS(344),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(344),
    [anon_sym_mutation] = ACTIONS(344),
    [anon_sym_subscription] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(344),
    [anon_sym_fragment] = ACTIONS(344),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_schema] = ACTIONS(344),
    [anon_sym_extend] = ACTIONS(344),
    [anon_sym_scalar] = ACTIONS(344),
    [anon_sym_type] = ACTIONS(344),
    [anon_sym_interface] = ACTIONS(344),
    [anon_sym_union] = ACTIONS(344),
    [anon_sym_enum] = ACTIONS(344),
    [anon_sym_input] = ACTIONS(344),
    [anon_sym_directive] = ACTIONS(344),
    [sym_comment] = ACTIONS(5),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(344),
    [anon_sym_mutation] = ACTIONS(344),
    [anon_sym_subscription] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(344),
    [anon_sym_fragment] = ACTIONS(344),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [anon_sym_schema] = ACTIONS(344),
    [anon_sym_extend] = ACTIONS(344),
    [anon_sym_scalar] = ACTIONS(344),
    [anon_sym_type] = ACTIONS(344),
    [anon_sym_interface] = ACTIONS(344),
    [anon_sym_union] = ACTIONS(344),
    [anon_sym_enum] = ACTIONS(344),
    [anon_sym_input] = ACTIONS(344),
    [anon_sym_directive] = ACTIONS(344),
    [sym_comment] = ACTIONS(5),
  },
  [110] = {
    [sym_Directive] = STATE(176),
    [aux_sym_Directives_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(163),
    [anon_sym_mutation] = ACTIONS(163),
    [anon_sym_subscription] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_fragment] = ACTIONS(163),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [anon_sym_EQ] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(163),
    [anon_sym_extend] = ACTIONS(163),
    [anon_sym_scalar] = ACTIONS(163),
    [anon_sym_type] = ACTIONS(163),
    [anon_sym_interface] = ACTIONS(163),
    [anon_sym_union] = ACTIONS(163),
    [anon_sym_enum] = ACTIONS(163),
    [anon_sym_input] = ACTIONS(163),
    [anon_sym_directive] = ACTIONS(163),
    [sym_comment] = ACTIONS(5),
  },
  [111] = {
    [sym_EnumValue] = STATE(178),
    [sym_StringValue] = STATE(22),
    [sym_Description] = STATE(179),
    [sym_EnumValueDefinition] = STATE(180),
    [aux_sym_EnumValuesDefinition_repeat1] = STATE(180),
    [sym_comma] = ACTIONS(5),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(348),
  },
  [112] = {
    [sym_EnumValuesDefinition] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(350),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(350),
    [anon_sym_mutation] = ACTIONS(350),
    [anon_sym_subscription] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_fragment] = ACTIONS(350),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(352),
    [anon_sym_schema] = ACTIONS(350),
    [anon_sym_extend] = ACTIONS(350),
    [anon_sym_scalar] = ACTIONS(350),
    [anon_sym_type] = ACTIONS(350),
    [anon_sym_interface] = ACTIONS(350),
    [anon_sym_union] = ACTIONS(350),
    [anon_sym_enum] = ACTIONS(350),
    [anon_sym_input] = ACTIONS(350),
    [anon_sym_directive] = ACTIONS(350),
    [sym_comment] = ACTIONS(5),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(350),
    [anon_sym_mutation] = ACTIONS(350),
    [anon_sym_subscription] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(350),
    [anon_sym_fragment] = ACTIONS(350),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(352),
    [anon_sym_schema] = ACTIONS(350),
    [anon_sym_extend] = ACTIONS(350),
    [anon_sym_scalar] = ACTIONS(350),
    [anon_sym_type] = ACTIONS(350),
    [anon_sym_interface] = ACTIONS(350),
    [anon_sym_union] = ACTIONS(350),
    [anon_sym_enum] = ACTIONS(350),
    [anon_sym_input] = ACTIONS(350),
    [anon_sym_directive] = ACTIONS(350),
    [sym_comment] = ACTIONS(5),
  },
  [114] = {
    [sym_StringValue] = STATE(22),
    [sym_Description] = STATE(183),
    [sym_InputValueDefinition] = STATE(184),
    [aux_sym_ArgumentsDefinition_repeat1] = STATE(184),
    [sym_comma] = ACTIONS(5),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(354),
  },
  [115] = {
    [sym_InputFieldsDefinition] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(356),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(356),
    [anon_sym_mutation] = ACTIONS(356),
    [anon_sym_subscription] = ACTIONS(356),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_fragment] = ACTIONS(356),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(356),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [anon_sym_schema] = ACTIONS(356),
    [anon_sym_extend] = ACTIONS(356),
    [anon_sym_scalar] = ACTIONS(356),
    [anon_sym_type] = ACTIONS(356),
    [anon_sym_interface] = ACTIONS(356),
    [anon_sym_union] = ACTIONS(356),
    [anon_sym_enum] = ACTIONS(356),
    [anon_sym_input] = ACTIONS(356),
    [anon_sym_directive] = ACTIONS(356),
    [sym_comment] = ACTIONS(5),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(356),
    [anon_sym_mutation] = ACTIONS(356),
    [anon_sym_subscription] = ACTIONS(356),
    [anon_sym_LBRACE] = ACTIONS(356),
    [anon_sym_fragment] = ACTIONS(356),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(356),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [anon_sym_schema] = ACTIONS(356),
    [anon_sym_extend] = ACTIONS(356),
    [anon_sym_scalar] = ACTIONS(356),
    [anon_sym_type] = ACTIONS(356),
    [anon_sym_interface] = ACTIONS(356),
    [anon_sym_union] = ACTIONS(356),
    [anon_sym_enum] = ACTIONS(356),
    [anon_sym_input] = ACTIONS(356),
    [anon_sym_directive] = ACTIONS(356),
    [sym_comment] = ACTIONS(5),
  },
  [117] = {
    [sym_ArgumentsDefinition] = STATE(188),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(360),
    [anon_sym_on] = ACTIONS(362),
    [sym_comment] = ACTIONS(5),
  },
  [118] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(364),
  },
  [119] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(366),
    [sym_comment] = ACTIONS(5),
  },
  [120] = {
    [sym_VariableDefinition] = STATE(192),
    [sym_Variable] = STATE(119),
    [aux_sym_VariableDefinitions_repeat1] = STATE(192),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(368),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(370),
    [anon_sym_mutation] = ACTIONS(370),
    [anon_sym_subscription] = ACTIONS(370),
    [anon_sym_LBRACE] = ACTIONS(370),
    [anon_sym_fragment] = ACTIONS(370),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(370),
    [anon_sym_DQUOTE] = ACTIONS(372),
    [anon_sym_schema] = ACTIONS(370),
    [anon_sym_extend] = ACTIONS(370),
    [anon_sym_scalar] = ACTIONS(370),
    [anon_sym_type] = ACTIONS(370),
    [anon_sym_interface] = ACTIONS(370),
    [anon_sym_union] = ACTIONS(370),
    [anon_sym_enum] = ACTIONS(370),
    [anon_sym_input] = ACTIONS(370),
    [anon_sym_directive] = ACTIONS(370),
    [sym_comment] = ACTIONS(5),
  },
  [122] = {
    [sym_SelectionSet] = STATE(193),
    [sym_Directives] = STATE(194),
    [sym_Directive] = STATE(41),
    [aux_sym_Directives_repeat1] = STATE(41),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [123] = {
    [sym_SelectionSet] = STATE(193),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
  [124] = {
    [sym_Directives] = STATE(195),
    [sym_Directive] = STATE(92),
    [aux_sym_Directives_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(326),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(326),
    [anon_sym_mutation] = ACTIONS(326),
    [anon_sym_subscription] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_fragment] = ACTIONS(326),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(326),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(326),
    [anon_sym_extend] = ACTIONS(326),
    [anon_sym_scalar] = ACTIONS(326),
    [anon_sym_type] = ACTIONS(326),
    [anon_sym_interface] = ACTIONS(326),
    [anon_sym_union] = ACTIONS(326),
    [anon_sym_enum] = ACTIONS(326),
    [anon_sym_input] = ACTIONS(326),
    [anon_sym_directive] = ACTIONS(326),
    [sym_comment] = ACTIONS(5),
  },
  [125] = {
    [sym_Directives] = STATE(171),
    [sym_Directive] = STATE(92),
    [sym_ImplementsInterfaces] = STATE(196),
    [sym_FieldsDefinition] = STATE(170),
    [aux_sym_Directives_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(334),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(334),
    [anon_sym_mutation] = ACTIONS(334),
    [anon_sym_subscription] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_fragment] = ACTIONS(334),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(334),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(334),
    [anon_sym_extend] = ACTIONS(334),
    [anon_sym_scalar] = ACTIONS(334),
    [anon_sym_type] = ACTIONS(334),
    [anon_sym_interface] = ACTIONS(334),
    [anon_sym_union] = ACTIONS(334),
    [anon_sym_enum] = ACTIONS(334),
    [anon_sym_input] = ACTIONS(334),
    [anon_sym_implements] = ACTIONS(189),
    [anon_sym_directive] = ACTIONS(334),
    [sym_comment] = ACTIONS(5),
  },
  [126] = {
    [sym_Directives] = STATE(197),
    [sym_Directive] = STATE(92),
    [sym_FieldsDefinition] = STATE(172),
    [aux_sym_Directives_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(338),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(338),
    [anon_sym_mutation] = ACTIONS(338),
    [anon_sym_subscription] = ACTIONS(338),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_fragment] = ACTIONS(338),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(338),
    [anon_sym_extend] = ACTIONS(338),
    [anon_sym_scalar] = ACTIONS(338),
    [anon_sym_type] = ACTIONS(338),
    [anon_sym_interface] = ACTIONS(338),
    [anon_sym_union] = ACTIONS(338),
    [anon_sym_enum] = ACTIONS(338),
    [anon_sym_input] = ACTIONS(338),
    [anon_sym_directive] = ACTIONS(338),
    [sym_comment] = ACTIONS(5),
  },
  [127] = {
    [sym_Directives] = STATE(198),
    [sym_Directive] = STATE(110),
    [sym_UnionMemberTypes] = STATE(175),
    [aux_sym_Directives_repeat1] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(344),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(344),
    [anon_sym_mutation] = ACTIONS(344),
    [anon_sym_subscription] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(344),
    [anon_sym_fragment] = ACTIONS(344),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(344),
    [anon_sym_extend] = ACTIONS(344),
    [anon_sym_scalar] = ACTIONS(344),
    [anon_sym_type] = ACTIONS(344),
    [anon_sym_interface] = ACTIONS(344),
    [anon_sym_union] = ACTIONS(344),
    [anon_sym_enum] = ACTIONS(344),
    [anon_sym_input] = ACTIONS(344),
    [anon_sym_directive] = ACTIONS(344),
    [sym_comment] = ACTIONS(5),
  },
  [128] = {
    [sym_Directives] = STATE(199),
    [sym_Directive] = STATE(92),
    [sym_EnumValuesDefinition] = STATE(181),
    [aux_sym_Directives_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(350),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(350),
    [anon_sym_mutation] = ACTIONS(350),
    [anon_sym_subscription] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_fragment] = ACTIONS(350),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(352),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(350),
    [anon_sym_extend] = ACTIONS(350),
    [anon_sym_scalar] = ACTIONS(350),
    [anon_sym_type] = ACTIONS(350),
    [anon_sym_interface] = ACTIONS(350),
    [anon_sym_union] = ACTIONS(350),
    [anon_sym_enum] = ACTIONS(350),
    [anon_sym_input] = ACTIONS(350),
    [anon_sym_directive] = ACTIONS(350),
    [sym_comment] = ACTIONS(5),
  },
  [129] = {
    [sym_Directives] = STATE(200),
    [sym_Directive] = STATE(92),
    [sym_InputFieldsDefinition] = STATE(185),
    [aux_sym_Directives_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(356),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(356),
    [anon_sym_mutation] = ACTIONS(356),
    [anon_sym_subscription] = ACTIONS(356),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_fragment] = ACTIONS(356),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(356),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(356),
    [anon_sym_extend] = ACTIONS(356),
    [anon_sym_scalar] = ACTIONS(356),
    [anon_sym_type] = ACTIONS(356),
    [anon_sym_interface] = ACTIONS(356),
    [anon_sym_union] = ACTIONS(356),
    [anon_sym_enum] = ACTIONS(356),
    [anon_sym_input] = ACTIONS(356),
    [anon_sym_directive] = ACTIONS(356),
    [sym_comment] = ACTIONS(5),
  },
  [130] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(374),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(378),
    [anon_sym_mutation] = ACTIONS(378),
    [anon_sym_subscription] = ACTIONS(378),
    [anon_sym_LBRACE] = ACTIONS(376),
    [anon_sym_RBRACE] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(376),
    [anon_sym_fragment] = ACTIONS(378),
    [anon_sym_RBRACK] = ACTIONS(376),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(376),
    [anon_sym_DQUOTE] = ACTIONS(378),
    [anon_sym_DOLLAR] = ACTIONS(376),
    [anon_sym_EQ] = ACTIONS(376),
    [anon_sym_BANG] = ACTIONS(376),
    [anon_sym_AT] = ACTIONS(376),
    [anon_sym_schema] = ACTIONS(378),
    [anon_sym_extend] = ACTIONS(378),
    [anon_sym_scalar] = ACTIONS(378),
    [anon_sym_type] = ACTIONS(378),
    [anon_sym_interface] = ACTIONS(378),
    [anon_sym_union] = ACTIONS(378),
    [anon_sym_enum] = ACTIONS(378),
    [anon_sym_input] = ACTIONS(378),
    [anon_sym_AMP] = ACTIONS(376),
    [anon_sym_PIPE] = ACTIONS(376),
    [anon_sym_directive] = ACTIONS(378),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(378),
  },
  [132] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(380),
    [anon_sym_AT] = ACTIONS(380),
    [sym_comment] = ACTIONS(5),
  },
  [133] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(382),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(382),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(382),
  },
  [134] = {
    [sym_Directive] = STATE(202),
    [aux_sym_Directives_repeat1] = STATE(202),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(163),
  },
  [135] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(384),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(384),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(384),
  },
  [136] = {
    [sym_SelectionSet] = STATE(203),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
  [137] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(386),
    [sym_comment] = ACTIONS(5),
  },
  [138] = {
    [sym_Argument] = STATE(206),
    [aux_sym_Arguments_repeat1] = STATE(206),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(388),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(287),
  },
  [139] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(390),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(390),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(390),
  },
  [140] = {
    [sym_SelectionSet] = STATE(207),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(390),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(390),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(390),
  },
  [141] = {
    [sym_Directive] = STATE(141),
    [aux_sym_Directives_repeat1] = STATE(141),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(315),
    [anon_sym_AT] = ACTIONS(317),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(315),
  },
  [142] = {
    [sym_SelectionSet] = STATE(207),
    [sym_Directives] = STATE(208),
    [sym_Directive] = STATE(79),
    [aux_sym_Directives_repeat1] = STATE(79),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(390),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(390),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(390),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(392),
    [anon_sym_mutation] = ACTIONS(392),
    [anon_sym_subscription] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(392),
    [anon_sym_fragment] = ACTIONS(392),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(392),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [anon_sym_schema] = ACTIONS(392),
    [anon_sym_extend] = ACTIONS(392),
    [anon_sym_scalar] = ACTIONS(392),
    [anon_sym_type] = ACTIONS(392),
    [anon_sym_interface] = ACTIONS(392),
    [anon_sym_union] = ACTIONS(392),
    [anon_sym_enum] = ACTIONS(392),
    [anon_sym_input] = ACTIONS(392),
    [anon_sym_directive] = ACTIONS(392),
    [sym_comment] = ACTIONS(5),
  },
  [144] = {
    [sym_SelectionSet] = STATE(209),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
  [145] = {
    [sym_NamedType] = STATE(210),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(396),
    [anon_sym_mutation] = ACTIONS(396),
    [anon_sym_subscription] = ACTIONS(396),
    [anon_sym_LBRACE] = ACTIONS(396),
    [anon_sym_fragment] = ACTIONS(396),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(396),
    [anon_sym_DQUOTE] = ACTIONS(398),
    [anon_sym_schema] = ACTIONS(396),
    [anon_sym_extend] = ACTIONS(396),
    [anon_sym_scalar] = ACTIONS(396),
    [anon_sym_type] = ACTIONS(396),
    [anon_sym_interface] = ACTIONS(396),
    [anon_sym_union] = ACTIONS(396),
    [anon_sym_enum] = ACTIONS(396),
    [anon_sym_input] = ACTIONS(396),
    [anon_sym_directive] = ACTIONS(396),
    [sym_comment] = ACTIONS(5),
  },
  [147] = {
    [sym_OperationType] = STATE(85),
    [sym_OperationTypeDefinition] = STATE(147),
    [aux_sym_SchemaDefinition_repeat1] = STATE(147),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(400),
    [anon_sym_mutation] = ACTIONS(400),
    [anon_sym_subscription] = ACTIONS(400),
    [anon_sym_RBRACE] = ACTIONS(403),
    [sym_comment] = ACTIONS(5),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(407),
    [anon_sym_mutation] = ACTIONS(407),
    [anon_sym_subscription] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(405),
    [anon_sym_fragment] = ACTIONS(407),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_EQ] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_schema] = ACTIONS(407),
    [anon_sym_extend] = ACTIONS(407),
    [anon_sym_scalar] = ACTIONS(407),
    [anon_sym_type] = ACTIONS(407),
    [anon_sym_interface] = ACTIONS(407),
    [anon_sym_union] = ACTIONS(407),
    [anon_sym_enum] = ACTIONS(407),
    [anon_sym_input] = ACTIONS(407),
    [anon_sym_directive] = ACTIONS(407),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(407),
  },
  [149] = {
    [sym_OperationType] = STATE(85),
    [sym_OperationTypeDefinition] = STATE(147),
    [aux_sym_SchemaDefinition_repeat1] = STATE(147),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [150] = {
    [sym_OperationType] = STATE(85),
    [sym_OperationTypeDefinition] = STATE(147),
    [aux_sym_SchemaDefinition_repeat1] = STATE(147),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(411),
    [sym_comment] = ACTIONS(5),
  },
  [151] = {
    [sym_OperationType] = STATE(85),
    [sym_OperationTypeDefinition] = STATE(213),
    [aux_sym_SchemaDefinition_repeat1] = STATE(213),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
  },
  [152] = {
    [sym_Directive] = STATE(152),
    [aux_sym_Directives_repeat1] = STATE(152),
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(315),
    [anon_sym_mutation] = ACTIONS(315),
    [anon_sym_subscription] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_fragment] = ACTIONS(315),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(317),
    [anon_sym_schema] = ACTIONS(315),
    [anon_sym_extend] = ACTIONS(315),
    [anon_sym_scalar] = ACTIONS(315),
    [anon_sym_type] = ACTIONS(315),
    [anon_sym_interface] = ACTIONS(315),
    [anon_sym_union] = ACTIONS(315),
    [anon_sym_enum] = ACTIONS(315),
    [anon_sym_input] = ACTIONS(315),
    [anon_sym_directive] = ACTIONS(315),
    [sym_comment] = ACTIONS(5),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(415),
    [anon_sym_mutation] = ACTIONS(415),
    [anon_sym_subscription] = ACTIONS(415),
    [anon_sym_LBRACE] = ACTIONS(415),
    [anon_sym_fragment] = ACTIONS(415),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(415),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_schema] = ACTIONS(415),
    [anon_sym_extend] = ACTIONS(415),
    [anon_sym_scalar] = ACTIONS(415),
    [anon_sym_type] = ACTIONS(415),
    [anon_sym_interface] = ACTIONS(415),
    [anon_sym_union] = ACTIONS(415),
    [anon_sym_enum] = ACTIONS(415),
    [anon_sym_input] = ACTIONS(415),
    [anon_sym_directive] = ACTIONS(415),
    [sym_comment] = ACTIONS(5),
  },
  [154] = {
    [sym_FieldsDefinition] = STATE(214),
    [ts_builtin_sym_end] = ACTIONS(419),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(419),
    [anon_sym_mutation] = ACTIONS(419),
    [anon_sym_subscription] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_fragment] = ACTIONS(419),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [anon_sym_schema] = ACTIONS(419),
    [anon_sym_extend] = ACTIONS(419),
    [anon_sym_scalar] = ACTIONS(419),
    [anon_sym_type] = ACTIONS(419),
    [anon_sym_interface] = ACTIONS(419),
    [anon_sym_union] = ACTIONS(419),
    [anon_sym_enum] = ACTIONS(419),
    [anon_sym_input] = ACTIONS(419),
    [anon_sym_directive] = ACTIONS(419),
    [sym_comment] = ACTIONS(5),
  },
  [155] = {
    [sym_Directives] = STATE(215),
    [sym_Directive] = STATE(92),
    [sym_FieldsDefinition] = STATE(214),
    [aux_sym_Directives_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(419),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(419),
    [anon_sym_mutation] = ACTIONS(419),
    [anon_sym_subscription] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_fragment] = ACTIONS(419),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(419),
    [anon_sym_extend] = ACTIONS(419),
    [anon_sym_scalar] = ACTIONS(419),
    [anon_sym_type] = ACTIONS(419),
    [anon_sym_interface] = ACTIONS(419),
    [anon_sym_union] = ACTIONS(419),
    [anon_sym_enum] = ACTIONS(419),
    [anon_sym_input] = ACTIONS(419),
    [anon_sym_directive] = ACTIONS(419),
    [sym_comment] = ACTIONS(5),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(419),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(419),
    [anon_sym_mutation] = ACTIONS(419),
    [anon_sym_subscription] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_fragment] = ACTIONS(419),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [anon_sym_schema] = ACTIONS(419),
    [anon_sym_extend] = ACTIONS(419),
    [anon_sym_scalar] = ACTIONS(419),
    [anon_sym_type] = ACTIONS(419),
    [anon_sym_interface] = ACTIONS(419),
    [anon_sym_union] = ACTIONS(419),
    [anon_sym_enum] = ACTIONS(419),
    [anon_sym_input] = ACTIONS(419),
    [anon_sym_directive] = ACTIONS(419),
    [sym_comment] = ACTIONS(5),
  },
  [157] = {
    [sym_FieldsDefinition] = STATE(216),
    [ts_builtin_sym_end] = ACTIONS(423),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(423),
    [anon_sym_mutation] = ACTIONS(423),
    [anon_sym_subscription] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(423),
    [anon_sym_fragment] = ACTIONS(423),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(425),
    [anon_sym_schema] = ACTIONS(423),
    [anon_sym_extend] = ACTIONS(423),
    [anon_sym_scalar] = ACTIONS(423),
    [anon_sym_type] = ACTIONS(423),
    [anon_sym_interface] = ACTIONS(423),
    [anon_sym_union] = ACTIONS(423),
    [anon_sym_enum] = ACTIONS(423),
    [anon_sym_input] = ACTIONS(423),
    [anon_sym_directive] = ACTIONS(423),
    [sym_comment] = ACTIONS(5),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(423),
    [anon_sym_mutation] = ACTIONS(423),
    [anon_sym_subscription] = ACTIONS(423),
    [anon_sym_LBRACE] = ACTIONS(423),
    [anon_sym_fragment] = ACTIONS(423),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(425),
    [anon_sym_schema] = ACTIONS(423),
    [anon_sym_extend] = ACTIONS(423),
    [anon_sym_scalar] = ACTIONS(423),
    [anon_sym_type] = ACTIONS(423),
    [anon_sym_interface] = ACTIONS(423),
    [anon_sym_union] = ACTIONS(423),
    [anon_sym_enum] = ACTIONS(423),
    [anon_sym_input] = ACTIONS(423),
    [anon_sym_directive] = ACTIONS(423),
    [sym_comment] = ACTIONS(5),
  },
  [159] = {
    [sym_UnionMemberTypes] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(427),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(427),
    [anon_sym_mutation] = ACTIONS(427),
    [anon_sym_subscription] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(427),
    [anon_sym_fragment] = ACTIONS(427),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_schema] = ACTIONS(427),
    [anon_sym_extend] = ACTIONS(427),
    [anon_sym_scalar] = ACTIONS(427),
    [anon_sym_type] = ACTIONS(427),
    [anon_sym_interface] = ACTIONS(427),
    [anon_sym_union] = ACTIONS(427),
    [anon_sym_enum] = ACTIONS(427),
    [anon_sym_input] = ACTIONS(427),
    [anon_sym_directive] = ACTIONS(427),
    [sym_comment] = ACTIONS(5),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(427),
    [anon_sym_mutation] = ACTIONS(427),
    [anon_sym_subscription] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(427),
    [anon_sym_fragment] = ACTIONS(427),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [anon_sym_schema] = ACTIONS(427),
    [anon_sym_extend] = ACTIONS(427),
    [anon_sym_scalar] = ACTIONS(427),
    [anon_sym_type] = ACTIONS(427),
    [anon_sym_interface] = ACTIONS(427),
    [anon_sym_union] = ACTIONS(427),
    [anon_sym_enum] = ACTIONS(427),
    [anon_sym_input] = ACTIONS(427),
    [anon_sym_directive] = ACTIONS(427),
    [sym_comment] = ACTIONS(5),
  },
  [161] = {
    [sym_EnumValuesDefinition] = STATE(218),
    [ts_builtin_sym_end] = ACTIONS(431),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(431),
    [anon_sym_mutation] = ACTIONS(431),
    [anon_sym_subscription] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_fragment] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [anon_sym_schema] = ACTIONS(431),
    [anon_sym_extend] = ACTIONS(431),
    [anon_sym_scalar] = ACTIONS(431),
    [anon_sym_type] = ACTIONS(431),
    [anon_sym_interface] = ACTIONS(431),
    [anon_sym_union] = ACTIONS(431),
    [anon_sym_enum] = ACTIONS(431),
    [anon_sym_input] = ACTIONS(431),
    [anon_sym_directive] = ACTIONS(431),
    [sym_comment] = ACTIONS(5),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(431),
    [anon_sym_mutation] = ACTIONS(431),
    [anon_sym_subscription] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_fragment] = ACTIONS(431),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [anon_sym_schema] = ACTIONS(431),
    [anon_sym_extend] = ACTIONS(431),
    [anon_sym_scalar] = ACTIONS(431),
    [anon_sym_type] = ACTIONS(431),
    [anon_sym_interface] = ACTIONS(431),
    [anon_sym_union] = ACTIONS(431),
    [anon_sym_enum] = ACTIONS(431),
    [anon_sym_input] = ACTIONS(431),
    [anon_sym_directive] = ACTIONS(431),
    [sym_comment] = ACTIONS(5),
  },
  [163] = {
    [sym_InputFieldsDefinition] = STATE(219),
    [ts_builtin_sym_end] = ACTIONS(435),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(435),
    [anon_sym_mutation] = ACTIONS(435),
    [anon_sym_subscription] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_fragment] = ACTIONS(435),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_schema] = ACTIONS(435),
    [anon_sym_extend] = ACTIONS(435),
    [anon_sym_scalar] = ACTIONS(435),
    [anon_sym_type] = ACTIONS(435),
    [anon_sym_interface] = ACTIONS(435),
    [anon_sym_union] = ACTIONS(435),
    [anon_sym_enum] = ACTIONS(435),
    [anon_sym_input] = ACTIONS(435),
    [anon_sym_directive] = ACTIONS(435),
    [sym_comment] = ACTIONS(5),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(435),
    [anon_sym_mutation] = ACTIONS(435),
    [anon_sym_subscription] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_fragment] = ACTIONS(435),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_schema] = ACTIONS(435),
    [anon_sym_extend] = ACTIONS(435),
    [anon_sym_scalar] = ACTIONS(435),
    [anon_sym_type] = ACTIONS(435),
    [anon_sym_interface] = ACTIONS(435),
    [anon_sym_union] = ACTIONS(435),
    [anon_sym_enum] = ACTIONS(435),
    [anon_sym_input] = ACTIONS(435),
    [anon_sym_directive] = ACTIONS(435),
    [sym_comment] = ACTIONS(5),
  },
  [165] = {
    [sym_ArgumentsDefinition] = STATE(221),
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(360),
    [sym_comment] = ACTIONS(5),
  },
  [166] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(441),
  },
  [167] = {
    [sym_StringValue] = STATE(22),
    [sym_Description] = STATE(166),
    [sym_FieldDefinition] = STATE(224),
    [aux_sym_FieldsDefinition_repeat1] = STATE(224),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(443),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(330),
  },
  [168] = {
    [sym_NamedType] = STATE(225),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [169] = {
    [aux_sym_ImplementsInterfaces_repeat1] = STATE(227),
    [ts_builtin_sym_end] = ACTIONS(445),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(445),
    [anon_sym_mutation] = ACTIONS(445),
    [anon_sym_subscription] = ACTIONS(445),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_fragment] = ACTIONS(445),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(445),
    [anon_sym_schema] = ACTIONS(445),
    [anon_sym_extend] = ACTIONS(445),
    [anon_sym_scalar] = ACTIONS(445),
    [anon_sym_type] = ACTIONS(445),
    [anon_sym_interface] = ACTIONS(445),
    [anon_sym_union] = ACTIONS(445),
    [anon_sym_enum] = ACTIONS(445),
    [anon_sym_input] = ACTIONS(445),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_directive] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(451),
    [anon_sym_mutation] = ACTIONS(451),
    [anon_sym_subscription] = ACTIONS(451),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_fragment] = ACTIONS(451),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [anon_sym_schema] = ACTIONS(451),
    [anon_sym_extend] = ACTIONS(451),
    [anon_sym_scalar] = ACTIONS(451),
    [anon_sym_type] = ACTIONS(451),
    [anon_sym_interface] = ACTIONS(451),
    [anon_sym_union] = ACTIONS(451),
    [anon_sym_enum] = ACTIONS(451),
    [anon_sym_input] = ACTIONS(451),
    [anon_sym_directive] = ACTIONS(451),
    [sym_comment] = ACTIONS(5),
  },
  [171] = {
    [sym_FieldsDefinition] = STATE(228),
    [ts_builtin_sym_end] = ACTIONS(451),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(451),
    [anon_sym_mutation] = ACTIONS(451),
    [anon_sym_subscription] = ACTIONS(451),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_fragment] = ACTIONS(451),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [anon_sym_schema] = ACTIONS(451),
    [anon_sym_extend] = ACTIONS(451),
    [anon_sym_scalar] = ACTIONS(451),
    [anon_sym_type] = ACTIONS(451),
    [anon_sym_interface] = ACTIONS(451),
    [anon_sym_union] = ACTIONS(451),
    [anon_sym_enum] = ACTIONS(451),
    [anon_sym_input] = ACTIONS(451),
    [anon_sym_directive] = ACTIONS(451),
    [sym_comment] = ACTIONS(5),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(455),
    [anon_sym_mutation] = ACTIONS(455),
    [anon_sym_subscription] = ACTIONS(455),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_fragment] = ACTIONS(455),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [anon_sym_schema] = ACTIONS(455),
    [anon_sym_extend] = ACTIONS(455),
    [anon_sym_scalar] = ACTIONS(455),
    [anon_sym_type] = ACTIONS(455),
    [anon_sym_interface] = ACTIONS(455),
    [anon_sym_union] = ACTIONS(455),
    [anon_sym_enum] = ACTIONS(455),
    [anon_sym_input] = ACTIONS(455),
    [anon_sym_directive] = ACTIONS(455),
    [sym_comment] = ACTIONS(5),
  },
  [173] = {
    [sym_NamedType] = STATE(229),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [174] = {
    [aux_sym_UnionMemberTypes_repeat1] = STATE(231),
    [ts_builtin_sym_end] = ACTIONS(459),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(459),
    [anon_sym_mutation] = ACTIONS(459),
    [anon_sym_subscription] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(459),
    [anon_sym_fragment] = ACTIONS(459),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(459),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [anon_sym_schema] = ACTIONS(459),
    [anon_sym_extend] = ACTIONS(459),
    [anon_sym_scalar] = ACTIONS(459),
    [anon_sym_type] = ACTIONS(459),
    [anon_sym_interface] = ACTIONS(459),
    [anon_sym_union] = ACTIONS(459),
    [anon_sym_enum] = ACTIONS(459),
    [anon_sym_input] = ACTIONS(459),
    [anon_sym_PIPE] = ACTIONS(463),
    [anon_sym_directive] = ACTIONS(459),
    [sym_comment] = ACTIONS(5),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(465),
    [anon_sym_mutation] = ACTIONS(465),
    [anon_sym_subscription] = ACTIONS(465),
    [anon_sym_LBRACE] = ACTIONS(465),
    [anon_sym_fragment] = ACTIONS(465),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [anon_sym_schema] = ACTIONS(465),
    [anon_sym_extend] = ACTIONS(465),
    [anon_sym_scalar] = ACTIONS(465),
    [anon_sym_type] = ACTIONS(465),
    [anon_sym_interface] = ACTIONS(465),
    [anon_sym_union] = ACTIONS(465),
    [anon_sym_enum] = ACTIONS(465),
    [anon_sym_input] = ACTIONS(465),
    [anon_sym_directive] = ACTIONS(465),
    [sym_comment] = ACTIONS(5),
  },
  [176] = {
    [sym_Directive] = STATE(176),
    [aux_sym_Directives_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(315),
    [anon_sym_mutation] = ACTIONS(315),
    [anon_sym_subscription] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_fragment] = ACTIONS(315),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_AT] = ACTIONS(317),
    [anon_sym_schema] = ACTIONS(315),
    [anon_sym_extend] = ACTIONS(315),
    [anon_sym_scalar] = ACTIONS(315),
    [anon_sym_type] = ACTIONS(315),
    [anon_sym_interface] = ACTIONS(315),
    [anon_sym_union] = ACTIONS(315),
    [anon_sym_enum] = ACTIONS(315),
    [anon_sym_input] = ACTIONS(315),
    [anon_sym_directive] = ACTIONS(315),
    [sym_comment] = ACTIONS(5),
  },
  [177] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(469),
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_false] = ACTIONS(471),
    [anon_sym_true] = ACTIONS(471),
    [sym_NullValue] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_RBRACK] = ACTIONS(469),
    [sym_IntValue] = ACTIONS(471),
    [sym_FloatValue] = ACTIONS(469),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(471),
    [anon_sym_DOLLAR] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(471),
  },
  [178] = {
    [sym_Directives] = STATE(232),
    [sym_Directive] = STATE(233),
    [aux_sym_Directives_repeat1] = STATE(233),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(473),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(475),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(473),
  },
  [179] = {
    [sym_EnumValue] = STATE(234),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(348),
  },
  [180] = {
    [sym_EnumValue] = STATE(178),
    [sym_StringValue] = STATE(22),
    [sym_Description] = STATE(179),
    [sym_EnumValueDefinition] = STATE(236),
    [aux_sym_EnumValuesDefinition_repeat1] = STATE(236),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(477),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(348),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(479),
    [anon_sym_mutation] = ACTIONS(479),
    [anon_sym_subscription] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(479),
    [anon_sym_fragment] = ACTIONS(479),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(479),
    [anon_sym_DQUOTE] = ACTIONS(481),
    [anon_sym_schema] = ACTIONS(479),
    [anon_sym_extend] = ACTIONS(479),
    [anon_sym_scalar] = ACTIONS(479),
    [anon_sym_type] = ACTIONS(479),
    [anon_sym_interface] = ACTIONS(479),
    [anon_sym_union] = ACTIONS(479),
    [anon_sym_enum] = ACTIONS(479),
    [anon_sym_input] = ACTIONS(479),
    [anon_sym_directive] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [182] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [183] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(485),
  },
  [184] = {
    [sym_StringValue] = STATE(22),
    [sym_Description] = STATE(183),
    [sym_InputValueDefinition] = STATE(240),
    [aux_sym_ArgumentsDefinition_repeat1] = STATE(240),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(354),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(489),
    [anon_sym_mutation] = ACTIONS(489),
    [anon_sym_subscription] = ACTIONS(489),
    [anon_sym_LBRACE] = ACTIONS(489),
    [anon_sym_fragment] = ACTIONS(489),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [anon_sym_schema] = ACTIONS(489),
    [anon_sym_extend] = ACTIONS(489),
    [anon_sym_scalar] = ACTIONS(489),
    [anon_sym_type] = ACTIONS(489),
    [anon_sym_interface] = ACTIONS(489),
    [anon_sym_union] = ACTIONS(489),
    [anon_sym_enum] = ACTIONS(489),
    [anon_sym_input] = ACTIONS(489),
    [anon_sym_directive] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
  },
  [186] = {
    [sym_StringValue] = STATE(22),
    [sym_Description] = STATE(242),
    [sym_InputValueDefinition] = STATE(243),
    [aux_sym_ArgumentsDefinition_repeat1] = STATE(243),
    [sym_comma] = ACTIONS(5),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(493),
  },
  [187] = {
    [sym_DirectiveLocations] = STATE(247),
    [sym_DirectiveLocation] = STATE(248),
    [sym_ExecutableDirectiveLocation] = STATE(249),
    [sym_TypeSystemDirectiveLocation] = STATE(249),
    [sym_comma] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_QUERY] = ACTIONS(497),
    [anon_sym_MUTATION] = ACTIONS(497),
    [anon_sym_SUBSCRIPTION] = ACTIONS(497),
    [anon_sym_FIELD] = ACTIONS(499),
    [anon_sym_FRAGMENT_DEFINITION] = ACTIONS(497),
    [anon_sym_FRAGMENT_SPREAD] = ACTIONS(497),
    [anon_sym_INLINE_FRAGMENT] = ACTIONS(497),
    [anon_sym_VARIABLE_DEFINITION] = ACTIONS(497),
    [anon_sym_SCHEMA] = ACTIONS(501),
    [anon_sym_SCALAR] = ACTIONS(501),
    [anon_sym_OBJECT] = ACTIONS(501),
    [anon_sym_FIELD_DEFINITION] = ACTIONS(501),
    [anon_sym_ARGUMENT_DEFINITION] = ACTIONS(501),
    [anon_sym_INTERFACE] = ACTIONS(501),
    [anon_sym_UNION] = ACTIONS(501),
    [anon_sym_ENUM] = ACTIONS(503),
    [anon_sym_ENUM_VALUE] = ACTIONS(501),
    [anon_sym_INPUT_OBJECT] = ACTIONS(501),
    [anon_sym_INPUT_FIELD_DEFINITION] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
  },
  [188] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_on] = ACTIONS(505),
    [sym_comment] = ACTIONS(5),
  },
  [189] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(507),
    [anon_sym_COLON] = ACTIONS(507),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_false] = ACTIONS(509),
    [anon_sym_true] = ACTIONS(509),
    [sym_NullValue] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_RBRACK] = ACTIONS(507),
    [sym_IntValue] = ACTIONS(509),
    [sym_FloatValue] = ACTIONS(507),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_AT] = ACTIONS(507),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(509),
  },
  [190] = {
    [sym_Type] = STATE(252),
    [sym_NamedType] = STATE(253),
    [sym_ListType] = STATE(253),
    [sym_NonNullType] = STATE(254),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [191] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_AT] = ACTIONS(513),
    [sym_comment] = ACTIONS(5),
  },
  [192] = {
    [sym_VariableDefinition] = STATE(192),
    [sym_Variable] = STATE(119),
    [aux_sym_VariableDefinitions_repeat1] = STATE(192),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_DOLLAR] = ACTIONS(517),
    [sym_comment] = ACTIONS(5),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(520),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(520),
    [anon_sym_mutation] = ACTIONS(520),
    [anon_sym_subscription] = ACTIONS(520),
    [anon_sym_LBRACE] = ACTIONS(520),
    [anon_sym_fragment] = ACTIONS(520),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(520),
    [anon_sym_DQUOTE] = ACTIONS(522),
    [anon_sym_schema] = ACTIONS(520),
    [anon_sym_extend] = ACTIONS(520),
    [anon_sym_scalar] = ACTIONS(520),
    [anon_sym_type] = ACTIONS(520),
    [anon_sym_interface] = ACTIONS(520),
    [anon_sym_union] = ACTIONS(520),
    [anon_sym_enum] = ACTIONS(520),
    [anon_sym_input] = ACTIONS(520),
    [anon_sym_directive] = ACTIONS(520),
    [sym_comment] = ACTIONS(5),
  },
  [194] = {
    [sym_SelectionSet] = STATE(255),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
  [195] = {
    [ts_builtin_sym_end] = ACTIONS(524),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(524),
    [anon_sym_mutation] = ACTIONS(524),
    [anon_sym_subscription] = ACTIONS(524),
    [anon_sym_LBRACE] = ACTIONS(524),
    [anon_sym_fragment] = ACTIONS(524),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(524),
    [anon_sym_DQUOTE] = ACTIONS(526),
    [anon_sym_schema] = ACTIONS(524),
    [anon_sym_extend] = ACTIONS(524),
    [anon_sym_scalar] = ACTIONS(524),
    [anon_sym_type] = ACTIONS(524),
    [anon_sym_interface] = ACTIONS(524),
    [anon_sym_union] = ACTIONS(524),
    [anon_sym_enum] = ACTIONS(524),
    [anon_sym_input] = ACTIONS(524),
    [anon_sym_directive] = ACTIONS(524),
    [sym_comment] = ACTIONS(5),
  },
  [196] = {
    [sym_Directives] = STATE(256),
    [sym_Directive] = STATE(92),
    [sym_FieldsDefinition] = STATE(228),
    [aux_sym_Directives_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(451),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(451),
    [anon_sym_mutation] = ACTIONS(451),
    [anon_sym_subscription] = ACTIONS(451),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_fragment] = ACTIONS(451),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_schema] = ACTIONS(451),
    [anon_sym_extend] = ACTIONS(451),
    [anon_sym_scalar] = ACTIONS(451),
    [anon_sym_type] = ACTIONS(451),
    [anon_sym_interface] = ACTIONS(451),
    [anon_sym_union] = ACTIONS(451),
    [anon_sym_enum] = ACTIONS(451),
    [anon_sym_input] = ACTIONS(451),
    [anon_sym_directive] = ACTIONS(451),
    [sym_comment] = ACTIONS(5),
  },
  [197] = {
    [sym_FieldsDefinition] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(455),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(455),
    [anon_sym_mutation] = ACTIONS(455),
    [anon_sym_subscription] = ACTIONS(455),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_fragment] = ACTIONS(455),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [anon_sym_schema] = ACTIONS(455),
    [anon_sym_extend] = ACTIONS(455),
    [anon_sym_scalar] = ACTIONS(455),
    [anon_sym_type] = ACTIONS(455),
    [anon_sym_interface] = ACTIONS(455),
    [anon_sym_union] = ACTIONS(455),
    [anon_sym_enum] = ACTIONS(455),
    [anon_sym_input] = ACTIONS(455),
    [anon_sym_directive] = ACTIONS(455),
    [sym_comment] = ACTIONS(5),
  },
  [198] = {
    [sym_UnionMemberTypes] = STATE(258),
    [ts_builtin_sym_end] = ACTIONS(465),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(465),
    [anon_sym_mutation] = ACTIONS(465),
    [anon_sym_subscription] = ACTIONS(465),
    [anon_sym_LBRACE] = ACTIONS(465),
    [anon_sym_fragment] = ACTIONS(465),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_schema] = ACTIONS(465),
    [anon_sym_extend] = ACTIONS(465),
    [anon_sym_scalar] = ACTIONS(465),
    [anon_sym_type] = ACTIONS(465),
    [anon_sym_interface] = ACTIONS(465),
    [anon_sym_union] = ACTIONS(465),
    [anon_sym_enum] = ACTIONS(465),
    [anon_sym_input] = ACTIONS(465),
    [anon_sym_directive] = ACTIONS(465),
    [sym_comment] = ACTIONS(5),
  },
  [199] = {
    [sym_EnumValuesDefinition] = STATE(259),
    [ts_builtin_sym_end] = ACTIONS(479),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(479),
    [anon_sym_mutation] = ACTIONS(479),
    [anon_sym_subscription] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_fragment] = ACTIONS(479),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(479),
    [anon_sym_DQUOTE] = ACTIONS(481),
    [anon_sym_schema] = ACTIONS(479),
    [anon_sym_extend] = ACTIONS(479),
    [anon_sym_scalar] = ACTIONS(479),
    [anon_sym_type] = ACTIONS(479),
    [anon_sym_interface] = ACTIONS(479),
    [anon_sym_union] = ACTIONS(479),
    [anon_sym_enum] = ACTIONS(479),
    [anon_sym_input] = ACTIONS(479),
    [anon_sym_directive] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [200] = {
    [sym_InputFieldsDefinition] = STATE(260),
    [ts_builtin_sym_end] = ACTIONS(489),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(489),
    [anon_sym_mutation] = ACTIONS(489),
    [anon_sym_subscription] = ACTIONS(489),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_fragment] = ACTIONS(489),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [anon_sym_schema] = ACTIONS(489),
    [anon_sym_extend] = ACTIONS(489),
    [anon_sym_scalar] = ACTIONS(489),
    [anon_sym_type] = ACTIONS(489),
    [anon_sym_interface] = ACTIONS(489),
    [anon_sym_union] = ACTIONS(489),
    [anon_sym_enum] = ACTIONS(489),
    [anon_sym_input] = ACTIONS(489),
    [anon_sym_directive] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
  },
  [201] = {
    [sym_ArgumentsDefinition] = STATE(261),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(360),
    [anon_sym_on] = ACTIONS(505),
    [sym_comment] = ACTIONS(5),
  },
  [202] = {
    [sym_Directive] = STATE(202),
    [aux_sym_Directives_repeat1] = STATE(202),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(315),
    [anon_sym_AT] = ACTIONS(317),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(315),
  },
  [203] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(528),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(528),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(528),
  },
  [204] = {
    [sym_Value] = STATE(266),
    [sym_BooleanValue] = STATE(264),
    [sym_EnumValue] = STATE(264),
    [sym_ListValue] = STATE(264),
    [sym_ObjectValue] = STATE(264),
    [sym_StringValue] = STATE(264),
    [sym_Variable] = STATE(264),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_false] = ACTIONS(532),
    [anon_sym_true] = ACTIONS(532),
    [sym_NullValue] = ACTIONS(534),
    [anon_sym_LBRACK] = ACTIONS(536),
    [sym_IntValue] = ACTIONS(534),
    [sym_FloatValue] = ACTIONS(538),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(540),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(542),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(544),
    [anon_sym_mutation] = ACTIONS(544),
    [anon_sym_subscription] = ACTIONS(544),
    [anon_sym_LBRACE] = ACTIONS(542),
    [anon_sym_RBRACE] = ACTIONS(542),
    [anon_sym_RPAREN] = ACTIONS(542),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(542),
    [anon_sym_fragment] = ACTIONS(544),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(542),
    [anon_sym_DQUOTE] = ACTIONS(544),
    [anon_sym_EQ] = ACTIONS(542),
    [anon_sym_AT] = ACTIONS(542),
    [anon_sym_schema] = ACTIONS(544),
    [anon_sym_extend] = ACTIONS(544),
    [anon_sym_scalar] = ACTIONS(544),
    [anon_sym_type] = ACTIONS(544),
    [anon_sym_interface] = ACTIONS(544),
    [anon_sym_union] = ACTIONS(544),
    [anon_sym_enum] = ACTIONS(544),
    [anon_sym_input] = ACTIONS(544),
    [anon_sym_directive] = ACTIONS(544),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(544),
  },
  [206] = {
    [sym_Argument] = STATE(206),
    [aux_sym_Arguments_repeat1] = STATE(206),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(546),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(548),
  },
  [207] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(551),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(551),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(551),
  },
  [208] = {
    [sym_SelectionSet] = STATE(267),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(551),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(551),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(551),
  },
  [209] = {
    [ts_builtin_sym_end] = ACTIONS(553),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(553),
    [anon_sym_mutation] = ACTIONS(553),
    [anon_sym_subscription] = ACTIONS(553),
    [anon_sym_LBRACE] = ACTIONS(553),
    [anon_sym_fragment] = ACTIONS(553),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(555),
    [anon_sym_schema] = ACTIONS(553),
    [anon_sym_extend] = ACTIONS(553),
    [anon_sym_scalar] = ACTIONS(553),
    [anon_sym_type] = ACTIONS(553),
    [anon_sym_interface] = ACTIONS(553),
    [anon_sym_union] = ACTIONS(553),
    [anon_sym_enum] = ACTIONS(553),
    [anon_sym_input] = ACTIONS(553),
    [anon_sym_directive] = ACTIONS(553),
    [sym_comment] = ACTIONS(5),
  },
  [210] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(557),
    [anon_sym_mutation] = ACTIONS(557),
    [anon_sym_subscription] = ACTIONS(557),
    [anon_sym_RBRACE] = ACTIONS(557),
    [sym_comment] = ACTIONS(5),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(559),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(559),
    [anon_sym_mutation] = ACTIONS(559),
    [anon_sym_subscription] = ACTIONS(559),
    [anon_sym_LBRACE] = ACTIONS(559),
    [anon_sym_fragment] = ACTIONS(559),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(559),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [anon_sym_schema] = ACTIONS(559),
    [anon_sym_extend] = ACTIONS(559),
    [anon_sym_scalar] = ACTIONS(559),
    [anon_sym_type] = ACTIONS(559),
    [anon_sym_interface] = ACTIONS(559),
    [anon_sym_union] = ACTIONS(559),
    [anon_sym_enum] = ACTIONS(559),
    [anon_sym_input] = ACTIONS(559),
    [anon_sym_directive] = ACTIONS(559),
    [sym_comment] = ACTIONS(5),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(563),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(563),
    [anon_sym_mutation] = ACTIONS(563),
    [anon_sym_subscription] = ACTIONS(563),
    [anon_sym_LBRACE] = ACTIONS(563),
    [anon_sym_fragment] = ACTIONS(563),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(565),
    [anon_sym_schema] = ACTIONS(563),
    [anon_sym_extend] = ACTIONS(563),
    [anon_sym_scalar] = ACTIONS(563),
    [anon_sym_type] = ACTIONS(563),
    [anon_sym_interface] = ACTIONS(563),
    [anon_sym_union] = ACTIONS(563),
    [anon_sym_enum] = ACTIONS(563),
    [anon_sym_input] = ACTIONS(563),
    [anon_sym_directive] = ACTIONS(563),
    [sym_comment] = ACTIONS(5),
  },
  [213] = {
    [sym_OperationType] = STATE(85),
    [sym_OperationTypeDefinition] = STATE(147),
    [aux_sym_SchemaDefinition_repeat1] = STATE(147),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(567),
    [sym_comment] = ACTIONS(5),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(569),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(569),
    [anon_sym_mutation] = ACTIONS(569),
    [anon_sym_subscription] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(569),
    [anon_sym_fragment] = ACTIONS(569),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [anon_sym_schema] = ACTIONS(569),
    [anon_sym_extend] = ACTIONS(569),
    [anon_sym_scalar] = ACTIONS(569),
    [anon_sym_type] = ACTIONS(569),
    [anon_sym_interface] = ACTIONS(569),
    [anon_sym_union] = ACTIONS(569),
    [anon_sym_enum] = ACTIONS(569),
    [anon_sym_input] = ACTIONS(569),
    [anon_sym_directive] = ACTIONS(569),
    [sym_comment] = ACTIONS(5),
  },
  [215] = {
    [sym_FieldsDefinition] = STATE(269),
    [ts_builtin_sym_end] = ACTIONS(569),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(569),
    [anon_sym_mutation] = ACTIONS(569),
    [anon_sym_subscription] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(569),
    [anon_sym_fragment] = ACTIONS(569),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [anon_sym_schema] = ACTIONS(569),
    [anon_sym_extend] = ACTIONS(569),
    [anon_sym_scalar] = ACTIONS(569),
    [anon_sym_type] = ACTIONS(569),
    [anon_sym_interface] = ACTIONS(569),
    [anon_sym_union] = ACTIONS(569),
    [anon_sym_enum] = ACTIONS(569),
    [anon_sym_input] = ACTIONS(569),
    [anon_sym_directive] = ACTIONS(569),
    [sym_comment] = ACTIONS(5),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(573),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(573),
    [anon_sym_mutation] = ACTIONS(573),
    [anon_sym_subscription] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(573),
    [anon_sym_fragment] = ACTIONS(573),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [anon_sym_schema] = ACTIONS(573),
    [anon_sym_extend] = ACTIONS(573),
    [anon_sym_scalar] = ACTIONS(573),
    [anon_sym_type] = ACTIONS(573),
    [anon_sym_interface] = ACTIONS(573),
    [anon_sym_union] = ACTIONS(573),
    [anon_sym_enum] = ACTIONS(573),
    [anon_sym_input] = ACTIONS(573),
    [anon_sym_directive] = ACTIONS(573),
    [sym_comment] = ACTIONS(5),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(577),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(577),
    [anon_sym_mutation] = ACTIONS(577),
    [anon_sym_subscription] = ACTIONS(577),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_fragment] = ACTIONS(577),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(579),
    [anon_sym_schema] = ACTIONS(577),
    [anon_sym_extend] = ACTIONS(577),
    [anon_sym_scalar] = ACTIONS(577),
    [anon_sym_type] = ACTIONS(577),
    [anon_sym_interface] = ACTIONS(577),
    [anon_sym_union] = ACTIONS(577),
    [anon_sym_enum] = ACTIONS(577),
    [anon_sym_input] = ACTIONS(577),
    [anon_sym_directive] = ACTIONS(577),
    [sym_comment] = ACTIONS(5),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(581),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(581),
    [anon_sym_mutation] = ACTIONS(581),
    [anon_sym_subscription] = ACTIONS(581),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_fragment] = ACTIONS(581),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [anon_sym_schema] = ACTIONS(581),
    [anon_sym_extend] = ACTIONS(581),
    [anon_sym_scalar] = ACTIONS(581),
    [anon_sym_type] = ACTIONS(581),
    [anon_sym_interface] = ACTIONS(581),
    [anon_sym_union] = ACTIONS(581),
    [anon_sym_enum] = ACTIONS(581),
    [anon_sym_input] = ACTIONS(581),
    [anon_sym_directive] = ACTIONS(581),
    [sym_comment] = ACTIONS(5),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(585),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(585),
    [anon_sym_mutation] = ACTIONS(585),
    [anon_sym_subscription] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_fragment] = ACTIONS(585),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(587),
    [anon_sym_schema] = ACTIONS(585),
    [anon_sym_extend] = ACTIONS(585),
    [anon_sym_scalar] = ACTIONS(585),
    [anon_sym_type] = ACTIONS(585),
    [anon_sym_interface] = ACTIONS(585),
    [anon_sym_union] = ACTIONS(585),
    [anon_sym_enum] = ACTIONS(585),
    [anon_sym_input] = ACTIONS(585),
    [anon_sym_directive] = ACTIONS(585),
    [sym_comment] = ACTIONS(5),
  },
  [220] = {
    [sym_Type] = STATE(270),
    [sym_NamedType] = STATE(253),
    [sym_ListType] = STATE(253),
    [sym_NonNullType] = STATE(254),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [221] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(589),
    [sym_comment] = ACTIONS(5),
  },
  [222] = {
    [sym_ArgumentsDefinition] = STATE(272),
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(589),
    [anon_sym_LPAREN] = ACTIONS(360),
    [sym_comment] = ACTIONS(5),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(591),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(591),
    [anon_sym_mutation] = ACTIONS(591),
    [anon_sym_subscription] = ACTIONS(591),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_fragment] = ACTIONS(591),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(591),
    [anon_sym_DQUOTE] = ACTIONS(593),
    [anon_sym_schema] = ACTIONS(591),
    [anon_sym_extend] = ACTIONS(591),
    [anon_sym_scalar] = ACTIONS(591),
    [anon_sym_type] = ACTIONS(591),
    [anon_sym_interface] = ACTIONS(591),
    [anon_sym_union] = ACTIONS(591),
    [anon_sym_enum] = ACTIONS(591),
    [anon_sym_input] = ACTIONS(591),
    [anon_sym_directive] = ACTIONS(591),
    [sym_comment] = ACTIONS(5),
  },
  [224] = {
    [sym_StringValue] = STATE(22),
    [sym_Description] = STATE(166),
    [sym_FieldDefinition] = STATE(224),
    [aux_sym_FieldsDefinition_repeat1] = STATE(224),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(595),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(603),
  },
  [225] = {
    [aux_sym_ImplementsInterfaces_repeat1] = STATE(273),
    [ts_builtin_sym_end] = ACTIONS(606),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(606),
    [anon_sym_mutation] = ACTIONS(606),
    [anon_sym_subscription] = ACTIONS(606),
    [anon_sym_LBRACE] = ACTIONS(606),
    [anon_sym_fragment] = ACTIONS(606),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(606),
    [anon_sym_DQUOTE] = ACTIONS(608),
    [anon_sym_AT] = ACTIONS(606),
    [anon_sym_schema] = ACTIONS(606),
    [anon_sym_extend] = ACTIONS(606),
    [anon_sym_scalar] = ACTIONS(606),
    [anon_sym_type] = ACTIONS(606),
    [anon_sym_interface] = ACTIONS(606),
    [anon_sym_union] = ACTIONS(606),
    [anon_sym_enum] = ACTIONS(606),
    [anon_sym_input] = ACTIONS(606),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_directive] = ACTIONS(606),
    [sym_comment] = ACTIONS(5),
  },
  [226] = {
    [sym_NamedType] = STATE(274),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [227] = {
    [aux_sym_ImplementsInterfaces_repeat1] = STATE(275),
    [ts_builtin_sym_end] = ACTIONS(606),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(606),
    [anon_sym_mutation] = ACTIONS(606),
    [anon_sym_subscription] = ACTIONS(606),
    [anon_sym_LBRACE] = ACTIONS(606),
    [anon_sym_fragment] = ACTIONS(606),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(606),
    [anon_sym_DQUOTE] = ACTIONS(608),
    [anon_sym_AT] = ACTIONS(606),
    [anon_sym_schema] = ACTIONS(606),
    [anon_sym_extend] = ACTIONS(606),
    [anon_sym_scalar] = ACTIONS(606),
    [anon_sym_type] = ACTIONS(606),
    [anon_sym_interface] = ACTIONS(606),
    [anon_sym_union] = ACTIONS(606),
    [anon_sym_enum] = ACTIONS(606),
    [anon_sym_input] = ACTIONS(606),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_directive] = ACTIONS(606),
    [sym_comment] = ACTIONS(5),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(610),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(610),
    [anon_sym_mutation] = ACTIONS(610),
    [anon_sym_subscription] = ACTIONS(610),
    [anon_sym_LBRACE] = ACTIONS(610),
    [anon_sym_fragment] = ACTIONS(610),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(610),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [anon_sym_schema] = ACTIONS(610),
    [anon_sym_extend] = ACTIONS(610),
    [anon_sym_scalar] = ACTIONS(610),
    [anon_sym_type] = ACTIONS(610),
    [anon_sym_interface] = ACTIONS(610),
    [anon_sym_union] = ACTIONS(610),
    [anon_sym_enum] = ACTIONS(610),
    [anon_sym_input] = ACTIONS(610),
    [anon_sym_directive] = ACTIONS(610),
    [sym_comment] = ACTIONS(5),
  },
  [229] = {
    [aux_sym_UnionMemberTypes_repeat1] = STATE(276),
    [ts_builtin_sym_end] = ACTIONS(614),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(614),
    [anon_sym_mutation] = ACTIONS(614),
    [anon_sym_subscription] = ACTIONS(614),
    [anon_sym_LBRACE] = ACTIONS(614),
    [anon_sym_fragment] = ACTIONS(614),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(614),
    [anon_sym_DQUOTE] = ACTIONS(616),
    [anon_sym_schema] = ACTIONS(614),
    [anon_sym_extend] = ACTIONS(614),
    [anon_sym_scalar] = ACTIONS(614),
    [anon_sym_type] = ACTIONS(614),
    [anon_sym_interface] = ACTIONS(614),
    [anon_sym_union] = ACTIONS(614),
    [anon_sym_enum] = ACTIONS(614),
    [anon_sym_input] = ACTIONS(614),
    [anon_sym_PIPE] = ACTIONS(463),
    [anon_sym_directive] = ACTIONS(614),
    [sym_comment] = ACTIONS(5),
  },
  [230] = {
    [sym_NamedType] = STATE(277),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [231] = {
    [aux_sym_UnionMemberTypes_repeat1] = STATE(278),
    [ts_builtin_sym_end] = ACTIONS(614),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(614),
    [anon_sym_mutation] = ACTIONS(614),
    [anon_sym_subscription] = ACTIONS(614),
    [anon_sym_LBRACE] = ACTIONS(614),
    [anon_sym_fragment] = ACTIONS(614),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(614),
    [anon_sym_DQUOTE] = ACTIONS(616),
    [anon_sym_schema] = ACTIONS(614),
    [anon_sym_extend] = ACTIONS(614),
    [anon_sym_scalar] = ACTIONS(614),
    [anon_sym_type] = ACTIONS(614),
    [anon_sym_interface] = ACTIONS(614),
    [anon_sym_union] = ACTIONS(614),
    [anon_sym_enum] = ACTIONS(614),
    [anon_sym_input] = ACTIONS(614),
    [anon_sym_PIPE] = ACTIONS(463),
    [anon_sym_directive] = ACTIONS(614),
    [sym_comment] = ACTIONS(5),
  },
  [232] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(618),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(618),
    [anon_sym_DQUOTE] = ACTIONS(620),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(618),
  },
  [233] = {
    [sym_Directive] = STATE(279),
    [aux_sym_Directives_repeat1] = STATE(279),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(163),
  },
  [234] = {
    [sym_Directives] = STATE(280),
    [sym_Directive] = STATE(233),
    [aux_sym_Directives_repeat1] = STATE(233),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(618),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(618),
    [anon_sym_DQUOTE] = ACTIONS(620),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(618),
  },
  [235] = {
    [ts_builtin_sym_end] = ACTIONS(622),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(622),
    [anon_sym_mutation] = ACTIONS(622),
    [anon_sym_subscription] = ACTIONS(622),
    [anon_sym_LBRACE] = ACTIONS(622),
    [anon_sym_fragment] = ACTIONS(622),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(622),
    [anon_sym_DQUOTE] = ACTIONS(624),
    [anon_sym_schema] = ACTIONS(622),
    [anon_sym_extend] = ACTIONS(622),
    [anon_sym_scalar] = ACTIONS(622),
    [anon_sym_type] = ACTIONS(622),
    [anon_sym_interface] = ACTIONS(622),
    [anon_sym_union] = ACTIONS(622),
    [anon_sym_enum] = ACTIONS(622),
    [anon_sym_input] = ACTIONS(622),
    [anon_sym_directive] = ACTIONS(622),
    [sym_comment] = ACTIONS(5),
  },
  [236] = {
    [sym_EnumValue] = STATE(178),
    [sym_StringValue] = STATE(22),
    [sym_Description] = STATE(179),
    [sym_EnumValueDefinition] = STATE(236),
    [aux_sym_EnumValuesDefinition_repeat1] = STATE(236),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(626),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(628),
    [anon_sym_DQUOTE] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(634),
  },
  [237] = {
    [sym_Type] = STATE(281),
    [sym_NamedType] = STATE(253),
    [sym_ListType] = STATE(253),
    [sym_NonNullType] = STATE(254),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [238] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(637),
    [sym_comment] = ACTIONS(5),
  },
  [239] = {
    [ts_builtin_sym_end] = ACTIONS(639),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(639),
    [anon_sym_mutation] = ACTIONS(639),
    [anon_sym_subscription] = ACTIONS(639),
    [anon_sym_LBRACE] = ACTIONS(639),
    [anon_sym_fragment] = ACTIONS(639),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(639),
    [anon_sym_DQUOTE] = ACTIONS(641),
    [anon_sym_schema] = ACTIONS(639),
    [anon_sym_extend] = ACTIONS(639),
    [anon_sym_scalar] = ACTIONS(639),
    [anon_sym_type] = ACTIONS(639),
    [anon_sym_interface] = ACTIONS(639),
    [anon_sym_union] = ACTIONS(639),
    [anon_sym_enum] = ACTIONS(639),
    [anon_sym_input] = ACTIONS(639),
    [anon_sym_directive] = ACTIONS(639),
    [sym_comment] = ACTIONS(5),
  },
  [240] = {
    [sym_StringValue] = STATE(22),
    [sym_Description] = STATE(183),
    [sym_InputValueDefinition] = STATE(240),
    [aux_sym_ArgumentsDefinition_repeat1] = STATE(240),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(643),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(648),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(651),
  },
  [241] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(654),
    [sym_comment] = ACTIONS(5),
  },
  [242] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(656),
  },
  [243] = {
    [sym_StringValue] = STATE(22),
    [sym_Description] = STATE(242),
    [sym_InputValueDefinition] = STATE(286),
    [aux_sym_ArgumentsDefinition_repeat1] = STATE(286),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(658),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(493),
  },
  [244] = {
    [sym_DirectiveLocation] = STATE(287),
    [sym_ExecutableDirectiveLocation] = STATE(249),
    [sym_TypeSystemDirectiveLocation] = STATE(249),
    [sym_comma] = ACTIONS(5),
    [anon_sym_QUERY] = ACTIONS(497),
    [anon_sym_MUTATION] = ACTIONS(497),
    [anon_sym_SUBSCRIPTION] = ACTIONS(497),
    [anon_sym_FIELD] = ACTIONS(499),
    [anon_sym_FRAGMENT_DEFINITION] = ACTIONS(497),
    [anon_sym_FRAGMENT_SPREAD] = ACTIONS(497),
    [anon_sym_INLINE_FRAGMENT] = ACTIONS(497),
    [anon_sym_VARIABLE_DEFINITION] = ACTIONS(497),
    [anon_sym_SCHEMA] = ACTIONS(501),
    [anon_sym_SCALAR] = ACTIONS(501),
    [anon_sym_OBJECT] = ACTIONS(501),
    [anon_sym_FIELD_DEFINITION] = ACTIONS(501),
    [anon_sym_ARGUMENT_DEFINITION] = ACTIONS(501),
    [anon_sym_INTERFACE] = ACTIONS(501),
    [anon_sym_UNION] = ACTIONS(501),
    [anon_sym_ENUM] = ACTIONS(503),
    [anon_sym_ENUM_VALUE] = ACTIONS(501),
    [anon_sym_INPUT_OBJECT] = ACTIONS(501),
    [anon_sym_INPUT_FIELD_DEFINITION] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
  },
  [245] = {
    [ts_builtin_sym_end] = ACTIONS(660),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(660),
    [anon_sym_mutation] = ACTIONS(660),
    [anon_sym_subscription] = ACTIONS(660),
    [anon_sym_LBRACE] = ACTIONS(660),
    [anon_sym_fragment] = ACTIONS(660),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(660),
    [anon_sym_DQUOTE] = ACTIONS(662),
    [anon_sym_schema] = ACTIONS(660),
    [anon_sym_extend] = ACTIONS(660),
    [anon_sym_scalar] = ACTIONS(660),
    [anon_sym_type] = ACTIONS(660),
    [anon_sym_interface] = ACTIONS(660),
    [anon_sym_union] = ACTIONS(660),
    [anon_sym_enum] = ACTIONS(660),
    [anon_sym_input] = ACTIONS(660),
    [anon_sym_PIPE] = ACTIONS(660),
    [anon_sym_directive] = ACTIONS(660),
    [sym_comment] = ACTIONS(5),
  },
  [246] = {
    [ts_builtin_sym_end] = ACTIONS(664),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(664),
    [anon_sym_mutation] = ACTIONS(664),
    [anon_sym_subscription] = ACTIONS(664),
    [anon_sym_LBRACE] = ACTIONS(664),
    [anon_sym_fragment] = ACTIONS(664),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(664),
    [anon_sym_DQUOTE] = ACTIONS(666),
    [anon_sym_schema] = ACTIONS(664),
    [anon_sym_extend] = ACTIONS(664),
    [anon_sym_scalar] = ACTIONS(664),
    [anon_sym_type] = ACTIONS(664),
    [anon_sym_interface] = ACTIONS(664),
    [anon_sym_union] = ACTIONS(664),
    [anon_sym_enum] = ACTIONS(664),
    [anon_sym_input] = ACTIONS(664),
    [anon_sym_PIPE] = ACTIONS(664),
    [anon_sym_directive] = ACTIONS(664),
    [sym_comment] = ACTIONS(5),
  },
  [247] = {
    [ts_builtin_sym_end] = ACTIONS(668),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(668),
    [anon_sym_mutation] = ACTIONS(668),
    [anon_sym_subscription] = ACTIONS(668),
    [anon_sym_LBRACE] = ACTIONS(668),
    [anon_sym_fragment] = ACTIONS(668),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(668),
    [anon_sym_DQUOTE] = ACTIONS(670),
    [anon_sym_schema] = ACTIONS(668),
    [anon_sym_extend] = ACTIONS(668),
    [anon_sym_scalar] = ACTIONS(668),
    [anon_sym_type] = ACTIONS(668),
    [anon_sym_interface] = ACTIONS(668),
    [anon_sym_union] = ACTIONS(668),
    [anon_sym_enum] = ACTIONS(668),
    [anon_sym_input] = ACTIONS(668),
    [anon_sym_directive] = ACTIONS(668),
    [sym_comment] = ACTIONS(5),
  },
  [248] = {
    [aux_sym_DirectiveLocations_repeat1] = STATE(289),
    [ts_builtin_sym_end] = ACTIONS(672),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(672),
    [anon_sym_mutation] = ACTIONS(672),
    [anon_sym_subscription] = ACTIONS(672),
    [anon_sym_LBRACE] = ACTIONS(672),
    [anon_sym_fragment] = ACTIONS(672),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(672),
    [anon_sym_DQUOTE] = ACTIONS(674),
    [anon_sym_schema] = ACTIONS(672),
    [anon_sym_extend] = ACTIONS(672),
    [anon_sym_scalar] = ACTIONS(672),
    [anon_sym_type] = ACTIONS(672),
    [anon_sym_interface] = ACTIONS(672),
    [anon_sym_union] = ACTIONS(672),
    [anon_sym_enum] = ACTIONS(672),
    [anon_sym_input] = ACTIONS(672),
    [anon_sym_PIPE] = ACTIONS(676),
    [anon_sym_directive] = ACTIONS(672),
    [sym_comment] = ACTIONS(5),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(678),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(678),
    [anon_sym_mutation] = ACTIONS(678),
    [anon_sym_subscription] = ACTIONS(678),
    [anon_sym_LBRACE] = ACTIONS(678),
    [anon_sym_fragment] = ACTIONS(678),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(678),
    [anon_sym_DQUOTE] = ACTIONS(680),
    [anon_sym_schema] = ACTIONS(678),
    [anon_sym_extend] = ACTIONS(678),
    [anon_sym_scalar] = ACTIONS(678),
    [anon_sym_type] = ACTIONS(678),
    [anon_sym_interface] = ACTIONS(678),
    [anon_sym_union] = ACTIONS(678),
    [anon_sym_enum] = ACTIONS(678),
    [anon_sym_input] = ACTIONS(678),
    [anon_sym_PIPE] = ACTIONS(678),
    [anon_sym_directive] = ACTIONS(678),
    [sym_comment] = ACTIONS(5),
  },
  [250] = {
    [sym_DirectiveLocations] = STATE(290),
    [sym_DirectiveLocation] = STATE(248),
    [sym_ExecutableDirectiveLocation] = STATE(249),
    [sym_TypeSystemDirectiveLocation] = STATE(249),
    [sym_comma] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_QUERY] = ACTIONS(497),
    [anon_sym_MUTATION] = ACTIONS(497),
    [anon_sym_SUBSCRIPTION] = ACTIONS(497),
    [anon_sym_FIELD] = ACTIONS(499),
    [anon_sym_FRAGMENT_DEFINITION] = ACTIONS(497),
    [anon_sym_FRAGMENT_SPREAD] = ACTIONS(497),
    [anon_sym_INLINE_FRAGMENT] = ACTIONS(497),
    [anon_sym_VARIABLE_DEFINITION] = ACTIONS(497),
    [anon_sym_SCHEMA] = ACTIONS(501),
    [anon_sym_SCALAR] = ACTIONS(501),
    [anon_sym_OBJECT] = ACTIONS(501),
    [anon_sym_FIELD_DEFINITION] = ACTIONS(501),
    [anon_sym_ARGUMENT_DEFINITION] = ACTIONS(501),
    [anon_sym_INTERFACE] = ACTIONS(501),
    [anon_sym_UNION] = ACTIONS(501),
    [anon_sym_ENUM] = ACTIONS(503),
    [anon_sym_ENUM_VALUE] = ACTIONS(501),
    [anon_sym_INPUT_OBJECT] = ACTIONS(501),
    [anon_sym_INPUT_FIELD_DEFINITION] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
  },
  [251] = {
    [sym_Type] = STATE(291),
    [sym_NamedType] = STATE(253),
    [sym_ListType] = STATE(253),
    [sym_NonNullType] = STATE(254),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [252] = {
    [sym_DefaultValue] = STATE(293),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(682),
    [anon_sym_DOLLAR] = ACTIONS(682),
    [anon_sym_EQ] = ACTIONS(684),
    [sym_comment] = ACTIONS(5),
  },
  [253] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(686),
    [anon_sym_RPAREN] = ACTIONS(686),
    [anon_sym_RBRACK] = ACTIONS(686),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(686),
    [anon_sym_DQUOTE] = ACTIONS(688),
    [anon_sym_DOLLAR] = ACTIONS(686),
    [anon_sym_EQ] = ACTIONS(686),
    [anon_sym_BANG] = ACTIONS(690),
    [anon_sym_AT] = ACTIONS(686),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(686),
  },
  [254] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(686),
    [anon_sym_RPAREN] = ACTIONS(686),
    [anon_sym_RBRACK] = ACTIONS(686),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(686),
    [anon_sym_DQUOTE] = ACTIONS(688),
    [anon_sym_DOLLAR] = ACTIONS(686),
    [anon_sym_EQ] = ACTIONS(686),
    [anon_sym_AT] = ACTIONS(686),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(686),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(692),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(692),
    [anon_sym_mutation] = ACTIONS(692),
    [anon_sym_subscription] = ACTIONS(692),
    [anon_sym_LBRACE] = ACTIONS(692),
    [anon_sym_fragment] = ACTIONS(692),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(692),
    [anon_sym_DQUOTE] = ACTIONS(694),
    [anon_sym_schema] = ACTIONS(692),
    [anon_sym_extend] = ACTIONS(692),
    [anon_sym_scalar] = ACTIONS(692),
    [anon_sym_type] = ACTIONS(692),
    [anon_sym_interface] = ACTIONS(692),
    [anon_sym_union] = ACTIONS(692),
    [anon_sym_enum] = ACTIONS(692),
    [anon_sym_input] = ACTIONS(692),
    [anon_sym_directive] = ACTIONS(692),
    [sym_comment] = ACTIONS(5),
  },
  [256] = {
    [sym_FieldsDefinition] = STATE(295),
    [ts_builtin_sym_end] = ACTIONS(610),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(610),
    [anon_sym_mutation] = ACTIONS(610),
    [anon_sym_subscription] = ACTIONS(610),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_fragment] = ACTIONS(610),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(610),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [anon_sym_schema] = ACTIONS(610),
    [anon_sym_extend] = ACTIONS(610),
    [anon_sym_scalar] = ACTIONS(610),
    [anon_sym_type] = ACTIONS(610),
    [anon_sym_interface] = ACTIONS(610),
    [anon_sym_union] = ACTIONS(610),
    [anon_sym_enum] = ACTIONS(610),
    [anon_sym_input] = ACTIONS(610),
    [anon_sym_directive] = ACTIONS(610),
    [sym_comment] = ACTIONS(5),
  },
  [257] = {
    [ts_builtin_sym_end] = ACTIONS(696),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(696),
    [anon_sym_mutation] = ACTIONS(696),
    [anon_sym_subscription] = ACTIONS(696),
    [anon_sym_LBRACE] = ACTIONS(696),
    [anon_sym_fragment] = ACTIONS(696),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(696),
    [anon_sym_DQUOTE] = ACTIONS(698),
    [anon_sym_schema] = ACTIONS(696),
    [anon_sym_extend] = ACTIONS(696),
    [anon_sym_scalar] = ACTIONS(696),
    [anon_sym_type] = ACTIONS(696),
    [anon_sym_interface] = ACTIONS(696),
    [anon_sym_union] = ACTIONS(696),
    [anon_sym_enum] = ACTIONS(696),
    [anon_sym_input] = ACTIONS(696),
    [anon_sym_directive] = ACTIONS(696),
    [sym_comment] = ACTIONS(5),
  },
  [258] = {
    [ts_builtin_sym_end] = ACTIONS(700),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(700),
    [anon_sym_mutation] = ACTIONS(700),
    [anon_sym_subscription] = ACTIONS(700),
    [anon_sym_LBRACE] = ACTIONS(700),
    [anon_sym_fragment] = ACTIONS(700),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(700),
    [anon_sym_DQUOTE] = ACTIONS(702),
    [anon_sym_schema] = ACTIONS(700),
    [anon_sym_extend] = ACTIONS(700),
    [anon_sym_scalar] = ACTIONS(700),
    [anon_sym_type] = ACTIONS(700),
    [anon_sym_interface] = ACTIONS(700),
    [anon_sym_union] = ACTIONS(700),
    [anon_sym_enum] = ACTIONS(700),
    [anon_sym_input] = ACTIONS(700),
    [anon_sym_directive] = ACTIONS(700),
    [sym_comment] = ACTIONS(5),
  },
  [259] = {
    [ts_builtin_sym_end] = ACTIONS(704),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(704),
    [anon_sym_mutation] = ACTIONS(704),
    [anon_sym_subscription] = ACTIONS(704),
    [anon_sym_LBRACE] = ACTIONS(704),
    [anon_sym_fragment] = ACTIONS(704),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(704),
    [anon_sym_DQUOTE] = ACTIONS(706),
    [anon_sym_schema] = ACTIONS(704),
    [anon_sym_extend] = ACTIONS(704),
    [anon_sym_scalar] = ACTIONS(704),
    [anon_sym_type] = ACTIONS(704),
    [anon_sym_interface] = ACTIONS(704),
    [anon_sym_union] = ACTIONS(704),
    [anon_sym_enum] = ACTIONS(704),
    [anon_sym_input] = ACTIONS(704),
    [anon_sym_directive] = ACTIONS(704),
    [sym_comment] = ACTIONS(5),
  },
  [260] = {
    [ts_builtin_sym_end] = ACTIONS(708),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(708),
    [anon_sym_mutation] = ACTIONS(708),
    [anon_sym_subscription] = ACTIONS(708),
    [anon_sym_LBRACE] = ACTIONS(708),
    [anon_sym_fragment] = ACTIONS(708),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(708),
    [anon_sym_DQUOTE] = ACTIONS(710),
    [anon_sym_schema] = ACTIONS(708),
    [anon_sym_extend] = ACTIONS(708),
    [anon_sym_scalar] = ACTIONS(708),
    [anon_sym_type] = ACTIONS(708),
    [anon_sym_interface] = ACTIONS(708),
    [anon_sym_union] = ACTIONS(708),
    [anon_sym_enum] = ACTIONS(708),
    [anon_sym_input] = ACTIONS(708),
    [anon_sym_directive] = ACTIONS(708),
    [sym_comment] = ACTIONS(5),
  },
  [261] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_on] = ACTIONS(712),
    [sym_comment] = ACTIONS(5),
  },
  [262] = {
    [sym_ObjectField] = STATE(299),
    [aux_sym_ObjectValue_repeat1] = STATE(299),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(714),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(716),
  },
  [263] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(718),
    [anon_sym_RBRACE] = ACTIONS(718),
    [anon_sym_RPAREN] = ACTIONS(718),
    [anon_sym_false] = ACTIONS(720),
    [anon_sym_true] = ACTIONS(720),
    [sym_NullValue] = ACTIONS(720),
    [anon_sym_LBRACK] = ACTIONS(718),
    [anon_sym_RBRACK] = ACTIONS(718),
    [sym_IntValue] = ACTIONS(720),
    [sym_FloatValue] = ACTIONS(718),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(718),
    [anon_sym_DQUOTE] = ACTIONS(720),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [anon_sym_AT] = ACTIONS(718),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(720),
  },
  [264] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(722),
    [anon_sym_RBRACE] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(722),
    [anon_sym_false] = ACTIONS(724),
    [anon_sym_true] = ACTIONS(724),
    [sym_NullValue] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(722),
    [anon_sym_RBRACK] = ACTIONS(722),
    [sym_IntValue] = ACTIONS(724),
    [sym_FloatValue] = ACTIONS(722),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(722),
    [anon_sym_DQUOTE] = ACTIONS(724),
    [anon_sym_DOLLAR] = ACTIONS(722),
    [anon_sym_AT] = ACTIONS(722),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(724),
  },
  [265] = {
    [sym_Value] = STATE(301),
    [sym_BooleanValue] = STATE(264),
    [sym_EnumValue] = STATE(264),
    [sym_ListValue] = STATE(264),
    [sym_ObjectValue] = STATE(264),
    [sym_StringValue] = STATE(264),
    [sym_Variable] = STATE(264),
    [aux_sym_ListValue_repeat1] = STATE(301),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_false] = ACTIONS(532),
    [anon_sym_true] = ACTIONS(532),
    [sym_NullValue] = ACTIONS(534),
    [anon_sym_LBRACK] = ACTIONS(536),
    [anon_sym_RBRACK] = ACTIONS(726),
    [sym_IntValue] = ACTIONS(534),
    [sym_FloatValue] = ACTIONS(538),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(540),
  },
  [266] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(728),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(728),
  },
  [267] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(730),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(730),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(730),
  },
  [268] = {
    [ts_builtin_sym_end] = ACTIONS(732),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(732),
    [anon_sym_mutation] = ACTIONS(732),
    [anon_sym_subscription] = ACTIONS(732),
    [anon_sym_LBRACE] = ACTIONS(732),
    [anon_sym_fragment] = ACTIONS(732),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(732),
    [anon_sym_DQUOTE] = ACTIONS(734),
    [anon_sym_schema] = ACTIONS(732),
    [anon_sym_extend] = ACTIONS(732),
    [anon_sym_scalar] = ACTIONS(732),
    [anon_sym_type] = ACTIONS(732),
    [anon_sym_interface] = ACTIONS(732),
    [anon_sym_union] = ACTIONS(732),
    [anon_sym_enum] = ACTIONS(732),
    [anon_sym_input] = ACTIONS(732),
    [anon_sym_directive] = ACTIONS(732),
    [sym_comment] = ACTIONS(5),
  },
  [269] = {
    [ts_builtin_sym_end] = ACTIONS(736),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(736),
    [anon_sym_mutation] = ACTIONS(736),
    [anon_sym_subscription] = ACTIONS(736),
    [anon_sym_LBRACE] = ACTIONS(736),
    [anon_sym_fragment] = ACTIONS(736),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(736),
    [anon_sym_DQUOTE] = ACTIONS(738),
    [anon_sym_schema] = ACTIONS(736),
    [anon_sym_extend] = ACTIONS(736),
    [anon_sym_scalar] = ACTIONS(736),
    [anon_sym_type] = ACTIONS(736),
    [anon_sym_interface] = ACTIONS(736),
    [anon_sym_union] = ACTIONS(736),
    [anon_sym_enum] = ACTIONS(736),
    [anon_sym_input] = ACTIONS(736),
    [anon_sym_directive] = ACTIONS(736),
    [sym_comment] = ACTIONS(5),
  },
  [270] = {
    [sym_Directive] = STATE(302),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(740),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(740),
    [anon_sym_DQUOTE] = ACTIONS(742),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(740),
  },
  [271] = {
    [sym_Type] = STATE(303),
    [sym_NamedType] = STATE(253),
    [sym_ListType] = STATE(253),
    [sym_NonNullType] = STATE(254),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [272] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(744),
    [sym_comment] = ACTIONS(5),
  },
  [273] = {
    [aux_sym_ImplementsInterfaces_repeat1] = STATE(275),
    [ts_builtin_sym_end] = ACTIONS(746),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(746),
    [anon_sym_mutation] = ACTIONS(746),
    [anon_sym_subscription] = ACTIONS(746),
    [anon_sym_LBRACE] = ACTIONS(746),
    [anon_sym_fragment] = ACTIONS(746),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(746),
    [anon_sym_DQUOTE] = ACTIONS(748),
    [anon_sym_AT] = ACTIONS(746),
    [anon_sym_schema] = ACTIONS(746),
    [anon_sym_extend] = ACTIONS(746),
    [anon_sym_scalar] = ACTIONS(746),
    [anon_sym_type] = ACTIONS(746),
    [anon_sym_interface] = ACTIONS(746),
    [anon_sym_union] = ACTIONS(746),
    [anon_sym_enum] = ACTIONS(746),
    [anon_sym_input] = ACTIONS(746),
    [anon_sym_AMP] = ACTIONS(449),
    [anon_sym_directive] = ACTIONS(746),
    [sym_comment] = ACTIONS(5),
  },
  [274] = {
    [ts_builtin_sym_end] = ACTIONS(750),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(750),
    [anon_sym_mutation] = ACTIONS(750),
    [anon_sym_subscription] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_fragment] = ACTIONS(750),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(752),
    [anon_sym_AT] = ACTIONS(750),
    [anon_sym_schema] = ACTIONS(750),
    [anon_sym_extend] = ACTIONS(750),
    [anon_sym_scalar] = ACTIONS(750),
    [anon_sym_type] = ACTIONS(750),
    [anon_sym_interface] = ACTIONS(750),
    [anon_sym_union] = ACTIONS(750),
    [anon_sym_enum] = ACTIONS(750),
    [anon_sym_input] = ACTIONS(750),
    [anon_sym_AMP] = ACTIONS(750),
    [anon_sym_directive] = ACTIONS(750),
    [sym_comment] = ACTIONS(5),
  },
  [275] = {
    [aux_sym_ImplementsInterfaces_repeat1] = STATE(275),
    [ts_builtin_sym_end] = ACTIONS(750),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(750),
    [anon_sym_mutation] = ACTIONS(750),
    [anon_sym_subscription] = ACTIONS(750),
    [anon_sym_LBRACE] = ACTIONS(750),
    [anon_sym_fragment] = ACTIONS(750),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(750),
    [anon_sym_DQUOTE] = ACTIONS(752),
    [anon_sym_AT] = ACTIONS(750),
    [anon_sym_schema] = ACTIONS(750),
    [anon_sym_extend] = ACTIONS(750),
    [anon_sym_scalar] = ACTIONS(750),
    [anon_sym_type] = ACTIONS(750),
    [anon_sym_interface] = ACTIONS(750),
    [anon_sym_union] = ACTIONS(750),
    [anon_sym_enum] = ACTIONS(750),
    [anon_sym_input] = ACTIONS(750),
    [anon_sym_AMP] = ACTIONS(754),
    [anon_sym_directive] = ACTIONS(750),
    [sym_comment] = ACTIONS(5),
  },
  [276] = {
    [aux_sym_UnionMemberTypes_repeat1] = STATE(278),
    [ts_builtin_sym_end] = ACTIONS(757),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(757),
    [anon_sym_mutation] = ACTIONS(757),
    [anon_sym_subscription] = ACTIONS(757),
    [anon_sym_LBRACE] = ACTIONS(757),
    [anon_sym_fragment] = ACTIONS(757),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(757),
    [anon_sym_DQUOTE] = ACTIONS(759),
    [anon_sym_schema] = ACTIONS(757),
    [anon_sym_extend] = ACTIONS(757),
    [anon_sym_scalar] = ACTIONS(757),
    [anon_sym_type] = ACTIONS(757),
    [anon_sym_interface] = ACTIONS(757),
    [anon_sym_union] = ACTIONS(757),
    [anon_sym_enum] = ACTIONS(757),
    [anon_sym_input] = ACTIONS(757),
    [anon_sym_PIPE] = ACTIONS(463),
    [anon_sym_directive] = ACTIONS(757),
    [sym_comment] = ACTIONS(5),
  },
  [277] = {
    [ts_builtin_sym_end] = ACTIONS(761),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(761),
    [anon_sym_mutation] = ACTIONS(761),
    [anon_sym_subscription] = ACTIONS(761),
    [anon_sym_LBRACE] = ACTIONS(761),
    [anon_sym_fragment] = ACTIONS(761),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(761),
    [anon_sym_DQUOTE] = ACTIONS(763),
    [anon_sym_schema] = ACTIONS(761),
    [anon_sym_extend] = ACTIONS(761),
    [anon_sym_scalar] = ACTIONS(761),
    [anon_sym_type] = ACTIONS(761),
    [anon_sym_interface] = ACTIONS(761),
    [anon_sym_union] = ACTIONS(761),
    [anon_sym_enum] = ACTIONS(761),
    [anon_sym_input] = ACTIONS(761),
    [anon_sym_PIPE] = ACTIONS(761),
    [anon_sym_directive] = ACTIONS(761),
    [sym_comment] = ACTIONS(5),
  },
  [278] = {
    [aux_sym_UnionMemberTypes_repeat1] = STATE(278),
    [ts_builtin_sym_end] = ACTIONS(761),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(761),
    [anon_sym_mutation] = ACTIONS(761),
    [anon_sym_subscription] = ACTIONS(761),
    [anon_sym_LBRACE] = ACTIONS(761),
    [anon_sym_fragment] = ACTIONS(761),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(761),
    [anon_sym_DQUOTE] = ACTIONS(763),
    [anon_sym_schema] = ACTIONS(761),
    [anon_sym_extend] = ACTIONS(761),
    [anon_sym_scalar] = ACTIONS(761),
    [anon_sym_type] = ACTIONS(761),
    [anon_sym_interface] = ACTIONS(761),
    [anon_sym_union] = ACTIONS(761),
    [anon_sym_enum] = ACTIONS(761),
    [anon_sym_input] = ACTIONS(761),
    [anon_sym_PIPE] = ACTIONS(765),
    [anon_sym_directive] = ACTIONS(761),
    [sym_comment] = ACTIONS(5),
  },
  [279] = {
    [sym_Directive] = STATE(279),
    [aux_sym_Directives_repeat1] = STATE(279),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(317),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(315),
  },
  [280] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(768),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(768),
    [anon_sym_DQUOTE] = ACTIONS(770),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(768),
  },
  [281] = {
    [sym_DefaultValue] = STATE(305),
    [sym_Directives] = STATE(306),
    [sym_Directive] = STATE(233),
    [aux_sym_Directives_repeat1] = STATE(233),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(772),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(772),
    [anon_sym_DQUOTE] = ACTIONS(774),
    [anon_sym_EQ] = ACTIONS(684),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(772),
  },
  [282] = {
    [sym_Type] = STATE(307),
    [sym_NamedType] = STATE(253),
    [sym_ListType] = STATE(253),
    [sym_NonNullType] = STATE(254),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [283] = {
    [sym_Type] = STATE(308),
    [sym_NamedType] = STATE(253),
    [sym_ListType] = STATE(253),
    [sym_NonNullType] = STATE(254),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [284] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(776),
    [sym_comment] = ACTIONS(5),
  },
  [285] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(778),
    [anon_sym_on] = ACTIONS(778),
    [sym_comment] = ACTIONS(5),
  },
  [286] = {
    [sym_StringValue] = STATE(22),
    [sym_Description] = STATE(242),
    [sym_InputValueDefinition] = STATE(286),
    [aux_sym_ArgumentsDefinition_repeat1] = STATE(286),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(643),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(648),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(780),
  },
  [287] = {
    [aux_sym_DirectiveLocations_repeat1] = STATE(310),
    [ts_builtin_sym_end] = ACTIONS(783),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(783),
    [anon_sym_mutation] = ACTIONS(783),
    [anon_sym_subscription] = ACTIONS(783),
    [anon_sym_LBRACE] = ACTIONS(783),
    [anon_sym_fragment] = ACTIONS(783),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(783),
    [anon_sym_DQUOTE] = ACTIONS(785),
    [anon_sym_schema] = ACTIONS(783),
    [anon_sym_extend] = ACTIONS(783),
    [anon_sym_scalar] = ACTIONS(783),
    [anon_sym_type] = ACTIONS(783),
    [anon_sym_interface] = ACTIONS(783),
    [anon_sym_union] = ACTIONS(783),
    [anon_sym_enum] = ACTIONS(783),
    [anon_sym_input] = ACTIONS(783),
    [anon_sym_PIPE] = ACTIONS(676),
    [anon_sym_directive] = ACTIONS(783),
    [sym_comment] = ACTIONS(5),
  },
  [288] = {
    [sym_DirectiveLocation] = STATE(311),
    [sym_ExecutableDirectiveLocation] = STATE(249),
    [sym_TypeSystemDirectiveLocation] = STATE(249),
    [sym_comma] = ACTIONS(5),
    [anon_sym_QUERY] = ACTIONS(497),
    [anon_sym_MUTATION] = ACTIONS(497),
    [anon_sym_SUBSCRIPTION] = ACTIONS(497),
    [anon_sym_FIELD] = ACTIONS(499),
    [anon_sym_FRAGMENT_DEFINITION] = ACTIONS(497),
    [anon_sym_FRAGMENT_SPREAD] = ACTIONS(497),
    [anon_sym_INLINE_FRAGMENT] = ACTIONS(497),
    [anon_sym_VARIABLE_DEFINITION] = ACTIONS(497),
    [anon_sym_SCHEMA] = ACTIONS(501),
    [anon_sym_SCALAR] = ACTIONS(501),
    [anon_sym_OBJECT] = ACTIONS(501),
    [anon_sym_FIELD_DEFINITION] = ACTIONS(501),
    [anon_sym_ARGUMENT_DEFINITION] = ACTIONS(501),
    [anon_sym_INTERFACE] = ACTIONS(501),
    [anon_sym_UNION] = ACTIONS(501),
    [anon_sym_ENUM] = ACTIONS(503),
    [anon_sym_ENUM_VALUE] = ACTIONS(501),
    [anon_sym_INPUT_OBJECT] = ACTIONS(501),
    [anon_sym_INPUT_FIELD_DEFINITION] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
  },
  [289] = {
    [aux_sym_DirectiveLocations_repeat1] = STATE(312),
    [ts_builtin_sym_end] = ACTIONS(783),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(783),
    [anon_sym_mutation] = ACTIONS(783),
    [anon_sym_subscription] = ACTIONS(783),
    [anon_sym_LBRACE] = ACTIONS(783),
    [anon_sym_fragment] = ACTIONS(783),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(783),
    [anon_sym_DQUOTE] = ACTIONS(785),
    [anon_sym_schema] = ACTIONS(783),
    [anon_sym_extend] = ACTIONS(783),
    [anon_sym_scalar] = ACTIONS(783),
    [anon_sym_type] = ACTIONS(783),
    [anon_sym_interface] = ACTIONS(783),
    [anon_sym_union] = ACTIONS(783),
    [anon_sym_enum] = ACTIONS(783),
    [anon_sym_input] = ACTIONS(783),
    [anon_sym_PIPE] = ACTIONS(676),
    [anon_sym_directive] = ACTIONS(783),
    [sym_comment] = ACTIONS(5),
  },
  [290] = {
    [ts_builtin_sym_end] = ACTIONS(787),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(787),
    [anon_sym_mutation] = ACTIONS(787),
    [anon_sym_subscription] = ACTIONS(787),
    [anon_sym_LBRACE] = ACTIONS(787),
    [anon_sym_fragment] = ACTIONS(787),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(787),
    [anon_sym_DQUOTE] = ACTIONS(789),
    [anon_sym_schema] = ACTIONS(787),
    [anon_sym_extend] = ACTIONS(787),
    [anon_sym_scalar] = ACTIONS(787),
    [anon_sym_type] = ACTIONS(787),
    [anon_sym_interface] = ACTIONS(787),
    [anon_sym_union] = ACTIONS(787),
    [anon_sym_enum] = ACTIONS(787),
    [anon_sym_input] = ACTIONS(787),
    [anon_sym_directive] = ACTIONS(787),
    [sym_comment] = ACTIONS(5),
  },
  [291] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(791),
    [sym_comment] = ACTIONS(5),
  },
  [292] = {
    [sym_Value] = STATE(314),
    [sym_BooleanValue] = STATE(264),
    [sym_EnumValue] = STATE(264),
    [sym_ListValue] = STATE(264),
    [sym_ObjectValue] = STATE(264),
    [sym_StringValue] = STATE(264),
    [sym_Variable] = STATE(264),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_false] = ACTIONS(532),
    [anon_sym_true] = ACTIONS(532),
    [sym_NullValue] = ACTIONS(534),
    [anon_sym_LBRACK] = ACTIONS(536),
    [sym_IntValue] = ACTIONS(534),
    [sym_FloatValue] = ACTIONS(538),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(540),
  },
  [293] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(793),
    [anon_sym_DOLLAR] = ACTIONS(793),
    [sym_comment] = ACTIONS(5),
  },
  [294] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(795),
    [anon_sym_RPAREN] = ACTIONS(795),
    [anon_sym_RBRACK] = ACTIONS(795),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(795),
    [anon_sym_DQUOTE] = ACTIONS(797),
    [anon_sym_DOLLAR] = ACTIONS(795),
    [anon_sym_EQ] = ACTIONS(795),
    [anon_sym_AT] = ACTIONS(795),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(795),
  },
  [295] = {
    [ts_builtin_sym_end] = ACTIONS(799),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(799),
    [anon_sym_mutation] = ACTIONS(799),
    [anon_sym_subscription] = ACTIONS(799),
    [anon_sym_LBRACE] = ACTIONS(799),
    [anon_sym_fragment] = ACTIONS(799),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(799),
    [anon_sym_DQUOTE] = ACTIONS(801),
    [anon_sym_schema] = ACTIONS(799),
    [anon_sym_extend] = ACTIONS(799),
    [anon_sym_scalar] = ACTIONS(799),
    [anon_sym_type] = ACTIONS(799),
    [anon_sym_interface] = ACTIONS(799),
    [anon_sym_union] = ACTIONS(799),
    [anon_sym_enum] = ACTIONS(799),
    [anon_sym_input] = ACTIONS(799),
    [anon_sym_directive] = ACTIONS(799),
    [sym_comment] = ACTIONS(5),
  },
  [296] = {
    [sym_DirectiveLocations] = STATE(315),
    [sym_DirectiveLocation] = STATE(248),
    [sym_ExecutableDirectiveLocation] = STATE(249),
    [sym_TypeSystemDirectiveLocation] = STATE(249),
    [sym_comma] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_QUERY] = ACTIONS(497),
    [anon_sym_MUTATION] = ACTIONS(497),
    [anon_sym_SUBSCRIPTION] = ACTIONS(497),
    [anon_sym_FIELD] = ACTIONS(499),
    [anon_sym_FRAGMENT_DEFINITION] = ACTIONS(497),
    [anon_sym_FRAGMENT_SPREAD] = ACTIONS(497),
    [anon_sym_INLINE_FRAGMENT] = ACTIONS(497),
    [anon_sym_VARIABLE_DEFINITION] = ACTIONS(497),
    [anon_sym_SCHEMA] = ACTIONS(501),
    [anon_sym_SCALAR] = ACTIONS(501),
    [anon_sym_OBJECT] = ACTIONS(501),
    [anon_sym_FIELD_DEFINITION] = ACTIONS(501),
    [anon_sym_ARGUMENT_DEFINITION] = ACTIONS(501),
    [anon_sym_INTERFACE] = ACTIONS(501),
    [anon_sym_UNION] = ACTIONS(501),
    [anon_sym_ENUM] = ACTIONS(503),
    [anon_sym_ENUM_VALUE] = ACTIONS(501),
    [anon_sym_INPUT_OBJECT] = ACTIONS(501),
    [anon_sym_INPUT_FIELD_DEFINITION] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
  },
  [297] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(803),
    [anon_sym_RBRACE] = ACTIONS(803),
    [anon_sym_RPAREN] = ACTIONS(803),
    [anon_sym_false] = ACTIONS(805),
    [anon_sym_true] = ACTIONS(805),
    [sym_NullValue] = ACTIONS(805),
    [anon_sym_LBRACK] = ACTIONS(803),
    [anon_sym_RBRACK] = ACTIONS(803),
    [sym_IntValue] = ACTIONS(805),
    [sym_FloatValue] = ACTIONS(803),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(803),
    [anon_sym_DQUOTE] = ACTIONS(805),
    [anon_sym_DOLLAR] = ACTIONS(803),
    [anon_sym_AT] = ACTIONS(803),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(805),
  },
  [298] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(807),
    [sym_comment] = ACTIONS(5),
  },
  [299] = {
    [sym_ObjectField] = STATE(318),
    [aux_sym_ObjectValue_repeat1] = STATE(318),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(809),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(716),
  },
  [300] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(811),
    [anon_sym_RBRACE] = ACTIONS(811),
    [anon_sym_RPAREN] = ACTIONS(811),
    [anon_sym_false] = ACTIONS(813),
    [anon_sym_true] = ACTIONS(813),
    [sym_NullValue] = ACTIONS(813),
    [anon_sym_LBRACK] = ACTIONS(811),
    [anon_sym_RBRACK] = ACTIONS(811),
    [sym_IntValue] = ACTIONS(813),
    [sym_FloatValue] = ACTIONS(811),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(811),
    [anon_sym_DQUOTE] = ACTIONS(813),
    [anon_sym_DOLLAR] = ACTIONS(811),
    [anon_sym_AT] = ACTIONS(811),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(813),
  },
  [301] = {
    [sym_Value] = STATE(320),
    [sym_BooleanValue] = STATE(264),
    [sym_EnumValue] = STATE(264),
    [sym_ListValue] = STATE(264),
    [sym_ObjectValue] = STATE(264),
    [sym_StringValue] = STATE(264),
    [sym_Variable] = STATE(264),
    [aux_sym_ListValue_repeat1] = STATE(320),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_false] = ACTIONS(532),
    [anon_sym_true] = ACTIONS(532),
    [sym_NullValue] = ACTIONS(534),
    [anon_sym_LBRACK] = ACTIONS(536),
    [anon_sym_RBRACK] = ACTIONS(815),
    [sym_IntValue] = ACTIONS(534),
    [sym_FloatValue] = ACTIONS(538),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(540),
  },
  [302] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(817),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(817),
    [anon_sym_DQUOTE] = ACTIONS(819),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(817),
  },
  [303] = {
    [sym_Directive] = STATE(321),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(817),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(817),
    [anon_sym_DQUOTE] = ACTIONS(819),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(817),
  },
  [304] = {
    [sym_Type] = STATE(322),
    [sym_NamedType] = STATE(253),
    [sym_ListType] = STATE(253),
    [sym_NonNullType] = STATE(254),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [305] = {
    [sym_Directives] = STATE(323),
    [sym_Directive] = STATE(233),
    [aux_sym_Directives_repeat1] = STATE(233),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(821),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(821),
    [anon_sym_DQUOTE] = ACTIONS(823),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(821),
  },
  [306] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(821),
    [anon_sym_RPAREN] = ACTIONS(821),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(821),
    [anon_sym_DQUOTE] = ACTIONS(823),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(821),
  },
  [307] = {
    [sym_DefaultValue] = STATE(324),
    [sym_Directives] = STATE(323),
    [sym_Directive] = STATE(233),
    [aux_sym_Directives_repeat1] = STATE(233),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(821),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(821),
    [anon_sym_DQUOTE] = ACTIONS(823),
    [anon_sym_EQ] = ACTIONS(684),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(821),
  },
  [308] = {
    [sym_DefaultValue] = STATE(325),
    [sym_Directives] = STATE(306),
    [sym_Directive] = STATE(326),
    [aux_sym_Directives_repeat1] = STATE(326),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(772),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(772),
    [anon_sym_DQUOTE] = ACTIONS(774),
    [anon_sym_EQ] = ACTIONS(684),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(772),
  },
  [309] = {
    [sym_Type] = STATE(327),
    [sym_NamedType] = STATE(253),
    [sym_ListType] = STATE(253),
    [sym_NonNullType] = STATE(254),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(511),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(279),
  },
  [310] = {
    [aux_sym_DirectiveLocations_repeat1] = STATE(312),
    [ts_builtin_sym_end] = ACTIONS(825),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(825),
    [anon_sym_mutation] = ACTIONS(825),
    [anon_sym_subscription] = ACTIONS(825),
    [anon_sym_LBRACE] = ACTIONS(825),
    [anon_sym_fragment] = ACTIONS(825),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(825),
    [anon_sym_DQUOTE] = ACTIONS(827),
    [anon_sym_schema] = ACTIONS(825),
    [anon_sym_extend] = ACTIONS(825),
    [anon_sym_scalar] = ACTIONS(825),
    [anon_sym_type] = ACTIONS(825),
    [anon_sym_interface] = ACTIONS(825),
    [anon_sym_union] = ACTIONS(825),
    [anon_sym_enum] = ACTIONS(825),
    [anon_sym_input] = ACTIONS(825),
    [anon_sym_PIPE] = ACTIONS(676),
    [anon_sym_directive] = ACTIONS(825),
    [sym_comment] = ACTIONS(5),
  },
  [311] = {
    [ts_builtin_sym_end] = ACTIONS(829),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(829),
    [anon_sym_mutation] = ACTIONS(829),
    [anon_sym_subscription] = ACTIONS(829),
    [anon_sym_LBRACE] = ACTIONS(829),
    [anon_sym_fragment] = ACTIONS(829),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(829),
    [anon_sym_DQUOTE] = ACTIONS(831),
    [anon_sym_schema] = ACTIONS(829),
    [anon_sym_extend] = ACTIONS(829),
    [anon_sym_scalar] = ACTIONS(829),
    [anon_sym_type] = ACTIONS(829),
    [anon_sym_interface] = ACTIONS(829),
    [anon_sym_union] = ACTIONS(829),
    [anon_sym_enum] = ACTIONS(829),
    [anon_sym_input] = ACTIONS(829),
    [anon_sym_PIPE] = ACTIONS(829),
    [anon_sym_directive] = ACTIONS(829),
    [sym_comment] = ACTIONS(5),
  },
  [312] = {
    [aux_sym_DirectiveLocations_repeat1] = STATE(312),
    [ts_builtin_sym_end] = ACTIONS(829),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(829),
    [anon_sym_mutation] = ACTIONS(829),
    [anon_sym_subscription] = ACTIONS(829),
    [anon_sym_LBRACE] = ACTIONS(829),
    [anon_sym_fragment] = ACTIONS(829),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(829),
    [anon_sym_DQUOTE] = ACTIONS(831),
    [anon_sym_schema] = ACTIONS(829),
    [anon_sym_extend] = ACTIONS(829),
    [anon_sym_scalar] = ACTIONS(829),
    [anon_sym_type] = ACTIONS(829),
    [anon_sym_interface] = ACTIONS(829),
    [anon_sym_union] = ACTIONS(829),
    [anon_sym_enum] = ACTIONS(829),
    [anon_sym_input] = ACTIONS(829),
    [anon_sym_PIPE] = ACTIONS(833),
    [anon_sym_directive] = ACTIONS(829),
    [sym_comment] = ACTIONS(5),
  },
  [313] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(836),
    [anon_sym_RPAREN] = ACTIONS(836),
    [anon_sym_RBRACK] = ACTIONS(836),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(836),
    [anon_sym_DQUOTE] = ACTIONS(838),
    [anon_sym_DOLLAR] = ACTIONS(836),
    [anon_sym_EQ] = ACTIONS(836),
    [anon_sym_BANG] = ACTIONS(836),
    [anon_sym_AT] = ACTIONS(836),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(836),
  },
  [314] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(840),
    [anon_sym_RPAREN] = ACTIONS(840),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(840),
    [anon_sym_DQUOTE] = ACTIONS(842),
    [anon_sym_DOLLAR] = ACTIONS(840),
    [anon_sym_AT] = ACTIONS(840),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(840),
  },
  [315] = {
    [ts_builtin_sym_end] = ACTIONS(844),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(844),
    [anon_sym_mutation] = ACTIONS(844),
    [anon_sym_subscription] = ACTIONS(844),
    [anon_sym_LBRACE] = ACTIONS(844),
    [anon_sym_fragment] = ACTIONS(844),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(844),
    [anon_sym_DQUOTE] = ACTIONS(846),
    [anon_sym_schema] = ACTIONS(844),
    [anon_sym_extend] = ACTIONS(844),
    [anon_sym_scalar] = ACTIONS(844),
    [anon_sym_type] = ACTIONS(844),
    [anon_sym_interface] = ACTIONS(844),
    [anon_sym_union] = ACTIONS(844),
    [anon_sym_enum] = ACTIONS(844),
    [anon_sym_input] = ACTIONS(844),
    [anon_sym_directive] = ACTIONS(844),
    [sym_comment] = ACTIONS(5),
  },
  [316] = {
    [sym_Value] = STATE(328),
    [sym_BooleanValue] = STATE(264),
    [sym_EnumValue] = STATE(264),
    [sym_ListValue] = STATE(264),
    [sym_ObjectValue] = STATE(264),
    [sym_StringValue] = STATE(264),
    [sym_Variable] = STATE(264),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_false] = ACTIONS(532),
    [anon_sym_true] = ACTIONS(532),
    [sym_NullValue] = ACTIONS(534),
    [anon_sym_LBRACK] = ACTIONS(536),
    [sym_IntValue] = ACTIONS(534),
    [sym_FloatValue] = ACTIONS(538),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(540),
  },
  [317] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(848),
    [anon_sym_RBRACE] = ACTIONS(848),
    [anon_sym_RPAREN] = ACTIONS(848),
    [anon_sym_false] = ACTIONS(850),
    [anon_sym_true] = ACTIONS(850),
    [sym_NullValue] = ACTIONS(850),
    [anon_sym_LBRACK] = ACTIONS(848),
    [anon_sym_RBRACK] = ACTIONS(848),
    [sym_IntValue] = ACTIONS(850),
    [sym_FloatValue] = ACTIONS(848),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(848),
    [anon_sym_DQUOTE] = ACTIONS(850),
    [anon_sym_DOLLAR] = ACTIONS(848),
    [anon_sym_AT] = ACTIONS(848),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(850),
  },
  [318] = {
    [sym_ObjectField] = STATE(318),
    [aux_sym_ObjectValue_repeat1] = STATE(318),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(852),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(854),
  },
  [319] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(857),
    [anon_sym_RBRACE] = ACTIONS(857),
    [anon_sym_RPAREN] = ACTIONS(857),
    [anon_sym_false] = ACTIONS(859),
    [anon_sym_true] = ACTIONS(859),
    [sym_NullValue] = ACTIONS(859),
    [anon_sym_LBRACK] = ACTIONS(857),
    [anon_sym_RBRACK] = ACTIONS(857),
    [sym_IntValue] = ACTIONS(859),
    [sym_FloatValue] = ACTIONS(857),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(857),
    [anon_sym_DQUOTE] = ACTIONS(859),
    [anon_sym_DOLLAR] = ACTIONS(857),
    [anon_sym_AT] = ACTIONS(857),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(859),
  },
  [320] = {
    [sym_Value] = STATE(320),
    [sym_BooleanValue] = STATE(264),
    [sym_EnumValue] = STATE(264),
    [sym_ListValue] = STATE(264),
    [sym_ObjectValue] = STATE(264),
    [sym_StringValue] = STATE(264),
    [sym_Variable] = STATE(264),
    [aux_sym_ListValue_repeat1] = STATE(320),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(861),
    [anon_sym_false] = ACTIONS(864),
    [anon_sym_true] = ACTIONS(864),
    [sym_NullValue] = ACTIONS(867),
    [anon_sym_LBRACK] = ACTIONS(870),
    [anon_sym_RBRACK] = ACTIONS(873),
    [sym_IntValue] = ACTIONS(867),
    [sym_FloatValue] = ACTIONS(875),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(878),
    [anon_sym_DQUOTE] = ACTIONS(881),
    [anon_sym_DOLLAR] = ACTIONS(884),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(887),
  },
  [321] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(890),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(890),
    [anon_sym_DQUOTE] = ACTIONS(892),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(890),
  },
  [322] = {
    [sym_Directive] = STATE(329),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(890),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(890),
    [anon_sym_DQUOTE] = ACTIONS(892),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(890),
  },
  [323] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(894),
    [anon_sym_RPAREN] = ACTIONS(894),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(894),
    [anon_sym_DQUOTE] = ACTIONS(896),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(894),
  },
  [324] = {
    [sym_Directives] = STATE(330),
    [sym_Directive] = STATE(233),
    [aux_sym_Directives_repeat1] = STATE(233),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(894),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(894),
    [anon_sym_DQUOTE] = ACTIONS(896),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(894),
  },
  [325] = {
    [sym_Directives] = STATE(323),
    [sym_Directive] = STATE(326),
    [aux_sym_Directives_repeat1] = STATE(326),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(821),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(821),
    [anon_sym_DQUOTE] = ACTIONS(823),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(821),
  },
  [326] = {
    [sym_Directive] = STATE(331),
    [aux_sym_Directives_repeat1] = STATE(331),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(163),
  },
  [327] = {
    [sym_DefaultValue] = STATE(332),
    [sym_Directives] = STATE(323),
    [sym_Directive] = STATE(326),
    [aux_sym_Directives_repeat1] = STATE(326),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(821),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(821),
    [anon_sym_DQUOTE] = ACTIONS(823),
    [anon_sym_EQ] = ACTIONS(684),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(821),
  },
  [328] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(898),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(898),
  },
  [329] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(900),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(900),
    [anon_sym_DQUOTE] = ACTIONS(902),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(900),
  },
  [330] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(904),
    [anon_sym_RPAREN] = ACTIONS(904),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(904),
    [anon_sym_DQUOTE] = ACTIONS(906),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(904),
  },
  [331] = {
    [sym_Directive] = STATE(331),
    [aux_sym_Directives_repeat1] = STATE(331),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(317),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(315),
  },
  [332] = {
    [sym_Directives] = STATE(330),
    [sym_Directive] = STATE(326),
    [aux_sym_Directives_repeat1] = STATE(326),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(894),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(894),
    [anon_sym_DQUOTE] = ACTIONS(896),
    [anon_sym_AT] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(894),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, SHIFT(10),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_OperationType, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(29),
  [39] = {.count = 1, .reusable = true}, SHIFT(30),
  [41] = {.count = 1, .reusable = true}, SHIFT(34),
  [43] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [45] = {.count = 1, .reusable = false}, SHIFT(36),
  [47] = {.count = 1, .reusable = false}, SHIFT(37),
  [49] = {.count = 1, .reusable = true}, SHIFT(38),
  [51] = {.count = 1, .reusable = true}, SHIFT(39),
  [53] = {.count = 1, .reusable = true}, SHIFT(42),
  [55] = {.count = 1, .reusable = true}, SHIFT(43),
  [57] = {.count = 1, .reusable = true}, SHIFT(44),
  [59] = {.count = 1, .reusable = true}, SHIFT(45),
  [61] = {.count = 1, .reusable = true}, SHIFT(46),
  [63] = {.count = 1, .reusable = true}, SHIFT(47),
  [65] = {.count = 1, .reusable = true}, SHIFT(48),
  [67] = {.count = 1, .reusable = true}, SHIFT(49),
  [69] = {.count = 1, .reusable = true}, SHIFT(50),
  [71] = {.count = 1, .reusable = true}, SHIFT(51),
  [73] = {.count = 1, .reusable = true}, SHIFT(52),
  [75] = {.count = 1, .reusable = true}, SHIFT(53),
  [77] = {.count = 1, .reusable = true}, SHIFT(54),
  [79] = {.count = 1, .reusable = true}, SHIFT(55),
  [81] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_Definition, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_Definition, 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_ExecutableDefinition, 1),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_ExecutableDefinition, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(56),
  [95] = {.count = 1, .reusable = true}, SHIFT(57),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_OperationDefinition, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_OperationDefinition, 1),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_Description, 1),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_TypeSystemDefinition, 1),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_TypeSystemDefinition, 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_TypeSystemExtension, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_TypeSystemExtension, 1),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_TypeExtension, 1),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_TypeExtension, 1),
  [115] = {.count = 1, .reusable = true}, SHIFT(61),
  [117] = {.count = 1, .reusable = true}, SHIFT(62),
  [119] = {.count = 1, .reusable = true}, SHIFT(63),
  [121] = {.count = 1, .reusable = true}, SHIFT(64),
  [123] = {.count = 1, .reusable = true}, SHIFT(65),
  [125] = {.count = 1, .reusable = true}, SHIFT(66),
  [127] = {.count = 1, .reusable = true}, SHIFT(67),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_TypeDefinition, 1),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_TypeDefinition, 1),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_Document, 1),
  [135] = {.count = 1, .reusable = false}, SHIFT(69),
  [137] = {.count = 1, .reusable = false}, SHIFT(34),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_Field, 1),
  [141] = {.count = 1, .reusable = true}, SHIFT(74),
  [143] = {.count = 1, .reusable = true}, SHIFT(75),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_Selection, 1),
  [147] = {.count = 1, .reusable = true}, SHIFT(80),
  [149] = {.count = 1, .reusable = true}, SHIFT(81),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_FragmentName, 1),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_FragmentName, 1),
  [155] = {.count = 1, .reusable = true}, SHIFT(69),
  [157] = {.count = 1, .reusable = true}, SHIFT(84),
  [159] = {.count = 1, .reusable = true}, SHIFT(87),
  [161] = {.count = 1, .reusable = true}, SHIFT(88),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_Directives, 1),
  [165] = {.count = 1, .reusable = true}, SHIFT(90),
  [167] = {.count = 1, .reusable = true}, SHIFT(93),
  [169] = {.count = 1, .reusable = true}, SHIFT(94),
  [171] = {.count = 1, .reusable = true}, SHIFT(95),
  [173] = {.count = 1, .reusable = true}, SHIFT(96),
  [175] = {.count = 1, .reusable = true}, SHIFT(97),
  [177] = {.count = 1, .reusable = true}, SHIFT(98),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_ScalarTypeDefinition, 2),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_ScalarTypeDefinition, 2),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeDefinition, 2),
  [185] = {.count = 1, .reusable = true}, SHIFT(100),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeDefinition, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(101),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_InterfaceTypeDefinition, 2),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_InterfaceTypeDefinition, 2),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_UnionTypeDefinition, 2),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_UnionTypeDefinition, 2),
  [199] = {.count = 1, .reusable = true}, SHIFT(107),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_EnumTypeDefinition, 2),
  [203] = {.count = 1, .reusable = true}, SHIFT(111),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_EnumTypeDefinition, 2),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_InputObjectTypeDefinition, 2),
  [209] = {.count = 1, .reusable = true}, SHIFT(114),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_InputObjectTypeDefinition, 2),
  [213] = {.count = 1, .reusable = true}, SHIFT(117),
  [215] = {.count = 1, .reusable = true}, SHIFT(118),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_OperationDefinition, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_OperationDefinition, 2),
  [221] = {.count = 1, .reusable = true}, SHIFT(124),
  [223] = {.count = 1, .reusable = true}, SHIFT(125),
  [225] = {.count = 1, .reusable = true}, SHIFT(126),
  [227] = {.count = 1, .reusable = true}, SHIFT(127),
  [229] = {.count = 1, .reusable = true}, SHIFT(128),
  [231] = {.count = 1, .reusable = true}, SHIFT(129),
  [233] = {.count = 1, .reusable = true}, SHIFT(130),
  [235] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(2),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(3),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(4),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(5),
  [249] = {.count = 2, .reusable = false}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(6),
  [252] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(7),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(8),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(9),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(10),
  [264] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(11),
  [267] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(12),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(13),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(14),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(15),
  [279] = {.count = 1, .reusable = true}, SHIFT(131),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_InlineFragment, 2),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_FragmentSpread, 2),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_Alias, 2),
  [287] = {.count = 1, .reusable = true}, SHIFT(137),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_Field, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_SelectionSet, 3),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_SelectionSet, 3),
  [295] = {.count = 1, .reusable = true}, REDUCE(aux_sym_SelectionSet_repeat1, 2),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_SelectionSet_repeat1, 2), SHIFT_REPEAT(29),
  [300] = {.count = 2, .reusable = true}, REDUCE(aux_sym_SelectionSet_repeat1, 2), SHIFT_REPEAT(30),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_StringValue, 3),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_StringValue, 3),
  [307] = {.count = 1, .reusable = true}, SHIFT(145),
  [309] = {.count = 1, .reusable = true}, SHIFT(146),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_Directive, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_Directive, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Directives_repeat1, 2),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Directives_repeat1, 2), SHIFT_REPEAT(39),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_SchemaExtension, 3),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym_SchemaExtension, 3),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_Directives, 1),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_ScalarTypeDefinition, 3),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_ScalarTypeDefinition, 3),
  [330] = {.count = 1, .reusable = true}, SHIFT(165),
  [332] = {.count = 1, .reusable = true}, SHIFT(168),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeDefinition, 3),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeDefinition, 3),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_InterfaceTypeDefinition, 3),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_InterfaceTypeDefinition, 3),
  [342] = {.count = 1, .reusable = true}, SHIFT(173),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_UnionTypeDefinition, 3),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym_UnionTypeDefinition, 3),
  [348] = {.count = 1, .reusable = true}, SHIFT(177),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_EnumTypeDefinition, 3),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_EnumTypeDefinition, 3),
  [354] = {.count = 1, .reusable = true}, SHIFT(182),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_InputObjectTypeDefinition, 3),
  [358] = {.count = 1, .reusable = false}, REDUCE(sym_InputObjectTypeDefinition, 3),
  [360] = {.count = 1, .reusable = true}, SHIFT(186),
  [362] = {.count = 1, .reusable = true}, SHIFT(187),
  [364] = {.count = 1, .reusable = true}, SHIFT(189),
  [366] = {.count = 1, .reusable = true}, SHIFT(190),
  [368] = {.count = 1, .reusable = true}, SHIFT(191),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_OperationDefinition, 3),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_OperationDefinition, 3),
  [374] = {.count = 1, .reusable = true}, SHIFT(201),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_NamedType, 1),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym_NamedType, 1),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_TypeCondition, 2),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_FragmentSpread, 3),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_InlineFragment, 3),
  [386] = {.count = 1, .reusable = true}, SHIFT(204),
  [388] = {.count = 1, .reusable = true}, SHIFT(205),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_Field, 3),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_FragmentDefinition, 4),
  [394] = {.count = 1, .reusable = false}, REDUCE(sym_FragmentDefinition, 4),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_SchemaDefinition, 4),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym_SchemaDefinition, 4),
  [400] = {.count = 2, .reusable = true}, REDUCE(aux_sym_SchemaDefinition_repeat1, 2), SHIFT_REPEAT(2),
  [403] = {.count = 1, .reusable = true}, REDUCE(aux_sym_SchemaDefinition_repeat1, 2),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_Directive, 3),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_Directive, 3),
  [409] = {.count = 1, .reusable = true}, SHIFT(211),
  [411] = {.count = 1, .reusable = true}, SHIFT(212),
  [413] = {.count = 1, .reusable = false}, REDUCE(aux_sym_Directives_repeat1, 2),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_ScalarTypeExtension, 4),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym_ScalarTypeExtension, 4),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeExtension, 4),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeExtension, 4),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_InterfaceTypeExtension, 4),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_InterfaceTypeExtension, 4),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_UnionTypeExtension, 4),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_UnionTypeExtension, 4),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_EnumTypeExtension, 4),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_EnumTypeExtension, 4),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_InputObjectTypeExtension, 4),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_InputObjectTypeExtension, 4),
  [439] = {.count = 1, .reusable = true}, SHIFT(220),
  [441] = {.count = 1, .reusable = true}, SHIFT(222),
  [443] = {.count = 1, .reusable = true}, SHIFT(223),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_ImplementsInterfaces, 2),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_ImplementsInterfaces, 2),
  [449] = {.count = 1, .reusable = true}, SHIFT(226),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeDefinition, 4),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeDefinition, 4),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_InterfaceTypeDefinition, 4),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_InterfaceTypeDefinition, 4),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_UnionMemberTypes, 2),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_UnionMemberTypes, 2),
  [463] = {.count = 1, .reusable = true}, SHIFT(230),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_UnionTypeDefinition, 4),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_UnionTypeDefinition, 4),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_EnumValue, 1),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_EnumValue, 1),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_EnumValueDefinition, 1),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym_EnumValueDefinition, 1),
  [477] = {.count = 1, .reusable = true}, SHIFT(235),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_EnumTypeDefinition, 4),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_EnumTypeDefinition, 4),
  [483] = {.count = 1, .reusable = true}, SHIFT(237),
  [485] = {.count = 1, .reusable = true}, SHIFT(238),
  [487] = {.count = 1, .reusable = true}, SHIFT(239),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_InputObjectTypeDefinition, 4),
  [491] = {.count = 1, .reusable = false}, REDUCE(sym_InputObjectTypeDefinition, 4),
  [493] = {.count = 1, .reusable = true}, SHIFT(241),
  [495] = {.count = 1, .reusable = true}, SHIFT(244),
  [497] = {.count = 1, .reusable = true}, SHIFT(245),
  [499] = {.count = 1, .reusable = false}, SHIFT(245),
  [501] = {.count = 1, .reusable = true}, SHIFT(246),
  [503] = {.count = 1, .reusable = false}, SHIFT(246),
  [505] = {.count = 1, .reusable = true}, SHIFT(250),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_Variable, 2),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym_Variable, 2),
  [511] = {.count = 1, .reusable = true}, SHIFT(251),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_VariableDefinitions, 3),
  [515] = {.count = 1, .reusable = true}, REDUCE(aux_sym_VariableDefinitions_repeat1, 2),
  [517] = {.count = 2, .reusable = true}, REDUCE(aux_sym_VariableDefinitions_repeat1, 2), SHIFT_REPEAT(118),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_OperationDefinition, 4),
  [522] = {.count = 1, .reusable = false}, REDUCE(sym_OperationDefinition, 4),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_ScalarTypeDefinition, 4),
  [526] = {.count = 1, .reusable = false}, REDUCE(sym_ScalarTypeDefinition, 4),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_InlineFragment, 4),
  [530] = {.count = 1, .reusable = true}, SHIFT(262),
  [532] = {.count = 1, .reusable = false}, SHIFT(263),
  [534] = {.count = 1, .reusable = false}, SHIFT(264),
  [536] = {.count = 1, .reusable = true}, SHIFT(265),
  [538] = {.count = 1, .reusable = true}, SHIFT(264),
  [540] = {.count = 1, .reusable = false}, SHIFT(177),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_Arguments, 3),
  [544] = {.count = 1, .reusable = false}, REDUCE(sym_Arguments, 3),
  [546] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Arguments_repeat1, 2),
  [548] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Arguments_repeat1, 2), SHIFT_REPEAT(137),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_Field, 4),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_FragmentDefinition, 5),
  [555] = {.count = 1, .reusable = false}, REDUCE(sym_FragmentDefinition, 5),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym_OperationTypeDefinition, 3),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_SchemaDefinition, 5),
  [561] = {.count = 1, .reusable = false}, REDUCE(sym_SchemaDefinition, 5),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_SchemaExtension, 5),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym_SchemaExtension, 5),
  [567] = {.count = 1, .reusable = true}, SHIFT(268),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeExtension, 5),
  [571] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeExtension, 5),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_InterfaceTypeExtension, 5),
  [575] = {.count = 1, .reusable = false}, REDUCE(sym_InterfaceTypeExtension, 5),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_UnionTypeExtension, 5),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym_UnionTypeExtension, 5),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_EnumTypeExtension, 5),
  [583] = {.count = 1, .reusable = false}, REDUCE(sym_EnumTypeExtension, 5),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_InputObjectTypeExtension, 5),
  [587] = {.count = 1, .reusable = false}, REDUCE(sym_InputObjectTypeExtension, 5),
  [589] = {.count = 1, .reusable = true}, SHIFT(271),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_FieldsDefinition, 3),
  [593] = {.count = 1, .reusable = false}, REDUCE(sym_FieldsDefinition, 3),
  [595] = {.count = 1, .reusable = true}, REDUCE(aux_sym_FieldsDefinition_repeat1, 2),
  [597] = {.count = 2, .reusable = true}, REDUCE(aux_sym_FieldsDefinition_repeat1, 2), SHIFT_REPEAT(5),
  [600] = {.count = 2, .reusable = false}, REDUCE(aux_sym_FieldsDefinition_repeat1, 2), SHIFT_REPEAT(6),
  [603] = {.count = 2, .reusable = true}, REDUCE(aux_sym_FieldsDefinition_repeat1, 2), SHIFT_REPEAT(165),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_ImplementsInterfaces, 3),
  [608] = {.count = 1, .reusable = false}, REDUCE(sym_ImplementsInterfaces, 3),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeDefinition, 5),
  [612] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeDefinition, 5),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_UnionMemberTypes, 3),
  [616] = {.count = 1, .reusable = false}, REDUCE(sym_UnionMemberTypes, 3),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_EnumValueDefinition, 2),
  [620] = {.count = 1, .reusable = false}, REDUCE(sym_EnumValueDefinition, 2),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_EnumValuesDefinition, 3),
  [624] = {.count = 1, .reusable = false}, REDUCE(sym_EnumValuesDefinition, 3),
  [626] = {.count = 1, .reusable = true}, REDUCE(aux_sym_EnumValuesDefinition_repeat1, 2),
  [628] = {.count = 2, .reusable = true}, REDUCE(aux_sym_EnumValuesDefinition_repeat1, 2), SHIFT_REPEAT(5),
  [631] = {.count = 2, .reusable = false}, REDUCE(aux_sym_EnumValuesDefinition_repeat1, 2), SHIFT_REPEAT(6),
  [634] = {.count = 2, .reusable = true}, REDUCE(aux_sym_EnumValuesDefinition_repeat1, 2), SHIFT_REPEAT(177),
  [637] = {.count = 1, .reusable = true}, SHIFT(282),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_InputFieldsDefinition, 3),
  [641] = {.count = 1, .reusable = false}, REDUCE(sym_InputFieldsDefinition, 3),
  [643] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ArgumentsDefinition_repeat1, 2),
  [645] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ArgumentsDefinition_repeat1, 2), SHIFT_REPEAT(5),
  [648] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ArgumentsDefinition_repeat1, 2), SHIFT_REPEAT(6),
  [651] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ArgumentsDefinition_repeat1, 2), SHIFT_REPEAT(182),
  [654] = {.count = 1, .reusable = true}, SHIFT(283),
  [656] = {.count = 1, .reusable = true}, SHIFT(284),
  [658] = {.count = 1, .reusable = true}, SHIFT(285),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_ExecutableDirectiveLocation, 1),
  [662] = {.count = 1, .reusable = false}, REDUCE(sym_ExecutableDirectiveLocation, 1),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_TypeSystemDirectiveLocation, 1),
  [666] = {.count = 1, .reusable = false}, REDUCE(sym_TypeSystemDirectiveLocation, 1),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_DirectiveDefinition, 5),
  [670] = {.count = 1, .reusable = false}, REDUCE(sym_DirectiveDefinition, 5),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_DirectiveLocations, 1),
  [674] = {.count = 1, .reusable = false}, REDUCE(sym_DirectiveLocations, 1),
  [676] = {.count = 1, .reusable = true}, SHIFT(288),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_DirectiveLocation, 1),
  [680] = {.count = 1, .reusable = false}, REDUCE(sym_DirectiveLocation, 1),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym_VariableDefinition, 3),
  [684] = {.count = 1, .reusable = true}, SHIFT(292),
  [686] = {.count = 1, .reusable = true}, REDUCE(sym_Type, 1),
  [688] = {.count = 1, .reusable = false}, REDUCE(sym_Type, 1),
  [690] = {.count = 1, .reusable = true}, SHIFT(294),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym_OperationDefinition, 5),
  [694] = {.count = 1, .reusable = false}, REDUCE(sym_OperationDefinition, 5),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym_InterfaceTypeDefinition, 5),
  [698] = {.count = 1, .reusable = false}, REDUCE(sym_InterfaceTypeDefinition, 5),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_UnionTypeDefinition, 5),
  [702] = {.count = 1, .reusable = false}, REDUCE(sym_UnionTypeDefinition, 5),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym_EnumTypeDefinition, 5),
  [706] = {.count = 1, .reusable = false}, REDUCE(sym_EnumTypeDefinition, 5),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_InputObjectTypeDefinition, 5),
  [710] = {.count = 1, .reusable = false}, REDUCE(sym_InputObjectTypeDefinition, 5),
  [712] = {.count = 1, .reusable = true}, SHIFT(296),
  [714] = {.count = 1, .reusable = true}, SHIFT(297),
  [716] = {.count = 1, .reusable = true}, SHIFT(298),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym_BooleanValue, 1),
  [720] = {.count = 1, .reusable = false}, REDUCE(sym_BooleanValue, 1),
  [722] = {.count = 1, .reusable = true}, REDUCE(sym_Value, 1),
  [724] = {.count = 1, .reusable = false}, REDUCE(sym_Value, 1),
  [726] = {.count = 1, .reusable = true}, SHIFT(300),
  [728] = {.count = 1, .reusable = true}, REDUCE(sym_Argument, 3),
  [730] = {.count = 1, .reusable = true}, REDUCE(sym_Field, 5),
  [732] = {.count = 1, .reusable = true}, REDUCE(sym_SchemaExtension, 6),
  [734] = {.count = 1, .reusable = false}, REDUCE(sym_SchemaExtension, 6),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeExtension, 6),
  [738] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeExtension, 6),
  [740] = {.count = 1, .reusable = true}, REDUCE(sym_FieldDefinition, 3),
  [742] = {.count = 1, .reusable = false}, REDUCE(sym_FieldDefinition, 3),
  [744] = {.count = 1, .reusable = true}, SHIFT(304),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym_ImplementsInterfaces, 4),
  [748] = {.count = 1, .reusable = false}, REDUCE(sym_ImplementsInterfaces, 4),
  [750] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ImplementsInterfaces_repeat1, 2),
  [752] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ImplementsInterfaces_repeat1, 2),
  [754] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ImplementsInterfaces_repeat1, 2), SHIFT_REPEAT(226),
  [757] = {.count = 1, .reusable = true}, REDUCE(sym_UnionMemberTypes, 4),
  [759] = {.count = 1, .reusable = false}, REDUCE(sym_UnionMemberTypes, 4),
  [761] = {.count = 1, .reusable = true}, REDUCE(aux_sym_UnionMemberTypes_repeat1, 2),
  [763] = {.count = 1, .reusable = false}, REDUCE(aux_sym_UnionMemberTypes_repeat1, 2),
  [765] = {.count = 2, .reusable = true}, REDUCE(aux_sym_UnionMemberTypes_repeat1, 2), SHIFT_REPEAT(230),
  [768] = {.count = 1, .reusable = true}, REDUCE(sym_EnumValueDefinition, 3),
  [770] = {.count = 1, .reusable = false}, REDUCE(sym_EnumValueDefinition, 3),
  [772] = {.count = 1, .reusable = true}, REDUCE(sym_InputValueDefinition, 3),
  [774] = {.count = 1, .reusable = false}, REDUCE(sym_InputValueDefinition, 3),
  [776] = {.count = 1, .reusable = true}, SHIFT(309),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym_ArgumentsDefinition, 3),
  [780] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ArgumentsDefinition_repeat1, 2), SHIFT_REPEAT(241),
  [783] = {.count = 1, .reusable = true}, REDUCE(sym_DirectiveLocations, 2),
  [785] = {.count = 1, .reusable = false}, REDUCE(sym_DirectiveLocations, 2),
  [787] = {.count = 1, .reusable = true}, REDUCE(sym_DirectiveDefinition, 6),
  [789] = {.count = 1, .reusable = false}, REDUCE(sym_DirectiveDefinition, 6),
  [791] = {.count = 1, .reusable = true}, SHIFT(313),
  [793] = {.count = 1, .reusable = true}, REDUCE(sym_VariableDefinition, 4),
  [795] = {.count = 1, .reusable = true}, REDUCE(sym_NonNullType, 2),
  [797] = {.count = 1, .reusable = false}, REDUCE(sym_NonNullType, 2),
  [799] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeDefinition, 6),
  [801] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeDefinition, 6),
  [803] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectValue, 2),
  [805] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectValue, 2),
  [807] = {.count = 1, .reusable = true}, SHIFT(316),
  [809] = {.count = 1, .reusable = true}, SHIFT(317),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym_ListValue, 2),
  [813] = {.count = 1, .reusable = false}, REDUCE(sym_ListValue, 2),
  [815] = {.count = 1, .reusable = true}, SHIFT(319),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_FieldDefinition, 4),
  [819] = {.count = 1, .reusable = false}, REDUCE(sym_FieldDefinition, 4),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym_InputValueDefinition, 4),
  [823] = {.count = 1, .reusable = false}, REDUCE(sym_InputValueDefinition, 4),
  [825] = {.count = 1, .reusable = true}, REDUCE(sym_DirectiveLocations, 3),
  [827] = {.count = 1, .reusable = false}, REDUCE(sym_DirectiveLocations, 3),
  [829] = {.count = 1, .reusable = true}, REDUCE(aux_sym_DirectiveLocations_repeat1, 2),
  [831] = {.count = 1, .reusable = false}, REDUCE(aux_sym_DirectiveLocations_repeat1, 2),
  [833] = {.count = 2, .reusable = true}, REDUCE(aux_sym_DirectiveLocations_repeat1, 2), SHIFT_REPEAT(288),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_ListType, 3),
  [838] = {.count = 1, .reusable = false}, REDUCE(sym_ListType, 3),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym_DefaultValue, 2),
  [842] = {.count = 1, .reusable = false}, REDUCE(sym_DefaultValue, 2),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym_DirectiveDefinition, 7),
  [846] = {.count = 1, .reusable = false}, REDUCE(sym_DirectiveDefinition, 7),
  [848] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectValue, 3),
  [850] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectValue, 3),
  [852] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ObjectValue_repeat1, 2),
  [854] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ObjectValue_repeat1, 2), SHIFT_REPEAT(298),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_ListValue, 3),
  [859] = {.count = 1, .reusable = false}, REDUCE(sym_ListValue, 3),
  [861] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(262),
  [864] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(263),
  [867] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(264),
  [870] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(265),
  [873] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ListValue_repeat1, 2),
  [875] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(264),
  [878] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(5),
  [881] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(6),
  [884] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(118),
  [887] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(177),
  [890] = {.count = 1, .reusable = true}, REDUCE(sym_FieldDefinition, 5),
  [892] = {.count = 1, .reusable = false}, REDUCE(sym_FieldDefinition, 5),
  [894] = {.count = 1, .reusable = true}, REDUCE(sym_InputValueDefinition, 5),
  [896] = {.count = 1, .reusable = false}, REDUCE(sym_InputValueDefinition, 5),
  [898] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectField, 3),
  [900] = {.count = 1, .reusable = true}, REDUCE(sym_FieldDefinition, 6),
  [902] = {.count = 1, .reusable = false}, REDUCE(sym_FieldDefinition, 6),
  [904] = {.count = 1, .reusable = true}, REDUCE(sym_InputValueDefinition, 6),
  [906] = {.count = 1, .reusable = false}, REDUCE(sym_InputValueDefinition, 6),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_graphql() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_Name,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
