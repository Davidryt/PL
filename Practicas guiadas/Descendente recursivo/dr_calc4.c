#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define T_NUMBER 1001
#define T_OP 1002

int ParseExpression();

int token;  // Here we store the current token/literal
int number; // and the value of the number

int line_counter = 1;

int rd_lex()
{
    int c;

    do
    {
        c = getchar();
    } while (c == ' ' || c == '\t');

    if (isdigit(c))
    {
        ungetc(c, stdin);
        scanf("%d", &number);
        token = T_NUMBER;
        return (token); // returns the Token for Number
    }

    if (c == '\n')
        line_counter++; // info for rd_syntax_error ()

    token = c;
    return (token); // returns a literal
}

void rd_syntax_error(int expected, int token, char *output)
{
    fprintf(stderr, "ERROR in line %d ", line_counter);
    fprintf(stderr, output, token, expected);

    exit(0);
}

void MatchSymbol(int expected_token)
{
    if (token != expected_token)
    {
        rd_syntax_error(expected_token, token, "token %d expected, but %d was read (Match symbol)\n");
    }
    rd_lex();
}

#define ParseLParen() MatchSymbol('('); // More concise and efficient definitions
#define ParseRParen() MatchSymbol(')'); // rather than using functions
                                        // This is only useful for matching Literals

int ParseNumber()
{
    MatchSymbol(T_NUMBER);
    return number;
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
        val = ParseExpression();
        ParseRParen();
    }

    return val;
}

int ParseExpression2() // F ::= *TF | /TF | T
{                      // returns the numeric value of the Expression
    int val;
    int val2;
    int operator;

    if (token == '(')
    { // Therefore, we check FOLLOW(ExpressionRest)

        ParseLParen();

        switch (token)
        {         // ExpressionRest derives in alternatives
        case '*': // requires checking FIRST(ExpressionRest))
        case '/':
            operator= token;
            break;
        default:
            rd_syntax_error(token, 0, "Token %d was read, expected %c (ParseExpression2->Read)\n");
            break;
        }
        rd_lex();

        val = ParseTerm();         // T
        val2 = ParseExpression2(); // F

        switch (operator)
        { // This part is for the Semantic actions
        case '*':
            val *= val2;
            break;
        case '/':
            val /= val2;
            break;
        default:
            rd_syntax_error(operator, 0, "Token %d was read, expected %c (ParseExpression2->Operate)\n");
            break;
        }

        if (token == ')')
        { // @TODO lo mismo hay que hacer rd_lex antes
            ParseRParen();
        }
        else
        {
            rd_syntax_error(operator, 0, "Token %d was read, expected ) (ParseExpression2->Final paretesis)\n");
        }
        return val;
    }
    else
    {
        val = ParseTerm(); // F
        return val;
    }
}

int ParseExpression() // E ::= +FE | -FE | F
{                     // returns the numeric value of the Expression
    int val;
    int val2;
    int operator;


    if (token == '(')
    { // Therefore, we check FOLLOW(ExpressionRest)

        ParseLParen();

        switch (token)
        {         // ExpressionRest derives in alternatives
        case '+': // requires checking FIRST(ExpressionRest))
        case '-':
            operator= token;
            break;
        default:
            rd_syntax_error(token, 0, "Token %d was read, expected %c (ParseExpression->Read)\n");
            break;
        }

        rd_lex();
        
        val = ParseExpression2(); // F
        val2 = ParseExpression(); // E

        switch (operator)
        { // This part is for the Semantic actions
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

        if (token == ')')
        { // @TODO lo mismo hay que hacer rd_lex antes
            ParseRParen();
        }
        else
        {
            rd_syntax_error(operator, 0, "Token %d was read, expected ) (ParseExpression->Final paretesis)\n");
        }
        return val;
    }
    else
    {
        val = ParseExpression2(); // F
        return val;
    }
}

int main(void)
{

    while (1)
    {
        rd_lex();
        printf("Valor %d\n", ParseExpression());
    }

    system("PAUSE");
}
