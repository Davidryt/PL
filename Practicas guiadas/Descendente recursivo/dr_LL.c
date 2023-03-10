/* David Rico Menéndez - Álvaro Marco Pérez*/
/* 100384036@alumnos.uc3m.es - 100383350@alumnos.uc3m.es */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define T_NUMBER 1001
#define T_OPERATOR 1002

int token;
int number;
int token_val;

int line_counter = 1;

int rd_lex()
{
	int c;

	do
	{
		c = getchar();
		if (c == '\n')
			line_counter++; // info for rd_syntax_error()
	} while (c == ' ' || c == '\t' || c == '\r');

	if (isdigit(c))
	{
		ungetc(c, stdin);
		scanf("%d", &number);
		token = T_NUMBER;
		return (token); // returns the Token for Number
	}

	if (c == '+' || c == '-' || c == '*' || c == '/')
	{
		token_val = c;
		token = T_OPERATOR;
		return (token);
	} // returns the Token for Arithmetic Operators

	token = c;
	return (token); // returns a literal
}

void rd_syntax_error(int expected, int token, char *output)
{
	fprintf(stderr, "ERROR in line %d ", line_counter);
	fprintf(stderr, output, expected, token);

	exit(0);
}

void MatchSymbol(int expected_token)
{
	if (token != expected_token)
	{
		rd_syntax_error(expected_token, token, "token %d expected, but %d was read");
	}
	rd_lex();
}

#define ParseLParen() MatchSymbol('('); // More concise and efficient definitions
#define ParseRParen() MatchSymbol(')'); // rather than using functions
										// This is only useful for matching Literals

int ParseNumber() // Parsing Non Terminals and some Tokens require more
{				  // complex function s
	int val = number;
	MatchSymbol(T_NUMBER);
	return val;
}

int ParseOperator() // Parsing Non Terminals and some Tokens require more
{					// complex functions
	MatchSymbol(T_OPERATOR);
	return token_val;
}

int ParseTerm() // T ::= N | ( E )   returns the numeric value of the Term
{
	int val;

	if (token == T_NUMBER)
	{ // T derives alternatives, requires checking FIRST ( E )
		val = ParseNumber();
	}
	else
	{
		ParseLParen();
		val = ParseAxiom();
		ParseRParen();
	}

	return val;
}

int ParseE() // F ::= (*TF) | (/TF) | (+TF) | (-TF) | T
{
	int val;
	int val2;
	int operator;

	if (token == '(')
	{ // Therefore, we check FOLLOW(ExpressionRest)

		ParseLParen();
		operator= ParseOperator();

		val = ParseE();	 // E
		val2 = ParseE(); // E+

		switch (operator)
		{
		case '*':
			val *= val2;
			break;
		case '/':
			val /= val2;
			break;
		case '+':
			val += val2;
			break;
		case '-':
			val -= val2;
			break;
		default:
			rd_syntax_error(operator, 0, "Token %d was read, expected %c (ParseExpression->Operate)\n");
			break;
		}
			ParseRParen();
		return val;
	}
	else
	{
		val = ParseTerm(); // T
		return val;
	}
}

int ParseAxiom()
{
	return ParseE();
}

int main(void)
{
	while (1)
	{
		rd_lex();
		printf("Valor %d\n", ParseAxiom());
	}
}
