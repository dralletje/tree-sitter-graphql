#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 334
#define SYMBOL_COUNT 144
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
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
  anon_sym_extends = 29,
  anon_sym_extend = 30,
  anon_sym_scalar = 31,
  anon_sym_type = 32,
  anon_sym_interface = 33,
  anon_sym_union = 34,
  anon_sym_enum = 35,
  anon_sym_input = 36,
  anon_sym_implements = 37,
  anon_sym_AMP = 38,
  anon_sym_PIPE = 39,
  anon_sym_directive = 40,
  anon_sym_QUERY = 41,
  anon_sym_MUTATION = 42,
  anon_sym_SUBSCRIPTION = 43,
  anon_sym_FIELD = 44,
  anon_sym_FRAGMENT_DEFINITION = 45,
  anon_sym_FRAGMENT_SPREAD = 46,
  anon_sym_INLINE_FRAGMENT = 47,
  anon_sym_VARIABLE_DEFINITION = 48,
  anon_sym_SCHEMA = 49,
  anon_sym_SCALAR = 50,
  anon_sym_OBJECT = 51,
  anon_sym_FIELD_DEFINITION = 52,
  anon_sym_ARGUMENT_DEFINITION = 53,
  anon_sym_INTERFACE = 54,
  anon_sym_UNION = 55,
  anon_sym_ENUM = 56,
  anon_sym_ENUM_VALUE = 57,
  anon_sym_INPUT_OBJECT = 58,
  anon_sym_INPUT_FIELD_DEFINITION = 59,
  sym_comment = 60,
  sym_Name = 61,
  sym_source_file = 62,
  sym_Document = 63,
  sym_Definition = 64,
  sym_ExecutableDefinition = 65,
  sym_OperationDefinition = 66,
  sym_OperationType = 67,
  sym_SelectionSet = 68,
  sym_Selection = 69,
  sym_Field = 70,
  sym_Alias = 71,
  sym_Arguments = 72,
  sym_Argument = 73,
  sym_FragmentSpread = 74,
  sym_InlineFragment = 75,
  sym_FragmentDefinition = 76,
  sym_FragmentName = 77,
  sym_TypeCondition = 78,
  sym_Value = 79,
  sym_BooleanValue = 80,
  sym_EnumValue = 81,
  sym_ListValue = 82,
  sym_ObjectValue = 83,
  sym_ObjectField = 84,
  sym_StringValue = 85,
  sym_VariableDefinitions = 86,
  sym_VariableDefinition = 87,
  sym_Variable = 88,
  sym_DefaultValue = 89,
  sym_Type = 90,
  sym_NamedType = 91,
  sym_ListType = 92,
  sym_NonNullType = 93,
  sym_Directives = 94,
  sym_Directive = 95,
  sym_TypeSystemDefinition = 96,
  sym_TypeSystemExtension = 97,
  sym_SchemaDefinition = 98,
  sym_SchemaExtension = 99,
  sym_TypeExtension = 100,
  sym_ScalarTypeExtension = 101,
  sym_ObjectTypeExtension = 102,
  sym_InterfaceTypeExtension = 103,
  sym_UnionTypeExtension = 104,
  sym_EnumTypeExtension = 105,
  sym_InputObjectTypeExtension = 106,
  sym_OperationTypeDefinition = 107,
  sym_Description = 108,
  sym_TypeDefinition = 109,
  sym_ScalarTypeDefinition = 110,
  sym_ObjectTypeDefinition = 111,
  sym_ImplementsInterfaces = 112,
  sym_FieldsDefinition = 113,
  sym_FieldDefinition = 114,
  sym_ArgumentsDefinition = 115,
  sym_InputValueDefinition = 116,
  sym_InterfaceTypeDefinition = 117,
  sym_UnionTypeDefinition = 118,
  sym_UnionMemberTypes = 119,
  sym_EnumTypeDefinition = 120,
  sym_EnumValuesDefinition = 121,
  sym_EnumValueDefinition = 122,
  sym_InputObjectTypeDefinition = 123,
  sym_InputFieldsDefinition = 124,
  sym_DirectiveDefinition = 125,
  sym_DirectiveLocations = 126,
  sym_DirectiveLocation = 127,
  sym_ExecutableDirectiveLocation = 128,
  sym_TypeSystemDirectiveLocation = 129,
  aux_sym_Document_repeat1 = 130,
  aux_sym_SelectionSet_repeat1 = 131,
  aux_sym_Arguments_repeat1 = 132,
  aux_sym_ListValue_repeat1 = 133,
  aux_sym_ObjectValue_repeat1 = 134,
  aux_sym_VariableDefinitions_repeat1 = 135,
  aux_sym_Directives_repeat1 = 136,
  aux_sym_SchemaDefinition_repeat1 = 137,
  aux_sym_ImplementsInterfaces_repeat1 = 138,
  aux_sym_FieldsDefinition_repeat1 = 139,
  aux_sym_ArgumentsDefinition_repeat1 = 140,
  aux_sym_UnionMemberTypes_repeat1 = 141,
  aux_sym_EnumValuesDefinition_repeat1 = 142,
  aux_sym_DirectiveLocations_repeat1 = 143,
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
  [anon_sym_extends] = "extends",
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
  [anon_sym_extends] = {
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
        ADVANCE(201);
      if (lookahead == 'i')
        ADVANCE(213);
      if (lookahead == 'm')
        ADVANCE(234);
      if (lookahead == 'n')
        ADVANCE(242);
      if (lookahead == 'o')
        ADVANCE(246);
      if (lookahead == 'q')
        ADVANCE(248);
      if (lookahead == 's')
        ADVANCE(253);
      if (lookahead == 't')
        ADVANCE(274);
      if (lookahead == 'u')
        ADVANCE(281);
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
      if (lookahead == 's')
        ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 201:
      if (lookahead == 'a')
        ADVANCE(202);
      if (lookahead == 'r')
        ADVANCE(206);
      END_STATE();
    case 202:
      if (lookahead == 'l')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 's')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'e')
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 206:
      if (lookahead == 'a')
        ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'g')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == 'm')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'e')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 'n')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 't')
        ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_fragment);
      END_STATE();
    case 213:
      if (lookahead == 'm')
        ADVANCE(214);
      if (lookahead == 'n')
        ADVANCE(223);
      END_STATE();
    case 214:
      if (lookahead == 'p')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'l')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'e')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'm')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'e')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'n')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 't')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 's')
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 223:
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 't')
        ADVANCE(227);
      END_STATE();
    case 224:
      if (lookahead == 'u')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 't')
        ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 227:
      if (lookahead == 'e')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'r')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'f')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'a')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'c')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'e')
        ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 234:
      if (lookahead == 'u')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 't')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'a')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 't')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'i')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'o')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'n')
        ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_mutation);
      END_STATE();
    case 242:
      if (lookahead == 'u')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 'l')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'l')
        ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_NullValue);
      END_STATE();
    case 246:
      if (lookahead == 'n')
        ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 248:
      if (lookahead == 'u')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'e')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'r')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'y')
        ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 253:
      if (lookahead == 'c')
        ADVANCE(254);
      if (lookahead == 'u')
        ADVANCE(263);
      END_STATE();
    case 254:
      if (lookahead == 'a')
        ADVANCE(255);
      if (lookahead == 'h')
        ADVANCE(259);
      END_STATE();
    case 255:
      if (lookahead == 'l')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'a')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'r')
        ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_scalar);
      END_STATE();
    case 259:
      if (lookahead == 'e')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'm')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'a')
        ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_schema);
      END_STATE();
    case 263:
      if (lookahead == 'b')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 's')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'c')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'r')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'i')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'p')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 't')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'i')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'o')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'n')
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_subscription);
      END_STATE();
    case 274:
      if (lookahead == 'r')
        ADVANCE(275);
      if (lookahead == 'y')
        ADVANCE(278);
      END_STATE();
    case 275:
      if (lookahead == 'u')
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == 'e')
        ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 278:
      if (lookahead == 'p')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'e')
        ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 281:
      if (lookahead == 'n')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'i')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'o')
        ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'n')
        ADVANCE(285);
      END_STATE();
    case 285:
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 51},
  [18] = {.lex_state = 51},
  [19] = {.lex_state = 52},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 52},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 34},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 53},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 55},
  [51] = {.lex_state = 55},
  [52] = {.lex_state = 55},
  [53] = {.lex_state = 56},
  [54] = {.lex_state = 55},
  [55] = {.lex_state = 55},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 53},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 52},
  [60] = {.lex_state = 33},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 33},
  [69] = {.lex_state = 52},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 34},
  [72] = {.lex_state = 34},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 34},
  [78] = {.lex_state = 34},
  [79] = {.lex_state = 34},
  [80] = {.lex_state = 34},
  [81] = {.lex_state = 34},
  [82] = {.lex_state = 57},
  [83] = {.lex_state = 34},
  [84] = {.lex_state = 33},
  [85] = {.lex_state = 58},
  [86] = {.lex_state = 34},
  [87] = {.lex_state = 33},
  [88] = {.lex_state = 59},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 33},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 52},
  [93] = {.lex_state = 55},
  [94] = {.lex_state = 33},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 33},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 52},
  [101] = {.lex_state = 33},
  [102] = {.lex_state = 60},
  [103] = {.lex_state = 52},
  [104] = {.lex_state = 55},
  [105] = {.lex_state = 52},
  [106] = {.lex_state = 52},
  [107] = {.lex_state = 52},
  [108] = {.lex_state = 61},
  [109] = {.lex_state = 62},
  [110] = {.lex_state = 52},
  [111] = {.lex_state = 56},
  [112] = {.lex_state = 33},
  [113] = {.lex_state = 52},
  [114] = {.lex_state = 52},
  [115] = {.lex_state = 33},
  [116] = {.lex_state = 52},
  [117] = {.lex_state = 52},
  [118] = {.lex_state = 33},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 34},
  [121] = {.lex_state = 53},
  [122] = {.lex_state = 52},
  [123] = {.lex_state = 33},
  [124] = {.lex_state = 33},
  [125] = {.lex_state = 55},
  [126] = {.lex_state = 55},
  [127] = {.lex_state = 55},
  [128] = {.lex_state = 56},
  [129] = {.lex_state = 55},
  [130] = {.lex_state = 55},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 63},
  [133] = {.lex_state = 33},
  [134] = {.lex_state = 34},
  [135] = {.lex_state = 34},
  [136] = {.lex_state = 34},
  [137] = {.lex_state = 33},
  [138] = {.lex_state = 34},
  [139] = {.lex_state = 53},
  [140] = {.lex_state = 34},
  [141] = {.lex_state = 34},
  [142] = {.lex_state = 34},
  [143] = {.lex_state = 34},
  [144] = {.lex_state = 52},
  [145] = {.lex_state = 33},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 52},
  [148] = {.lex_state = 33},
  [149] = {.lex_state = 64},
  [150] = {.lex_state = 33},
  [151] = {.lex_state = 33},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 55},
  [154] = {.lex_state = 52},
  [155] = {.lex_state = 52},
  [156] = {.lex_state = 55},
  [157] = {.lex_state = 52},
  [158] = {.lex_state = 52},
  [159] = {.lex_state = 52},
  [160] = {.lex_state = 62},
  [161] = {.lex_state = 52},
  [162] = {.lex_state = 52},
  [163] = {.lex_state = 52},
  [164] = {.lex_state = 52},
  [165] = {.lex_state = 52},
  [166] = {.lex_state = 34},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 33},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 60},
  [171] = {.lex_state = 52},
  [172] = {.lex_state = 52},
  [173] = {.lex_state = 52},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 61},
  [176] = {.lex_state = 52},
  [177] = {.lex_state = 56},
  [178] = {.lex_state = 58},
  [179] = {.lex_state = 33},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 33},
  [182] = {.lex_state = 52},
  [183] = {.lex_state = 34},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 33},
  [186] = {.lex_state = 52},
  [187] = {.lex_state = 33},
  [188] = {.lex_state = 61},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 65},
  [191] = {.lex_state = 66},
  [192] = {.lex_state = 33},
  [193] = {.lex_state = 53},
  [194] = {.lex_state = 52},
  [195] = {.lex_state = 33},
  [196] = {.lex_state = 52},
  [197] = {.lex_state = 55},
  [198] = {.lex_state = 52},
  [199] = {.lex_state = 62},
  [200] = {.lex_state = 52},
  [201] = {.lex_state = 52},
  [202] = {.lex_state = 33},
  [203] = {.lex_state = 34},
  [204] = {.lex_state = 34},
  [205] = {.lex_state = 66},
  [206] = {.lex_state = 64},
  [207] = {.lex_state = 53},
  [208] = {.lex_state = 34},
  [209] = {.lex_state = 34},
  [210] = {.lex_state = 52},
  [211] = {.lex_state = 33},
  [212] = {.lex_state = 52},
  [213] = {.lex_state = 52},
  [214] = {.lex_state = 33},
  [215] = {.lex_state = 52},
  [216] = {.lex_state = 52},
  [217] = {.lex_state = 52},
  [218] = {.lex_state = 52},
  [219] = {.lex_state = 52},
  [220] = {.lex_state = 52},
  [221] = {.lex_state = 66},
  [222] = {.lex_state = 34},
  [223] = {.lex_state = 34},
  [224] = {.lex_state = 52},
  [225] = {.lex_state = 33},
  [226] = {.lex_state = 60},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 60},
  [229] = {.lex_state = 52},
  [230] = {.lex_state = 61},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 61},
  [233] = {.lex_state = 33},
  [234] = {.lex_state = 33},
  [235] = {.lex_state = 33},
  [236] = {.lex_state = 52},
  [237] = {.lex_state = 33},
  [238] = {.lex_state = 66},
  [239] = {.lex_state = 34},
  [240] = {.lex_state = 52},
  [241] = {.lex_state = 33},
  [242] = {.lex_state = 34},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 67},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 61},
  [247] = {.lex_state = 61},
  [248] = {.lex_state = 52},
  [249] = {.lex_state = 61},
  [250] = {.lex_state = 61},
  [251] = {.lex_state = 61},
  [252] = {.lex_state = 66},
  [253] = {.lex_state = 53},
  [254] = {.lex_state = 68},
  [255] = {.lex_state = 68},
  [256] = {.lex_state = 52},
  [257] = {.lex_state = 52},
  [258] = {.lex_state = 52},
  [259] = {.lex_state = 52},
  [260] = {.lex_state = 52},
  [261] = {.lex_state = 52},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 33},
  [264] = {.lex_state = 58},
  [265] = {.lex_state = 58},
  [266] = {.lex_state = 66},
  [267] = {.lex_state = 53},
  [268] = {.lex_state = 34},
  [269] = {.lex_state = 52},
  [270] = {.lex_state = 52},
  [271] = {.lex_state = 33},
  [272] = {.lex_state = 66},
  [273] = {.lex_state = 34},
  [274] = {.lex_state = 60},
  [275] = {.lex_state = 60},
  [276] = {.lex_state = 60},
  [277] = {.lex_state = 61},
  [278] = {.lex_state = 61},
  [279] = {.lex_state = 61},
  [280] = {.lex_state = 33},
  [281] = {.lex_state = 33},
  [282] = {.lex_state = 33},
  [283] = {.lex_state = 66},
  [284] = {.lex_state = 66},
  [285] = {.lex_state = 34},
  [286] = {.lex_state = 34},
  [287] = {.lex_state = 67},
  [288] = {.lex_state = 61},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 61},
  [291] = {.lex_state = 52},
  [292] = {.lex_state = 66},
  [293] = {.lex_state = 66},
  [294] = {.lex_state = 53},
  [295] = {.lex_state = 68},
  [296] = {.lex_state = 52},
  [297] = {.lex_state = 61},
  [298] = {.lex_state = 58},
  [299] = {.lex_state = 34},
  [300] = {.lex_state = 33},
  [301] = {.lex_state = 58},
  [302] = {.lex_state = 66},
  [303] = {.lex_state = 33},
  [304] = {.lex_state = 33},
  [305] = {.lex_state = 66},
  [306] = {.lex_state = 33},
  [307] = {.lex_state = 69},
  [308] = {.lex_state = 33},
  [309] = {.lex_state = 67},
  [310] = {.lex_state = 66},
  [311] = {.lex_state = 61},
  [312] = {.lex_state = 61},
  [313] = {.lex_state = 61},
  [314] = {.lex_state = 68},
  [315] = {.lex_state = 70},
  [316] = {.lex_state = 52},
  [317] = {.lex_state = 66},
  [318] = {.lex_state = 58},
  [319] = {.lex_state = 33},
  [320] = {.lex_state = 58},
  [321] = {.lex_state = 66},
  [322] = {.lex_state = 33},
  [323] = {.lex_state = 33},
  [324] = {.lex_state = 69},
  [325] = {.lex_state = 33},
  [326] = {.lex_state = 67},
  [327] = {.lex_state = 67},
  [328] = {.lex_state = 67},
  [329] = {.lex_state = 33},
  [330] = {.lex_state = 33},
  [331] = {.lex_state = 69},
  [332] = {.lex_state = 67},
  [333] = {.lex_state = 67},
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
    [anon_sym_extends] = ACTIONS(3),
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
    [sym_source_file] = STATE(17),
    [sym_Document] = STATE(18),
    [sym_Definition] = STATE(29),
    [sym_ExecutableDefinition] = STATE(19),
    [sym_OperationDefinition] = STATE(20),
    [sym_OperationType] = STATE(21),
    [sym_SelectionSet] = STATE(22),
    [sym_FragmentDefinition] = STATE(20),
    [sym_StringValue] = STATE(23),
    [sym_TypeSystemDefinition] = STATE(19),
    [sym_TypeSystemExtension] = STATE(19),
    [sym_SchemaDefinition] = STATE(24),
    [sym_SchemaExtension] = STATE(25),
    [sym_TypeExtension] = STATE(25),
    [sym_ScalarTypeExtension] = STATE(26),
    [sym_ObjectTypeExtension] = STATE(26),
    [sym_InterfaceTypeExtension] = STATE(26),
    [sym_UnionTypeExtension] = STATE(26),
    [sym_EnumTypeExtension] = STATE(26),
    [sym_InputObjectTypeExtension] = STATE(26),
    [sym_Description] = STATE(27),
    [sym_TypeDefinition] = STATE(24),
    [sym_ScalarTypeDefinition] = STATE(28),
    [sym_ObjectTypeDefinition] = STATE(28),
    [sym_InterfaceTypeDefinition] = STATE(28),
    [sym_UnionTypeDefinition] = STATE(28),
    [sym_EnumTypeDefinition] = STATE(28),
    [sym_InputObjectTypeDefinition] = STATE(28),
    [sym_DirectiveDefinition] = STATE(24),
    [aux_sym_Document_repeat1] = STATE(29),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_fragment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_schema] = ACTIONS(17),
    [anon_sym_extends] = ACTIONS(19),
    [anon_sym_extend] = ACTIONS(21),
    [anon_sym_scalar] = ACTIONS(23),
    [anon_sym_type] = ACTIONS(25),
    [anon_sym_interface] = ACTIONS(27),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_enum] = ACTIONS(31),
    [anon_sym_input] = ACTIONS(33),
    [anon_sym_directive] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
  },
  [2] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(37),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(37),
  },
  [3] = {
    [sym_Selection] = STATE(34),
    [sym_Field] = STATE(32),
    [sym_Alias] = STATE(33),
    [sym_FragmentSpread] = STATE(32),
    [sym_InlineFragment] = STATE(32),
    [aux_sym_SelectionSet_repeat1] = STATE(34),
    [sym_comma] = ACTIONS(5),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(41),
  },
  [4] = {
    [sym_FragmentName] = STATE(36),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(43),
  },
  [5] = {
    [sym_comma] = ACTIONS(45),
    [aux_sym_SLASH_LPAREN_LBRACK_CARET_DQUOTE_RBRACK_PIPE_BSLASHn_PIPE_DQUOTE_DQUOTE_QMARK_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH] = ACTIONS(47),
    [sym_comment] = ACTIONS(45),
  },
  [6] = {
    [sym_comma] = ACTIONS(45),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_BSLASH_BSLASH_BSLASHn_RBRACK_STAR_SLASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(45),
  },
  [7] = {
    [sym_Directives] = STATE(41),
    [sym_Directive] = STATE(42),
    [aux_sym_Directives_repeat1] = STATE(42),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [8] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_schema] = ACTIONS(55),
    [sym_comment] = ACTIONS(5),
  },
  [9] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_scalar] = ACTIONS(57),
    [anon_sym_type] = ACTIONS(59),
    [anon_sym_interface] = ACTIONS(61),
    [anon_sym_union] = ACTIONS(63),
    [anon_sym_enum] = ACTIONS(65),
    [anon_sym_input] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(79),
  },
  [16] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(81),
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
    [sym_comment] = ACTIONS(5),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(87),
    [anon_sym_mutation] = ACTIONS(87),
    [anon_sym_subscription] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_fragment] = ACTIONS(87),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [anon_sym_schema] = ACTIONS(87),
    [anon_sym_extends] = ACTIONS(87),
    [anon_sym_extend] = ACTIONS(89),
    [anon_sym_scalar] = ACTIONS(87),
    [anon_sym_type] = ACTIONS(87),
    [anon_sym_interface] = ACTIONS(87),
    [anon_sym_union] = ACTIONS(87),
    [anon_sym_enum] = ACTIONS(87),
    [anon_sym_input] = ACTIONS(87),
    [anon_sym_directive] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(91),
    [anon_sym_mutation] = ACTIONS(91),
    [anon_sym_subscription] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_fragment] = ACTIONS(91),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_schema] = ACTIONS(91),
    [anon_sym_extends] = ACTIONS(91),
    [anon_sym_extend] = ACTIONS(93),
    [anon_sym_scalar] = ACTIONS(91),
    [anon_sym_type] = ACTIONS(91),
    [anon_sym_interface] = ACTIONS(91),
    [anon_sym_union] = ACTIONS(91),
    [anon_sym_enum] = ACTIONS(91),
    [anon_sym_input] = ACTIONS(91),
    [anon_sym_directive] = ACTIONS(91),
    [sym_comment] = ACTIONS(5),
  },
  [21] = {
    [sym_SelectionSet] = STATE(59),
    [sym_VariableDefinitions] = STATE(60),
    [sym_Directives] = STATE(61),
    [sym_Directive] = STATE(42),
    [aux_sym_Directives_repeat1] = STATE(42),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(97),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(99),
    [anon_sym_mutation] = ACTIONS(99),
    [anon_sym_subscription] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_fragment] = ACTIONS(99),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_schema] = ACTIONS(99),
    [anon_sym_extends] = ACTIONS(99),
    [anon_sym_extend] = ACTIONS(101),
    [anon_sym_scalar] = ACTIONS(99),
    [anon_sym_type] = ACTIONS(99),
    [anon_sym_interface] = ACTIONS(99),
    [anon_sym_union] = ACTIONS(99),
    [anon_sym_enum] = ACTIONS(99),
    [anon_sym_input] = ACTIONS(99),
    [anon_sym_directive] = ACTIONS(99),
    [sym_comment] = ACTIONS(5),
  },
  [23] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_scalar] = ACTIONS(103),
    [anon_sym_type] = ACTIONS(103),
    [anon_sym_interface] = ACTIONS(103),
    [anon_sym_union] = ACTIONS(103),
    [anon_sym_enum] = ACTIONS(103),
    [anon_sym_input] = ACTIONS(103),
    [anon_sym_directive] = ACTIONS(103),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(103),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(105),
    [anon_sym_mutation] = ACTIONS(105),
    [anon_sym_subscription] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_fragment] = ACTIONS(105),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_schema] = ACTIONS(105),
    [anon_sym_extends] = ACTIONS(105),
    [anon_sym_extend] = ACTIONS(107),
    [anon_sym_scalar] = ACTIONS(105),
    [anon_sym_type] = ACTIONS(105),
    [anon_sym_interface] = ACTIONS(105),
    [anon_sym_union] = ACTIONS(105),
    [anon_sym_enum] = ACTIONS(105),
    [anon_sym_input] = ACTIONS(105),
    [anon_sym_directive] = ACTIONS(105),
    [sym_comment] = ACTIONS(5),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(109),
    [anon_sym_mutation] = ACTIONS(109),
    [anon_sym_subscription] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_fragment] = ACTIONS(109),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_schema] = ACTIONS(109),
    [anon_sym_extends] = ACTIONS(109),
    [anon_sym_extend] = ACTIONS(111),
    [anon_sym_scalar] = ACTIONS(109),
    [anon_sym_type] = ACTIONS(109),
    [anon_sym_interface] = ACTIONS(109),
    [anon_sym_union] = ACTIONS(109),
    [anon_sym_enum] = ACTIONS(109),
    [anon_sym_input] = ACTIONS(109),
    [anon_sym_directive] = ACTIONS(109),
    [sym_comment] = ACTIONS(5),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(113),
    [anon_sym_mutation] = ACTIONS(113),
    [anon_sym_subscription] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_fragment] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_schema] = ACTIONS(113),
    [anon_sym_extends] = ACTIONS(113),
    [anon_sym_extend] = ACTIONS(115),
    [anon_sym_scalar] = ACTIONS(113),
    [anon_sym_type] = ACTIONS(113),
    [anon_sym_interface] = ACTIONS(113),
    [anon_sym_union] = ACTIONS(113),
    [anon_sym_enum] = ACTIONS(113),
    [anon_sym_input] = ACTIONS(113),
    [anon_sym_directive] = ACTIONS(113),
    [sym_comment] = ACTIONS(5),
  },
  [27] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_scalar] = ACTIONS(117),
    [anon_sym_type] = ACTIONS(119),
    [anon_sym_interface] = ACTIONS(121),
    [anon_sym_union] = ACTIONS(123),
    [anon_sym_enum] = ACTIONS(125),
    [anon_sym_input] = ACTIONS(127),
    [anon_sym_directive] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(131),
    [anon_sym_mutation] = ACTIONS(131),
    [anon_sym_subscription] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_fragment] = ACTIONS(131),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_schema] = ACTIONS(131),
    [anon_sym_extends] = ACTIONS(131),
    [anon_sym_extend] = ACTIONS(133),
    [anon_sym_scalar] = ACTIONS(131),
    [anon_sym_type] = ACTIONS(131),
    [anon_sym_interface] = ACTIONS(131),
    [anon_sym_union] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_input] = ACTIONS(131),
    [anon_sym_directive] = ACTIONS(131),
    [sym_comment] = ACTIONS(5),
  },
  [29] = {
    [sym_Definition] = STATE(69),
    [sym_ExecutableDefinition] = STATE(19),
    [sym_OperationDefinition] = STATE(20),
    [sym_OperationType] = STATE(21),
    [sym_SelectionSet] = STATE(22),
    [sym_FragmentDefinition] = STATE(20),
    [sym_StringValue] = STATE(23),
    [sym_TypeSystemDefinition] = STATE(19),
    [sym_TypeSystemExtension] = STATE(19),
    [sym_SchemaDefinition] = STATE(24),
    [sym_SchemaExtension] = STATE(25),
    [sym_TypeExtension] = STATE(25),
    [sym_ScalarTypeExtension] = STATE(26),
    [sym_ObjectTypeExtension] = STATE(26),
    [sym_InterfaceTypeExtension] = STATE(26),
    [sym_UnionTypeExtension] = STATE(26),
    [sym_EnumTypeExtension] = STATE(26),
    [sym_InputObjectTypeExtension] = STATE(26),
    [sym_Description] = STATE(27),
    [sym_TypeDefinition] = STATE(24),
    [sym_ScalarTypeDefinition] = STATE(28),
    [sym_ObjectTypeDefinition] = STATE(28),
    [sym_InterfaceTypeDefinition] = STATE(28),
    [sym_UnionTypeDefinition] = STATE(28),
    [sym_EnumTypeDefinition] = STATE(28),
    [sym_InputObjectTypeDefinition] = STATE(28),
    [sym_DirectiveDefinition] = STATE(24),
    [aux_sym_Document_repeat1] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_fragment] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_schema] = ACTIONS(17),
    [anon_sym_extends] = ACTIONS(19),
    [anon_sym_extend] = ACTIONS(21),
    [anon_sym_scalar] = ACTIONS(23),
    [anon_sym_type] = ACTIONS(25),
    [anon_sym_interface] = ACTIONS(27),
    [anon_sym_union] = ACTIONS(29),
    [anon_sym_enum] = ACTIONS(31),
    [anon_sym_input] = ACTIONS(33),
    [anon_sym_directive] = ACTIONS(35),
    [sym_comment] = ACTIONS(5),
  },
  [30] = {
    [sym_SelectionSet] = STATE(71),
    [sym_FragmentName] = STATE(72),
    [sym_TypeCondition] = STATE(73),
    [sym_Directives] = STATE(74),
    [sym_Directive] = STATE(42),
    [aux_sym_Directives_repeat1] = STATE(42),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_on] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(139),
  },
  [31] = {
    [sym_SelectionSet] = STATE(77),
    [sym_Arguments] = STATE(78),
    [sym_Directives] = STATE(79),
    [sym_Directive] = STATE(80),
    [aux_sym_Directives_repeat1] = STATE(80),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(141),
  },
  [32] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(147),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(147),
  },
  [33] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(149),
  },
  [34] = {
    [sym_Selection] = STATE(83),
    [sym_Field] = STATE(32),
    [sym_Alias] = STATE(33),
    [sym_FragmentSpread] = STATE(32),
    [sym_InlineFragment] = STATE(32),
    [aux_sym_SelectionSet_repeat1] = STATE(83),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(41),
  },
  [35] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(153),
    [anon_sym_on] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(153),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(155),
  },
  [36] = {
    [sym_TypeCondition] = STATE(84),
    [sym_comma] = ACTIONS(5),
    [anon_sym_on] = ACTIONS(157),
    [sym_comment] = ACTIONS(5),
  },
  [37] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(159),
    [sym_comment] = ACTIONS(5),
  },
  [38] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_comment] = ACTIONS(5),
  },
  [39] = {
    [sym_OperationType] = STATE(86),
    [sym_OperationTypeDefinition] = STATE(87),
    [aux_sym_SchemaDefinition_repeat1] = STATE(87),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
  },
  [40] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(161),
  },
  [41] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(163),
    [sym_comment] = ACTIONS(5),
  },
  [42] = {
    [sym_Directive] = STATE(90),
    [aux_sym_Directives_repeat1] = STATE(90),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [43] = {
    [sym_Directives] = STATE(92),
    [sym_Directive] = STATE(93),
    [aux_sym_Directives_repeat1] = STATE(93),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
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
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(179),
  },
  [50] = {
    [sym_Directives] = STATE(100),
    [sym_Directive] = STATE(93),
    [aux_sym_Directives_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(181),
    [anon_sym_mutation] = ACTIONS(181),
    [anon_sym_subscription] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_fragment] = ACTIONS(181),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(181),
    [anon_sym_extends] = ACTIONS(181),
    [anon_sym_extend] = ACTIONS(183),
    [anon_sym_scalar] = ACTIONS(181),
    [anon_sym_type] = ACTIONS(181),
    [anon_sym_interface] = ACTIONS(181),
    [anon_sym_union] = ACTIONS(181),
    [anon_sym_enum] = ACTIONS(181),
    [anon_sym_input] = ACTIONS(181),
    [anon_sym_directive] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
  },
  [51] = {
    [sym_Directives] = STATE(103),
    [sym_Directive] = STATE(93),
    [sym_ImplementsInterfaces] = STATE(104),
    [sym_FieldsDefinition] = STATE(105),
    [aux_sym_Directives_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(185),
    [anon_sym_mutation] = ACTIONS(185),
    [anon_sym_subscription] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_fragment] = ACTIONS(185),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(185),
    [anon_sym_extends] = ACTIONS(185),
    [anon_sym_extend] = ACTIONS(189),
    [anon_sym_scalar] = ACTIONS(185),
    [anon_sym_type] = ACTIONS(185),
    [anon_sym_interface] = ACTIONS(185),
    [anon_sym_union] = ACTIONS(185),
    [anon_sym_enum] = ACTIONS(185),
    [anon_sym_input] = ACTIONS(185),
    [anon_sym_implements] = ACTIONS(191),
    [anon_sym_directive] = ACTIONS(185),
    [sym_comment] = ACTIONS(5),
  },
  [52] = {
    [sym_Directives] = STATE(106),
    [sym_Directive] = STATE(93),
    [sym_FieldsDefinition] = STATE(107),
    [aux_sym_Directives_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(193),
    [anon_sym_mutation] = ACTIONS(193),
    [anon_sym_subscription] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_fragment] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(193),
    [anon_sym_extends] = ACTIONS(193),
    [anon_sym_extend] = ACTIONS(195),
    [anon_sym_scalar] = ACTIONS(193),
    [anon_sym_type] = ACTIONS(193),
    [anon_sym_interface] = ACTIONS(193),
    [anon_sym_union] = ACTIONS(193),
    [anon_sym_enum] = ACTIONS(193),
    [anon_sym_input] = ACTIONS(193),
    [anon_sym_directive] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [53] = {
    [sym_Directives] = STATE(109),
    [sym_Directive] = STATE(111),
    [sym_UnionMemberTypes] = STATE(110),
    [aux_sym_Directives_repeat1] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(197),
    [anon_sym_mutation] = ACTIONS(197),
    [anon_sym_subscription] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_fragment] = ACTIONS(197),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(197),
    [anon_sym_extends] = ACTIONS(197),
    [anon_sym_extend] = ACTIONS(199),
    [anon_sym_scalar] = ACTIONS(197),
    [anon_sym_type] = ACTIONS(197),
    [anon_sym_interface] = ACTIONS(197),
    [anon_sym_union] = ACTIONS(197),
    [anon_sym_enum] = ACTIONS(197),
    [anon_sym_input] = ACTIONS(197),
    [anon_sym_directive] = ACTIONS(197),
    [sym_comment] = ACTIONS(5),
  },
  [54] = {
    [sym_Directives] = STATE(113),
    [sym_Directive] = STATE(93),
    [sym_EnumValuesDefinition] = STATE(114),
    [aux_sym_Directives_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(203),
    [anon_sym_mutation] = ACTIONS(203),
    [anon_sym_subscription] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_fragment] = ACTIONS(203),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(203),
    [anon_sym_extends] = ACTIONS(203),
    [anon_sym_extend] = ACTIONS(207),
    [anon_sym_scalar] = ACTIONS(203),
    [anon_sym_type] = ACTIONS(203),
    [anon_sym_interface] = ACTIONS(203),
    [anon_sym_union] = ACTIONS(203),
    [anon_sym_enum] = ACTIONS(203),
    [anon_sym_input] = ACTIONS(203),
    [anon_sym_directive] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [55] = {
    [sym_Directives] = STATE(116),
    [sym_Directive] = STATE(93),
    [sym_InputFieldsDefinition] = STATE(117),
    [aux_sym_Directives_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(209),
    [anon_sym_mutation] = ACTIONS(209),
    [anon_sym_subscription] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_fragment] = ACTIONS(209),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(209),
    [anon_sym_extends] = ACTIONS(209),
    [anon_sym_extend] = ACTIONS(213),
    [anon_sym_scalar] = ACTIONS(209),
    [anon_sym_type] = ACTIONS(209),
    [anon_sym_interface] = ACTIONS(209),
    [anon_sym_union] = ACTIONS(209),
    [anon_sym_enum] = ACTIONS(209),
    [anon_sym_input] = ACTIONS(209),
    [anon_sym_directive] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [56] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(215),
  },
  [57] = {
    [sym_VariableDefinition] = STATE(121),
    [sym_Variable] = STATE(120),
    [aux_sym_VariableDefinitions_repeat1] = STATE(121),
    [sym_comma] = ACTIONS(5),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
  },
  [58] = {
    [sym_SelectionSet] = STATE(122),
    [sym_VariableDefinitions] = STATE(123),
    [sym_Directives] = STATE(124),
    [sym_Directive] = STATE(42),
    [aux_sym_Directives_repeat1] = STATE(42),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(219),
    [anon_sym_mutation] = ACTIONS(219),
    [anon_sym_subscription] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_fragment] = ACTIONS(219),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_schema] = ACTIONS(219),
    [anon_sym_extends] = ACTIONS(219),
    [anon_sym_extend] = ACTIONS(221),
    [anon_sym_scalar] = ACTIONS(219),
    [anon_sym_type] = ACTIONS(219),
    [anon_sym_interface] = ACTIONS(219),
    [anon_sym_union] = ACTIONS(219),
    [anon_sym_enum] = ACTIONS(219),
    [anon_sym_input] = ACTIONS(219),
    [anon_sym_directive] = ACTIONS(219),
    [sym_comment] = ACTIONS(5),
  },
  [60] = {
    [sym_SelectionSet] = STATE(122),
    [sym_Directives] = STATE(124),
    [sym_Directive] = STATE(42),
    [aux_sym_Directives_repeat1] = STATE(42),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [61] = {
    [sym_SelectionSet] = STATE(122),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
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
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(233),
  },
  [68] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(235),
    [sym_comment] = ACTIONS(5),
  },
  [69] = {
    [sym_Definition] = STATE(69),
    [sym_ExecutableDefinition] = STATE(19),
    [sym_OperationDefinition] = STATE(20),
    [sym_OperationType] = STATE(21),
    [sym_SelectionSet] = STATE(22),
    [sym_FragmentDefinition] = STATE(20),
    [sym_StringValue] = STATE(23),
    [sym_TypeSystemDefinition] = STATE(19),
    [sym_TypeSystemExtension] = STATE(19),
    [sym_SchemaDefinition] = STATE(24),
    [sym_SchemaExtension] = STATE(25),
    [sym_TypeExtension] = STATE(25),
    [sym_ScalarTypeExtension] = STATE(26),
    [sym_ObjectTypeExtension] = STATE(26),
    [sym_InterfaceTypeExtension] = STATE(26),
    [sym_UnionTypeExtension] = STATE(26),
    [sym_EnumTypeExtension] = STATE(26),
    [sym_InputObjectTypeExtension] = STATE(26),
    [sym_Description] = STATE(27),
    [sym_TypeDefinition] = STATE(24),
    [sym_ScalarTypeDefinition] = STATE(28),
    [sym_ObjectTypeDefinition] = STATE(28),
    [sym_InterfaceTypeDefinition] = STATE(28),
    [sym_UnionTypeDefinition] = STATE(28),
    [sym_EnumTypeDefinition] = STATE(28),
    [sym_InputObjectTypeDefinition] = STATE(28),
    [sym_DirectiveDefinition] = STATE(24),
    [aux_sym_Document_repeat1] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(239),
    [anon_sym_mutation] = ACTIONS(239),
    [anon_sym_subscription] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_fragment] = ACTIONS(245),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [anon_sym_schema] = ACTIONS(254),
    [anon_sym_extends] = ACTIONS(257),
    [anon_sym_extend] = ACTIONS(260),
    [anon_sym_scalar] = ACTIONS(263),
    [anon_sym_type] = ACTIONS(266),
    [anon_sym_interface] = ACTIONS(269),
    [anon_sym_union] = ACTIONS(272),
    [anon_sym_enum] = ACTIONS(275),
    [anon_sym_input] = ACTIONS(278),
    [anon_sym_directive] = ACTIONS(281),
    [sym_comment] = ACTIONS(5),
  },
  [70] = {
    [sym_NamedType] = STATE(133),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [71] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(286),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(286),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(286),
  },
  [72] = {
    [sym_Directives] = STATE(134),
    [sym_Directive] = STATE(135),
    [aux_sym_Directives_repeat1] = STATE(135),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(288),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(288),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(288),
  },
  [73] = {
    [sym_SelectionSet] = STATE(136),
    [sym_Directives] = STATE(137),
    [sym_Directive] = STATE(42),
    [aux_sym_Directives_repeat1] = STATE(42),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [74] = {
    [sym_SelectionSet] = STATE(136),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
  [75] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(290),
  },
  [76] = {
    [sym_Argument] = STATE(139),
    [aux_sym_Arguments_repeat1] = STATE(139),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(292),
  },
  [77] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(294),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(294),
  },
  [78] = {
    [sym_SelectionSet] = STATE(140),
    [sym_Directives] = STATE(141),
    [sym_Directive] = STATE(80),
    [aux_sym_Directives_repeat1] = STATE(80),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(294),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(294),
  },
  [79] = {
    [sym_SelectionSet] = STATE(140),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(294),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(294),
  },
  [80] = {
    [sym_Directive] = STATE(142),
    [aux_sym_Directives_repeat1] = STATE(142),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(165),
  },
  [81] = {
    [sym_SelectionSet] = STATE(140),
    [sym_Arguments] = STATE(143),
    [sym_Directives] = STATE(141),
    [sym_Directive] = STATE(80),
    [aux_sym_Directives_repeat1] = STATE(80),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(294),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(294),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(298),
    [anon_sym_mutation] = ACTIONS(298),
    [anon_sym_subscription] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(296),
    [anon_sym_fragment] = ACTIONS(298),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(298),
    [anon_sym_schema] = ACTIONS(298),
    [anon_sym_extends] = ACTIONS(298),
    [anon_sym_extend] = ACTIONS(298),
    [anon_sym_scalar] = ACTIONS(298),
    [anon_sym_type] = ACTIONS(298),
    [anon_sym_interface] = ACTIONS(298),
    [anon_sym_union] = ACTIONS(298),
    [anon_sym_enum] = ACTIONS(298),
    [anon_sym_input] = ACTIONS(298),
    [anon_sym_directive] = ACTIONS(298),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(298),
  },
  [83] = {
    [sym_Selection] = STATE(83),
    [sym_Field] = STATE(32),
    [sym_Alias] = STATE(33),
    [sym_FragmentSpread] = STATE(32),
    [sym_InlineFragment] = STATE(32),
    [aux_sym_SelectionSet_repeat1] = STATE(83),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(300),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(302),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(305),
  },
  [84] = {
    [sym_SelectionSet] = STATE(144),
    [sym_Directives] = STATE(145),
    [sym_Directive] = STATE(42),
    [aux_sym_Directives_repeat1] = STATE(42),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [85] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_false] = ACTIONS(310),
    [anon_sym_true] = ACTIONS(310),
    [sym_NullValue] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(308),
    [anon_sym_RBRACK] = ACTIONS(308),
    [sym_IntValue] = ACTIONS(310),
    [sym_FloatValue] = ACTIONS(308),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(310),
    [anon_sym_DOLLAR] = ACTIONS(308),
    [anon_sym_AT] = ACTIONS(308),
    [anon_sym_scalar] = ACTIONS(310),
    [anon_sym_type] = ACTIONS(310),
    [anon_sym_interface] = ACTIONS(310),
    [anon_sym_union] = ACTIONS(310),
    [anon_sym_enum] = ACTIONS(310),
    [anon_sym_input] = ACTIONS(310),
    [anon_sym_directive] = ACTIONS(310),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(310),
  },
  [86] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(312),
    [sym_comment] = ACTIONS(5),
  },
  [87] = {
    [sym_OperationType] = STATE(86),
    [sym_OperationTypeDefinition] = STATE(148),
    [aux_sym_SchemaDefinition_repeat1] = STATE(148),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(314),
    [sym_comment] = ACTIONS(5),
  },
  [88] = {
    [sym_Arguments] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(316),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(318),
    [anon_sym_mutation] = ACTIONS(318),
    [anon_sym_subscription] = ACTIONS(318),
    [anon_sym_LBRACE] = ACTIONS(316),
    [anon_sym_RBRACE] = ACTIONS(316),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(316),
    [anon_sym_fragment] = ACTIONS(318),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(316),
    [anon_sym_DQUOTE] = ACTIONS(318),
    [anon_sym_EQ] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(316),
    [anon_sym_schema] = ACTIONS(318),
    [anon_sym_extends] = ACTIONS(318),
    [anon_sym_extend] = ACTIONS(318),
    [anon_sym_scalar] = ACTIONS(318),
    [anon_sym_type] = ACTIONS(318),
    [anon_sym_interface] = ACTIONS(318),
    [anon_sym_union] = ACTIONS(318),
    [anon_sym_enum] = ACTIONS(318),
    [anon_sym_input] = ACTIONS(318),
    [anon_sym_directive] = ACTIONS(318),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(318),
  },
  [89] = {
    [sym_OperationType] = STATE(86),
    [sym_OperationTypeDefinition] = STATE(150),
    [aux_sym_SchemaDefinition_repeat1] = STATE(150),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
  },
  [90] = {
    [sym_Directive] = STATE(90),
    [aux_sym_Directives_repeat1] = STATE(90),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(320),
    [anon_sym_AT] = ACTIONS(322),
    [sym_comment] = ACTIONS(5),
  },
  [91] = {
    [sym_OperationType] = STATE(86),
    [sym_OperationTypeDefinition] = STATE(151),
    [aux_sym_SchemaDefinition_repeat1] = STATE(151),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(325),
    [anon_sym_mutation] = ACTIONS(325),
    [anon_sym_subscription] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
    [anon_sym_fragment] = ACTIONS(325),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [anon_sym_schema] = ACTIONS(325),
    [anon_sym_extends] = ACTIONS(325),
    [anon_sym_extend] = ACTIONS(327),
    [anon_sym_scalar] = ACTIONS(325),
    [anon_sym_type] = ACTIONS(325),
    [anon_sym_interface] = ACTIONS(325),
    [anon_sym_union] = ACTIONS(325),
    [anon_sym_enum] = ACTIONS(325),
    [anon_sym_input] = ACTIONS(325),
    [anon_sym_directive] = ACTIONS(325),
    [sym_comment] = ACTIONS(5),
  },
  [93] = {
    [sym_Directive] = STATE(153),
    [aux_sym_Directives_repeat1] = STATE(153),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(165),
    [anon_sym_mutation] = ACTIONS(165),
    [anon_sym_subscription] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_fragment] = ACTIONS(165),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(165),
    [anon_sym_extends] = ACTIONS(165),
    [anon_sym_extend] = ACTIONS(329),
    [anon_sym_scalar] = ACTIONS(165),
    [anon_sym_type] = ACTIONS(165),
    [anon_sym_interface] = ACTIONS(165),
    [anon_sym_union] = ACTIONS(165),
    [anon_sym_enum] = ACTIONS(165),
    [anon_sym_input] = ACTIONS(165),
    [anon_sym_directive] = ACTIONS(165),
    [sym_comment] = ACTIONS(5),
  },
  [94] = {
    [sym_Directives] = STATE(154),
    [sym_Directive] = STATE(93),
    [aux_sym_Directives_repeat1] = STATE(93),
    [sym_comma] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [95] = {
    [sym_Directives] = STATE(155),
    [sym_Directive] = STATE(93),
    [sym_ImplementsInterfaces] = STATE(156),
    [sym_FieldsDefinition] = STATE(157),
    [aux_sym_Directives_repeat1] = STATE(93),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_implements] = ACTIONS(191),
    [sym_comment] = ACTIONS(5),
  },
  [96] = {
    [sym_Directives] = STATE(158),
    [sym_Directive] = STATE(93),
    [sym_FieldsDefinition] = STATE(159),
    [aux_sym_Directives_repeat1] = STATE(93),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [97] = {
    [sym_Directives] = STATE(160),
    [sym_Directive] = STATE(111),
    [sym_UnionMemberTypes] = STATE(161),
    [aux_sym_Directives_repeat1] = STATE(111),
    [sym_comma] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [98] = {
    [sym_Directives] = STATE(162),
    [sym_Directive] = STATE(93),
    [sym_EnumValuesDefinition] = STATE(163),
    [aux_sym_Directives_repeat1] = STATE(93),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [99] = {
    [sym_Directives] = STATE(164),
    [sym_Directive] = STATE(93),
    [sym_InputFieldsDefinition] = STATE(165),
    [aux_sym_Directives_repeat1] = STATE(93),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(331),
    [anon_sym_mutation] = ACTIONS(331),
    [anon_sym_subscription] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_fragment] = ACTIONS(331),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_schema] = ACTIONS(331),
    [anon_sym_extends] = ACTIONS(331),
    [anon_sym_extend] = ACTIONS(333),
    [anon_sym_scalar] = ACTIONS(331),
    [anon_sym_type] = ACTIONS(331),
    [anon_sym_interface] = ACTIONS(331),
    [anon_sym_union] = ACTIONS(331),
    [anon_sym_enum] = ACTIONS(331),
    [anon_sym_input] = ACTIONS(331),
    [anon_sym_directive] = ACTIONS(331),
    [sym_comment] = ACTIONS(5),
  },
  [101] = {
    [sym_StringValue] = STATE(23),
    [sym_Description] = STATE(167),
    [sym_FieldDefinition] = STATE(168),
    [aux_sym_FieldsDefinition_repeat1] = STATE(168),
    [sym_comma] = ACTIONS(5),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(335),
  },
  [102] = {
    [sym_NamedType] = STATE(170),
    [sym_comma] = ACTIONS(5),
    [anon_sym_AMP] = ACTIONS(337),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [103] = {
    [sym_FieldsDefinition] = STATE(171),
    [ts_builtin_sym_end] = ACTIONS(339),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(339),
    [anon_sym_mutation] = ACTIONS(339),
    [anon_sym_subscription] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_fragment] = ACTIONS(339),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_schema] = ACTIONS(339),
    [anon_sym_extends] = ACTIONS(339),
    [anon_sym_extend] = ACTIONS(341),
    [anon_sym_scalar] = ACTIONS(339),
    [anon_sym_type] = ACTIONS(339),
    [anon_sym_interface] = ACTIONS(339),
    [anon_sym_union] = ACTIONS(339),
    [anon_sym_enum] = ACTIONS(339),
    [anon_sym_input] = ACTIONS(339),
    [anon_sym_directive] = ACTIONS(339),
    [sym_comment] = ACTIONS(5),
  },
  [104] = {
    [sym_Directives] = STATE(172),
    [sym_Directive] = STATE(93),
    [sym_FieldsDefinition] = STATE(171),
    [aux_sym_Directives_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(339),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(339),
    [anon_sym_mutation] = ACTIONS(339),
    [anon_sym_subscription] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_fragment] = ACTIONS(339),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(339),
    [anon_sym_extends] = ACTIONS(339),
    [anon_sym_extend] = ACTIONS(341),
    [anon_sym_scalar] = ACTIONS(339),
    [anon_sym_type] = ACTIONS(339),
    [anon_sym_interface] = ACTIONS(339),
    [anon_sym_union] = ACTIONS(339),
    [anon_sym_enum] = ACTIONS(339),
    [anon_sym_input] = ACTIONS(339),
    [anon_sym_directive] = ACTIONS(339),
    [sym_comment] = ACTIONS(5),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(339),
    [anon_sym_mutation] = ACTIONS(339),
    [anon_sym_subscription] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(339),
    [anon_sym_fragment] = ACTIONS(339),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_schema] = ACTIONS(339),
    [anon_sym_extends] = ACTIONS(339),
    [anon_sym_extend] = ACTIONS(341),
    [anon_sym_scalar] = ACTIONS(339),
    [anon_sym_type] = ACTIONS(339),
    [anon_sym_interface] = ACTIONS(339),
    [anon_sym_union] = ACTIONS(339),
    [anon_sym_enum] = ACTIONS(339),
    [anon_sym_input] = ACTIONS(339),
    [anon_sym_directive] = ACTIONS(339),
    [sym_comment] = ACTIONS(5),
  },
  [106] = {
    [sym_FieldsDefinition] = STATE(173),
    [ts_builtin_sym_end] = ACTIONS(343),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(343),
    [anon_sym_mutation] = ACTIONS(343),
    [anon_sym_subscription] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_fragment] = ACTIONS(343),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_schema] = ACTIONS(343),
    [anon_sym_extends] = ACTIONS(343),
    [anon_sym_extend] = ACTIONS(345),
    [anon_sym_scalar] = ACTIONS(343),
    [anon_sym_type] = ACTIONS(343),
    [anon_sym_interface] = ACTIONS(343),
    [anon_sym_union] = ACTIONS(343),
    [anon_sym_enum] = ACTIONS(343),
    [anon_sym_input] = ACTIONS(343),
    [anon_sym_directive] = ACTIONS(343),
    [sym_comment] = ACTIONS(5),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(343),
    [anon_sym_mutation] = ACTIONS(343),
    [anon_sym_subscription] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_fragment] = ACTIONS(343),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_schema] = ACTIONS(343),
    [anon_sym_extends] = ACTIONS(343),
    [anon_sym_extend] = ACTIONS(345),
    [anon_sym_scalar] = ACTIONS(343),
    [anon_sym_type] = ACTIONS(343),
    [anon_sym_interface] = ACTIONS(343),
    [anon_sym_union] = ACTIONS(343),
    [anon_sym_enum] = ACTIONS(343),
    [anon_sym_input] = ACTIONS(343),
    [anon_sym_directive] = ACTIONS(343),
    [sym_comment] = ACTIONS(5),
  },
  [108] = {
    [sym_NamedType] = STATE(175),
    [sym_comma] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(347),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [109] = {
    [sym_UnionMemberTypes] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(349),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(349),
    [anon_sym_mutation] = ACTIONS(349),
    [anon_sym_subscription] = ACTIONS(349),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_fragment] = ACTIONS(349),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(351),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_schema] = ACTIONS(349),
    [anon_sym_extends] = ACTIONS(349),
    [anon_sym_extend] = ACTIONS(351),
    [anon_sym_scalar] = ACTIONS(349),
    [anon_sym_type] = ACTIONS(349),
    [anon_sym_interface] = ACTIONS(349),
    [anon_sym_union] = ACTIONS(349),
    [anon_sym_enum] = ACTIONS(349),
    [anon_sym_input] = ACTIONS(349),
    [anon_sym_directive] = ACTIONS(349),
    [sym_comment] = ACTIONS(5),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(349),
    [anon_sym_mutation] = ACTIONS(349),
    [anon_sym_subscription] = ACTIONS(349),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_fragment] = ACTIONS(349),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(351),
    [anon_sym_schema] = ACTIONS(349),
    [anon_sym_extends] = ACTIONS(349),
    [anon_sym_extend] = ACTIONS(351),
    [anon_sym_scalar] = ACTIONS(349),
    [anon_sym_type] = ACTIONS(349),
    [anon_sym_interface] = ACTIONS(349),
    [anon_sym_union] = ACTIONS(349),
    [anon_sym_enum] = ACTIONS(349),
    [anon_sym_input] = ACTIONS(349),
    [anon_sym_directive] = ACTIONS(349),
    [sym_comment] = ACTIONS(5),
  },
  [111] = {
    [sym_Directive] = STATE(177),
    [aux_sym_Directives_repeat1] = STATE(177),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(165),
    [anon_sym_mutation] = ACTIONS(165),
    [anon_sym_subscription] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_fragment] = ACTIONS(165),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(165),
    [anon_sym_extends] = ACTIONS(165),
    [anon_sym_extend] = ACTIONS(329),
    [anon_sym_scalar] = ACTIONS(165),
    [anon_sym_type] = ACTIONS(165),
    [anon_sym_interface] = ACTIONS(165),
    [anon_sym_union] = ACTIONS(165),
    [anon_sym_enum] = ACTIONS(165),
    [anon_sym_input] = ACTIONS(165),
    [anon_sym_directive] = ACTIONS(165),
    [sym_comment] = ACTIONS(5),
  },
  [112] = {
    [sym_EnumValue] = STATE(179),
    [sym_StringValue] = STATE(23),
    [sym_Description] = STATE(180),
    [sym_EnumValueDefinition] = STATE(181),
    [aux_sym_EnumValuesDefinition_repeat1] = STATE(181),
    [sym_comma] = ACTIONS(5),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(353),
  },
  [113] = {
    [sym_EnumValuesDefinition] = STATE(182),
    [ts_builtin_sym_end] = ACTIONS(355),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(355),
    [anon_sym_mutation] = ACTIONS(355),
    [anon_sym_subscription] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_fragment] = ACTIONS(355),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_schema] = ACTIONS(355),
    [anon_sym_extends] = ACTIONS(355),
    [anon_sym_extend] = ACTIONS(357),
    [anon_sym_scalar] = ACTIONS(355),
    [anon_sym_type] = ACTIONS(355),
    [anon_sym_interface] = ACTIONS(355),
    [anon_sym_union] = ACTIONS(355),
    [anon_sym_enum] = ACTIONS(355),
    [anon_sym_input] = ACTIONS(355),
    [anon_sym_directive] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(355),
    [anon_sym_mutation] = ACTIONS(355),
    [anon_sym_subscription] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(355),
    [anon_sym_fragment] = ACTIONS(355),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_schema] = ACTIONS(355),
    [anon_sym_extends] = ACTIONS(355),
    [anon_sym_extend] = ACTIONS(357),
    [anon_sym_scalar] = ACTIONS(355),
    [anon_sym_type] = ACTIONS(355),
    [anon_sym_interface] = ACTIONS(355),
    [anon_sym_union] = ACTIONS(355),
    [anon_sym_enum] = ACTIONS(355),
    [anon_sym_input] = ACTIONS(355),
    [anon_sym_directive] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
  },
  [115] = {
    [sym_StringValue] = STATE(23),
    [sym_Description] = STATE(184),
    [sym_InputValueDefinition] = STATE(185),
    [aux_sym_ArgumentsDefinition_repeat1] = STATE(185),
    [sym_comma] = ACTIONS(5),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(359),
  },
  [116] = {
    [sym_InputFieldsDefinition] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(361),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(361),
    [anon_sym_mutation] = ACTIONS(361),
    [anon_sym_subscription] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_fragment] = ACTIONS(361),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [anon_sym_schema] = ACTIONS(361),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_extend] = ACTIONS(363),
    [anon_sym_scalar] = ACTIONS(361),
    [anon_sym_type] = ACTIONS(361),
    [anon_sym_interface] = ACTIONS(361),
    [anon_sym_union] = ACTIONS(361),
    [anon_sym_enum] = ACTIONS(361),
    [anon_sym_input] = ACTIONS(361),
    [anon_sym_directive] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(361),
    [anon_sym_mutation] = ACTIONS(361),
    [anon_sym_subscription] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_fragment] = ACTIONS(361),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [anon_sym_schema] = ACTIONS(361),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_extend] = ACTIONS(363),
    [anon_sym_scalar] = ACTIONS(361),
    [anon_sym_type] = ACTIONS(361),
    [anon_sym_interface] = ACTIONS(361),
    [anon_sym_union] = ACTIONS(361),
    [anon_sym_enum] = ACTIONS(361),
    [anon_sym_input] = ACTIONS(361),
    [anon_sym_directive] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
  },
  [118] = {
    [sym_ArgumentsDefinition] = STATE(189),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_on] = ACTIONS(367),
    [sym_comment] = ACTIONS(5),
  },
  [119] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(369),
  },
  [120] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(371),
    [sym_comment] = ACTIONS(5),
  },
  [121] = {
    [sym_VariableDefinition] = STATE(193),
    [sym_Variable] = STATE(120),
    [aux_sym_VariableDefinitions_repeat1] = STATE(193),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(375),
    [anon_sym_mutation] = ACTIONS(375),
    [anon_sym_subscription] = ACTIONS(375),
    [anon_sym_LBRACE] = ACTIONS(375),
    [anon_sym_fragment] = ACTIONS(375),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(375),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_schema] = ACTIONS(375),
    [anon_sym_extends] = ACTIONS(375),
    [anon_sym_extend] = ACTIONS(377),
    [anon_sym_scalar] = ACTIONS(375),
    [anon_sym_type] = ACTIONS(375),
    [anon_sym_interface] = ACTIONS(375),
    [anon_sym_union] = ACTIONS(375),
    [anon_sym_enum] = ACTIONS(375),
    [anon_sym_input] = ACTIONS(375),
    [anon_sym_directive] = ACTIONS(375),
    [sym_comment] = ACTIONS(5),
  },
  [123] = {
    [sym_SelectionSet] = STATE(194),
    [sym_Directives] = STATE(195),
    [sym_Directive] = STATE(42),
    [aux_sym_Directives_repeat1] = STATE(42),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [124] = {
    [sym_SelectionSet] = STATE(194),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
  [125] = {
    [sym_Directives] = STATE(196),
    [sym_Directive] = STATE(93),
    [aux_sym_Directives_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(331),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(331),
    [anon_sym_mutation] = ACTIONS(331),
    [anon_sym_subscription] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_fragment] = ACTIONS(331),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(331),
    [anon_sym_extends] = ACTIONS(331),
    [anon_sym_extend] = ACTIONS(333),
    [anon_sym_scalar] = ACTIONS(331),
    [anon_sym_type] = ACTIONS(331),
    [anon_sym_interface] = ACTIONS(331),
    [anon_sym_union] = ACTIONS(331),
    [anon_sym_enum] = ACTIONS(331),
    [anon_sym_input] = ACTIONS(331),
    [anon_sym_directive] = ACTIONS(331),
    [sym_comment] = ACTIONS(5),
  },
  [126] = {
    [sym_Directives] = STATE(172),
    [sym_Directive] = STATE(93),
    [sym_ImplementsInterfaces] = STATE(197),
    [sym_FieldsDefinition] = STATE(171),
    [aux_sym_Directives_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(339),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(339),
    [anon_sym_mutation] = ACTIONS(339),
    [anon_sym_subscription] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_fragment] = ACTIONS(339),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(339),
    [anon_sym_extends] = ACTIONS(339),
    [anon_sym_extend] = ACTIONS(341),
    [anon_sym_scalar] = ACTIONS(339),
    [anon_sym_type] = ACTIONS(339),
    [anon_sym_interface] = ACTIONS(339),
    [anon_sym_union] = ACTIONS(339),
    [anon_sym_enum] = ACTIONS(339),
    [anon_sym_input] = ACTIONS(339),
    [anon_sym_implements] = ACTIONS(191),
    [anon_sym_directive] = ACTIONS(339),
    [sym_comment] = ACTIONS(5),
  },
  [127] = {
    [sym_Directives] = STATE(198),
    [sym_Directive] = STATE(93),
    [sym_FieldsDefinition] = STATE(173),
    [aux_sym_Directives_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(343),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(343),
    [anon_sym_mutation] = ACTIONS(343),
    [anon_sym_subscription] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_fragment] = ACTIONS(343),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(343),
    [anon_sym_extends] = ACTIONS(343),
    [anon_sym_extend] = ACTIONS(345),
    [anon_sym_scalar] = ACTIONS(343),
    [anon_sym_type] = ACTIONS(343),
    [anon_sym_interface] = ACTIONS(343),
    [anon_sym_union] = ACTIONS(343),
    [anon_sym_enum] = ACTIONS(343),
    [anon_sym_input] = ACTIONS(343),
    [anon_sym_directive] = ACTIONS(343),
    [sym_comment] = ACTIONS(5),
  },
  [128] = {
    [sym_Directives] = STATE(199),
    [sym_Directive] = STATE(111),
    [sym_UnionMemberTypes] = STATE(176),
    [aux_sym_Directives_repeat1] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(349),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(349),
    [anon_sym_mutation] = ACTIONS(349),
    [anon_sym_subscription] = ACTIONS(349),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_fragment] = ACTIONS(349),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(351),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(349),
    [anon_sym_extends] = ACTIONS(349),
    [anon_sym_extend] = ACTIONS(351),
    [anon_sym_scalar] = ACTIONS(349),
    [anon_sym_type] = ACTIONS(349),
    [anon_sym_interface] = ACTIONS(349),
    [anon_sym_union] = ACTIONS(349),
    [anon_sym_enum] = ACTIONS(349),
    [anon_sym_input] = ACTIONS(349),
    [anon_sym_directive] = ACTIONS(349),
    [sym_comment] = ACTIONS(5),
  },
  [129] = {
    [sym_Directives] = STATE(200),
    [sym_Directive] = STATE(93),
    [sym_EnumValuesDefinition] = STATE(182),
    [aux_sym_Directives_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(355),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(355),
    [anon_sym_mutation] = ACTIONS(355),
    [anon_sym_subscription] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_fragment] = ACTIONS(355),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(355),
    [anon_sym_extends] = ACTIONS(355),
    [anon_sym_extend] = ACTIONS(357),
    [anon_sym_scalar] = ACTIONS(355),
    [anon_sym_type] = ACTIONS(355),
    [anon_sym_interface] = ACTIONS(355),
    [anon_sym_union] = ACTIONS(355),
    [anon_sym_enum] = ACTIONS(355),
    [anon_sym_input] = ACTIONS(355),
    [anon_sym_directive] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
  },
  [130] = {
    [sym_Directives] = STATE(201),
    [sym_Directive] = STATE(93),
    [sym_InputFieldsDefinition] = STATE(186),
    [aux_sym_Directives_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(361),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(361),
    [anon_sym_mutation] = ACTIONS(361),
    [anon_sym_subscription] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_fragment] = ACTIONS(361),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(361),
    [anon_sym_extends] = ACTIONS(361),
    [anon_sym_extend] = ACTIONS(363),
    [anon_sym_scalar] = ACTIONS(361),
    [anon_sym_type] = ACTIONS(361),
    [anon_sym_interface] = ACTIONS(361),
    [anon_sym_union] = ACTIONS(361),
    [anon_sym_enum] = ACTIONS(361),
    [anon_sym_input] = ACTIONS(361),
    [anon_sym_directive] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
  },
  [131] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(379),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(383),
    [anon_sym_mutation] = ACTIONS(383),
    [anon_sym_subscription] = ACTIONS(383),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_fragment] = ACTIONS(383),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [anon_sym_DOLLAR] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(381),
    [anon_sym_BANG] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(381),
    [anon_sym_schema] = ACTIONS(383),
    [anon_sym_extends] = ACTIONS(383),
    [anon_sym_extend] = ACTIONS(383),
    [anon_sym_scalar] = ACTIONS(383),
    [anon_sym_type] = ACTIONS(383),
    [anon_sym_interface] = ACTIONS(383),
    [anon_sym_union] = ACTIONS(383),
    [anon_sym_enum] = ACTIONS(383),
    [anon_sym_input] = ACTIONS(383),
    [anon_sym_AMP] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_directive] = ACTIONS(383),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(383),
  },
  [133] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_AT] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
  },
  [134] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(387),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(387),
  },
  [135] = {
    [sym_Directive] = STATE(203),
    [aux_sym_Directives_repeat1] = STATE(203),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(165),
  },
  [136] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(389),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(389),
  },
  [137] = {
    [sym_SelectionSet] = STATE(204),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
  [138] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(391),
    [sym_comment] = ACTIONS(5),
  },
  [139] = {
    [sym_Argument] = STATE(207),
    [aux_sym_Arguments_repeat1] = STATE(207),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(393),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(292),
  },
  [140] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(395),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(395),
  },
  [141] = {
    [sym_SelectionSet] = STATE(208),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(395),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(395),
  },
  [142] = {
    [sym_Directive] = STATE(142),
    [aux_sym_Directives_repeat1] = STATE(142),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(320),
    [anon_sym_RBRACE] = ACTIONS(320),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(320),
    [anon_sym_AT] = ACTIONS(322),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(320),
  },
  [143] = {
    [sym_SelectionSet] = STATE(208),
    [sym_Directives] = STATE(209),
    [sym_Directive] = STATE(80),
    [aux_sym_Directives_repeat1] = STATE(80),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(395),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(395),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(397),
    [anon_sym_mutation] = ACTIONS(397),
    [anon_sym_subscription] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_fragment] = ACTIONS(397),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(399),
    [anon_sym_schema] = ACTIONS(397),
    [anon_sym_extends] = ACTIONS(397),
    [anon_sym_extend] = ACTIONS(399),
    [anon_sym_scalar] = ACTIONS(397),
    [anon_sym_type] = ACTIONS(397),
    [anon_sym_interface] = ACTIONS(397),
    [anon_sym_union] = ACTIONS(397),
    [anon_sym_enum] = ACTIONS(397),
    [anon_sym_input] = ACTIONS(397),
    [anon_sym_directive] = ACTIONS(397),
    [sym_comment] = ACTIONS(5),
  },
  [145] = {
    [sym_SelectionSet] = STATE(210),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
  [146] = {
    [sym_NamedType] = STATE(211),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(401),
    [anon_sym_mutation] = ACTIONS(401),
    [anon_sym_subscription] = ACTIONS(401),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_fragment] = ACTIONS(401),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(401),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [anon_sym_schema] = ACTIONS(401),
    [anon_sym_extends] = ACTIONS(401),
    [anon_sym_extend] = ACTIONS(403),
    [anon_sym_scalar] = ACTIONS(401),
    [anon_sym_type] = ACTIONS(401),
    [anon_sym_interface] = ACTIONS(401),
    [anon_sym_union] = ACTIONS(401),
    [anon_sym_enum] = ACTIONS(401),
    [anon_sym_input] = ACTIONS(401),
    [anon_sym_directive] = ACTIONS(401),
    [sym_comment] = ACTIONS(5),
  },
  [148] = {
    [sym_OperationType] = STATE(86),
    [sym_OperationTypeDefinition] = STATE(148),
    [aux_sym_SchemaDefinition_repeat1] = STATE(148),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(405),
    [anon_sym_mutation] = ACTIONS(405),
    [anon_sym_subscription] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(408),
    [sym_comment] = ACTIONS(5),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(412),
    [anon_sym_mutation] = ACTIONS(412),
    [anon_sym_subscription] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(410),
    [anon_sym_RBRACE] = ACTIONS(410),
    [anon_sym_RPAREN] = ACTIONS(410),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(410),
    [anon_sym_fragment] = ACTIONS(412),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(410),
    [anon_sym_DQUOTE] = ACTIONS(412),
    [anon_sym_EQ] = ACTIONS(410),
    [anon_sym_AT] = ACTIONS(410),
    [anon_sym_schema] = ACTIONS(412),
    [anon_sym_extends] = ACTIONS(412),
    [anon_sym_extend] = ACTIONS(412),
    [anon_sym_scalar] = ACTIONS(412),
    [anon_sym_type] = ACTIONS(412),
    [anon_sym_interface] = ACTIONS(412),
    [anon_sym_union] = ACTIONS(412),
    [anon_sym_enum] = ACTIONS(412),
    [anon_sym_input] = ACTIONS(412),
    [anon_sym_directive] = ACTIONS(412),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(412),
  },
  [150] = {
    [sym_OperationType] = STATE(86),
    [sym_OperationTypeDefinition] = STATE(148),
    [aux_sym_SchemaDefinition_repeat1] = STATE(148),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(414),
    [sym_comment] = ACTIONS(5),
  },
  [151] = {
    [sym_OperationType] = STATE(86),
    [sym_OperationTypeDefinition] = STATE(148),
    [aux_sym_SchemaDefinition_repeat1] = STATE(148),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(416),
    [sym_comment] = ACTIONS(5),
  },
  [152] = {
    [sym_OperationType] = STATE(86),
    [sym_OperationTypeDefinition] = STATE(214),
    [aux_sym_SchemaDefinition_repeat1] = STATE(214),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
  },
  [153] = {
    [sym_Directive] = STATE(153),
    [aux_sym_Directives_repeat1] = STATE(153),
    [ts_builtin_sym_end] = ACTIONS(320),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(320),
    [anon_sym_mutation] = ACTIONS(320),
    [anon_sym_subscription] = ACTIONS(320),
    [anon_sym_LBRACE] = ACTIONS(320),
    [anon_sym_fragment] = ACTIONS(320),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(418),
    [anon_sym_AT] = ACTIONS(322),
    [anon_sym_schema] = ACTIONS(320),
    [anon_sym_extends] = ACTIONS(320),
    [anon_sym_extend] = ACTIONS(418),
    [anon_sym_scalar] = ACTIONS(320),
    [anon_sym_type] = ACTIONS(320),
    [anon_sym_interface] = ACTIONS(320),
    [anon_sym_union] = ACTIONS(320),
    [anon_sym_enum] = ACTIONS(320),
    [anon_sym_input] = ACTIONS(320),
    [anon_sym_directive] = ACTIONS(320),
    [sym_comment] = ACTIONS(5),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(420),
    [anon_sym_mutation] = ACTIONS(420),
    [anon_sym_subscription] = ACTIONS(420),
    [anon_sym_LBRACE] = ACTIONS(420),
    [anon_sym_fragment] = ACTIONS(420),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(420),
    [anon_sym_DQUOTE] = ACTIONS(422),
    [anon_sym_schema] = ACTIONS(420),
    [anon_sym_extends] = ACTIONS(420),
    [anon_sym_extend] = ACTIONS(422),
    [anon_sym_scalar] = ACTIONS(420),
    [anon_sym_type] = ACTIONS(420),
    [anon_sym_interface] = ACTIONS(420),
    [anon_sym_union] = ACTIONS(420),
    [anon_sym_enum] = ACTIONS(420),
    [anon_sym_input] = ACTIONS(420),
    [anon_sym_directive] = ACTIONS(420),
    [sym_comment] = ACTIONS(5),
  },
  [155] = {
    [sym_FieldsDefinition] = STATE(215),
    [ts_builtin_sym_end] = ACTIONS(424),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(424),
    [anon_sym_mutation] = ACTIONS(424),
    [anon_sym_subscription] = ACTIONS(424),
    [anon_sym_LBRACE] = ACTIONS(424),
    [anon_sym_fragment] = ACTIONS(424),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(424),
    [anon_sym_DQUOTE] = ACTIONS(426),
    [anon_sym_schema] = ACTIONS(424),
    [anon_sym_extends] = ACTIONS(424),
    [anon_sym_extend] = ACTIONS(426),
    [anon_sym_scalar] = ACTIONS(424),
    [anon_sym_type] = ACTIONS(424),
    [anon_sym_interface] = ACTIONS(424),
    [anon_sym_union] = ACTIONS(424),
    [anon_sym_enum] = ACTIONS(424),
    [anon_sym_input] = ACTIONS(424),
    [anon_sym_directive] = ACTIONS(424),
    [sym_comment] = ACTIONS(5),
  },
  [156] = {
    [sym_Directives] = STATE(216),
    [sym_Directive] = STATE(93),
    [sym_FieldsDefinition] = STATE(215),
    [aux_sym_Directives_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(424),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(424),
    [anon_sym_mutation] = ACTIONS(424),
    [anon_sym_subscription] = ACTIONS(424),
    [anon_sym_LBRACE] = ACTIONS(424),
    [anon_sym_fragment] = ACTIONS(424),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(424),
    [anon_sym_DQUOTE] = ACTIONS(426),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(424),
    [anon_sym_extends] = ACTIONS(424),
    [anon_sym_extend] = ACTIONS(426),
    [anon_sym_scalar] = ACTIONS(424),
    [anon_sym_type] = ACTIONS(424),
    [anon_sym_interface] = ACTIONS(424),
    [anon_sym_union] = ACTIONS(424),
    [anon_sym_enum] = ACTIONS(424),
    [anon_sym_input] = ACTIONS(424),
    [anon_sym_directive] = ACTIONS(424),
    [sym_comment] = ACTIONS(5),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(424),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(424),
    [anon_sym_mutation] = ACTIONS(424),
    [anon_sym_subscription] = ACTIONS(424),
    [anon_sym_LBRACE] = ACTIONS(424),
    [anon_sym_fragment] = ACTIONS(424),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(424),
    [anon_sym_DQUOTE] = ACTIONS(426),
    [anon_sym_schema] = ACTIONS(424),
    [anon_sym_extends] = ACTIONS(424),
    [anon_sym_extend] = ACTIONS(426),
    [anon_sym_scalar] = ACTIONS(424),
    [anon_sym_type] = ACTIONS(424),
    [anon_sym_interface] = ACTIONS(424),
    [anon_sym_union] = ACTIONS(424),
    [anon_sym_enum] = ACTIONS(424),
    [anon_sym_input] = ACTIONS(424),
    [anon_sym_directive] = ACTIONS(424),
    [sym_comment] = ACTIONS(5),
  },
  [158] = {
    [sym_FieldsDefinition] = STATE(217),
    [ts_builtin_sym_end] = ACTIONS(428),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(428),
    [anon_sym_mutation] = ACTIONS(428),
    [anon_sym_subscription] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [anon_sym_fragment] = ACTIONS(428),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(430),
    [anon_sym_schema] = ACTIONS(428),
    [anon_sym_extends] = ACTIONS(428),
    [anon_sym_extend] = ACTIONS(430),
    [anon_sym_scalar] = ACTIONS(428),
    [anon_sym_type] = ACTIONS(428),
    [anon_sym_interface] = ACTIONS(428),
    [anon_sym_union] = ACTIONS(428),
    [anon_sym_enum] = ACTIONS(428),
    [anon_sym_input] = ACTIONS(428),
    [anon_sym_directive] = ACTIONS(428),
    [sym_comment] = ACTIONS(5),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(428),
    [anon_sym_mutation] = ACTIONS(428),
    [anon_sym_subscription] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [anon_sym_fragment] = ACTIONS(428),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(430),
    [anon_sym_schema] = ACTIONS(428),
    [anon_sym_extends] = ACTIONS(428),
    [anon_sym_extend] = ACTIONS(430),
    [anon_sym_scalar] = ACTIONS(428),
    [anon_sym_type] = ACTIONS(428),
    [anon_sym_interface] = ACTIONS(428),
    [anon_sym_union] = ACTIONS(428),
    [anon_sym_enum] = ACTIONS(428),
    [anon_sym_input] = ACTIONS(428),
    [anon_sym_directive] = ACTIONS(428),
    [sym_comment] = ACTIONS(5),
  },
  [160] = {
    [sym_UnionMemberTypes] = STATE(218),
    [ts_builtin_sym_end] = ACTIONS(432),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(432),
    [anon_sym_mutation] = ACTIONS(432),
    [anon_sym_subscription] = ACTIONS(432),
    [anon_sym_LBRACE] = ACTIONS(432),
    [anon_sym_fragment] = ACTIONS(432),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(432),
    [anon_sym_DQUOTE] = ACTIONS(434),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_schema] = ACTIONS(432),
    [anon_sym_extends] = ACTIONS(432),
    [anon_sym_extend] = ACTIONS(434),
    [anon_sym_scalar] = ACTIONS(432),
    [anon_sym_type] = ACTIONS(432),
    [anon_sym_interface] = ACTIONS(432),
    [anon_sym_union] = ACTIONS(432),
    [anon_sym_enum] = ACTIONS(432),
    [anon_sym_input] = ACTIONS(432),
    [anon_sym_directive] = ACTIONS(432),
    [sym_comment] = ACTIONS(5),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(432),
    [anon_sym_mutation] = ACTIONS(432),
    [anon_sym_subscription] = ACTIONS(432),
    [anon_sym_LBRACE] = ACTIONS(432),
    [anon_sym_fragment] = ACTIONS(432),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(432),
    [anon_sym_DQUOTE] = ACTIONS(434),
    [anon_sym_schema] = ACTIONS(432),
    [anon_sym_extends] = ACTIONS(432),
    [anon_sym_extend] = ACTIONS(434),
    [anon_sym_scalar] = ACTIONS(432),
    [anon_sym_type] = ACTIONS(432),
    [anon_sym_interface] = ACTIONS(432),
    [anon_sym_union] = ACTIONS(432),
    [anon_sym_enum] = ACTIONS(432),
    [anon_sym_input] = ACTIONS(432),
    [anon_sym_directive] = ACTIONS(432),
    [sym_comment] = ACTIONS(5),
  },
  [162] = {
    [sym_EnumValuesDefinition] = STATE(219),
    [ts_builtin_sym_end] = ACTIONS(436),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(436),
    [anon_sym_mutation] = ACTIONS(436),
    [anon_sym_subscription] = ACTIONS(436),
    [anon_sym_LBRACE] = ACTIONS(436),
    [anon_sym_fragment] = ACTIONS(436),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(436),
    [anon_sym_DQUOTE] = ACTIONS(438),
    [anon_sym_schema] = ACTIONS(436),
    [anon_sym_extends] = ACTIONS(436),
    [anon_sym_extend] = ACTIONS(438),
    [anon_sym_scalar] = ACTIONS(436),
    [anon_sym_type] = ACTIONS(436),
    [anon_sym_interface] = ACTIONS(436),
    [anon_sym_union] = ACTIONS(436),
    [anon_sym_enum] = ACTIONS(436),
    [anon_sym_input] = ACTIONS(436),
    [anon_sym_directive] = ACTIONS(436),
    [sym_comment] = ACTIONS(5),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(436),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(436),
    [anon_sym_mutation] = ACTIONS(436),
    [anon_sym_subscription] = ACTIONS(436),
    [anon_sym_LBRACE] = ACTIONS(436),
    [anon_sym_fragment] = ACTIONS(436),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(436),
    [anon_sym_DQUOTE] = ACTIONS(438),
    [anon_sym_schema] = ACTIONS(436),
    [anon_sym_extends] = ACTIONS(436),
    [anon_sym_extend] = ACTIONS(438),
    [anon_sym_scalar] = ACTIONS(436),
    [anon_sym_type] = ACTIONS(436),
    [anon_sym_interface] = ACTIONS(436),
    [anon_sym_union] = ACTIONS(436),
    [anon_sym_enum] = ACTIONS(436),
    [anon_sym_input] = ACTIONS(436),
    [anon_sym_directive] = ACTIONS(436),
    [sym_comment] = ACTIONS(5),
  },
  [164] = {
    [sym_InputFieldsDefinition] = STATE(220),
    [ts_builtin_sym_end] = ACTIONS(440),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(440),
    [anon_sym_mutation] = ACTIONS(440),
    [anon_sym_subscription] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_fragment] = ACTIONS(440),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(440),
    [anon_sym_DQUOTE] = ACTIONS(442),
    [anon_sym_schema] = ACTIONS(440),
    [anon_sym_extends] = ACTIONS(440),
    [anon_sym_extend] = ACTIONS(442),
    [anon_sym_scalar] = ACTIONS(440),
    [anon_sym_type] = ACTIONS(440),
    [anon_sym_interface] = ACTIONS(440),
    [anon_sym_union] = ACTIONS(440),
    [anon_sym_enum] = ACTIONS(440),
    [anon_sym_input] = ACTIONS(440),
    [anon_sym_directive] = ACTIONS(440),
    [sym_comment] = ACTIONS(5),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(440),
    [anon_sym_mutation] = ACTIONS(440),
    [anon_sym_subscription] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_fragment] = ACTIONS(440),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(440),
    [anon_sym_DQUOTE] = ACTIONS(442),
    [anon_sym_schema] = ACTIONS(440),
    [anon_sym_extends] = ACTIONS(440),
    [anon_sym_extend] = ACTIONS(442),
    [anon_sym_scalar] = ACTIONS(440),
    [anon_sym_type] = ACTIONS(440),
    [anon_sym_interface] = ACTIONS(440),
    [anon_sym_union] = ACTIONS(440),
    [anon_sym_enum] = ACTIONS(440),
    [anon_sym_input] = ACTIONS(440),
    [anon_sym_directive] = ACTIONS(440),
    [sym_comment] = ACTIONS(5),
  },
  [166] = {
    [sym_ArgumentsDefinition] = STATE(222),
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(365),
    [sym_comment] = ACTIONS(5),
  },
  [167] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(446),
  },
  [168] = {
    [sym_StringValue] = STATE(23),
    [sym_Description] = STATE(167),
    [sym_FieldDefinition] = STATE(225),
    [aux_sym_FieldsDefinition_repeat1] = STATE(225),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(335),
  },
  [169] = {
    [sym_NamedType] = STATE(226),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [170] = {
    [aux_sym_ImplementsInterfaces_repeat1] = STATE(228),
    [ts_builtin_sym_end] = ACTIONS(450),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(450),
    [anon_sym_mutation] = ACTIONS(450),
    [anon_sym_subscription] = ACTIONS(450),
    [anon_sym_LBRACE] = ACTIONS(450),
    [anon_sym_fragment] = ACTIONS(450),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(450),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [anon_sym_AT] = ACTIONS(450),
    [anon_sym_schema] = ACTIONS(450),
    [anon_sym_extends] = ACTIONS(450),
    [anon_sym_extend] = ACTIONS(452),
    [anon_sym_scalar] = ACTIONS(450),
    [anon_sym_type] = ACTIONS(450),
    [anon_sym_interface] = ACTIONS(450),
    [anon_sym_union] = ACTIONS(450),
    [anon_sym_enum] = ACTIONS(450),
    [anon_sym_input] = ACTIONS(450),
    [anon_sym_AMP] = ACTIONS(454),
    [anon_sym_directive] = ACTIONS(450),
    [sym_comment] = ACTIONS(5),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(456),
    [anon_sym_mutation] = ACTIONS(456),
    [anon_sym_subscription] = ACTIONS(456),
    [anon_sym_LBRACE] = ACTIONS(456),
    [anon_sym_fragment] = ACTIONS(456),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(456),
    [anon_sym_DQUOTE] = ACTIONS(458),
    [anon_sym_schema] = ACTIONS(456),
    [anon_sym_extends] = ACTIONS(456),
    [anon_sym_extend] = ACTIONS(458),
    [anon_sym_scalar] = ACTIONS(456),
    [anon_sym_type] = ACTIONS(456),
    [anon_sym_interface] = ACTIONS(456),
    [anon_sym_union] = ACTIONS(456),
    [anon_sym_enum] = ACTIONS(456),
    [anon_sym_input] = ACTIONS(456),
    [anon_sym_directive] = ACTIONS(456),
    [sym_comment] = ACTIONS(5),
  },
  [172] = {
    [sym_FieldsDefinition] = STATE(229),
    [ts_builtin_sym_end] = ACTIONS(456),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(456),
    [anon_sym_mutation] = ACTIONS(456),
    [anon_sym_subscription] = ACTIONS(456),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_fragment] = ACTIONS(456),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(456),
    [anon_sym_DQUOTE] = ACTIONS(458),
    [anon_sym_schema] = ACTIONS(456),
    [anon_sym_extends] = ACTIONS(456),
    [anon_sym_extend] = ACTIONS(458),
    [anon_sym_scalar] = ACTIONS(456),
    [anon_sym_type] = ACTIONS(456),
    [anon_sym_interface] = ACTIONS(456),
    [anon_sym_union] = ACTIONS(456),
    [anon_sym_enum] = ACTIONS(456),
    [anon_sym_input] = ACTIONS(456),
    [anon_sym_directive] = ACTIONS(456),
    [sym_comment] = ACTIONS(5),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(460),
    [anon_sym_mutation] = ACTIONS(460),
    [anon_sym_subscription] = ACTIONS(460),
    [anon_sym_LBRACE] = ACTIONS(460),
    [anon_sym_fragment] = ACTIONS(460),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(460),
    [anon_sym_DQUOTE] = ACTIONS(462),
    [anon_sym_schema] = ACTIONS(460),
    [anon_sym_extends] = ACTIONS(460),
    [anon_sym_extend] = ACTIONS(462),
    [anon_sym_scalar] = ACTIONS(460),
    [anon_sym_type] = ACTIONS(460),
    [anon_sym_interface] = ACTIONS(460),
    [anon_sym_union] = ACTIONS(460),
    [anon_sym_enum] = ACTIONS(460),
    [anon_sym_input] = ACTIONS(460),
    [anon_sym_directive] = ACTIONS(460),
    [sym_comment] = ACTIONS(5),
  },
  [174] = {
    [sym_NamedType] = STATE(230),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [175] = {
    [aux_sym_UnionMemberTypes_repeat1] = STATE(232),
    [ts_builtin_sym_end] = ACTIONS(464),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(464),
    [anon_sym_mutation] = ACTIONS(464),
    [anon_sym_subscription] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(464),
    [anon_sym_fragment] = ACTIONS(464),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(464),
    [anon_sym_DQUOTE] = ACTIONS(466),
    [anon_sym_schema] = ACTIONS(464),
    [anon_sym_extends] = ACTIONS(464),
    [anon_sym_extend] = ACTIONS(466),
    [anon_sym_scalar] = ACTIONS(464),
    [anon_sym_type] = ACTIONS(464),
    [anon_sym_interface] = ACTIONS(464),
    [anon_sym_union] = ACTIONS(464),
    [anon_sym_enum] = ACTIONS(464),
    [anon_sym_input] = ACTIONS(464),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_directive] = ACTIONS(464),
    [sym_comment] = ACTIONS(5),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(470),
    [anon_sym_mutation] = ACTIONS(470),
    [anon_sym_subscription] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_fragment] = ACTIONS(470),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(470),
    [anon_sym_DQUOTE] = ACTIONS(472),
    [anon_sym_schema] = ACTIONS(470),
    [anon_sym_extends] = ACTIONS(470),
    [anon_sym_extend] = ACTIONS(472),
    [anon_sym_scalar] = ACTIONS(470),
    [anon_sym_type] = ACTIONS(470),
    [anon_sym_interface] = ACTIONS(470),
    [anon_sym_union] = ACTIONS(470),
    [anon_sym_enum] = ACTIONS(470),
    [anon_sym_input] = ACTIONS(470),
    [anon_sym_directive] = ACTIONS(470),
    [sym_comment] = ACTIONS(5),
  },
  [177] = {
    [sym_Directive] = STATE(177),
    [aux_sym_Directives_repeat1] = STATE(177),
    [ts_builtin_sym_end] = ACTIONS(320),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(320),
    [anon_sym_mutation] = ACTIONS(320),
    [anon_sym_subscription] = ACTIONS(320),
    [anon_sym_LBRACE] = ACTIONS(320),
    [anon_sym_fragment] = ACTIONS(320),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(418),
    [anon_sym_EQ] = ACTIONS(320),
    [anon_sym_AT] = ACTIONS(322),
    [anon_sym_schema] = ACTIONS(320),
    [anon_sym_extends] = ACTIONS(320),
    [anon_sym_extend] = ACTIONS(418),
    [anon_sym_scalar] = ACTIONS(320),
    [anon_sym_type] = ACTIONS(320),
    [anon_sym_interface] = ACTIONS(320),
    [anon_sym_union] = ACTIONS(320),
    [anon_sym_enum] = ACTIONS(320),
    [anon_sym_input] = ACTIONS(320),
    [anon_sym_directive] = ACTIONS(320),
    [sym_comment] = ACTIONS(5),
  },
  [178] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(474),
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_RPAREN] = ACTIONS(474),
    [anon_sym_false] = ACTIONS(476),
    [anon_sym_true] = ACTIONS(476),
    [sym_NullValue] = ACTIONS(476),
    [anon_sym_LBRACK] = ACTIONS(474),
    [anon_sym_RBRACK] = ACTIONS(474),
    [sym_IntValue] = ACTIONS(476),
    [sym_FloatValue] = ACTIONS(474),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(474),
    [anon_sym_DQUOTE] = ACTIONS(476),
    [anon_sym_DOLLAR] = ACTIONS(474),
    [anon_sym_AT] = ACTIONS(474),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(476),
  },
  [179] = {
    [sym_Directives] = STATE(233),
    [sym_Directive] = STATE(234),
    [aux_sym_Directives_repeat1] = STATE(234),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(478),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(478),
    [anon_sym_DQUOTE] = ACTIONS(480),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(478),
  },
  [180] = {
    [sym_EnumValue] = STATE(235),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(353),
  },
  [181] = {
    [sym_EnumValue] = STATE(179),
    [sym_StringValue] = STATE(23),
    [sym_Description] = STATE(180),
    [sym_EnumValueDefinition] = STATE(237),
    [aux_sym_EnumValuesDefinition_repeat1] = STATE(237),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(482),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(353),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(484),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(484),
    [anon_sym_mutation] = ACTIONS(484),
    [anon_sym_subscription] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(484),
    [anon_sym_fragment] = ACTIONS(484),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(484),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [anon_sym_schema] = ACTIONS(484),
    [anon_sym_extends] = ACTIONS(484),
    [anon_sym_extend] = ACTIONS(486),
    [anon_sym_scalar] = ACTIONS(484),
    [anon_sym_type] = ACTIONS(484),
    [anon_sym_interface] = ACTIONS(484),
    [anon_sym_union] = ACTIONS(484),
    [anon_sym_enum] = ACTIONS(484),
    [anon_sym_input] = ACTIONS(484),
    [anon_sym_directive] = ACTIONS(484),
    [sym_comment] = ACTIONS(5),
  },
  [183] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(488),
    [sym_comment] = ACTIONS(5),
  },
  [184] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(490),
  },
  [185] = {
    [sym_StringValue] = STATE(23),
    [sym_Description] = STATE(184),
    [sym_InputValueDefinition] = STATE(241),
    [aux_sym_ArgumentsDefinition_repeat1] = STATE(241),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(492),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(359),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(494),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(494),
    [anon_sym_mutation] = ACTIONS(494),
    [anon_sym_subscription] = ACTIONS(494),
    [anon_sym_LBRACE] = ACTIONS(494),
    [anon_sym_fragment] = ACTIONS(494),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(494),
    [anon_sym_DQUOTE] = ACTIONS(496),
    [anon_sym_schema] = ACTIONS(494),
    [anon_sym_extends] = ACTIONS(494),
    [anon_sym_extend] = ACTIONS(496),
    [anon_sym_scalar] = ACTIONS(494),
    [anon_sym_type] = ACTIONS(494),
    [anon_sym_interface] = ACTIONS(494),
    [anon_sym_union] = ACTIONS(494),
    [anon_sym_enum] = ACTIONS(494),
    [anon_sym_input] = ACTIONS(494),
    [anon_sym_directive] = ACTIONS(494),
    [sym_comment] = ACTIONS(5),
  },
  [187] = {
    [sym_StringValue] = STATE(23),
    [sym_Description] = STATE(243),
    [sym_InputValueDefinition] = STATE(244),
    [aux_sym_ArgumentsDefinition_repeat1] = STATE(244),
    [sym_comma] = ACTIONS(5),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(498),
  },
  [188] = {
    [sym_DirectiveLocations] = STATE(248),
    [sym_DirectiveLocation] = STATE(249),
    [sym_ExecutableDirectiveLocation] = STATE(250),
    [sym_TypeSystemDirectiveLocation] = STATE(250),
    [sym_comma] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_QUERY] = ACTIONS(502),
    [anon_sym_MUTATION] = ACTIONS(502),
    [anon_sym_SUBSCRIPTION] = ACTIONS(502),
    [anon_sym_FIELD] = ACTIONS(504),
    [anon_sym_FRAGMENT_DEFINITION] = ACTIONS(502),
    [anon_sym_FRAGMENT_SPREAD] = ACTIONS(502),
    [anon_sym_INLINE_FRAGMENT] = ACTIONS(502),
    [anon_sym_VARIABLE_DEFINITION] = ACTIONS(502),
    [anon_sym_SCHEMA] = ACTIONS(506),
    [anon_sym_SCALAR] = ACTIONS(506),
    [anon_sym_OBJECT] = ACTIONS(506),
    [anon_sym_FIELD_DEFINITION] = ACTIONS(506),
    [anon_sym_ARGUMENT_DEFINITION] = ACTIONS(506),
    [anon_sym_INTERFACE] = ACTIONS(506),
    [anon_sym_UNION] = ACTIONS(506),
    [anon_sym_ENUM] = ACTIONS(508),
    [anon_sym_ENUM_VALUE] = ACTIONS(506),
    [anon_sym_INPUT_OBJECT] = ACTIONS(506),
    [anon_sym_INPUT_FIELD_DEFINITION] = ACTIONS(506),
    [sym_comment] = ACTIONS(5),
  },
  [189] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_on] = ACTIONS(510),
    [sym_comment] = ACTIONS(5),
  },
  [190] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(512),
    [anon_sym_RBRACE] = ACTIONS(512),
    [anon_sym_COLON] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_false] = ACTIONS(514),
    [anon_sym_true] = ACTIONS(514),
    [sym_NullValue] = ACTIONS(514),
    [anon_sym_LBRACK] = ACTIONS(512),
    [anon_sym_RBRACK] = ACTIONS(512),
    [sym_IntValue] = ACTIONS(514),
    [sym_FloatValue] = ACTIONS(512),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(512),
    [anon_sym_DQUOTE] = ACTIONS(514),
    [anon_sym_DOLLAR] = ACTIONS(512),
    [anon_sym_AT] = ACTIONS(512),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(514),
  },
  [191] = {
    [sym_Type] = STATE(253),
    [sym_NamedType] = STATE(254),
    [sym_ListType] = STATE(254),
    [sym_NonNullType] = STATE(255),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(516),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [192] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(518),
    [anon_sym_AT] = ACTIONS(518),
    [sym_comment] = ACTIONS(5),
  },
  [193] = {
    [sym_VariableDefinition] = STATE(193),
    [sym_Variable] = STATE(120),
    [aux_sym_VariableDefinitions_repeat1] = STATE(193),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(520),
    [anon_sym_DOLLAR] = ACTIONS(522),
    [sym_comment] = ACTIONS(5),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(525),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(525),
    [anon_sym_mutation] = ACTIONS(525),
    [anon_sym_subscription] = ACTIONS(525),
    [anon_sym_LBRACE] = ACTIONS(525),
    [anon_sym_fragment] = ACTIONS(525),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(525),
    [anon_sym_DQUOTE] = ACTIONS(527),
    [anon_sym_schema] = ACTIONS(525),
    [anon_sym_extends] = ACTIONS(525),
    [anon_sym_extend] = ACTIONS(527),
    [anon_sym_scalar] = ACTIONS(525),
    [anon_sym_type] = ACTIONS(525),
    [anon_sym_interface] = ACTIONS(525),
    [anon_sym_union] = ACTIONS(525),
    [anon_sym_enum] = ACTIONS(525),
    [anon_sym_input] = ACTIONS(525),
    [anon_sym_directive] = ACTIONS(525),
    [sym_comment] = ACTIONS(5),
  },
  [195] = {
    [sym_SelectionSet] = STATE(256),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(529),
    [anon_sym_mutation] = ACTIONS(529),
    [anon_sym_subscription] = ACTIONS(529),
    [anon_sym_LBRACE] = ACTIONS(529),
    [anon_sym_fragment] = ACTIONS(529),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_schema] = ACTIONS(529),
    [anon_sym_extends] = ACTIONS(529),
    [anon_sym_extend] = ACTIONS(531),
    [anon_sym_scalar] = ACTIONS(529),
    [anon_sym_type] = ACTIONS(529),
    [anon_sym_interface] = ACTIONS(529),
    [anon_sym_union] = ACTIONS(529),
    [anon_sym_enum] = ACTIONS(529),
    [anon_sym_input] = ACTIONS(529),
    [anon_sym_directive] = ACTIONS(529),
    [sym_comment] = ACTIONS(5),
  },
  [197] = {
    [sym_Directives] = STATE(257),
    [sym_Directive] = STATE(93),
    [sym_FieldsDefinition] = STATE(229),
    [aux_sym_Directives_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(456),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(456),
    [anon_sym_mutation] = ACTIONS(456),
    [anon_sym_subscription] = ACTIONS(456),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_fragment] = ACTIONS(456),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(456),
    [anon_sym_DQUOTE] = ACTIONS(458),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_schema] = ACTIONS(456),
    [anon_sym_extends] = ACTIONS(456),
    [anon_sym_extend] = ACTIONS(458),
    [anon_sym_scalar] = ACTIONS(456),
    [anon_sym_type] = ACTIONS(456),
    [anon_sym_interface] = ACTIONS(456),
    [anon_sym_union] = ACTIONS(456),
    [anon_sym_enum] = ACTIONS(456),
    [anon_sym_input] = ACTIONS(456),
    [anon_sym_directive] = ACTIONS(456),
    [sym_comment] = ACTIONS(5),
  },
  [198] = {
    [sym_FieldsDefinition] = STATE(258),
    [ts_builtin_sym_end] = ACTIONS(460),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(460),
    [anon_sym_mutation] = ACTIONS(460),
    [anon_sym_subscription] = ACTIONS(460),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_fragment] = ACTIONS(460),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(460),
    [anon_sym_DQUOTE] = ACTIONS(462),
    [anon_sym_schema] = ACTIONS(460),
    [anon_sym_extends] = ACTIONS(460),
    [anon_sym_extend] = ACTIONS(462),
    [anon_sym_scalar] = ACTIONS(460),
    [anon_sym_type] = ACTIONS(460),
    [anon_sym_interface] = ACTIONS(460),
    [anon_sym_union] = ACTIONS(460),
    [anon_sym_enum] = ACTIONS(460),
    [anon_sym_input] = ACTIONS(460),
    [anon_sym_directive] = ACTIONS(460),
    [sym_comment] = ACTIONS(5),
  },
  [199] = {
    [sym_UnionMemberTypes] = STATE(259),
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(470),
    [anon_sym_mutation] = ACTIONS(470),
    [anon_sym_subscription] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_fragment] = ACTIONS(470),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(470),
    [anon_sym_DQUOTE] = ACTIONS(472),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_schema] = ACTIONS(470),
    [anon_sym_extends] = ACTIONS(470),
    [anon_sym_extend] = ACTIONS(472),
    [anon_sym_scalar] = ACTIONS(470),
    [anon_sym_type] = ACTIONS(470),
    [anon_sym_interface] = ACTIONS(470),
    [anon_sym_union] = ACTIONS(470),
    [anon_sym_enum] = ACTIONS(470),
    [anon_sym_input] = ACTIONS(470),
    [anon_sym_directive] = ACTIONS(470),
    [sym_comment] = ACTIONS(5),
  },
  [200] = {
    [sym_EnumValuesDefinition] = STATE(260),
    [ts_builtin_sym_end] = ACTIONS(484),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(484),
    [anon_sym_mutation] = ACTIONS(484),
    [anon_sym_subscription] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_fragment] = ACTIONS(484),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(484),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [anon_sym_schema] = ACTIONS(484),
    [anon_sym_extends] = ACTIONS(484),
    [anon_sym_extend] = ACTIONS(486),
    [anon_sym_scalar] = ACTIONS(484),
    [anon_sym_type] = ACTIONS(484),
    [anon_sym_interface] = ACTIONS(484),
    [anon_sym_union] = ACTIONS(484),
    [anon_sym_enum] = ACTIONS(484),
    [anon_sym_input] = ACTIONS(484),
    [anon_sym_directive] = ACTIONS(484),
    [sym_comment] = ACTIONS(5),
  },
  [201] = {
    [sym_InputFieldsDefinition] = STATE(261),
    [ts_builtin_sym_end] = ACTIONS(494),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(494),
    [anon_sym_mutation] = ACTIONS(494),
    [anon_sym_subscription] = ACTIONS(494),
    [anon_sym_LBRACE] = ACTIONS(211),
    [anon_sym_fragment] = ACTIONS(494),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(494),
    [anon_sym_DQUOTE] = ACTIONS(496),
    [anon_sym_schema] = ACTIONS(494),
    [anon_sym_extends] = ACTIONS(494),
    [anon_sym_extend] = ACTIONS(496),
    [anon_sym_scalar] = ACTIONS(494),
    [anon_sym_type] = ACTIONS(494),
    [anon_sym_interface] = ACTIONS(494),
    [anon_sym_union] = ACTIONS(494),
    [anon_sym_enum] = ACTIONS(494),
    [anon_sym_input] = ACTIONS(494),
    [anon_sym_directive] = ACTIONS(494),
    [sym_comment] = ACTIONS(5),
  },
  [202] = {
    [sym_ArgumentsDefinition] = STATE(262),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(365),
    [anon_sym_on] = ACTIONS(510),
    [sym_comment] = ACTIONS(5),
  },
  [203] = {
    [sym_Directive] = STATE(203),
    [aux_sym_Directives_repeat1] = STATE(203),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(320),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(320),
    [anon_sym_AT] = ACTIONS(322),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(320),
  },
  [204] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(533),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(533),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(533),
  },
  [205] = {
    [sym_Value] = STATE(267),
    [sym_BooleanValue] = STATE(265),
    [sym_EnumValue] = STATE(265),
    [sym_ListValue] = STATE(265),
    [sym_ObjectValue] = STATE(265),
    [sym_StringValue] = STATE(265),
    [sym_Variable] = STATE(265),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(535),
    [anon_sym_false] = ACTIONS(537),
    [anon_sym_true] = ACTIONS(537),
    [sym_NullValue] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(541),
    [sym_IntValue] = ACTIONS(539),
    [sym_FloatValue] = ACTIONS(543),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(545),
  },
  [206] = {
    [ts_builtin_sym_end] = ACTIONS(547),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(549),
    [anon_sym_mutation] = ACTIONS(549),
    [anon_sym_subscription] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(547),
    [anon_sym_RBRACE] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(547),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(547),
    [anon_sym_fragment] = ACTIONS(549),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [anon_sym_EQ] = ACTIONS(547),
    [anon_sym_AT] = ACTIONS(547),
    [anon_sym_schema] = ACTIONS(549),
    [anon_sym_extends] = ACTIONS(549),
    [anon_sym_extend] = ACTIONS(549),
    [anon_sym_scalar] = ACTIONS(549),
    [anon_sym_type] = ACTIONS(549),
    [anon_sym_interface] = ACTIONS(549),
    [anon_sym_union] = ACTIONS(549),
    [anon_sym_enum] = ACTIONS(549),
    [anon_sym_input] = ACTIONS(549),
    [anon_sym_directive] = ACTIONS(549),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(549),
  },
  [207] = {
    [sym_Argument] = STATE(207),
    [aux_sym_Arguments_repeat1] = STATE(207),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(551),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(553),
  },
  [208] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(556),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(556),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(556),
  },
  [209] = {
    [sym_SelectionSet] = STATE(268),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(556),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(556),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(556),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(558),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(558),
    [anon_sym_mutation] = ACTIONS(558),
    [anon_sym_subscription] = ACTIONS(558),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_fragment] = ACTIONS(558),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(558),
    [anon_sym_DQUOTE] = ACTIONS(560),
    [anon_sym_schema] = ACTIONS(558),
    [anon_sym_extends] = ACTIONS(558),
    [anon_sym_extend] = ACTIONS(560),
    [anon_sym_scalar] = ACTIONS(558),
    [anon_sym_type] = ACTIONS(558),
    [anon_sym_interface] = ACTIONS(558),
    [anon_sym_union] = ACTIONS(558),
    [anon_sym_enum] = ACTIONS(558),
    [anon_sym_input] = ACTIONS(558),
    [anon_sym_directive] = ACTIONS(558),
    [sym_comment] = ACTIONS(5),
  },
  [211] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(562),
    [anon_sym_mutation] = ACTIONS(562),
    [anon_sym_subscription] = ACTIONS(562),
    [anon_sym_RBRACE] = ACTIONS(562),
    [sym_comment] = ACTIONS(5),
  },
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(564),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(564),
    [anon_sym_mutation] = ACTIONS(564),
    [anon_sym_subscription] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(564),
    [anon_sym_fragment] = ACTIONS(564),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(564),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_schema] = ACTIONS(564),
    [anon_sym_extends] = ACTIONS(564),
    [anon_sym_extend] = ACTIONS(566),
    [anon_sym_scalar] = ACTIONS(564),
    [anon_sym_type] = ACTIONS(564),
    [anon_sym_interface] = ACTIONS(564),
    [anon_sym_union] = ACTIONS(564),
    [anon_sym_enum] = ACTIONS(564),
    [anon_sym_input] = ACTIONS(564),
    [anon_sym_directive] = ACTIONS(564),
    [sym_comment] = ACTIONS(5),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(568),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(568),
    [anon_sym_mutation] = ACTIONS(568),
    [anon_sym_subscription] = ACTIONS(568),
    [anon_sym_LBRACE] = ACTIONS(568),
    [anon_sym_fragment] = ACTIONS(568),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(568),
    [anon_sym_DQUOTE] = ACTIONS(570),
    [anon_sym_schema] = ACTIONS(568),
    [anon_sym_extends] = ACTIONS(568),
    [anon_sym_extend] = ACTIONS(570),
    [anon_sym_scalar] = ACTIONS(568),
    [anon_sym_type] = ACTIONS(568),
    [anon_sym_interface] = ACTIONS(568),
    [anon_sym_union] = ACTIONS(568),
    [anon_sym_enum] = ACTIONS(568),
    [anon_sym_input] = ACTIONS(568),
    [anon_sym_directive] = ACTIONS(568),
    [sym_comment] = ACTIONS(5),
  },
  [214] = {
    [sym_OperationType] = STATE(86),
    [sym_OperationTypeDefinition] = STATE(148),
    [aux_sym_SchemaDefinition_repeat1] = STATE(148),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
    [anon_sym_mutation] = ACTIONS(7),
    [anon_sym_subscription] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(572),
    [sym_comment] = ACTIONS(5),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(574),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(574),
    [anon_sym_mutation] = ACTIONS(574),
    [anon_sym_subscription] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_fragment] = ACTIONS(574),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(576),
    [anon_sym_schema] = ACTIONS(574),
    [anon_sym_extends] = ACTIONS(574),
    [anon_sym_extend] = ACTIONS(576),
    [anon_sym_scalar] = ACTIONS(574),
    [anon_sym_type] = ACTIONS(574),
    [anon_sym_interface] = ACTIONS(574),
    [anon_sym_union] = ACTIONS(574),
    [anon_sym_enum] = ACTIONS(574),
    [anon_sym_input] = ACTIONS(574),
    [anon_sym_directive] = ACTIONS(574),
    [sym_comment] = ACTIONS(5),
  },
  [216] = {
    [sym_FieldsDefinition] = STATE(270),
    [ts_builtin_sym_end] = ACTIONS(574),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(574),
    [anon_sym_mutation] = ACTIONS(574),
    [anon_sym_subscription] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(574),
    [anon_sym_fragment] = ACTIONS(574),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(576),
    [anon_sym_schema] = ACTIONS(574),
    [anon_sym_extends] = ACTIONS(574),
    [anon_sym_extend] = ACTIONS(576),
    [anon_sym_scalar] = ACTIONS(574),
    [anon_sym_type] = ACTIONS(574),
    [anon_sym_interface] = ACTIONS(574),
    [anon_sym_union] = ACTIONS(574),
    [anon_sym_enum] = ACTIONS(574),
    [anon_sym_input] = ACTIONS(574),
    [anon_sym_directive] = ACTIONS(574),
    [sym_comment] = ACTIONS(5),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(578),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(578),
    [anon_sym_mutation] = ACTIONS(578),
    [anon_sym_subscription] = ACTIONS(578),
    [anon_sym_LBRACE] = ACTIONS(578),
    [anon_sym_fragment] = ACTIONS(578),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(578),
    [anon_sym_DQUOTE] = ACTIONS(580),
    [anon_sym_schema] = ACTIONS(578),
    [anon_sym_extends] = ACTIONS(578),
    [anon_sym_extend] = ACTIONS(580),
    [anon_sym_scalar] = ACTIONS(578),
    [anon_sym_type] = ACTIONS(578),
    [anon_sym_interface] = ACTIONS(578),
    [anon_sym_union] = ACTIONS(578),
    [anon_sym_enum] = ACTIONS(578),
    [anon_sym_input] = ACTIONS(578),
    [anon_sym_directive] = ACTIONS(578),
    [sym_comment] = ACTIONS(5),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(582),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(582),
    [anon_sym_mutation] = ACTIONS(582),
    [anon_sym_subscription] = ACTIONS(582),
    [anon_sym_LBRACE] = ACTIONS(582),
    [anon_sym_fragment] = ACTIONS(582),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(582),
    [anon_sym_DQUOTE] = ACTIONS(584),
    [anon_sym_schema] = ACTIONS(582),
    [anon_sym_extends] = ACTIONS(582),
    [anon_sym_extend] = ACTIONS(584),
    [anon_sym_scalar] = ACTIONS(582),
    [anon_sym_type] = ACTIONS(582),
    [anon_sym_interface] = ACTIONS(582),
    [anon_sym_union] = ACTIONS(582),
    [anon_sym_enum] = ACTIONS(582),
    [anon_sym_input] = ACTIONS(582),
    [anon_sym_directive] = ACTIONS(582),
    [sym_comment] = ACTIONS(5),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(586),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(586),
    [anon_sym_mutation] = ACTIONS(586),
    [anon_sym_subscription] = ACTIONS(586),
    [anon_sym_LBRACE] = ACTIONS(586),
    [anon_sym_fragment] = ACTIONS(586),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(586),
    [anon_sym_DQUOTE] = ACTIONS(588),
    [anon_sym_schema] = ACTIONS(586),
    [anon_sym_extends] = ACTIONS(586),
    [anon_sym_extend] = ACTIONS(588),
    [anon_sym_scalar] = ACTIONS(586),
    [anon_sym_type] = ACTIONS(586),
    [anon_sym_interface] = ACTIONS(586),
    [anon_sym_union] = ACTIONS(586),
    [anon_sym_enum] = ACTIONS(586),
    [anon_sym_input] = ACTIONS(586),
    [anon_sym_directive] = ACTIONS(586),
    [sym_comment] = ACTIONS(5),
  },
  [220] = {
    [ts_builtin_sym_end] = ACTIONS(590),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(590),
    [anon_sym_mutation] = ACTIONS(590),
    [anon_sym_subscription] = ACTIONS(590),
    [anon_sym_LBRACE] = ACTIONS(590),
    [anon_sym_fragment] = ACTIONS(590),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(590),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [anon_sym_schema] = ACTIONS(590),
    [anon_sym_extends] = ACTIONS(590),
    [anon_sym_extend] = ACTIONS(592),
    [anon_sym_scalar] = ACTIONS(590),
    [anon_sym_type] = ACTIONS(590),
    [anon_sym_interface] = ACTIONS(590),
    [anon_sym_union] = ACTIONS(590),
    [anon_sym_enum] = ACTIONS(590),
    [anon_sym_input] = ACTIONS(590),
    [anon_sym_directive] = ACTIONS(590),
    [sym_comment] = ACTIONS(5),
  },
  [221] = {
    [sym_Type] = STATE(271),
    [sym_NamedType] = STATE(254),
    [sym_ListType] = STATE(254),
    [sym_NonNullType] = STATE(255),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(516),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [222] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(594),
    [sym_comment] = ACTIONS(5),
  },
  [223] = {
    [sym_ArgumentsDefinition] = STATE(273),
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(594),
    [anon_sym_LPAREN] = ACTIONS(365),
    [sym_comment] = ACTIONS(5),
  },
  [224] = {
    [ts_builtin_sym_end] = ACTIONS(596),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(596),
    [anon_sym_mutation] = ACTIONS(596),
    [anon_sym_subscription] = ACTIONS(596),
    [anon_sym_LBRACE] = ACTIONS(596),
    [anon_sym_fragment] = ACTIONS(596),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(596),
    [anon_sym_DQUOTE] = ACTIONS(598),
    [anon_sym_schema] = ACTIONS(596),
    [anon_sym_extends] = ACTIONS(596),
    [anon_sym_extend] = ACTIONS(598),
    [anon_sym_scalar] = ACTIONS(596),
    [anon_sym_type] = ACTIONS(596),
    [anon_sym_interface] = ACTIONS(596),
    [anon_sym_union] = ACTIONS(596),
    [anon_sym_enum] = ACTIONS(596),
    [anon_sym_input] = ACTIONS(596),
    [anon_sym_directive] = ACTIONS(596),
    [sym_comment] = ACTIONS(5),
  },
  [225] = {
    [sym_StringValue] = STATE(23),
    [sym_Description] = STATE(167),
    [sym_FieldDefinition] = STATE(225),
    [aux_sym_FieldsDefinition_repeat1] = STATE(225),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(600),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(605),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(608),
  },
  [226] = {
    [aux_sym_ImplementsInterfaces_repeat1] = STATE(274),
    [ts_builtin_sym_end] = ACTIONS(611),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(611),
    [anon_sym_mutation] = ACTIONS(611),
    [anon_sym_subscription] = ACTIONS(611),
    [anon_sym_LBRACE] = ACTIONS(611),
    [anon_sym_fragment] = ACTIONS(611),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(611),
    [anon_sym_DQUOTE] = ACTIONS(613),
    [anon_sym_AT] = ACTIONS(611),
    [anon_sym_schema] = ACTIONS(611),
    [anon_sym_extends] = ACTIONS(611),
    [anon_sym_extend] = ACTIONS(613),
    [anon_sym_scalar] = ACTIONS(611),
    [anon_sym_type] = ACTIONS(611),
    [anon_sym_interface] = ACTIONS(611),
    [anon_sym_union] = ACTIONS(611),
    [anon_sym_enum] = ACTIONS(611),
    [anon_sym_input] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(454),
    [anon_sym_directive] = ACTIONS(611),
    [sym_comment] = ACTIONS(5),
  },
  [227] = {
    [sym_NamedType] = STATE(275),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [228] = {
    [aux_sym_ImplementsInterfaces_repeat1] = STATE(276),
    [ts_builtin_sym_end] = ACTIONS(611),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(611),
    [anon_sym_mutation] = ACTIONS(611),
    [anon_sym_subscription] = ACTIONS(611),
    [anon_sym_LBRACE] = ACTIONS(611),
    [anon_sym_fragment] = ACTIONS(611),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(611),
    [anon_sym_DQUOTE] = ACTIONS(613),
    [anon_sym_AT] = ACTIONS(611),
    [anon_sym_schema] = ACTIONS(611),
    [anon_sym_extends] = ACTIONS(611),
    [anon_sym_extend] = ACTIONS(613),
    [anon_sym_scalar] = ACTIONS(611),
    [anon_sym_type] = ACTIONS(611),
    [anon_sym_interface] = ACTIONS(611),
    [anon_sym_union] = ACTIONS(611),
    [anon_sym_enum] = ACTIONS(611),
    [anon_sym_input] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(454),
    [anon_sym_directive] = ACTIONS(611),
    [sym_comment] = ACTIONS(5),
  },
  [229] = {
    [ts_builtin_sym_end] = ACTIONS(615),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(615),
    [anon_sym_mutation] = ACTIONS(615),
    [anon_sym_subscription] = ACTIONS(615),
    [anon_sym_LBRACE] = ACTIONS(615),
    [anon_sym_fragment] = ACTIONS(615),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(615),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [anon_sym_schema] = ACTIONS(615),
    [anon_sym_extends] = ACTIONS(615),
    [anon_sym_extend] = ACTIONS(617),
    [anon_sym_scalar] = ACTIONS(615),
    [anon_sym_type] = ACTIONS(615),
    [anon_sym_interface] = ACTIONS(615),
    [anon_sym_union] = ACTIONS(615),
    [anon_sym_enum] = ACTIONS(615),
    [anon_sym_input] = ACTIONS(615),
    [anon_sym_directive] = ACTIONS(615),
    [sym_comment] = ACTIONS(5),
  },
  [230] = {
    [aux_sym_UnionMemberTypes_repeat1] = STATE(277),
    [ts_builtin_sym_end] = ACTIONS(619),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(619),
    [anon_sym_mutation] = ACTIONS(619),
    [anon_sym_subscription] = ACTIONS(619),
    [anon_sym_LBRACE] = ACTIONS(619),
    [anon_sym_fragment] = ACTIONS(619),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(621),
    [anon_sym_schema] = ACTIONS(619),
    [anon_sym_extends] = ACTIONS(619),
    [anon_sym_extend] = ACTIONS(621),
    [anon_sym_scalar] = ACTIONS(619),
    [anon_sym_type] = ACTIONS(619),
    [anon_sym_interface] = ACTIONS(619),
    [anon_sym_union] = ACTIONS(619),
    [anon_sym_enum] = ACTIONS(619),
    [anon_sym_input] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_directive] = ACTIONS(619),
    [sym_comment] = ACTIONS(5),
  },
  [231] = {
    [sym_NamedType] = STATE(278),
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [232] = {
    [aux_sym_UnionMemberTypes_repeat1] = STATE(279),
    [ts_builtin_sym_end] = ACTIONS(619),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(619),
    [anon_sym_mutation] = ACTIONS(619),
    [anon_sym_subscription] = ACTIONS(619),
    [anon_sym_LBRACE] = ACTIONS(619),
    [anon_sym_fragment] = ACTIONS(619),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(621),
    [anon_sym_schema] = ACTIONS(619),
    [anon_sym_extends] = ACTIONS(619),
    [anon_sym_extend] = ACTIONS(621),
    [anon_sym_scalar] = ACTIONS(619),
    [anon_sym_type] = ACTIONS(619),
    [anon_sym_interface] = ACTIONS(619),
    [anon_sym_union] = ACTIONS(619),
    [anon_sym_enum] = ACTIONS(619),
    [anon_sym_input] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_directive] = ACTIONS(619),
    [sym_comment] = ACTIONS(5),
  },
  [233] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(623),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(623),
    [anon_sym_DQUOTE] = ACTIONS(625),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(623),
  },
  [234] = {
    [sym_Directive] = STATE(280),
    [aux_sym_Directives_repeat1] = STATE(280),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(165),
  },
  [235] = {
    [sym_Directives] = STATE(281),
    [sym_Directive] = STATE(234),
    [aux_sym_Directives_repeat1] = STATE(234),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(623),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(623),
    [anon_sym_DQUOTE] = ACTIONS(625),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(623),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(627),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(627),
    [anon_sym_mutation] = ACTIONS(627),
    [anon_sym_subscription] = ACTIONS(627),
    [anon_sym_LBRACE] = ACTIONS(627),
    [anon_sym_fragment] = ACTIONS(627),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(627),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [anon_sym_schema] = ACTIONS(627),
    [anon_sym_extends] = ACTIONS(627),
    [anon_sym_extend] = ACTIONS(629),
    [anon_sym_scalar] = ACTIONS(627),
    [anon_sym_type] = ACTIONS(627),
    [anon_sym_interface] = ACTIONS(627),
    [anon_sym_union] = ACTIONS(627),
    [anon_sym_enum] = ACTIONS(627),
    [anon_sym_input] = ACTIONS(627),
    [anon_sym_directive] = ACTIONS(627),
    [sym_comment] = ACTIONS(5),
  },
  [237] = {
    [sym_EnumValue] = STATE(179),
    [sym_StringValue] = STATE(23),
    [sym_Description] = STATE(180),
    [sym_EnumValueDefinition] = STATE(237),
    [aux_sym_EnumValuesDefinition_repeat1] = STATE(237),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(631),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(633),
    [anon_sym_DQUOTE] = ACTIONS(636),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(639),
  },
  [238] = {
    [sym_Type] = STATE(282),
    [sym_NamedType] = STATE(254),
    [sym_ListType] = STATE(254),
    [sym_NonNullType] = STATE(255),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(516),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [239] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(642),
    [sym_comment] = ACTIONS(5),
  },
  [240] = {
    [ts_builtin_sym_end] = ACTIONS(644),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(644),
    [anon_sym_mutation] = ACTIONS(644),
    [anon_sym_subscription] = ACTIONS(644),
    [anon_sym_LBRACE] = ACTIONS(644),
    [anon_sym_fragment] = ACTIONS(644),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(644),
    [anon_sym_DQUOTE] = ACTIONS(646),
    [anon_sym_schema] = ACTIONS(644),
    [anon_sym_extends] = ACTIONS(644),
    [anon_sym_extend] = ACTIONS(646),
    [anon_sym_scalar] = ACTIONS(644),
    [anon_sym_type] = ACTIONS(644),
    [anon_sym_interface] = ACTIONS(644),
    [anon_sym_union] = ACTIONS(644),
    [anon_sym_enum] = ACTIONS(644),
    [anon_sym_input] = ACTIONS(644),
    [anon_sym_directive] = ACTIONS(644),
    [sym_comment] = ACTIONS(5),
  },
  [241] = {
    [sym_StringValue] = STATE(23),
    [sym_Description] = STATE(184),
    [sym_InputValueDefinition] = STATE(241),
    [aux_sym_ArgumentsDefinition_repeat1] = STATE(241),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(648),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(650),
    [anon_sym_DQUOTE] = ACTIONS(653),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(656),
  },
  [242] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(659),
    [sym_comment] = ACTIONS(5),
  },
  [243] = {
    [sym_comma] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(661),
  },
  [244] = {
    [sym_StringValue] = STATE(23),
    [sym_Description] = STATE(243),
    [sym_InputValueDefinition] = STATE(287),
    [aux_sym_ArgumentsDefinition_repeat1] = STATE(287),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(498),
  },
  [245] = {
    [sym_DirectiveLocation] = STATE(288),
    [sym_ExecutableDirectiveLocation] = STATE(250),
    [sym_TypeSystemDirectiveLocation] = STATE(250),
    [sym_comma] = ACTIONS(5),
    [anon_sym_QUERY] = ACTIONS(502),
    [anon_sym_MUTATION] = ACTIONS(502),
    [anon_sym_SUBSCRIPTION] = ACTIONS(502),
    [anon_sym_FIELD] = ACTIONS(504),
    [anon_sym_FRAGMENT_DEFINITION] = ACTIONS(502),
    [anon_sym_FRAGMENT_SPREAD] = ACTIONS(502),
    [anon_sym_INLINE_FRAGMENT] = ACTIONS(502),
    [anon_sym_VARIABLE_DEFINITION] = ACTIONS(502),
    [anon_sym_SCHEMA] = ACTIONS(506),
    [anon_sym_SCALAR] = ACTIONS(506),
    [anon_sym_OBJECT] = ACTIONS(506),
    [anon_sym_FIELD_DEFINITION] = ACTIONS(506),
    [anon_sym_ARGUMENT_DEFINITION] = ACTIONS(506),
    [anon_sym_INTERFACE] = ACTIONS(506),
    [anon_sym_UNION] = ACTIONS(506),
    [anon_sym_ENUM] = ACTIONS(508),
    [anon_sym_ENUM_VALUE] = ACTIONS(506),
    [anon_sym_INPUT_OBJECT] = ACTIONS(506),
    [anon_sym_INPUT_FIELD_DEFINITION] = ACTIONS(506),
    [sym_comment] = ACTIONS(5),
  },
  [246] = {
    [ts_builtin_sym_end] = ACTIONS(665),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(665),
    [anon_sym_mutation] = ACTIONS(665),
    [anon_sym_subscription] = ACTIONS(665),
    [anon_sym_LBRACE] = ACTIONS(665),
    [anon_sym_fragment] = ACTIONS(665),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(665),
    [anon_sym_DQUOTE] = ACTIONS(667),
    [anon_sym_schema] = ACTIONS(665),
    [anon_sym_extends] = ACTIONS(665),
    [anon_sym_extend] = ACTIONS(667),
    [anon_sym_scalar] = ACTIONS(665),
    [anon_sym_type] = ACTIONS(665),
    [anon_sym_interface] = ACTIONS(665),
    [anon_sym_union] = ACTIONS(665),
    [anon_sym_enum] = ACTIONS(665),
    [anon_sym_input] = ACTIONS(665),
    [anon_sym_PIPE] = ACTIONS(665),
    [anon_sym_directive] = ACTIONS(665),
    [sym_comment] = ACTIONS(5),
  },
  [247] = {
    [ts_builtin_sym_end] = ACTIONS(669),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(669),
    [anon_sym_mutation] = ACTIONS(669),
    [anon_sym_subscription] = ACTIONS(669),
    [anon_sym_LBRACE] = ACTIONS(669),
    [anon_sym_fragment] = ACTIONS(669),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(669),
    [anon_sym_DQUOTE] = ACTIONS(671),
    [anon_sym_schema] = ACTIONS(669),
    [anon_sym_extends] = ACTIONS(669),
    [anon_sym_extend] = ACTIONS(671),
    [anon_sym_scalar] = ACTIONS(669),
    [anon_sym_type] = ACTIONS(669),
    [anon_sym_interface] = ACTIONS(669),
    [anon_sym_union] = ACTIONS(669),
    [anon_sym_enum] = ACTIONS(669),
    [anon_sym_input] = ACTIONS(669),
    [anon_sym_PIPE] = ACTIONS(669),
    [anon_sym_directive] = ACTIONS(669),
    [sym_comment] = ACTIONS(5),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(673),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(673),
    [anon_sym_mutation] = ACTIONS(673),
    [anon_sym_subscription] = ACTIONS(673),
    [anon_sym_LBRACE] = ACTIONS(673),
    [anon_sym_fragment] = ACTIONS(673),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(673),
    [anon_sym_DQUOTE] = ACTIONS(675),
    [anon_sym_schema] = ACTIONS(673),
    [anon_sym_extends] = ACTIONS(673),
    [anon_sym_extend] = ACTIONS(675),
    [anon_sym_scalar] = ACTIONS(673),
    [anon_sym_type] = ACTIONS(673),
    [anon_sym_interface] = ACTIONS(673),
    [anon_sym_union] = ACTIONS(673),
    [anon_sym_enum] = ACTIONS(673),
    [anon_sym_input] = ACTIONS(673),
    [anon_sym_directive] = ACTIONS(673),
    [sym_comment] = ACTIONS(5),
  },
  [249] = {
    [aux_sym_DirectiveLocations_repeat1] = STATE(290),
    [ts_builtin_sym_end] = ACTIONS(677),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(677),
    [anon_sym_mutation] = ACTIONS(677),
    [anon_sym_subscription] = ACTIONS(677),
    [anon_sym_LBRACE] = ACTIONS(677),
    [anon_sym_fragment] = ACTIONS(677),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(677),
    [anon_sym_DQUOTE] = ACTIONS(679),
    [anon_sym_schema] = ACTIONS(677),
    [anon_sym_extends] = ACTIONS(677),
    [anon_sym_extend] = ACTIONS(679),
    [anon_sym_scalar] = ACTIONS(677),
    [anon_sym_type] = ACTIONS(677),
    [anon_sym_interface] = ACTIONS(677),
    [anon_sym_union] = ACTIONS(677),
    [anon_sym_enum] = ACTIONS(677),
    [anon_sym_input] = ACTIONS(677),
    [anon_sym_PIPE] = ACTIONS(681),
    [anon_sym_directive] = ACTIONS(677),
    [sym_comment] = ACTIONS(5),
  },
  [250] = {
    [ts_builtin_sym_end] = ACTIONS(683),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(683),
    [anon_sym_mutation] = ACTIONS(683),
    [anon_sym_subscription] = ACTIONS(683),
    [anon_sym_LBRACE] = ACTIONS(683),
    [anon_sym_fragment] = ACTIONS(683),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(683),
    [anon_sym_DQUOTE] = ACTIONS(685),
    [anon_sym_schema] = ACTIONS(683),
    [anon_sym_extends] = ACTIONS(683),
    [anon_sym_extend] = ACTIONS(685),
    [anon_sym_scalar] = ACTIONS(683),
    [anon_sym_type] = ACTIONS(683),
    [anon_sym_interface] = ACTIONS(683),
    [anon_sym_union] = ACTIONS(683),
    [anon_sym_enum] = ACTIONS(683),
    [anon_sym_input] = ACTIONS(683),
    [anon_sym_PIPE] = ACTIONS(683),
    [anon_sym_directive] = ACTIONS(683),
    [sym_comment] = ACTIONS(5),
  },
  [251] = {
    [sym_DirectiveLocations] = STATE(291),
    [sym_DirectiveLocation] = STATE(249),
    [sym_ExecutableDirectiveLocation] = STATE(250),
    [sym_TypeSystemDirectiveLocation] = STATE(250),
    [sym_comma] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_QUERY] = ACTIONS(502),
    [anon_sym_MUTATION] = ACTIONS(502),
    [anon_sym_SUBSCRIPTION] = ACTIONS(502),
    [anon_sym_FIELD] = ACTIONS(504),
    [anon_sym_FRAGMENT_DEFINITION] = ACTIONS(502),
    [anon_sym_FRAGMENT_SPREAD] = ACTIONS(502),
    [anon_sym_INLINE_FRAGMENT] = ACTIONS(502),
    [anon_sym_VARIABLE_DEFINITION] = ACTIONS(502),
    [anon_sym_SCHEMA] = ACTIONS(506),
    [anon_sym_SCALAR] = ACTIONS(506),
    [anon_sym_OBJECT] = ACTIONS(506),
    [anon_sym_FIELD_DEFINITION] = ACTIONS(506),
    [anon_sym_ARGUMENT_DEFINITION] = ACTIONS(506),
    [anon_sym_INTERFACE] = ACTIONS(506),
    [anon_sym_UNION] = ACTIONS(506),
    [anon_sym_ENUM] = ACTIONS(508),
    [anon_sym_ENUM_VALUE] = ACTIONS(506),
    [anon_sym_INPUT_OBJECT] = ACTIONS(506),
    [anon_sym_INPUT_FIELD_DEFINITION] = ACTIONS(506),
    [sym_comment] = ACTIONS(5),
  },
  [252] = {
    [sym_Type] = STATE(292),
    [sym_NamedType] = STATE(254),
    [sym_ListType] = STATE(254),
    [sym_NonNullType] = STATE(255),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(516),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [253] = {
    [sym_DefaultValue] = STATE(294),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(687),
    [anon_sym_DOLLAR] = ACTIONS(687),
    [anon_sym_EQ] = ACTIONS(689),
    [sym_comment] = ACTIONS(5),
  },
  [254] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(691),
    [anon_sym_RBRACK] = ACTIONS(691),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(691),
    [anon_sym_DQUOTE] = ACTIONS(693),
    [anon_sym_DOLLAR] = ACTIONS(691),
    [anon_sym_EQ] = ACTIONS(691),
    [anon_sym_BANG] = ACTIONS(695),
    [anon_sym_AT] = ACTIONS(691),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(691),
  },
  [255] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(691),
    [anon_sym_RBRACK] = ACTIONS(691),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(691),
    [anon_sym_DQUOTE] = ACTIONS(693),
    [anon_sym_DOLLAR] = ACTIONS(691),
    [anon_sym_EQ] = ACTIONS(691),
    [anon_sym_AT] = ACTIONS(691),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(691),
  },
  [256] = {
    [ts_builtin_sym_end] = ACTIONS(697),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(697),
    [anon_sym_mutation] = ACTIONS(697),
    [anon_sym_subscription] = ACTIONS(697),
    [anon_sym_LBRACE] = ACTIONS(697),
    [anon_sym_fragment] = ACTIONS(697),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(697),
    [anon_sym_DQUOTE] = ACTIONS(699),
    [anon_sym_schema] = ACTIONS(697),
    [anon_sym_extends] = ACTIONS(697),
    [anon_sym_extend] = ACTIONS(699),
    [anon_sym_scalar] = ACTIONS(697),
    [anon_sym_type] = ACTIONS(697),
    [anon_sym_interface] = ACTIONS(697),
    [anon_sym_union] = ACTIONS(697),
    [anon_sym_enum] = ACTIONS(697),
    [anon_sym_input] = ACTIONS(697),
    [anon_sym_directive] = ACTIONS(697),
    [sym_comment] = ACTIONS(5),
  },
  [257] = {
    [sym_FieldsDefinition] = STATE(296),
    [ts_builtin_sym_end] = ACTIONS(615),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(615),
    [anon_sym_mutation] = ACTIONS(615),
    [anon_sym_subscription] = ACTIONS(615),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_fragment] = ACTIONS(615),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(615),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [anon_sym_schema] = ACTIONS(615),
    [anon_sym_extends] = ACTIONS(615),
    [anon_sym_extend] = ACTIONS(617),
    [anon_sym_scalar] = ACTIONS(615),
    [anon_sym_type] = ACTIONS(615),
    [anon_sym_interface] = ACTIONS(615),
    [anon_sym_union] = ACTIONS(615),
    [anon_sym_enum] = ACTIONS(615),
    [anon_sym_input] = ACTIONS(615),
    [anon_sym_directive] = ACTIONS(615),
    [sym_comment] = ACTIONS(5),
  },
  [258] = {
    [ts_builtin_sym_end] = ACTIONS(701),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(701),
    [anon_sym_mutation] = ACTIONS(701),
    [anon_sym_subscription] = ACTIONS(701),
    [anon_sym_LBRACE] = ACTIONS(701),
    [anon_sym_fragment] = ACTIONS(701),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(701),
    [anon_sym_DQUOTE] = ACTIONS(703),
    [anon_sym_schema] = ACTIONS(701),
    [anon_sym_extends] = ACTIONS(701),
    [anon_sym_extend] = ACTIONS(703),
    [anon_sym_scalar] = ACTIONS(701),
    [anon_sym_type] = ACTIONS(701),
    [anon_sym_interface] = ACTIONS(701),
    [anon_sym_union] = ACTIONS(701),
    [anon_sym_enum] = ACTIONS(701),
    [anon_sym_input] = ACTIONS(701),
    [anon_sym_directive] = ACTIONS(701),
    [sym_comment] = ACTIONS(5),
  },
  [259] = {
    [ts_builtin_sym_end] = ACTIONS(705),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(705),
    [anon_sym_mutation] = ACTIONS(705),
    [anon_sym_subscription] = ACTIONS(705),
    [anon_sym_LBRACE] = ACTIONS(705),
    [anon_sym_fragment] = ACTIONS(705),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(705),
    [anon_sym_DQUOTE] = ACTIONS(707),
    [anon_sym_schema] = ACTIONS(705),
    [anon_sym_extends] = ACTIONS(705),
    [anon_sym_extend] = ACTIONS(707),
    [anon_sym_scalar] = ACTIONS(705),
    [anon_sym_type] = ACTIONS(705),
    [anon_sym_interface] = ACTIONS(705),
    [anon_sym_union] = ACTIONS(705),
    [anon_sym_enum] = ACTIONS(705),
    [anon_sym_input] = ACTIONS(705),
    [anon_sym_directive] = ACTIONS(705),
    [sym_comment] = ACTIONS(5),
  },
  [260] = {
    [ts_builtin_sym_end] = ACTIONS(709),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(709),
    [anon_sym_mutation] = ACTIONS(709),
    [anon_sym_subscription] = ACTIONS(709),
    [anon_sym_LBRACE] = ACTIONS(709),
    [anon_sym_fragment] = ACTIONS(709),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(709),
    [anon_sym_DQUOTE] = ACTIONS(711),
    [anon_sym_schema] = ACTIONS(709),
    [anon_sym_extends] = ACTIONS(709),
    [anon_sym_extend] = ACTIONS(711),
    [anon_sym_scalar] = ACTIONS(709),
    [anon_sym_type] = ACTIONS(709),
    [anon_sym_interface] = ACTIONS(709),
    [anon_sym_union] = ACTIONS(709),
    [anon_sym_enum] = ACTIONS(709),
    [anon_sym_input] = ACTIONS(709),
    [anon_sym_directive] = ACTIONS(709),
    [sym_comment] = ACTIONS(5),
  },
  [261] = {
    [ts_builtin_sym_end] = ACTIONS(713),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(713),
    [anon_sym_mutation] = ACTIONS(713),
    [anon_sym_subscription] = ACTIONS(713),
    [anon_sym_LBRACE] = ACTIONS(713),
    [anon_sym_fragment] = ACTIONS(713),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(713),
    [anon_sym_DQUOTE] = ACTIONS(715),
    [anon_sym_schema] = ACTIONS(713),
    [anon_sym_extends] = ACTIONS(713),
    [anon_sym_extend] = ACTIONS(715),
    [anon_sym_scalar] = ACTIONS(713),
    [anon_sym_type] = ACTIONS(713),
    [anon_sym_interface] = ACTIONS(713),
    [anon_sym_union] = ACTIONS(713),
    [anon_sym_enum] = ACTIONS(713),
    [anon_sym_input] = ACTIONS(713),
    [anon_sym_directive] = ACTIONS(713),
    [sym_comment] = ACTIONS(5),
  },
  [262] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_on] = ACTIONS(717),
    [sym_comment] = ACTIONS(5),
  },
  [263] = {
    [sym_ObjectField] = STATE(300),
    [aux_sym_ObjectValue_repeat1] = STATE(300),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(719),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(721),
  },
  [264] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(723),
    [anon_sym_RBRACE] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(723),
    [anon_sym_false] = ACTIONS(725),
    [anon_sym_true] = ACTIONS(725),
    [sym_NullValue] = ACTIONS(725),
    [anon_sym_LBRACK] = ACTIONS(723),
    [anon_sym_RBRACK] = ACTIONS(723),
    [sym_IntValue] = ACTIONS(725),
    [sym_FloatValue] = ACTIONS(723),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(723),
    [anon_sym_DQUOTE] = ACTIONS(725),
    [anon_sym_DOLLAR] = ACTIONS(723),
    [anon_sym_AT] = ACTIONS(723),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(725),
  },
  [265] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(727),
    [anon_sym_RBRACE] = ACTIONS(727),
    [anon_sym_RPAREN] = ACTIONS(727),
    [anon_sym_false] = ACTIONS(729),
    [anon_sym_true] = ACTIONS(729),
    [sym_NullValue] = ACTIONS(729),
    [anon_sym_LBRACK] = ACTIONS(727),
    [anon_sym_RBRACK] = ACTIONS(727),
    [sym_IntValue] = ACTIONS(729),
    [sym_FloatValue] = ACTIONS(727),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(727),
    [anon_sym_DQUOTE] = ACTIONS(729),
    [anon_sym_DOLLAR] = ACTIONS(727),
    [anon_sym_AT] = ACTIONS(727),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(729),
  },
  [266] = {
    [sym_Value] = STATE(302),
    [sym_BooleanValue] = STATE(265),
    [sym_EnumValue] = STATE(265),
    [sym_ListValue] = STATE(265),
    [sym_ObjectValue] = STATE(265),
    [sym_StringValue] = STATE(265),
    [sym_Variable] = STATE(265),
    [aux_sym_ListValue_repeat1] = STATE(302),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(535),
    [anon_sym_false] = ACTIONS(537),
    [anon_sym_true] = ACTIONS(537),
    [sym_NullValue] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(541),
    [anon_sym_RBRACK] = ACTIONS(731),
    [sym_IntValue] = ACTIONS(539),
    [sym_FloatValue] = ACTIONS(543),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(545),
  },
  [267] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(733),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(733),
  },
  [268] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(735),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(735),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(735),
  },
  [269] = {
    [ts_builtin_sym_end] = ACTIONS(737),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(737),
    [anon_sym_mutation] = ACTIONS(737),
    [anon_sym_subscription] = ACTIONS(737),
    [anon_sym_LBRACE] = ACTIONS(737),
    [anon_sym_fragment] = ACTIONS(737),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(737),
    [anon_sym_DQUOTE] = ACTIONS(739),
    [anon_sym_schema] = ACTIONS(737),
    [anon_sym_extends] = ACTIONS(737),
    [anon_sym_extend] = ACTIONS(739),
    [anon_sym_scalar] = ACTIONS(737),
    [anon_sym_type] = ACTIONS(737),
    [anon_sym_interface] = ACTIONS(737),
    [anon_sym_union] = ACTIONS(737),
    [anon_sym_enum] = ACTIONS(737),
    [anon_sym_input] = ACTIONS(737),
    [anon_sym_directive] = ACTIONS(737),
    [sym_comment] = ACTIONS(5),
  },
  [270] = {
    [ts_builtin_sym_end] = ACTIONS(741),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(741),
    [anon_sym_mutation] = ACTIONS(741),
    [anon_sym_subscription] = ACTIONS(741),
    [anon_sym_LBRACE] = ACTIONS(741),
    [anon_sym_fragment] = ACTIONS(741),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(741),
    [anon_sym_DQUOTE] = ACTIONS(743),
    [anon_sym_schema] = ACTIONS(741),
    [anon_sym_extends] = ACTIONS(741),
    [anon_sym_extend] = ACTIONS(743),
    [anon_sym_scalar] = ACTIONS(741),
    [anon_sym_type] = ACTIONS(741),
    [anon_sym_interface] = ACTIONS(741),
    [anon_sym_union] = ACTIONS(741),
    [anon_sym_enum] = ACTIONS(741),
    [anon_sym_input] = ACTIONS(741),
    [anon_sym_directive] = ACTIONS(741),
    [sym_comment] = ACTIONS(5),
  },
  [271] = {
    [sym_Directive] = STATE(303),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(745),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(745),
    [anon_sym_DQUOTE] = ACTIONS(747),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(745),
  },
  [272] = {
    [sym_Type] = STATE(304),
    [sym_NamedType] = STATE(254),
    [sym_ListType] = STATE(254),
    [sym_NonNullType] = STATE(255),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(516),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [273] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(749),
    [sym_comment] = ACTIONS(5),
  },
  [274] = {
    [aux_sym_ImplementsInterfaces_repeat1] = STATE(276),
    [ts_builtin_sym_end] = ACTIONS(751),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(751),
    [anon_sym_mutation] = ACTIONS(751),
    [anon_sym_subscription] = ACTIONS(751),
    [anon_sym_LBRACE] = ACTIONS(751),
    [anon_sym_fragment] = ACTIONS(751),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(751),
    [anon_sym_DQUOTE] = ACTIONS(753),
    [anon_sym_AT] = ACTIONS(751),
    [anon_sym_schema] = ACTIONS(751),
    [anon_sym_extends] = ACTIONS(751),
    [anon_sym_extend] = ACTIONS(753),
    [anon_sym_scalar] = ACTIONS(751),
    [anon_sym_type] = ACTIONS(751),
    [anon_sym_interface] = ACTIONS(751),
    [anon_sym_union] = ACTIONS(751),
    [anon_sym_enum] = ACTIONS(751),
    [anon_sym_input] = ACTIONS(751),
    [anon_sym_AMP] = ACTIONS(454),
    [anon_sym_directive] = ACTIONS(751),
    [sym_comment] = ACTIONS(5),
  },
  [275] = {
    [ts_builtin_sym_end] = ACTIONS(755),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(755),
    [anon_sym_mutation] = ACTIONS(755),
    [anon_sym_subscription] = ACTIONS(755),
    [anon_sym_LBRACE] = ACTIONS(755),
    [anon_sym_fragment] = ACTIONS(755),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(757),
    [anon_sym_AT] = ACTIONS(755),
    [anon_sym_schema] = ACTIONS(755),
    [anon_sym_extends] = ACTIONS(755),
    [anon_sym_extend] = ACTIONS(757),
    [anon_sym_scalar] = ACTIONS(755),
    [anon_sym_type] = ACTIONS(755),
    [anon_sym_interface] = ACTIONS(755),
    [anon_sym_union] = ACTIONS(755),
    [anon_sym_enum] = ACTIONS(755),
    [anon_sym_input] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
    [anon_sym_directive] = ACTIONS(755),
    [sym_comment] = ACTIONS(5),
  },
  [276] = {
    [aux_sym_ImplementsInterfaces_repeat1] = STATE(276),
    [ts_builtin_sym_end] = ACTIONS(755),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(755),
    [anon_sym_mutation] = ACTIONS(755),
    [anon_sym_subscription] = ACTIONS(755),
    [anon_sym_LBRACE] = ACTIONS(755),
    [anon_sym_fragment] = ACTIONS(755),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(757),
    [anon_sym_AT] = ACTIONS(755),
    [anon_sym_schema] = ACTIONS(755),
    [anon_sym_extends] = ACTIONS(755),
    [anon_sym_extend] = ACTIONS(757),
    [anon_sym_scalar] = ACTIONS(755),
    [anon_sym_type] = ACTIONS(755),
    [anon_sym_interface] = ACTIONS(755),
    [anon_sym_union] = ACTIONS(755),
    [anon_sym_enum] = ACTIONS(755),
    [anon_sym_input] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(759),
    [anon_sym_directive] = ACTIONS(755),
    [sym_comment] = ACTIONS(5),
  },
  [277] = {
    [aux_sym_UnionMemberTypes_repeat1] = STATE(279),
    [ts_builtin_sym_end] = ACTIONS(762),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(762),
    [anon_sym_mutation] = ACTIONS(762),
    [anon_sym_subscription] = ACTIONS(762),
    [anon_sym_LBRACE] = ACTIONS(762),
    [anon_sym_fragment] = ACTIONS(762),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(762),
    [anon_sym_DQUOTE] = ACTIONS(764),
    [anon_sym_schema] = ACTIONS(762),
    [anon_sym_extends] = ACTIONS(762),
    [anon_sym_extend] = ACTIONS(764),
    [anon_sym_scalar] = ACTIONS(762),
    [anon_sym_type] = ACTIONS(762),
    [anon_sym_interface] = ACTIONS(762),
    [anon_sym_union] = ACTIONS(762),
    [anon_sym_enum] = ACTIONS(762),
    [anon_sym_input] = ACTIONS(762),
    [anon_sym_PIPE] = ACTIONS(468),
    [anon_sym_directive] = ACTIONS(762),
    [sym_comment] = ACTIONS(5),
  },
  [278] = {
    [ts_builtin_sym_end] = ACTIONS(766),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(766),
    [anon_sym_mutation] = ACTIONS(766),
    [anon_sym_subscription] = ACTIONS(766),
    [anon_sym_LBRACE] = ACTIONS(766),
    [anon_sym_fragment] = ACTIONS(766),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(766),
    [anon_sym_DQUOTE] = ACTIONS(768),
    [anon_sym_schema] = ACTIONS(766),
    [anon_sym_extends] = ACTIONS(766),
    [anon_sym_extend] = ACTIONS(768),
    [anon_sym_scalar] = ACTIONS(766),
    [anon_sym_type] = ACTIONS(766),
    [anon_sym_interface] = ACTIONS(766),
    [anon_sym_union] = ACTIONS(766),
    [anon_sym_enum] = ACTIONS(766),
    [anon_sym_input] = ACTIONS(766),
    [anon_sym_PIPE] = ACTIONS(766),
    [anon_sym_directive] = ACTIONS(766),
    [sym_comment] = ACTIONS(5),
  },
  [279] = {
    [aux_sym_UnionMemberTypes_repeat1] = STATE(279),
    [ts_builtin_sym_end] = ACTIONS(766),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(766),
    [anon_sym_mutation] = ACTIONS(766),
    [anon_sym_subscription] = ACTIONS(766),
    [anon_sym_LBRACE] = ACTIONS(766),
    [anon_sym_fragment] = ACTIONS(766),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(766),
    [anon_sym_DQUOTE] = ACTIONS(768),
    [anon_sym_schema] = ACTIONS(766),
    [anon_sym_extends] = ACTIONS(766),
    [anon_sym_extend] = ACTIONS(768),
    [anon_sym_scalar] = ACTIONS(766),
    [anon_sym_type] = ACTIONS(766),
    [anon_sym_interface] = ACTIONS(766),
    [anon_sym_union] = ACTIONS(766),
    [anon_sym_enum] = ACTIONS(766),
    [anon_sym_input] = ACTIONS(766),
    [anon_sym_PIPE] = ACTIONS(770),
    [anon_sym_directive] = ACTIONS(766),
    [sym_comment] = ACTIONS(5),
  },
  [280] = {
    [sym_Directive] = STATE(280),
    [aux_sym_Directives_repeat1] = STATE(280),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(320),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(418),
    [anon_sym_AT] = ACTIONS(322),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(320),
  },
  [281] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(773),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(773),
    [anon_sym_DQUOTE] = ACTIONS(775),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(773),
  },
  [282] = {
    [sym_DefaultValue] = STATE(306),
    [sym_Directives] = STATE(307),
    [sym_Directive] = STATE(234),
    [aux_sym_Directives_repeat1] = STATE(234),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(777),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(777),
    [anon_sym_DQUOTE] = ACTIONS(779),
    [anon_sym_EQ] = ACTIONS(689),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(777),
  },
  [283] = {
    [sym_Type] = STATE(308),
    [sym_NamedType] = STATE(254),
    [sym_ListType] = STATE(254),
    [sym_NonNullType] = STATE(255),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(516),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [284] = {
    [sym_Type] = STATE(309),
    [sym_NamedType] = STATE(254),
    [sym_ListType] = STATE(254),
    [sym_NonNullType] = STATE(255),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(516),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [285] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(781),
    [sym_comment] = ACTIONS(5),
  },
  [286] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(783),
    [anon_sym_on] = ACTIONS(783),
    [sym_comment] = ACTIONS(5),
  },
  [287] = {
    [sym_StringValue] = STATE(23),
    [sym_Description] = STATE(243),
    [sym_InputValueDefinition] = STATE(287),
    [aux_sym_ArgumentsDefinition_repeat1] = STATE(287),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(648),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(650),
    [anon_sym_DQUOTE] = ACTIONS(653),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(785),
  },
  [288] = {
    [aux_sym_DirectiveLocations_repeat1] = STATE(311),
    [ts_builtin_sym_end] = ACTIONS(788),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(788),
    [anon_sym_mutation] = ACTIONS(788),
    [anon_sym_subscription] = ACTIONS(788),
    [anon_sym_LBRACE] = ACTIONS(788),
    [anon_sym_fragment] = ACTIONS(788),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(788),
    [anon_sym_DQUOTE] = ACTIONS(790),
    [anon_sym_schema] = ACTIONS(788),
    [anon_sym_extends] = ACTIONS(788),
    [anon_sym_extend] = ACTIONS(790),
    [anon_sym_scalar] = ACTIONS(788),
    [anon_sym_type] = ACTIONS(788),
    [anon_sym_interface] = ACTIONS(788),
    [anon_sym_union] = ACTIONS(788),
    [anon_sym_enum] = ACTIONS(788),
    [anon_sym_input] = ACTIONS(788),
    [anon_sym_PIPE] = ACTIONS(681),
    [anon_sym_directive] = ACTIONS(788),
    [sym_comment] = ACTIONS(5),
  },
  [289] = {
    [sym_DirectiveLocation] = STATE(312),
    [sym_ExecutableDirectiveLocation] = STATE(250),
    [sym_TypeSystemDirectiveLocation] = STATE(250),
    [sym_comma] = ACTIONS(5),
    [anon_sym_QUERY] = ACTIONS(502),
    [anon_sym_MUTATION] = ACTIONS(502),
    [anon_sym_SUBSCRIPTION] = ACTIONS(502),
    [anon_sym_FIELD] = ACTIONS(504),
    [anon_sym_FRAGMENT_DEFINITION] = ACTIONS(502),
    [anon_sym_FRAGMENT_SPREAD] = ACTIONS(502),
    [anon_sym_INLINE_FRAGMENT] = ACTIONS(502),
    [anon_sym_VARIABLE_DEFINITION] = ACTIONS(502),
    [anon_sym_SCHEMA] = ACTIONS(506),
    [anon_sym_SCALAR] = ACTIONS(506),
    [anon_sym_OBJECT] = ACTIONS(506),
    [anon_sym_FIELD_DEFINITION] = ACTIONS(506),
    [anon_sym_ARGUMENT_DEFINITION] = ACTIONS(506),
    [anon_sym_INTERFACE] = ACTIONS(506),
    [anon_sym_UNION] = ACTIONS(506),
    [anon_sym_ENUM] = ACTIONS(508),
    [anon_sym_ENUM_VALUE] = ACTIONS(506),
    [anon_sym_INPUT_OBJECT] = ACTIONS(506),
    [anon_sym_INPUT_FIELD_DEFINITION] = ACTIONS(506),
    [sym_comment] = ACTIONS(5),
  },
  [290] = {
    [aux_sym_DirectiveLocations_repeat1] = STATE(313),
    [ts_builtin_sym_end] = ACTIONS(788),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(788),
    [anon_sym_mutation] = ACTIONS(788),
    [anon_sym_subscription] = ACTIONS(788),
    [anon_sym_LBRACE] = ACTIONS(788),
    [anon_sym_fragment] = ACTIONS(788),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(788),
    [anon_sym_DQUOTE] = ACTIONS(790),
    [anon_sym_schema] = ACTIONS(788),
    [anon_sym_extends] = ACTIONS(788),
    [anon_sym_extend] = ACTIONS(790),
    [anon_sym_scalar] = ACTIONS(788),
    [anon_sym_type] = ACTIONS(788),
    [anon_sym_interface] = ACTIONS(788),
    [anon_sym_union] = ACTIONS(788),
    [anon_sym_enum] = ACTIONS(788),
    [anon_sym_input] = ACTIONS(788),
    [anon_sym_PIPE] = ACTIONS(681),
    [anon_sym_directive] = ACTIONS(788),
    [sym_comment] = ACTIONS(5),
  },
  [291] = {
    [ts_builtin_sym_end] = ACTIONS(792),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(792),
    [anon_sym_mutation] = ACTIONS(792),
    [anon_sym_subscription] = ACTIONS(792),
    [anon_sym_LBRACE] = ACTIONS(792),
    [anon_sym_fragment] = ACTIONS(792),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(792),
    [anon_sym_DQUOTE] = ACTIONS(794),
    [anon_sym_schema] = ACTIONS(792),
    [anon_sym_extends] = ACTIONS(792),
    [anon_sym_extend] = ACTIONS(794),
    [anon_sym_scalar] = ACTIONS(792),
    [anon_sym_type] = ACTIONS(792),
    [anon_sym_interface] = ACTIONS(792),
    [anon_sym_union] = ACTIONS(792),
    [anon_sym_enum] = ACTIONS(792),
    [anon_sym_input] = ACTIONS(792),
    [anon_sym_directive] = ACTIONS(792),
    [sym_comment] = ACTIONS(5),
  },
  [292] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(796),
    [sym_comment] = ACTIONS(5),
  },
  [293] = {
    [sym_Value] = STATE(315),
    [sym_BooleanValue] = STATE(265),
    [sym_EnumValue] = STATE(265),
    [sym_ListValue] = STATE(265),
    [sym_ObjectValue] = STATE(265),
    [sym_StringValue] = STATE(265),
    [sym_Variable] = STATE(265),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(535),
    [anon_sym_false] = ACTIONS(537),
    [anon_sym_true] = ACTIONS(537),
    [sym_NullValue] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(541),
    [sym_IntValue] = ACTIONS(539),
    [sym_FloatValue] = ACTIONS(543),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(545),
  },
  [294] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(798),
    [anon_sym_DOLLAR] = ACTIONS(798),
    [sym_comment] = ACTIONS(5),
  },
  [295] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(800),
    [anon_sym_RPAREN] = ACTIONS(800),
    [anon_sym_RBRACK] = ACTIONS(800),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(800),
    [anon_sym_DQUOTE] = ACTIONS(802),
    [anon_sym_DOLLAR] = ACTIONS(800),
    [anon_sym_EQ] = ACTIONS(800),
    [anon_sym_AT] = ACTIONS(800),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(800),
  },
  [296] = {
    [ts_builtin_sym_end] = ACTIONS(804),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(804),
    [anon_sym_mutation] = ACTIONS(804),
    [anon_sym_subscription] = ACTIONS(804),
    [anon_sym_LBRACE] = ACTIONS(804),
    [anon_sym_fragment] = ACTIONS(804),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(804),
    [anon_sym_DQUOTE] = ACTIONS(806),
    [anon_sym_schema] = ACTIONS(804),
    [anon_sym_extends] = ACTIONS(804),
    [anon_sym_extend] = ACTIONS(806),
    [anon_sym_scalar] = ACTIONS(804),
    [anon_sym_type] = ACTIONS(804),
    [anon_sym_interface] = ACTIONS(804),
    [anon_sym_union] = ACTIONS(804),
    [anon_sym_enum] = ACTIONS(804),
    [anon_sym_input] = ACTIONS(804),
    [anon_sym_directive] = ACTIONS(804),
    [sym_comment] = ACTIONS(5),
  },
  [297] = {
    [sym_DirectiveLocations] = STATE(316),
    [sym_DirectiveLocation] = STATE(249),
    [sym_ExecutableDirectiveLocation] = STATE(250),
    [sym_TypeSystemDirectiveLocation] = STATE(250),
    [sym_comma] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_QUERY] = ACTIONS(502),
    [anon_sym_MUTATION] = ACTIONS(502),
    [anon_sym_SUBSCRIPTION] = ACTIONS(502),
    [anon_sym_FIELD] = ACTIONS(504),
    [anon_sym_FRAGMENT_DEFINITION] = ACTIONS(502),
    [anon_sym_FRAGMENT_SPREAD] = ACTIONS(502),
    [anon_sym_INLINE_FRAGMENT] = ACTIONS(502),
    [anon_sym_VARIABLE_DEFINITION] = ACTIONS(502),
    [anon_sym_SCHEMA] = ACTIONS(506),
    [anon_sym_SCALAR] = ACTIONS(506),
    [anon_sym_OBJECT] = ACTIONS(506),
    [anon_sym_FIELD_DEFINITION] = ACTIONS(506),
    [anon_sym_ARGUMENT_DEFINITION] = ACTIONS(506),
    [anon_sym_INTERFACE] = ACTIONS(506),
    [anon_sym_UNION] = ACTIONS(506),
    [anon_sym_ENUM] = ACTIONS(508),
    [anon_sym_ENUM_VALUE] = ACTIONS(506),
    [anon_sym_INPUT_OBJECT] = ACTIONS(506),
    [anon_sym_INPUT_FIELD_DEFINITION] = ACTIONS(506),
    [sym_comment] = ACTIONS(5),
  },
  [298] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(808),
    [anon_sym_RBRACE] = ACTIONS(808),
    [anon_sym_RPAREN] = ACTIONS(808),
    [anon_sym_false] = ACTIONS(810),
    [anon_sym_true] = ACTIONS(810),
    [sym_NullValue] = ACTIONS(810),
    [anon_sym_LBRACK] = ACTIONS(808),
    [anon_sym_RBRACK] = ACTIONS(808),
    [sym_IntValue] = ACTIONS(810),
    [sym_FloatValue] = ACTIONS(808),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(808),
    [anon_sym_DQUOTE] = ACTIONS(810),
    [anon_sym_DOLLAR] = ACTIONS(808),
    [anon_sym_AT] = ACTIONS(808),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(810),
  },
  [299] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(812),
    [sym_comment] = ACTIONS(5),
  },
  [300] = {
    [sym_ObjectField] = STATE(319),
    [aux_sym_ObjectValue_repeat1] = STATE(319),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(814),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(721),
  },
  [301] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(816),
    [anon_sym_RBRACE] = ACTIONS(816),
    [anon_sym_RPAREN] = ACTIONS(816),
    [anon_sym_false] = ACTIONS(818),
    [anon_sym_true] = ACTIONS(818),
    [sym_NullValue] = ACTIONS(818),
    [anon_sym_LBRACK] = ACTIONS(816),
    [anon_sym_RBRACK] = ACTIONS(816),
    [sym_IntValue] = ACTIONS(818),
    [sym_FloatValue] = ACTIONS(816),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(816),
    [anon_sym_DQUOTE] = ACTIONS(818),
    [anon_sym_DOLLAR] = ACTIONS(816),
    [anon_sym_AT] = ACTIONS(816),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(818),
  },
  [302] = {
    [sym_Value] = STATE(321),
    [sym_BooleanValue] = STATE(265),
    [sym_EnumValue] = STATE(265),
    [sym_ListValue] = STATE(265),
    [sym_ObjectValue] = STATE(265),
    [sym_StringValue] = STATE(265),
    [sym_Variable] = STATE(265),
    [aux_sym_ListValue_repeat1] = STATE(321),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(535),
    [anon_sym_false] = ACTIONS(537),
    [anon_sym_true] = ACTIONS(537),
    [sym_NullValue] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(541),
    [anon_sym_RBRACK] = ACTIONS(820),
    [sym_IntValue] = ACTIONS(539),
    [sym_FloatValue] = ACTIONS(543),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(545),
  },
  [303] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(822),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(824),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(822),
  },
  [304] = {
    [sym_Directive] = STATE(322),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(822),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(822),
    [anon_sym_DQUOTE] = ACTIONS(824),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(822),
  },
  [305] = {
    [sym_Type] = STATE(323),
    [sym_NamedType] = STATE(254),
    [sym_ListType] = STATE(254),
    [sym_NonNullType] = STATE(255),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(516),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [306] = {
    [sym_Directives] = STATE(324),
    [sym_Directive] = STATE(234),
    [aux_sym_Directives_repeat1] = STATE(234),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(826),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(826),
    [anon_sym_DQUOTE] = ACTIONS(828),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(826),
  },
  [307] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(826),
    [anon_sym_RPAREN] = ACTIONS(826),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(826),
    [anon_sym_DQUOTE] = ACTIONS(828),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(826),
  },
  [308] = {
    [sym_DefaultValue] = STATE(325),
    [sym_Directives] = STATE(324),
    [sym_Directive] = STATE(234),
    [aux_sym_Directives_repeat1] = STATE(234),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(826),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(826),
    [anon_sym_DQUOTE] = ACTIONS(828),
    [anon_sym_EQ] = ACTIONS(689),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(826),
  },
  [309] = {
    [sym_DefaultValue] = STATE(326),
    [sym_Directives] = STATE(307),
    [sym_Directive] = STATE(327),
    [aux_sym_Directives_repeat1] = STATE(327),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(777),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(777),
    [anon_sym_DQUOTE] = ACTIONS(779),
    [anon_sym_EQ] = ACTIONS(689),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(777),
  },
  [310] = {
    [sym_Type] = STATE(328),
    [sym_NamedType] = STATE(254),
    [sym_ListType] = STATE(254),
    [sym_NonNullType] = STATE(255),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(516),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(284),
  },
  [311] = {
    [aux_sym_DirectiveLocations_repeat1] = STATE(313),
    [ts_builtin_sym_end] = ACTIONS(830),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(830),
    [anon_sym_mutation] = ACTIONS(830),
    [anon_sym_subscription] = ACTIONS(830),
    [anon_sym_LBRACE] = ACTIONS(830),
    [anon_sym_fragment] = ACTIONS(830),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(830),
    [anon_sym_DQUOTE] = ACTIONS(832),
    [anon_sym_schema] = ACTIONS(830),
    [anon_sym_extends] = ACTIONS(830),
    [anon_sym_extend] = ACTIONS(832),
    [anon_sym_scalar] = ACTIONS(830),
    [anon_sym_type] = ACTIONS(830),
    [anon_sym_interface] = ACTIONS(830),
    [anon_sym_union] = ACTIONS(830),
    [anon_sym_enum] = ACTIONS(830),
    [anon_sym_input] = ACTIONS(830),
    [anon_sym_PIPE] = ACTIONS(681),
    [anon_sym_directive] = ACTIONS(830),
    [sym_comment] = ACTIONS(5),
  },
  [312] = {
    [ts_builtin_sym_end] = ACTIONS(834),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(834),
    [anon_sym_mutation] = ACTIONS(834),
    [anon_sym_subscription] = ACTIONS(834),
    [anon_sym_LBRACE] = ACTIONS(834),
    [anon_sym_fragment] = ACTIONS(834),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(834),
    [anon_sym_DQUOTE] = ACTIONS(836),
    [anon_sym_schema] = ACTIONS(834),
    [anon_sym_extends] = ACTIONS(834),
    [anon_sym_extend] = ACTIONS(836),
    [anon_sym_scalar] = ACTIONS(834),
    [anon_sym_type] = ACTIONS(834),
    [anon_sym_interface] = ACTIONS(834),
    [anon_sym_union] = ACTIONS(834),
    [anon_sym_enum] = ACTIONS(834),
    [anon_sym_input] = ACTIONS(834),
    [anon_sym_PIPE] = ACTIONS(834),
    [anon_sym_directive] = ACTIONS(834),
    [sym_comment] = ACTIONS(5),
  },
  [313] = {
    [aux_sym_DirectiveLocations_repeat1] = STATE(313),
    [ts_builtin_sym_end] = ACTIONS(834),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(834),
    [anon_sym_mutation] = ACTIONS(834),
    [anon_sym_subscription] = ACTIONS(834),
    [anon_sym_LBRACE] = ACTIONS(834),
    [anon_sym_fragment] = ACTIONS(834),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(834),
    [anon_sym_DQUOTE] = ACTIONS(836),
    [anon_sym_schema] = ACTIONS(834),
    [anon_sym_extends] = ACTIONS(834),
    [anon_sym_extend] = ACTIONS(836),
    [anon_sym_scalar] = ACTIONS(834),
    [anon_sym_type] = ACTIONS(834),
    [anon_sym_interface] = ACTIONS(834),
    [anon_sym_union] = ACTIONS(834),
    [anon_sym_enum] = ACTIONS(834),
    [anon_sym_input] = ACTIONS(834),
    [anon_sym_PIPE] = ACTIONS(838),
    [anon_sym_directive] = ACTIONS(834),
    [sym_comment] = ACTIONS(5),
  },
  [314] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(841),
    [anon_sym_RPAREN] = ACTIONS(841),
    [anon_sym_RBRACK] = ACTIONS(841),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(841),
    [anon_sym_DQUOTE] = ACTIONS(843),
    [anon_sym_DOLLAR] = ACTIONS(841),
    [anon_sym_EQ] = ACTIONS(841),
    [anon_sym_BANG] = ACTIONS(841),
    [anon_sym_AT] = ACTIONS(841),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(841),
  },
  [315] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(845),
    [anon_sym_RPAREN] = ACTIONS(845),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(845),
    [anon_sym_DQUOTE] = ACTIONS(847),
    [anon_sym_DOLLAR] = ACTIONS(845),
    [anon_sym_AT] = ACTIONS(845),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(845),
  },
  [316] = {
    [ts_builtin_sym_end] = ACTIONS(849),
    [sym_comma] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(849),
    [anon_sym_mutation] = ACTIONS(849),
    [anon_sym_subscription] = ACTIONS(849),
    [anon_sym_LBRACE] = ACTIONS(849),
    [anon_sym_fragment] = ACTIONS(849),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_schema] = ACTIONS(849),
    [anon_sym_extends] = ACTIONS(849),
    [anon_sym_extend] = ACTIONS(851),
    [anon_sym_scalar] = ACTIONS(849),
    [anon_sym_type] = ACTIONS(849),
    [anon_sym_interface] = ACTIONS(849),
    [anon_sym_union] = ACTIONS(849),
    [anon_sym_enum] = ACTIONS(849),
    [anon_sym_input] = ACTIONS(849),
    [anon_sym_directive] = ACTIONS(849),
    [sym_comment] = ACTIONS(5),
  },
  [317] = {
    [sym_Value] = STATE(329),
    [sym_BooleanValue] = STATE(265),
    [sym_EnumValue] = STATE(265),
    [sym_ListValue] = STATE(265),
    [sym_ObjectValue] = STATE(265),
    [sym_StringValue] = STATE(265),
    [sym_Variable] = STATE(265),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(535),
    [anon_sym_false] = ACTIONS(537),
    [anon_sym_true] = ACTIONS(537),
    [sym_NullValue] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(541),
    [sym_IntValue] = ACTIONS(539),
    [sym_FloatValue] = ACTIONS(543),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(545),
  },
  [318] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(853),
    [anon_sym_RBRACE] = ACTIONS(853),
    [anon_sym_RPAREN] = ACTIONS(853),
    [anon_sym_false] = ACTIONS(855),
    [anon_sym_true] = ACTIONS(855),
    [sym_NullValue] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(853),
    [anon_sym_RBRACK] = ACTIONS(853),
    [sym_IntValue] = ACTIONS(855),
    [sym_FloatValue] = ACTIONS(853),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(853),
    [anon_sym_DQUOTE] = ACTIONS(855),
    [anon_sym_DOLLAR] = ACTIONS(853),
    [anon_sym_AT] = ACTIONS(853),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(855),
  },
  [319] = {
    [sym_ObjectField] = STATE(319),
    [aux_sym_ObjectValue_repeat1] = STATE(319),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(857),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(859),
  },
  [320] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(862),
    [anon_sym_RBRACE] = ACTIONS(862),
    [anon_sym_RPAREN] = ACTIONS(862),
    [anon_sym_false] = ACTIONS(864),
    [anon_sym_true] = ACTIONS(864),
    [sym_NullValue] = ACTIONS(864),
    [anon_sym_LBRACK] = ACTIONS(862),
    [anon_sym_RBRACK] = ACTIONS(862),
    [sym_IntValue] = ACTIONS(864),
    [sym_FloatValue] = ACTIONS(862),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(864),
    [anon_sym_DOLLAR] = ACTIONS(862),
    [anon_sym_AT] = ACTIONS(862),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(864),
  },
  [321] = {
    [sym_Value] = STATE(321),
    [sym_BooleanValue] = STATE(265),
    [sym_EnumValue] = STATE(265),
    [sym_ListValue] = STATE(265),
    [sym_ObjectValue] = STATE(265),
    [sym_StringValue] = STATE(265),
    [sym_Variable] = STATE(265),
    [aux_sym_ListValue_repeat1] = STATE(321),
    [sym_comma] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(866),
    [anon_sym_false] = ACTIONS(869),
    [anon_sym_true] = ACTIONS(869),
    [sym_NullValue] = ACTIONS(872),
    [anon_sym_LBRACK] = ACTIONS(875),
    [anon_sym_RBRACK] = ACTIONS(878),
    [sym_IntValue] = ACTIONS(872),
    [sym_FloatValue] = ACTIONS(880),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(883),
    [anon_sym_DQUOTE] = ACTIONS(886),
    [anon_sym_DOLLAR] = ACTIONS(889),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(892),
  },
  [322] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(895),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(895),
  },
  [323] = {
    [sym_Directive] = STATE(330),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(895),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(895),
  },
  [324] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(899),
    [anon_sym_RPAREN] = ACTIONS(899),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(899),
    [anon_sym_DQUOTE] = ACTIONS(901),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(899),
  },
  [325] = {
    [sym_Directives] = STATE(331),
    [sym_Directive] = STATE(234),
    [aux_sym_Directives_repeat1] = STATE(234),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(899),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(899),
    [anon_sym_DQUOTE] = ACTIONS(901),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(899),
  },
  [326] = {
    [sym_Directives] = STATE(324),
    [sym_Directive] = STATE(327),
    [aux_sym_Directives_repeat1] = STATE(327),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(826),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(826),
    [anon_sym_DQUOTE] = ACTIONS(828),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(826),
  },
  [327] = {
    [sym_Directive] = STATE(332),
    [aux_sym_Directives_repeat1] = STATE(332),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(165),
  },
  [328] = {
    [sym_DefaultValue] = STATE(333),
    [sym_Directives] = STATE(324),
    [sym_Directive] = STATE(327),
    [aux_sym_Directives_repeat1] = STATE(327),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(826),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(826),
    [anon_sym_DQUOTE] = ACTIONS(828),
    [anon_sym_EQ] = ACTIONS(689),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(826),
  },
  [329] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(903),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(903),
  },
  [330] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(905),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(905),
    [anon_sym_DQUOTE] = ACTIONS(907),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(905),
  },
  [331] = {
    [sym_comma] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(909),
    [anon_sym_RPAREN] = ACTIONS(909),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(909),
    [anon_sym_DQUOTE] = ACTIONS(911),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(909),
  },
  [332] = {
    [sym_Directive] = STATE(332),
    [aux_sym_Directives_repeat1] = STATE(332),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(320),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(418),
    [anon_sym_AT] = ACTIONS(322),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(320),
  },
  [333] = {
    [sym_Directives] = STATE(331),
    [sym_Directive] = STATE(327),
    [aux_sym_Directives_repeat1] = STATE(327),
    [sym_comma] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(899),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(899),
    [anon_sym_DQUOTE] = ACTIONS(901),
    [anon_sym_AT] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
    [sym_Name] = ACTIONS(899),
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
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, SHIFT(10),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_OperationType, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(30),
  [41] = {.count = 1, .reusable = true}, SHIFT(31),
  [43] = {.count = 1, .reusable = true}, SHIFT(35),
  [45] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [47] = {.count = 1, .reusable = false}, SHIFT(37),
  [49] = {.count = 1, .reusable = false}, SHIFT(38),
  [51] = {.count = 1, .reusable = true}, SHIFT(39),
  [53] = {.count = 1, .reusable = true}, SHIFT(40),
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
  [81] = {.count = 1, .reusable = true}, SHIFT(56),
  [83] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_Definition, 1),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_Definition, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_ExecutableDefinition, 1),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_ExecutableDefinition, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(57),
  [97] = {.count = 1, .reusable = true}, SHIFT(58),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_OperationDefinition, 1),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_OperationDefinition, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_Description, 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_TypeSystemDefinition, 1),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_TypeSystemDefinition, 1),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_TypeSystemExtension, 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_TypeSystemExtension, 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_TypeExtension, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_TypeExtension, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(62),
  [119] = {.count = 1, .reusable = true}, SHIFT(63),
  [121] = {.count = 1, .reusable = true}, SHIFT(64),
  [123] = {.count = 1, .reusable = true}, SHIFT(65),
  [125] = {.count = 1, .reusable = true}, SHIFT(66),
  [127] = {.count = 1, .reusable = true}, SHIFT(67),
  [129] = {.count = 1, .reusable = true}, SHIFT(68),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_TypeDefinition, 1),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_TypeDefinition, 1),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_Document, 1),
  [137] = {.count = 1, .reusable = false}, SHIFT(70),
  [139] = {.count = 1, .reusable = false}, SHIFT(35),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_Field, 1),
  [143] = {.count = 1, .reusable = true}, SHIFT(75),
  [145] = {.count = 1, .reusable = true}, SHIFT(76),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_Selection, 1),
  [149] = {.count = 1, .reusable = true}, SHIFT(81),
  [151] = {.count = 1, .reusable = true}, SHIFT(82),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_FragmentName, 1),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_FragmentName, 1),
  [157] = {.count = 1, .reusable = true}, SHIFT(70),
  [159] = {.count = 1, .reusable = true}, SHIFT(85),
  [161] = {.count = 1, .reusable = true}, SHIFT(88),
  [163] = {.count = 1, .reusable = true}, SHIFT(89),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_Directives, 1),
  [167] = {.count = 1, .reusable = true}, SHIFT(91),
  [169] = {.count = 1, .reusable = true}, SHIFT(94),
  [171] = {.count = 1, .reusable = true}, SHIFT(95),
  [173] = {.count = 1, .reusable = true}, SHIFT(96),
  [175] = {.count = 1, .reusable = true}, SHIFT(97),
  [177] = {.count = 1, .reusable = true}, SHIFT(98),
  [179] = {.count = 1, .reusable = true}, SHIFT(99),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_ScalarTypeDefinition, 2),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_ScalarTypeDefinition, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeDefinition, 2),
  [187] = {.count = 1, .reusable = true}, SHIFT(101),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeDefinition, 2),
  [191] = {.count = 1, .reusable = true}, SHIFT(102),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_InterfaceTypeDefinition, 2),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_InterfaceTypeDefinition, 2),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_UnionTypeDefinition, 2),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_UnionTypeDefinition, 2),
  [201] = {.count = 1, .reusable = true}, SHIFT(108),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_EnumTypeDefinition, 2),
  [205] = {.count = 1, .reusable = true}, SHIFT(112),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_EnumTypeDefinition, 2),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_InputObjectTypeDefinition, 2),
  [211] = {.count = 1, .reusable = true}, SHIFT(115),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_InputObjectTypeDefinition, 2),
  [215] = {.count = 1, .reusable = true}, SHIFT(118),
  [217] = {.count = 1, .reusable = true}, SHIFT(119),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_OperationDefinition, 2),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_OperationDefinition, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(125),
  [225] = {.count = 1, .reusable = true}, SHIFT(126),
  [227] = {.count = 1, .reusable = true}, SHIFT(127),
  [229] = {.count = 1, .reusable = true}, SHIFT(128),
  [231] = {.count = 1, .reusable = true}, SHIFT(129),
  [233] = {.count = 1, .reusable = true}, SHIFT(130),
  [235] = {.count = 1, .reusable = true}, SHIFT(131),
  [237] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(2),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(3),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(4),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(5),
  [251] = {.count = 2, .reusable = false}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(6),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(7),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(8),
  [260] = {.count = 2, .reusable = false}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(9),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(10),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(11),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(12),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(13),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(14),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(15),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Document_repeat1, 2), SHIFT_REPEAT(16),
  [284] = {.count = 1, .reusable = true}, SHIFT(132),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_InlineFragment, 2),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_FragmentSpread, 2),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_Alias, 2),
  [292] = {.count = 1, .reusable = true}, SHIFT(138),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_Field, 2),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_SelectionSet, 3),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_SelectionSet, 3),
  [300] = {.count = 1, .reusable = true}, REDUCE(aux_sym_SelectionSet_repeat1, 2),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_SelectionSet_repeat1, 2), SHIFT_REPEAT(30),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_SelectionSet_repeat1, 2), SHIFT_REPEAT(31),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_StringValue, 3),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_StringValue, 3),
  [312] = {.count = 1, .reusable = true}, SHIFT(146),
  [314] = {.count = 1, .reusable = true}, SHIFT(147),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_Directive, 2),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym_Directive, 2),
  [320] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Directives_repeat1, 2),
  [322] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Directives_repeat1, 2), SHIFT_REPEAT(40),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_SchemaExtension, 3),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_SchemaExtension, 3),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_Directives, 1),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_ScalarTypeDefinition, 3),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_ScalarTypeDefinition, 3),
  [335] = {.count = 1, .reusable = true}, SHIFT(166),
  [337] = {.count = 1, .reusable = true}, SHIFT(169),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeDefinition, 3),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeDefinition, 3),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_InterfaceTypeDefinition, 3),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_InterfaceTypeDefinition, 3),
  [347] = {.count = 1, .reusable = true}, SHIFT(174),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_UnionTypeDefinition, 3),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_UnionTypeDefinition, 3),
  [353] = {.count = 1, .reusable = true}, SHIFT(178),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_EnumTypeDefinition, 3),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_EnumTypeDefinition, 3),
  [359] = {.count = 1, .reusable = true}, SHIFT(183),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_InputObjectTypeDefinition, 3),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_InputObjectTypeDefinition, 3),
  [365] = {.count = 1, .reusable = true}, SHIFT(187),
  [367] = {.count = 1, .reusable = true}, SHIFT(188),
  [369] = {.count = 1, .reusable = true}, SHIFT(190),
  [371] = {.count = 1, .reusable = true}, SHIFT(191),
  [373] = {.count = 1, .reusable = true}, SHIFT(192),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_OperationDefinition, 3),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_OperationDefinition, 3),
  [379] = {.count = 1, .reusable = true}, SHIFT(202),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_NamedType, 1),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_NamedType, 1),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_TypeCondition, 2),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_FragmentSpread, 3),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_InlineFragment, 3),
  [391] = {.count = 1, .reusable = true}, SHIFT(205),
  [393] = {.count = 1, .reusable = true}, SHIFT(206),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_Field, 3),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_FragmentDefinition, 4),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_FragmentDefinition, 4),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_SchemaDefinition, 4),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_SchemaDefinition, 4),
  [405] = {.count = 2, .reusable = true}, REDUCE(aux_sym_SchemaDefinition_repeat1, 2), SHIFT_REPEAT(2),
  [408] = {.count = 1, .reusable = true}, REDUCE(aux_sym_SchemaDefinition_repeat1, 2),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_Directive, 3),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_Directive, 3),
  [414] = {.count = 1, .reusable = true}, SHIFT(212),
  [416] = {.count = 1, .reusable = true}, SHIFT(213),
  [418] = {.count = 1, .reusable = false}, REDUCE(aux_sym_Directives_repeat1, 2),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_ScalarTypeExtension, 4),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_ScalarTypeExtension, 4),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeExtension, 4),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeExtension, 4),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_InterfaceTypeExtension, 4),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_InterfaceTypeExtension, 4),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_UnionTypeExtension, 4),
  [434] = {.count = 1, .reusable = false}, REDUCE(sym_UnionTypeExtension, 4),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_EnumTypeExtension, 4),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym_EnumTypeExtension, 4),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_InputObjectTypeExtension, 4),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_InputObjectTypeExtension, 4),
  [444] = {.count = 1, .reusable = true}, SHIFT(221),
  [446] = {.count = 1, .reusable = true}, SHIFT(223),
  [448] = {.count = 1, .reusable = true}, SHIFT(224),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_ImplementsInterfaces, 2),
  [452] = {.count = 1, .reusable = false}, REDUCE(sym_ImplementsInterfaces, 2),
  [454] = {.count = 1, .reusable = true}, SHIFT(227),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeDefinition, 4),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeDefinition, 4),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_InterfaceTypeDefinition, 4),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym_InterfaceTypeDefinition, 4),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_UnionMemberTypes, 2),
  [466] = {.count = 1, .reusable = false}, REDUCE(sym_UnionMemberTypes, 2),
  [468] = {.count = 1, .reusable = true}, SHIFT(231),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_UnionTypeDefinition, 4),
  [472] = {.count = 1, .reusable = false}, REDUCE(sym_UnionTypeDefinition, 4),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_EnumValue, 1),
  [476] = {.count = 1, .reusable = false}, REDUCE(sym_EnumValue, 1),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_EnumValueDefinition, 1),
  [480] = {.count = 1, .reusable = false}, REDUCE(sym_EnumValueDefinition, 1),
  [482] = {.count = 1, .reusable = true}, SHIFT(236),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_EnumTypeDefinition, 4),
  [486] = {.count = 1, .reusable = false}, REDUCE(sym_EnumTypeDefinition, 4),
  [488] = {.count = 1, .reusable = true}, SHIFT(238),
  [490] = {.count = 1, .reusable = true}, SHIFT(239),
  [492] = {.count = 1, .reusable = true}, SHIFT(240),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_InputObjectTypeDefinition, 4),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_InputObjectTypeDefinition, 4),
  [498] = {.count = 1, .reusable = true}, SHIFT(242),
  [500] = {.count = 1, .reusable = true}, SHIFT(245),
  [502] = {.count = 1, .reusable = true}, SHIFT(246),
  [504] = {.count = 1, .reusable = false}, SHIFT(246),
  [506] = {.count = 1, .reusable = true}, SHIFT(247),
  [508] = {.count = 1, .reusable = false}, SHIFT(247),
  [510] = {.count = 1, .reusable = true}, SHIFT(251),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_Variable, 2),
  [514] = {.count = 1, .reusable = false}, REDUCE(sym_Variable, 2),
  [516] = {.count = 1, .reusable = true}, SHIFT(252),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_VariableDefinitions, 3),
  [520] = {.count = 1, .reusable = true}, REDUCE(aux_sym_VariableDefinitions_repeat1, 2),
  [522] = {.count = 2, .reusable = true}, REDUCE(aux_sym_VariableDefinitions_repeat1, 2), SHIFT_REPEAT(119),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_OperationDefinition, 4),
  [527] = {.count = 1, .reusable = false}, REDUCE(sym_OperationDefinition, 4),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_ScalarTypeDefinition, 4),
  [531] = {.count = 1, .reusable = false}, REDUCE(sym_ScalarTypeDefinition, 4),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_InlineFragment, 4),
  [535] = {.count = 1, .reusable = true}, SHIFT(263),
  [537] = {.count = 1, .reusable = false}, SHIFT(264),
  [539] = {.count = 1, .reusable = false}, SHIFT(265),
  [541] = {.count = 1, .reusable = true}, SHIFT(266),
  [543] = {.count = 1, .reusable = true}, SHIFT(265),
  [545] = {.count = 1, .reusable = false}, SHIFT(178),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_Arguments, 3),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_Arguments, 3),
  [551] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Arguments_repeat1, 2),
  [553] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Arguments_repeat1, 2), SHIFT_REPEAT(138),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_Field, 4),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_FragmentDefinition, 5),
  [560] = {.count = 1, .reusable = false}, REDUCE(sym_FragmentDefinition, 5),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_OperationTypeDefinition, 3),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_SchemaDefinition, 5),
  [566] = {.count = 1, .reusable = false}, REDUCE(sym_SchemaDefinition, 5),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_SchemaExtension, 5),
  [570] = {.count = 1, .reusable = false}, REDUCE(sym_SchemaExtension, 5),
  [572] = {.count = 1, .reusable = true}, SHIFT(269),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeExtension, 5),
  [576] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeExtension, 5),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_InterfaceTypeExtension, 5),
  [580] = {.count = 1, .reusable = false}, REDUCE(sym_InterfaceTypeExtension, 5),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_UnionTypeExtension, 5),
  [584] = {.count = 1, .reusable = false}, REDUCE(sym_UnionTypeExtension, 5),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_EnumTypeExtension, 5),
  [588] = {.count = 1, .reusable = false}, REDUCE(sym_EnumTypeExtension, 5),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_InputObjectTypeExtension, 5),
  [592] = {.count = 1, .reusable = false}, REDUCE(sym_InputObjectTypeExtension, 5),
  [594] = {.count = 1, .reusable = true}, SHIFT(272),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_FieldsDefinition, 3),
  [598] = {.count = 1, .reusable = false}, REDUCE(sym_FieldsDefinition, 3),
  [600] = {.count = 1, .reusable = true}, REDUCE(aux_sym_FieldsDefinition_repeat1, 2),
  [602] = {.count = 2, .reusable = true}, REDUCE(aux_sym_FieldsDefinition_repeat1, 2), SHIFT_REPEAT(5),
  [605] = {.count = 2, .reusable = false}, REDUCE(aux_sym_FieldsDefinition_repeat1, 2), SHIFT_REPEAT(6),
  [608] = {.count = 2, .reusable = true}, REDUCE(aux_sym_FieldsDefinition_repeat1, 2), SHIFT_REPEAT(166),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_ImplementsInterfaces, 3),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym_ImplementsInterfaces, 3),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeDefinition, 5),
  [617] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeDefinition, 5),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_UnionMemberTypes, 3),
  [621] = {.count = 1, .reusable = false}, REDUCE(sym_UnionMemberTypes, 3),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_EnumValueDefinition, 2),
  [625] = {.count = 1, .reusable = false}, REDUCE(sym_EnumValueDefinition, 2),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_EnumValuesDefinition, 3),
  [629] = {.count = 1, .reusable = false}, REDUCE(sym_EnumValuesDefinition, 3),
  [631] = {.count = 1, .reusable = true}, REDUCE(aux_sym_EnumValuesDefinition_repeat1, 2),
  [633] = {.count = 2, .reusable = true}, REDUCE(aux_sym_EnumValuesDefinition_repeat1, 2), SHIFT_REPEAT(5),
  [636] = {.count = 2, .reusable = false}, REDUCE(aux_sym_EnumValuesDefinition_repeat1, 2), SHIFT_REPEAT(6),
  [639] = {.count = 2, .reusable = true}, REDUCE(aux_sym_EnumValuesDefinition_repeat1, 2), SHIFT_REPEAT(178),
  [642] = {.count = 1, .reusable = true}, SHIFT(283),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_InputFieldsDefinition, 3),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym_InputFieldsDefinition, 3),
  [648] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ArgumentsDefinition_repeat1, 2),
  [650] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ArgumentsDefinition_repeat1, 2), SHIFT_REPEAT(5),
  [653] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ArgumentsDefinition_repeat1, 2), SHIFT_REPEAT(6),
  [656] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ArgumentsDefinition_repeat1, 2), SHIFT_REPEAT(183),
  [659] = {.count = 1, .reusable = true}, SHIFT(284),
  [661] = {.count = 1, .reusable = true}, SHIFT(285),
  [663] = {.count = 1, .reusable = true}, SHIFT(286),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_ExecutableDirectiveLocation, 1),
  [667] = {.count = 1, .reusable = false}, REDUCE(sym_ExecutableDirectiveLocation, 1),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_TypeSystemDirectiveLocation, 1),
  [671] = {.count = 1, .reusable = false}, REDUCE(sym_TypeSystemDirectiveLocation, 1),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_DirectiveDefinition, 5),
  [675] = {.count = 1, .reusable = false}, REDUCE(sym_DirectiveDefinition, 5),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_DirectiveLocations, 1),
  [679] = {.count = 1, .reusable = false}, REDUCE(sym_DirectiveLocations, 1),
  [681] = {.count = 1, .reusable = true}, SHIFT(289),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_DirectiveLocation, 1),
  [685] = {.count = 1, .reusable = false}, REDUCE(sym_DirectiveLocation, 1),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_VariableDefinition, 3),
  [689] = {.count = 1, .reusable = true}, SHIFT(293),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym_Type, 1),
  [693] = {.count = 1, .reusable = false}, REDUCE(sym_Type, 1),
  [695] = {.count = 1, .reusable = true}, SHIFT(295),
  [697] = {.count = 1, .reusable = true}, REDUCE(sym_OperationDefinition, 5),
  [699] = {.count = 1, .reusable = false}, REDUCE(sym_OperationDefinition, 5),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym_InterfaceTypeDefinition, 5),
  [703] = {.count = 1, .reusable = false}, REDUCE(sym_InterfaceTypeDefinition, 5),
  [705] = {.count = 1, .reusable = true}, REDUCE(sym_UnionTypeDefinition, 5),
  [707] = {.count = 1, .reusable = false}, REDUCE(sym_UnionTypeDefinition, 5),
  [709] = {.count = 1, .reusable = true}, REDUCE(sym_EnumTypeDefinition, 5),
  [711] = {.count = 1, .reusable = false}, REDUCE(sym_EnumTypeDefinition, 5),
  [713] = {.count = 1, .reusable = true}, REDUCE(sym_InputObjectTypeDefinition, 5),
  [715] = {.count = 1, .reusable = false}, REDUCE(sym_InputObjectTypeDefinition, 5),
  [717] = {.count = 1, .reusable = true}, SHIFT(297),
  [719] = {.count = 1, .reusable = true}, SHIFT(298),
  [721] = {.count = 1, .reusable = true}, SHIFT(299),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym_BooleanValue, 1),
  [725] = {.count = 1, .reusable = false}, REDUCE(sym_BooleanValue, 1),
  [727] = {.count = 1, .reusable = true}, REDUCE(sym_Value, 1),
  [729] = {.count = 1, .reusable = false}, REDUCE(sym_Value, 1),
  [731] = {.count = 1, .reusable = true}, SHIFT(301),
  [733] = {.count = 1, .reusable = true}, REDUCE(sym_Argument, 3),
  [735] = {.count = 1, .reusable = true}, REDUCE(sym_Field, 5),
  [737] = {.count = 1, .reusable = true}, REDUCE(sym_SchemaExtension, 6),
  [739] = {.count = 1, .reusable = false}, REDUCE(sym_SchemaExtension, 6),
  [741] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeExtension, 6),
  [743] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeExtension, 6),
  [745] = {.count = 1, .reusable = true}, REDUCE(sym_FieldDefinition, 3),
  [747] = {.count = 1, .reusable = false}, REDUCE(sym_FieldDefinition, 3),
  [749] = {.count = 1, .reusable = true}, SHIFT(305),
  [751] = {.count = 1, .reusable = true}, REDUCE(sym_ImplementsInterfaces, 4),
  [753] = {.count = 1, .reusable = false}, REDUCE(sym_ImplementsInterfaces, 4),
  [755] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ImplementsInterfaces_repeat1, 2),
  [757] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ImplementsInterfaces_repeat1, 2),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ImplementsInterfaces_repeat1, 2), SHIFT_REPEAT(227),
  [762] = {.count = 1, .reusable = true}, REDUCE(sym_UnionMemberTypes, 4),
  [764] = {.count = 1, .reusable = false}, REDUCE(sym_UnionMemberTypes, 4),
  [766] = {.count = 1, .reusable = true}, REDUCE(aux_sym_UnionMemberTypes_repeat1, 2),
  [768] = {.count = 1, .reusable = false}, REDUCE(aux_sym_UnionMemberTypes_repeat1, 2),
  [770] = {.count = 2, .reusable = true}, REDUCE(aux_sym_UnionMemberTypes_repeat1, 2), SHIFT_REPEAT(231),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym_EnumValueDefinition, 3),
  [775] = {.count = 1, .reusable = false}, REDUCE(sym_EnumValueDefinition, 3),
  [777] = {.count = 1, .reusable = true}, REDUCE(sym_InputValueDefinition, 3),
  [779] = {.count = 1, .reusable = false}, REDUCE(sym_InputValueDefinition, 3),
  [781] = {.count = 1, .reusable = true}, SHIFT(310),
  [783] = {.count = 1, .reusable = true}, REDUCE(sym_ArgumentsDefinition, 3),
  [785] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ArgumentsDefinition_repeat1, 2), SHIFT_REPEAT(242),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym_DirectiveLocations, 2),
  [790] = {.count = 1, .reusable = false}, REDUCE(sym_DirectiveLocations, 2),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym_DirectiveDefinition, 6),
  [794] = {.count = 1, .reusable = false}, REDUCE(sym_DirectiveDefinition, 6),
  [796] = {.count = 1, .reusable = true}, SHIFT(314),
  [798] = {.count = 1, .reusable = true}, REDUCE(sym_VariableDefinition, 4),
  [800] = {.count = 1, .reusable = true}, REDUCE(sym_NonNullType, 2),
  [802] = {.count = 1, .reusable = false}, REDUCE(sym_NonNullType, 2),
  [804] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectTypeDefinition, 6),
  [806] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectTypeDefinition, 6),
  [808] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectValue, 2),
  [810] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectValue, 2),
  [812] = {.count = 1, .reusable = true}, SHIFT(317),
  [814] = {.count = 1, .reusable = true}, SHIFT(318),
  [816] = {.count = 1, .reusable = true}, REDUCE(sym_ListValue, 2),
  [818] = {.count = 1, .reusable = false}, REDUCE(sym_ListValue, 2),
  [820] = {.count = 1, .reusable = true}, SHIFT(320),
  [822] = {.count = 1, .reusable = true}, REDUCE(sym_FieldDefinition, 4),
  [824] = {.count = 1, .reusable = false}, REDUCE(sym_FieldDefinition, 4),
  [826] = {.count = 1, .reusable = true}, REDUCE(sym_InputValueDefinition, 4),
  [828] = {.count = 1, .reusable = false}, REDUCE(sym_InputValueDefinition, 4),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym_DirectiveLocations, 3),
  [832] = {.count = 1, .reusable = false}, REDUCE(sym_DirectiveLocations, 3),
  [834] = {.count = 1, .reusable = true}, REDUCE(aux_sym_DirectiveLocations_repeat1, 2),
  [836] = {.count = 1, .reusable = false}, REDUCE(aux_sym_DirectiveLocations_repeat1, 2),
  [838] = {.count = 2, .reusable = true}, REDUCE(aux_sym_DirectiveLocations_repeat1, 2), SHIFT_REPEAT(289),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym_ListType, 3),
  [843] = {.count = 1, .reusable = false}, REDUCE(sym_ListType, 3),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_DefaultValue, 2),
  [847] = {.count = 1, .reusable = false}, REDUCE(sym_DefaultValue, 2),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_DirectiveDefinition, 7),
  [851] = {.count = 1, .reusable = false}, REDUCE(sym_DirectiveDefinition, 7),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectValue, 3),
  [855] = {.count = 1, .reusable = false}, REDUCE(sym_ObjectValue, 3),
  [857] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ObjectValue_repeat1, 2),
  [859] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ObjectValue_repeat1, 2), SHIFT_REPEAT(299),
  [862] = {.count = 1, .reusable = true}, REDUCE(sym_ListValue, 3),
  [864] = {.count = 1, .reusable = false}, REDUCE(sym_ListValue, 3),
  [866] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(263),
  [869] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(264),
  [872] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(265),
  [875] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(266),
  [878] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ListValue_repeat1, 2),
  [880] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(265),
  [883] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(5),
  [886] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(6),
  [889] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(119),
  [892] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ListValue_repeat1, 2), SHIFT_REPEAT(178),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym_FieldDefinition, 5),
  [897] = {.count = 1, .reusable = false}, REDUCE(sym_FieldDefinition, 5),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym_InputValueDefinition, 5),
  [901] = {.count = 1, .reusable = false}, REDUCE(sym_InputValueDefinition, 5),
  [903] = {.count = 1, .reusable = true}, REDUCE(sym_ObjectField, 3),
  [905] = {.count = 1, .reusable = true}, REDUCE(sym_FieldDefinition, 6),
  [907] = {.count = 1, .reusable = false}, REDUCE(sym_FieldDefinition, 6),
  [909] = {.count = 1, .reusable = true}, REDUCE(sym_InputValueDefinition, 6),
  [911] = {.count = 1, .reusable = false}, REDUCE(sym_InputValueDefinition, 6),
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
