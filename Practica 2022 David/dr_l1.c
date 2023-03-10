/* Claudia Negrin Leon - Cesar Arrojo Lara   Grupo 32*/
/* 100394486@alumnos.uc3m.es 100383510@alumnos.uc3m.es */

#include <stdio.h>
#include <stdlib.h>

#define T_NUMBER     1001
#define T_OPERATOR    1002        

int ParseExpression () ;        // Prototype for forward reference 

int token ;            // Here we store the current token/literal 
int number ;        // the value of the number 
int token_val ;        // or the arithmetic operator
                    // TO DO: Pack these variables in a struct

int line_counter = 1 ;


int rd_lex ()
{
    int c ;
    
    do {
        c = getchar () ;
    } while (c == ' ' || c == '\t' || c == '\r' || c == '\n') ;
    
    if (isdigit (c)) {
        ungetc (c, stdin) ;
        scanf ("%d", &number) ;
        token = T_NUMBER ;
        return (token) ;    // returns the Token for Number
    }

    if (c == '+' || c == '-' || c == '*' || c == '/') {
        token_val = c ;
        token = T_OPERATOR ;
        return (token) ;
    }                        // returns the Token for Arithmetic Operators

    if (c == '\n')
        line_counter++ ;    // info for rd_syntax_error()
    	token = c ;
    return (token) ;        // returns a literal
}


void rd_syntax_error (int expected, int token, char *output) 
{
    fprintf (stderr, "ERROR in line %d ", line_counter) ;
    fprintf (stderr, output, expected, token) ;
    
    exit (0) ;
}


void MatchSymbol (int expected_token)
{
    if (token != expected_token) {
        rd_syntax_error (expected_token, token, "token %d expected, but %d was read") ;
    }
}


#define ParseLParen()     MatchSymbol ('(') ; // More concise and efficient definitions
#define ParseRParen()     MatchSymbol (')') ; // rather than using functions
                                            // This is only useful for matching Literals


int ParseNumber ()             // Parsing Non Terminals and some Tokens require more
{                            // complex functions
    MatchSymbol (T_NUMBER) ;
    return number ;
}

int ParseParameter()
{
    if (token == T_NUMBER) {
        return ParseNumber();
    }

	else {
	return ParseExpression();
	}
}

int ParseOperator ()
{
    MatchSymbol (T_OPERATOR);
    return token_val;
}


int ParseExpression ()         
{
    int val ;
    int val2 ;
    int operator ;

	ParseLParen();
	rd_lex () ;
	operator = ParseOperator();
	rd_lex () ;
	val = ParseParameter();
	rd_lex () ;
	val2 = ParseParameter();
	rd_lex () ;
	ParseRParen();

	switch (operator){
		case '+' :  val += val2 ;
		    break ;
		case '-' :  val -= val2 ;
		    break ;
		case '*' :  val = val * val2 ;
		    break ;
		case '/' :  val = val / val2 ;
		    break ;
		default :   rd_syntax_error (operator, 0, "Unexpected error in ParseExpression for operator %c\n") ;
		    break ;
		}
	return val;
}


int main (void) {

    while (1) {
        rd_lex () ;                
        printf ("Valor %d\n", ParseExpression ()) ;
    }    
    
    system ("PAUSE") ;
}

