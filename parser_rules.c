#include "parser.h"

void Parser::lookaheads_init(void)
{
	lookaheads["translation-unit"].push_back("char");
	lookaheads["translation-unit"].push_back("int");
	lookaheads["translation-unit"].push_back("void");
	lookaheads["translation-unit"].push_back("_Static_assert");
	lookaheads["translation-unit"].push_back("struct");

	lookaheads["translation-unit2"].push_back("char");
	lookaheads["translation-unit2"].push_back("int");
	lookaheads["translation-unit2"].push_back("void");
	lookaheads["translation-unit2"].push_back("_Static_assert");
	lookaheads["translation-unit2"].push_back("struct");

	lookaheads["external-declaration"].push_back("char");
	lookaheads["external-declaration"].push_back("int");
	lookaheads["external-declaration"].push_back("void");
	lookaheads["external-declaration"].push_back("struct");
	lookaheads["external-declaration"].push_back("_Static_assert");

	lookaheads["external-declaration2"].push_back("*");
	lookaheads["external-declaration2"].push_back("*");

	lookaheads["function-definition"].push_back("char");
	lookaheads["function-definition"].push_back("int");
	lookaheads["function-definition"].push_back("void");
	lookaheads["function-definition"].push_back("struct");

	lookaheads["type-specifier"].push_back("void");
	lookaheads["type-specifier"].push_back("char");
	lookaheads["type-specifier"].push_back("int");
	lookaheads["type-specifier"].push_back("struct");

	lookaheads["struct-or-union-specifier"].push_back("struct");

	lookaheads["struct-or-union-specifier2"].push_back("{");

	lookaheads["struct-declaration-list"].push_back("char");
	lookaheads["struct-declaration-list"].push_back("int");
	lookaheads["struct-declaration-list"].push_back("void");
	lookaheads["struct-declaration-list"].push_back("_Static_assert");
	lookaheads["struct-declaration-list"].push_back("struct");

	lookaheads["struct-declaration-list2"].push_back("char");
	lookaheads["struct-declaration-list2"].push_back("int");
	lookaheads["struct-declaration-list2"].push_back("void");
	lookaheads["struct-declaration-list2"].push_back("_Static_assert");
	lookaheads["struct-declaration-list2"].push_back("struct");

	lookaheads["struct-declaration"].push_back("char");
	lookaheads["struct-declaration"].push_back("int");
	lookaheads["struct-declaration"].push_back("void");
	lookaheads["struct-declaration"].push_back("struct");
	lookaheads["struct-declaration"].push_back("_Static_assert");

	lookaheads["specifier-qualifier-list"].push_back("char");
	lookaheads["specifier-qualifier-list"].push_back("int");
	lookaheads["specifier-qualifier-list"].push_back("void");
	lookaheads["specifier-qualifier-list"].push_back("struct");

	lookaheads["struct-declarator-list"].push_back("*");

	lookaheads["struct-declarator-list2"].push_back(",");

	lookaheads["struct-declarator"].push_back("*");

	lookaheads["declaration"].push_back("char");
	lookaheads["declaration"].push_back("int");
	lookaheads["declaration"].push_back("void");
	lookaheads["declaration"].push_back("struct");
	lookaheads["declaration"].push_back("_Static_assert");

	lookaheads["static_assert-declaration"].push_back("_Static_assert");

	lookaheads["declaration-specifiers"].push_back("char");
	lookaheads["declaration-specifiers"].push_back("int");
	lookaheads["declaration-specifiers"].push_back("void");
	lookaheads["declaration-specifiers"].push_back("struct");

	lookaheads["init-declarator-list"].push_back("*");

	lookaheads["init-declarator"].push_back("*");

	lookaheads["declarator"].push_back("*");

	lookaheads["pointer"].push_back("*");

	lookaheads["pointer2"].push_back("*");

	lookaheads["direct-declarator"].push_back("identifier");
	lookaheads["direct-declarator"].push_back("(");

	lookaheads["direct-declarator2"].push_back("(");

	lookaheads["parameter-type-list"].push_back("char");
	lookaheads["parameter-type-list"].push_back("int");
	lookaheads["parameter-type-list"].push_back("void");
	lookaheads["parameter-type-list"].push_back("struct");

	lookaheads["parameter-list"].push_back("char");
	lookaheads["parameter-list"].push_back("int");
	lookaheads["parameter-list"].push_back("void");
	lookaheads["parameter-list"].push_back("struct");

	lookaheads["parameter-list2"].push_back(",");

	lookaheads["parameter-declaration"].push_back("char");
	lookaheads["parameter-declaration"].push_back("int");
	lookaheads["parameter-declaration"].push_back("void");
	lookaheads["parameter-declaration"].push_back("struct");

	lookaheads["parameter-declaration2"].push_back("*");
	lookaheads["parameter-declaration2"].push_back("*");

	lookaheads["abstract-declarator"].push_back("*");

	lookaheads["abstract-declarator2"].push_back("(");

	lookaheads["direct-abstract-declarator"].push_back("(");

	lookaheads["direct-abstract-declarator2"].push_back("[");
	lookaheads["direct-abstract-declarator2"].push_back("(");

	lookaheads["direct-abstract-declarator3"].push_back("!");
	lookaheads["direct-abstract-declarator3"].push_back("constant");
	lookaheads["direct-abstract-declarator3"].push_back("&");
	lookaheads["direct-abstract-declarator3"].push_back("++");
	lookaheads["direct-abstract-declarator3"].push_back("(");
	lookaheads["direct-abstract-declarator3"].push_back("*");
	lookaheads["direct-abstract-declarator3"].push_back("-");
	lookaheads["direct-abstract-declarator3"].push_back("--");
	lookaheads["direct-abstract-declarator3"].push_back("sizeof");
	lookaheads["direct-abstract-declarator3"].push_back("identifier");
	lookaheads["direct-abstract-declarator3"].push_back("string-literal");
	lookaheads["direct-abstract-declarator3"].push_back("static");
	lookaheads["direct-abstract-declarator3"].push_back("static");
	lookaheads["direct-abstract-declarator3"].push_back("*");

	lookaheads["statement"].push_back("identifier");
	lookaheads["statement"].push_back("{");
	lookaheads["statement"].push_back("!");
	lookaheads["statement"].push_back("constant");
	lookaheads["statement"].push_back("&");
	lookaheads["statement"].push_back("++");
	lookaheads["statement"].push_back("(");
	lookaheads["statement"].push_back("*");
	lookaheads["statement"].push_back("-");
	lookaheads["statement"].push_back("--");
	lookaheads["statement"].push_back("sizeof");
	lookaheads["statement"].push_back("identifier");
	lookaheads["statement"].push_back(";");
	lookaheads["statement"].push_back("string-literal");
	lookaheads["statement"].push_back("!");
	lookaheads["statement"].push_back("constant");
	lookaheads["statement"].push_back("goto");
	lookaheads["statement"].push_back("sizeof");
	lookaheads["statement"].push_back("&");
	lookaheads["statement"].push_back("++");
	lookaheads["statement"].push_back("(");
	lookaheads["statement"].push_back("*");
	lookaheads["statement"].push_back("-");
	lookaheads["statement"].push_back("else");
	lookaheads["statement"].push_back("break");
	lookaheads["statement"].push_back("--");
	lookaheads["statement"].push_back("while");
	lookaheads["statement"].push_back("continue");
	lookaheads["statement"].push_back("string-literal");
	lookaheads["statement"].push_back("return");
	lookaheads["statement"].push_back(";");
	lookaheads["statement"].push_back("identifier");
	lookaheads["statement"].push_back("{");
	lookaheads["statement"].push_back("if");
	lookaheads["statement"].push_back("while");
	lookaheads["statement"].push_back("break");
	lookaheads["statement"].push_back("continue");
	lookaheads["statement"].push_back("return");
	lookaheads["statement"].push_back("goto");

	lookaheads["labeled-statement"].push_back("identifier");

	lookaheads["compound-statement"].push_back("{");

	lookaheads["block-item-list"].push_back("constant");
	lookaheads["block-item-list"].push_back("int");
	lookaheads["block-item-list"].push_back("char");
	lookaheads["block-item-list"].push_back("sizeof");
	lookaheads["block-item-list"].push_back("if");
	lookaheads["block-item-list"].push_back("!");
	lookaheads["block-item-list"].push_back("struct");
	lookaheads["block-item-list"].push_back("&");
	lookaheads["block-item-list"].push_back("(");
	lookaheads["block-item-list"].push_back("*");
	lookaheads["block-item-list"].push_back("-");
	lookaheads["block-item-list"].push_back(";");
	lookaheads["block-item-list"].push_back("_Static_assert");
	lookaheads["block-item-list"].push_back("string-literal");
	lookaheads["block-item-list"].push_back("return");
	lookaheads["block-item-list"].push_back("goto");
	lookaheads["block-item-list"].push_back("void");
	lookaheads["block-item-list"].push_back("else");
	lookaheads["block-item-list"].push_back("break");
	lookaheads["block-item-list"].push_back("--");
	lookaheads["block-item-list"].push_back("++");
	lookaheads["block-item-list"].push_back("while");
	lookaheads["block-item-list"].push_back("continue");
	lookaheads["block-item-list"].push_back("{");
	lookaheads["block-item-list"].push_back("identifier");

	lookaheads["block-item-list2"].push_back("constant");
	lookaheads["block-item-list2"].push_back("int");
	lookaheads["block-item-list2"].push_back("char");
	lookaheads["block-item-list2"].push_back("sizeof");
	lookaheads["block-item-list2"].push_back("if");
	lookaheads["block-item-list2"].push_back("!");
	lookaheads["block-item-list2"].push_back("struct");
	lookaheads["block-item-list2"].push_back("&");
	lookaheads["block-item-list2"].push_back("(");
	lookaheads["block-item-list2"].push_back("*");
	lookaheads["block-item-list2"].push_back("-");
	lookaheads["block-item-list2"].push_back(";");
	lookaheads["block-item-list2"].push_back("_Static_assert");
	lookaheads["block-item-list2"].push_back("string-literal");
	lookaheads["block-item-list2"].push_back("return");
	lookaheads["block-item-list2"].push_back("goto");
	lookaheads["block-item-list2"].push_back("void");
	lookaheads["block-item-list2"].push_back("else");
	lookaheads["block-item-list2"].push_back("break");
	lookaheads["block-item-list2"].push_back("--");
	lookaheads["block-item-list2"].push_back("++");
	lookaheads["block-item-list2"].push_back("while");
	lookaheads["block-item-list2"].push_back("continue");
	lookaheads["block-item-list2"].push_back("{");
	lookaheads["block-item-list2"].push_back("identifier");

	lookaheads["block-item"].push_back("char");
	lookaheads["block-item"].push_back("int");
	lookaheads["block-item"].push_back("void");
	lookaheads["block-item"].push_back("_Static_assert");
	lookaheads["block-item"].push_back("struct");
	lookaheads["block-item"].push_back("!");
	lookaheads["block-item"].push_back("constant");
	lookaheads["block-item"].push_back("goto");
	lookaheads["block-item"].push_back("sizeof");
	lookaheads["block-item"].push_back("&");
	lookaheads["block-item"].push_back("++");
	lookaheads["block-item"].push_back("(");
	lookaheads["block-item"].push_back("*");
	lookaheads["block-item"].push_back("-");
	lookaheads["block-item"].push_back("else");
	lookaheads["block-item"].push_back("break");
	lookaheads["block-item"].push_back("--");
	lookaheads["block-item"].push_back("while");
	lookaheads["block-item"].push_back("continue");
	lookaheads["block-item"].push_back("string-literal");
	lookaheads["block-item"].push_back("return");
	lookaheads["block-item"].push_back(";");
	lookaheads["block-item"].push_back("identifier");
	lookaheads["block-item"].push_back("{");
	lookaheads["block-item"].push_back("if");

	lookaheads["expression-statement"].push_back("!");
	lookaheads["expression-statement"].push_back("constant");
	lookaheads["expression-statement"].push_back("&");
	lookaheads["expression-statement"].push_back("++");
	lookaheads["expression-statement"].push_back("(");
	lookaheads["expression-statement"].push_back("*");
	lookaheads["expression-statement"].push_back("-");
	lookaheads["expression-statement"].push_back("--");
	lookaheads["expression-statement"].push_back("sizeof");
	lookaheads["expression-statement"].push_back("identifier");
	lookaheads["expression-statement"].push_back("string-literal");
	lookaheads["expression-statement"].push_back(";");

	lookaheads["selection-statement"].push_back("if");
	lookaheads["selection-statement"].push_back("else");

	lookaheads["iteration-statement"].push_back("while");

	lookaheads["jump-statement"].push_back("goto");
	lookaheads["jump-statement"].push_back("continue");
	lookaheads["jump-statement"].push_back("break");
	lookaheads["jump-statement"].push_back("return");

	lookaheads["primary-expression"].push_back("identifier");
	lookaheads["primary-expression"].push_back("constant");
	lookaheads["primary-expression"].push_back("string-literal");
	lookaheads["primary-expression"].push_back("(");

	lookaheads["postfix-expression"].push_back("(");
	lookaheads["postfix-expression"].push_back("identifier");
	lookaheads["postfix-expression"].push_back("constant");
	lookaheads["postfix-expression"].push_back("string-literal");

	lookaheads["postfix-expression2"].push_back("[");
	lookaheads["postfix-expression2"].push_back("(");
	lookaheads["postfix-expression2"].push_back(".");
	lookaheads["postfix-expression2"].push_back("->");

	lookaheads["argument-expression-list"].push_back("!");
	lookaheads["argument-expression-list"].push_back("constant");
	lookaheads["argument-expression-list"].push_back("&");
	lookaheads["argument-expression-list"].push_back("++");
	lookaheads["argument-expression-list"].push_back("(");
	lookaheads["argument-expression-list"].push_back("*");
	lookaheads["argument-expression-list"].push_back("-");
	lookaheads["argument-expression-list"].push_back("--");
	lookaheads["argument-expression-list"].push_back("sizeof");
	lookaheads["argument-expression-list"].push_back("identifier");
	lookaheads["argument-expression-list"].push_back("string-literal");

	lookaheads["argument-expression-list2"].push_back(",");

	lookaheads["unary-expression"].push_back("(");
	lookaheads["unary-expression"].push_back("identifier");
	lookaheads["unary-expression"].push_back("constant");
	lookaheads["unary-expression"].push_back("string-literal");
	lookaheads["unary-expression"].push_back("++");
	lookaheads["unary-expression"].push_back("--");
	lookaheads["unary-expression"].push_back("!");
	lookaheads["unary-expression"].push_back("*");
	lookaheads["unary-expression"].push_back("-");
	lookaheads["unary-expression"].push_back("&");
	lookaheads["unary-expression"].push_back("sizeof");

	lookaheads["unary-expression2"].push_back("!");
	lookaheads["unary-expression2"].push_back("constant");
	lookaheads["unary-expression2"].push_back("&");
	lookaheads["unary-expression2"].push_back("++");
	lookaheads["unary-expression2"].push_back("(");
	lookaheads["unary-expression2"].push_back("*");
	lookaheads["unary-expression2"].push_back("-");
	lookaheads["unary-expression2"].push_back("--");
	lookaheads["unary-expression2"].push_back("sizeof");
	lookaheads["unary-expression2"].push_back("identifier");
	lookaheads["unary-expression2"].push_back("string-literal");
	lookaheads["unary-expression2"].push_back("(");

	lookaheads["unary-operator"].push_back("&");
	lookaheads["unary-operator"].push_back("*");
	lookaheads["unary-operator"].push_back("-");
	lookaheads["unary-operator"].push_back("!");

	lookaheads["cast-expression"].push_back("!");
	lookaheads["cast-expression"].push_back("constant");
	lookaheads["cast-expression"].push_back("&");
	lookaheads["cast-expression"].push_back("++");
	lookaheads["cast-expression"].push_back("(");
	lookaheads["cast-expression"].push_back("*");
	lookaheads["cast-expression"].push_back("-");
	lookaheads["cast-expression"].push_back("--");
	lookaheads["cast-expression"].push_back("sizeof");
	lookaheads["cast-expression"].push_back("identifier");
	lookaheads["cast-expression"].push_back("string-literal");
	lookaheads["cast-expression"].push_back("(");

	lookaheads["multiplicative-expression"].push_back("!");
	lookaheads["multiplicative-expression"].push_back("constant");
	lookaheads["multiplicative-expression"].push_back("&");
	lookaheads["multiplicative-expression"].push_back("++");
	lookaheads["multiplicative-expression"].push_back("(");
	lookaheads["multiplicative-expression"].push_back("*");
	lookaheads["multiplicative-expression"].push_back("-");
	lookaheads["multiplicative-expression"].push_back("--");
	lookaheads["multiplicative-expression"].push_back("sizeof");
	lookaheads["multiplicative-expression"].push_back("identifier");
	lookaheads["multiplicative-expression"].push_back("string-literal");

	lookaheads["multiplicative-expression2"].push_back("*");

	lookaheads["additive-expression"].push_back("!");
	lookaheads["additive-expression"].push_back("constant");
	lookaheads["additive-expression"].push_back("&");
	lookaheads["additive-expression"].push_back("++");
	lookaheads["additive-expression"].push_back("(");
	lookaheads["additive-expression"].push_back("*");
	lookaheads["additive-expression"].push_back("-");
	lookaheads["additive-expression"].push_back("--");
	lookaheads["additive-expression"].push_back("sizeof");
	lookaheads["additive-expression"].push_back("identifier");
	lookaheads["additive-expression"].push_back("string-literal");

	lookaheads["additive-expression2"].push_back("+");
	lookaheads["additive-expression2"].push_back("-");

	lookaheads["relational-expression"].push_back("!");
	lookaheads["relational-expression"].push_back("constant");
	lookaheads["relational-expression"].push_back("&");
	lookaheads["relational-expression"].push_back("++");
	lookaheads["relational-expression"].push_back("(");
	lookaheads["relational-expression"].push_back("*");
	lookaheads["relational-expression"].push_back("-");
	lookaheads["relational-expression"].push_back("--");
	lookaheads["relational-expression"].push_back("sizeof");
	lookaheads["relational-expression"].push_back("identifier");
	lookaheads["relational-expression"].push_back("string-literal");

	lookaheads["relational-expression2"].push_back("<");

	lookaheads["equality-expression"].push_back("!");
	lookaheads["equality-expression"].push_back("constant");
	lookaheads["equality-expression"].push_back("&");
	lookaheads["equality-expression"].push_back("++");
	lookaheads["equality-expression"].push_back("(");
	lookaheads["equality-expression"].push_back("*");
	lookaheads["equality-expression"].push_back("-");
	lookaheads["equality-expression"].push_back("--");
	lookaheads["equality-expression"].push_back("sizeof");
	lookaheads["equality-expression"].push_back("identifier");
	lookaheads["equality-expression"].push_back("string-literal");

	lookaheads["equality-expression2"].push_back("==");
	lookaheads["equality-expression2"].push_back("!=");

	lookaheads["logical-AND-expression"].push_back("!");
	lookaheads["logical-AND-expression"].push_back("constant");
	lookaheads["logical-AND-expression"].push_back("&");
	lookaheads["logical-AND-expression"].push_back("++");
	lookaheads["logical-AND-expression"].push_back("(");
	lookaheads["logical-AND-expression"].push_back("*");
	lookaheads["logical-AND-expression"].push_back("-");
	lookaheads["logical-AND-expression"].push_back("--");
	lookaheads["logical-AND-expression"].push_back("sizeof");
	lookaheads["logical-AND-expression"].push_back("identifier");
	lookaheads["logical-AND-expression"].push_back("string-literal");

	lookaheads["logical-AND-expression2"].push_back("&&");

	lookaheads["logical-OR-expression"].push_back("!");
	lookaheads["logical-OR-expression"].push_back("constant");
	lookaheads["logical-OR-expression"].push_back("&");
	lookaheads["logical-OR-expression"].push_back("++");
	lookaheads["logical-OR-expression"].push_back("(");
	lookaheads["logical-OR-expression"].push_back("*");
	lookaheads["logical-OR-expression"].push_back("-");
	lookaheads["logical-OR-expression"].push_back("--");
	lookaheads["logical-OR-expression"].push_back("sizeof");
	lookaheads["logical-OR-expression"].push_back("identifier");
	lookaheads["logical-OR-expression"].push_back("string-literal");

	lookaheads["logical-OR-expression2"].push_back("||");

	lookaheads["conditional-expression"].push_back("!");
	lookaheads["conditional-expression"].push_back("constant");
	lookaheads["conditional-expression"].push_back("&");
	lookaheads["conditional-expression"].push_back("++");
	lookaheads["conditional-expression"].push_back("(");
	lookaheads["conditional-expression"].push_back("*");
	lookaheads["conditional-expression"].push_back("-");
	lookaheads["conditional-expression"].push_back("--");
	lookaheads["conditional-expression"].push_back("sizeof");
	lookaheads["conditional-expression"].push_back("identifier");
	lookaheads["conditional-expression"].push_back("string-literal");

	lookaheads["conditional-expression2"].push_back("?");

	lookaheads["assignment-expression"].push_back("!");
	lookaheads["assignment-expression"].push_back("constant");
	lookaheads["assignment-expression"].push_back("&");
	lookaheads["assignment-expression"].push_back("++");
	lookaheads["assignment-expression"].push_back("(");
	lookaheads["assignment-expression"].push_back("*");
	lookaheads["assignment-expression"].push_back("-");
	lookaheads["assignment-expression"].push_back("--");
	lookaheads["assignment-expression"].push_back("sizeof");
	lookaheads["assignment-expression"].push_back("identifier");
	lookaheads["assignment-expression"].push_back("string-literal");
	lookaheads["assignment-expression"].push_back("!");
	lookaheads["assignment-expression"].push_back("constant");
	lookaheads["assignment-expression"].push_back("&");
	lookaheads["assignment-expression"].push_back("++");
	lookaheads["assignment-expression"].push_back("(");
	lookaheads["assignment-expression"].push_back("*");
	lookaheads["assignment-expression"].push_back("-");
	lookaheads["assignment-expression"].push_back("--");
	lookaheads["assignment-expression"].push_back("sizeof");
	lookaheads["assignment-expression"].push_back("identifier");
	lookaheads["assignment-expression"].push_back("string-literal");

	lookaheads["assignment-operator"].push_back("=");
	lookaheads["assignment-operator"].push_back("*=");
	lookaheads["assignment-operator"].push_back("/=");
	lookaheads["assignment-operator"].push_back("%=");
	lookaheads["assignment-operator"].push_back("+=");
	lookaheads["assignment-operator"].push_back("-=");
	lookaheads["assignment-operator"].push_back("<<=");
	lookaheads["assignment-operator"].push_back(">>=");
	lookaheads["assignment-operator"].push_back("&=");
	lookaheads["assignment-operator"].push_back("^=");
	lookaheads["assignment-operator"].push_back("|=");

	lookaheads["expression"].push_back("!");
	lookaheads["expression"].push_back("constant");
	lookaheads["expression"].push_back("&");
	lookaheads["expression"].push_back("++");
	lookaheads["expression"].push_back("(");
	lookaheads["expression"].push_back("*");
	lookaheads["expression"].push_back("-");
	lookaheads["expression"].push_back("--");
	lookaheads["expression"].push_back("sizeof");
	lookaheads["expression"].push_back("identifier");
	lookaheads["expression"].push_back("string-literal");

	lookaheads["expression2"].push_back(",");

	lookaheads["constant-expression"].push_back("!");
	lookaheads["constant-expression"].push_back("constant");
	lookaheads["constant-expression"].push_back("&");
	lookaheads["constant-expression"].push_back("++");
	lookaheads["constant-expression"].push_back("(");
	lookaheads["constant-expression"].push_back("*");
	lookaheads["constant-expression"].push_back("-");
	lookaheads["constant-expression"].push_back("--");
	lookaheads["constant-expression"].push_back("sizeof");
	lookaheads["constant-expression"].push_back("identifier");
	lookaheads["constant-expression"].push_back("string-literal");

}

void Parser::translation_unit()
{

	if (check_lookahead("external-declaration")) {
		external-declaration();
		translation-unit2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::translation_unit2()
{

	if (check_lookahead("external-declaration")) {
		external-declaration();
		translation-unit2();
	} 
}

void Parser::external_declaration()
{

	if (check_lookahead("declaration-specifiers")) {
		declaration-specifiers();
		external-declaration2();
	} else if (check_lookahead("static_assert-declaration")) {
		static_assert-declaration();
	} else {
		error("Unexpected token");
	} 
}

void Parser::external_declaration2()
{

	if (check_lookahead("declarator")) {
		declarator();
		compound-statement();
	} else if (check_lookahead("init-declarator-list")) {
		init-declarator-list();
		match_token(";)";
	} else {
		error("Unexpected token");
	} 
}

void Parser::function_definition()
{

	if (check_lookahead("declaration-specifiers")) {
		declaration-specifiers();
		declarator();
		compound-statement();
	} else {
		error("Unexpected token");
	} 
}

void Parser::type_specifier()
{

	if (lookahead.token == "void") {
		match_token("void)";
	} else if (lookahead.token == "char") {
		match_token("char)";
	} else if (lookahead.token == "int") {
		match_token("int)";
	} else if (check_lookahead("struct-or-union-specifier")) {
		struct-or-union-specifier();
	} else {
		error("Unexpected token");
	} 
}

void Parser::struct_or_union_specifier()
{

	if (lookahead.token == "struct") {
		match_token("struct)";
		match_token_type("identifier)";
		struct-or-union-specifier2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::struct_or_union_specifier2()
{

	if (lookahead.token == "{") {
		match_token("{)";
		struct-declaration-list();
		match_token("})";
	} 
}

void Parser::struct_declaration_list()
{

	if (check_lookahead("struct-declaration")) {
		struct-declaration();
		struct-declaration-list2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::struct_declaration_list2()
{

	if (check_lookahead("struct-declaration")) {
		struct-declaration();
		struct-declaration-list2();
	} 
}

void Parser::struct_declaration()
{

	if (check_lookahead("specifier-qualifier-list")) {
		specifier-qualifier-list();
		struct-declarator-list();
		match_token(";)";
	} else if (check_lookahead("static_assert-declaration")) {
		static_assert-declaration();
	} else {
		error("Unexpected token");
	} 
}

void Parser::specifier_qualifier_list()
{

	if (check_lookahead("type-specifier")) {
		type-specifier();
		specifier-qualifier-list();
	} else {
		error("Unexpected token");
	} 
}

void Parser::struct_declarator_list()
{

	if (check_lookahead("struct-declarator")) {
		struct-declarator();
		struct-declarator-list2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::struct_declarator_list2()
{

	if (lookahead.token == ",") {
		match_token(",)";
		struct-declarator();
		struct-declarator-list2();
	} 
}

void Parser::struct_declarator()
{

	if (check_lookahead("declarator")) {
		declarator();
	} else {
		error("Unexpected token");
	} 
}

void Parser::declaration()
{

	if (check_lookahead("declaration-specifiers")) {
		declaration-specifiers();
		init-declarator-list();
		match_token(";)";
	} else if (check_lookahead("static_assert-declaration")) {
		static_assert-declaration();
	} else {
		error("Unexpected token");
	} 
}

void Parser::static_assert_declaration()
{

	if (lookahead.token == "_Static_assert") {
		match_token("_Static_assert)";
		match_token("()";
		constant-expression();
		match_token(",)";
		match_token_type("string-literal)";
		match_token("))";
		match_token(";)";
	} else {
		error("Unexpected token");
	} 
}

void Parser::declaration_specifiers()
{

	if (check_lookahead("type-specifier")) {
		type-specifier();
		declaration-specifiers();
	} else {
		error("Unexpected token");
	} 
}

void Parser::init_declarator_list()
{

	if (check_lookahead("init-declarator")) {
		init-declarator();
	} else {
		error("Unexpected token");
	} 
}

void Parser::init_declarator()
{

	if (check_lookahead("declarator")) {
		declarator();
	} else {
		error("Unexpected token");
	} 
}

void Parser::declarator()
{

	if (check_lookahead("pointer")) {
		pointer();
		direct-declarator();
	} else {
		error("Unexpected token");
	} 
}

void Parser::pointer()
{

	if (lookahead.token == "*") {
		match_token("*)";
		pointer2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::pointer2()
{

	if (lookahead.token == "*") {
		match_token("*)";
		pointer2();
	} 
}

void Parser::direct_declarator()
{

	if (lookahead.token == "identifier") {
		match_token_type("identifier)";
		direct-declarator2();
	} else if (lookahead.token == "(") {
		match_token("()";
		declarator();
		match_token("))";
		direct-declarator2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::direct_declarator2()
{

	if (lookahead.token == "(") {
		match_token("()";
		parameter-type-list();
		match_token("))";
	} else {
		error("Unexpected token");
	} 
}

void Parser::parameter_type_list()
{

	if (check_lookahead("parameter-list")) {
		parameter-list();
	} else {
		error("Unexpected token");
	} 
}

void Parser::parameter_list()
{

	if (check_lookahead("parameter-declaration")) {
		parameter-declaration();
		parameter-list2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::parameter_list2()
{

	if (lookahead.token == ",") {
		match_token(",)";
		parameter-declaration();
		parameter-list2();
	} 
}

void Parser::parameter_declaration()
{

	if (check_lookahead("declaration-specifiers")) {
		declaration-specifiers();
		parameter-declaration2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::parameter_declaration2()
{

	if (check_lookahead("declarator")) {
		declarator();
	} else if (check_lookahead("abstract-declarator")) {
		abstract-declarator();
	} else {
		error("Unexpected token");
	} 
}

void Parser::abstract_declarator()
{

	if (check_lookahead("pointer")) {
		pointer();
		abstract-declarator2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::abstract_declarator2()
{

	if (check_lookahead("direct-abstract-declarator")) {
		direct-abstract-declarator();
	} 
}

void Parser::direct_abstract_declarator()
{

	if (lookahead.token == "(") {
		match_token("()";
		abstract-declarator();
		match_token("))";
		direct-abstract-declarator2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::direct_abstract_declarator2()
{

	if (lookahead.token == "[") {
		match_token("[)";
		direct-abstract-declarator3();
	} else if (lookahead.token == "(") {
		match_token("()";
		parameter-type-list();
		match_token("))";
		direct-abstract-declarator2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::direct_abstract_declarator3()
{

	if (check_lookahead("assignment-expression")) {
		assignment-expression();
		match_token("])";
		direct-abstract-declarator2();
	} else if (lookahead.token == "static") {
		match_token("static)";
		assignment-expression();
		match_token("])";
		direct-abstract-declarator2();
	} else if (lookahead.token == "static") {
		match_token("static)";
		assignment-expression();
		match_token("])";
		direct-abstract-declarator2();
	} else if (lookahead.token == "*") {
		match_token("*)";
		match_token("])";
		direct-abstract-declarator2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::statement()
{

	if (check_lookahead("labeled-statement")) {
		labeled-statement();
	} else if (check_lookahead("compound-statement")) {
		compound-statement();
	} else if (check_lookahead("expression-statement")) {
		expression-statement();
	} else if (check_lookahead("selection-statement")) {
		selection-statement();
	} else if (check_lookahead("iteration-statement")) {
		iteration-statement();
	} else if (check_lookahead("jump-statement")) {
		jump-statement();
	} else {
		error("Unexpected token");
	} 
}

void Parser::labeled_statement()
{

	if (lookahead.token == "identifier") {
		match_token_type("identifier)";
		match_token(":)";
		statement();
	} else {
		error("Unexpected token");
	} 
}

void Parser::compound_statement()
{

	if (lookahead.token == "{") {
		match_token("{)";
		block-item-list();
		match_token("})";
	} else {
		error("Unexpected token");
	} 
}

void Parser::block_item_list()
{

	if (check_lookahead("block-item")) {
		block-item();
		block-item-list2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::block_item_list2()
{

	if (check_lookahead("block-item")) {
		block-item();
		block-item-list2();
	} 
}

void Parser::block_item()
{

	if (check_lookahead("declaration")) {
		declaration();
	} else if (check_lookahead("statement")) {
		statement();
	} else {
		error("Unexpected token");
	} 
}

void Parser::expression_statement()
{

	if (check_lookahead("expression")) {
		expression();
		match_token(";)";
	} else if (lookahead.token == ";") {
		match_token(";)";
	} else {
		error("Unexpected token");
	} 
}

void Parser::selection_statement()
{

	if (lookahead.token == "if") {
		match_token("if)";
		match_token("()";
		expression();
		match_token("))";
		statement();
		match_token("selection-statement2)";
	} else if (lookahead.token == "else") {
		match_token("else)";
		statement();
	} 
}

void Parser::iteration_statement()
{

	if (lookahead.token == "while") {
		match_token("while)";
		match_token("()";
		expression();
		match_token("))";
		statement();
	} else {
		error("Unexpected token");
	} 
}

void Parser::jump_statement()
{

	if (lookahead.token == "goto") {
		match_token("goto)";
		match_token_type("identifier)";
		match_token(";)";
	} else if (lookahead.token == "continue") {
		match_token("continue)";
		match_token(";)";
	} else if (lookahead.token == "break") {
		match_token("break)";
		match_token(";)";
	} else if (lookahead.token == "return") {
		match_token("return)";
		expression();
		match_token(";)";
	} else {
		error("Unexpected token");
	} 
}

void Parser::primary_expression()
{

	if (lookahead.token == "identifier") {
		match_token_type("identifier)";
	} else if (lookahead.token == "constant") {
		match_token_type("constant)";
	} else if (lookahead.token == "string-literal") {
		match_token_type("string-literal)";
	} else if (lookahead.token == "(") {
		match_token("()";
		expression();
		match_token("))";
	} else {
		error("Unexpected token");
	} 
}

void Parser::postfix_expression()
{

	if (check_lookahead("primary-expression")) {
		primary-expression();
		postfix-expression2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::postfix_expression2()
{

	if (lookahead.token == "[") {
		match_token("[)";
		expression();
		match_token("])";
		postfix-expression2();
	} else if (lookahead.token == "(") {
		match_token("()";
		argument-expression-list();
		match_token("))";
		postfix-expression2();
	} else if (lookahead.token == ".") {
		match_token(".)";
		match_token_type("identifier)";
		postfix-expression2();
	} else if (lookahead.token == "->") {
		match_token("->)";
		match_token_type("identifier)";
		postfix-expression2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::argument_expression_list()
{

	if (check_lookahead("assignment-expression")) {
		assignment-expression();
		argument-expression-list2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::argument_expression_list2()
{

	if (lookahead.token == ",") {
		match_token(",)";
		assignment-expression();
		argument-expression-list2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::unary_expression()
{

	if (check_lookahead("postfix-expression")) {
		postfix-expression();
	} else if (lookahead.token == "++") {
		match_token("++)";
		unary-expression();
	} else if (lookahead.token == "--") {
		match_token("--)";
		unary-expression();
	} else if (check_lookahead("unary-operator")) {
		unary-operator();
		cast-expression();
	} else if (lookahead.token == "sizeof") {
		match_token("sizeof)";
		unary-expression2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::unary_expression2()
{

	if (check_lookahead("unary-expression")) {
		unary-expression();
	} else if (lookahead.token == "(") {
		match_token("()";
		type-specifier();
		match_token("))";
	} else {
		error("Unexpected token");
	} 
}

void Parser::unary_operator()
{

	if (lookahead.token == "&") {
		match_token("&)";
	} else if (lookahead.token == "*") {
		match_token("*)";
	} else if (lookahead.token == "-") {
		match_token("-)";
	} else if (lookahead.token == "!") {
		match_token("!)";
	} else {
		error("Unexpected token");
	} 
}

void Parser::cast_expression()
{

	if (check_lookahead("unary-expression")) {
		unary-expression();
	} else if (lookahead.token == "(") {
		match_token("()";
		type-specifier();
		match_token("))";
		cast-expression();
	} else {
		error("Unexpected token");
	} 
}

void Parser::multiplicative_expression()
{

	if (check_lookahead("cast-expression")) {
		cast-expression();
		multiplicative-expression2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::multiplicative_expression2()
{

	if (lookahead.token == "*") {
		match_token("*)";
		cast-expression();
		multiplicative-expression2();
	} 
}

void Parser::additive_expression()
{

	if (check_lookahead("multiplicative-expression")) {
		multiplicative-expression();
		additive-expression();
	} else {
		error("Unexpected token");
	} 
}

void Parser::additive_expression2()
{

	if (lookahead.token == "+") {
		match_token("+)";
		multiplicative-expression();
		additive-expression2();
	} else if (lookahead.token == "-") {
		match_token("-)";
		multiplicative-expression();
		additive-expression2();
	} 
}

void Parser::relational_expression()
{

	if (check_lookahead("additive-expression")) {
		additive-expression();
		relational-expression2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::relational_expression2()
{

	if (lookahead.token == "<") {
		match_token("<)";
		additive-expression();
		relational-expression2();
	} 
}

void Parser::equality_expression()
{

	if (check_lookahead("relational-expression")) {
		relational-expression();
		equality-expression2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::equality_expression2()
{

	if (lookahead.token == "==") {
		match_token("==)";
		relational-expression();
		equality-expression2();
	} else if (lookahead.token == "!=") {
		match_token("!=)";
		relational-expression();
		equality-expression2();
	} 
}

void Parser::logical_AND_expression()
{

	if (check_lookahead("equality-expression")) {
		equality-expression();
		logical-AND-expression2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::logical_AND_expression2()
{

	if (lookahead.token == "&&") {
		match_token("&&)";
		equality-expression();
		logical-AND-expression2();
	} 
}

void Parser::logical_OR_expression()
{

	if (check_lookahead("logical-AND-expression")) {
		logical-AND-expression();
		logical-OR-expression2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::logical_OR_expression2()
{

	if (lookahead.token == "||") {
		match_token("||)";
		logical-AND-expression();
		logical-OR-expression2();
	} 
}

void Parser::conditional_expression()
{

	if (check_lookahead("logical-OR-expression")) {
		logical-OR-expression();
		conditional-expression2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::conditional_expression2()
{

	if (lookahead.token == "?") {
		match_token("?)";
		expression();
		match_token(":)";
		conditional-expression();
	} 
}

void Parser::assignment_expression()
{

	if (check_lookahead("conditional-expression")) {
		conditional-expression();
	} else if (check_lookahead("unary-expression")) {
		unary-expression();
		assignment-operator();
		assignment-expression();
	} else {
		error("Unexpected token");
	} 
}

void Parser::assignment_operator()
{

	if (lookahead.token == "=") {
		match_token("=)";
	} else if (lookahead.token == "*=") {
		match_token("*=)";
	} else if (lookahead.token == "/=") {
		match_token("/=)";
	} else if (lookahead.token == "%=") {
		match_token("%=)";
	} else if (lookahead.token == "+=") {
		match_token("+=)";
	} else if (lookahead.token == "-=") {
		match_token("-=)";
	} else if (lookahead.token == "<<=") {
		match_token("<<=)";
	} else if (lookahead.token == ">>=") {
		match_token(">>=)";
	} else if (lookahead.token == "&=") {
		match_token("&=)";
	} else if (lookahead.token == "^=") {
		match_token("^=)";
	} else if (lookahead.token == "|=") {
		match_token("|=)";
	} else {
		error("Unexpected token");
	} 
}

void Parser::expression()
{

	if (check_lookahead("assignment-expression")) {
		assignment-expression();
		expression2();
	} else {
		error("Unexpected token");
	} 
}

void Parser::expression2()
{

	if (lookahead.token == ",") {
		match_token(",)";
		assignment-expression();
		expression2();
	} 
}

void Parser::constant_expression()
{

	if (check_lookahead("conditional-expression")) {
		conditional-expression();
	} else {
		error("Unexpected token");
	} 
}

