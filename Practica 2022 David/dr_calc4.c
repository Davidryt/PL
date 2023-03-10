#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define T_NUMBER 1001
#define T_OP     1002		

int ParseExpression () ;		// Prototype for forward reference 

int token ;			// Here we store the current token/literal 
int number ;		// and the value of the number 

int line_counter = 1 ;


int rd_lex ()
{
	int c ;
	
	do {
		c = getchar () ;
	} while (c == ' ' || c == '\t') ;
	
	if (isdigit (c)){
		ungetc (c, stdin) ;
		scanf ("%d", &number) ;
		token = T_NUMBER ;
		return (token) ;	// returns the Token for Number
	}

	if (c == '\n')
		line_counter++ ;	// info for rd_syntax_error ()
	
	token = c ;
	return (token) ;	// returns a literal
}


void rd_syntax_error (int expected, int token, char *output) 
{
	fprintf (stderr, "ERROR in line %d ", line_counter) ;
	fprintf (stderr, output, token, expected) ;
	
	exit (0);
}


void MatchSymbol (int expected_token)
{
	if (token != expected_token){
		rd_syntax_error (expected_token, token, "token %d expected, but %d was read") ;
	}
	rd_lex () ;
}


#define ParseLParen() 	MatchSymbol ('(') ; // More concise and efficient definitions
#define ParseRParen() 	MatchSymbol (')') ; // rather than using functions
											// This is only useful for matching Literals

int ParseNumber () 			// Parsing Non Terminals and some Tokens require more
{							// complex functions
	MatchSymbol (T_NUMBER) ;
	return number;
}


int ParseTerm () 		// T ::= N | ( E )  | +T | -T    returns the numeric value of the Term
{
	int val ;

	if (token == T_NUMBER){		// T derives alternatives, requires checking FIRST ( E )
		val = ParseNumber () ;
	}else if(token == '+'||token == '-'){
		if(token=='+'){
			rd_lex();
			val = ParseTerm ();
		}
		if( token == '-'){
			rd_lex();
			val = ParseTerm ();
			val = -val;
		}

	}else {
		ParseLParen () ;
		val = ParseExpression () ;
		ParseRParen () ;
	}
	
	return val ;
}

int ParseExpression2 () 		// F ::= T F'         F' ::= lambda | * F'  | / F'    
{							// returns the numeric value of the Expression
	int val ;
	int val2 ;
	int operator ;

	val = ParseTerm () ;  // ESTO ES T

//      ESTO VA A SER F'

	if (token == '\n' || token == ')'){	// Therefore, we check FOLLOW(ExpressionRest)
		return val ;		// This means that lambda has been derived
	}
	
	if(token=='*' || token =='/'){
	switch (token){		// ExpressionRest derives in alternatives
		case '*' :
		case '/' :  operator = token ;
			    	break ;
		default :   rd_syntax_error (token, 0, "Token %d was read, but an Operator was expected (exp2)");
			     	break ;
	}
	rd_lex () ;

	val2 = ParseExpression2 () ;
								// At this point the input has been parsed correctly
	switch (operator){			// This part is for the Semantic actions
		case '*' :  val *= val2 ;
			    	break ;
		case '/' :  val /= val2 ;
			    	break ;
		default :   rd_syntax_error (operator, 0, "Unexpected error in ParseExpressionRest for operator %c\n") ;
			    	break ;
	}
	}
	return val;
}

int ParseExpression () 		// E ::= FE'         E' ::= lambda | + E' | - E'     
{							// returns the numeric value of the Expression
	int val ;
	int val2 ;
	int operator ;

	val = ParseExpression2 () ; // F

	//ESTO ES E'

	if (token == '\n' || token == ')'){	// Therefore, we check FOLLOW(ExpressionRest)
		return val ;		// This means that lambda has been derived
	}

	switch (token){		// ExpressionRest derives in alternatives
		case '+' :  		// requires checking FIRST(ExpressionRest))
		case '-' : operator = token ;
			    	break ;
		default :   rd_syntax_error (token, 0, "Token %d was read, but an Operator was expected (exp1)");
			     	break ;
	}
	rd_lex () ;

	val2 = ParseExpression () ; //NOSE
								// At this point the input has been parsed correctly
	switch (operator){			// This part is for the Semantic actions
		case '+' :  val += val2 ;
			    	break ;
		case '-' :  val -= val2 ;
			    	break ;
		default :   rd_syntax_error (operator, 0, "Unexpected error in ParseExpressionRest for operator %c\n") ;
			    	break ;
	}
	
	return val;
}





int main (void){

	while (1){
		rd_lex () ;
		printf ("Valor %d\n", ParseExpression ()) ;
	}	
	
	system ("PAUSE") ;
}
