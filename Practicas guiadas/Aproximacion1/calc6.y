/* David Rico Menéndez - Álvaro Marco Pérez Grupo 2
100384036@alumnos.uc3m.es 100383382@alumnos.uc3m.es
*/

%{                      // SECCION 1 
#include <stdio.h>
#include <string.h>
char temp [2048] ;

char *genera_cadena (char *nombre)     
{                                      
    char *p ;
    int l ;
	
    l = strlen (nombre)+1 ;
    p = (char *) malloc (l) ;
    strcpy (p, nombre) ;
	
    return p ;
}


%}
%union {                // El tipo de la pila (del AP) tiene caracter dual 
      char* valor ;       //  - valor numerico entero 
      int indice ;      //  - indice para identificar una variable 
}                       // SECCION 2 
%token  <valor>  NUMERO    // Todos los token tienen un tipo para la pila
%token  <indice> VARIABLE
%type   <valor>  expresion // Se asocia tambien a los No Terminales un tipo 
%type   <valor>  termino operando
%right  '='             //  es la ultima operacion que se debe realizar
%left   '+' '-'         //  menor orden de precedencia 
%left   '*' '/'         //  orden de precedencia intermedio 
%left   SIGNO_UNARIO    //  mayor orden de precedencia 
%%
                        // SECCION 3: Gramatica - Semantico 
axioma:       expresion '\n'              { printf ("%s\n", $1) ; } 
                       r_expr
            | VARIABLE '=' expresion '\n' { printf ("VARIABLE %c\n%s %c !\n", $1, $3, $1) ; }
                       r_expr
            ;

r_expr:                      /* lambda */
            | axioma
            ;

expresion:    termino                    { $$ = $1 ; }
            | expresion '+' expresion    { sprintf(temp, "%s %s +", $1, $3); $$=genera_cadena (temp); }
            | expresion '-' expresion    { sprintf(temp, "%s %s -", $1, $3); $$=genera_cadena (temp); }
            | expresion '*' expresion    { sprintf(temp, "%s %s *", $1, $3); $$=genera_cadena (temp); }
            | expresion '/' expresion    { sprintf(temp, "%s %s /", $1, $3); $$=genera_cadena (temp); }
            ;

termino:      operando                           { $$ = $1 ; }
            | '+' operando %prec SIGNO_UNARIO    { $$ = $2 ; }
            | '-' operando %prec SIGNO_UNARIO    {sprintf (temp, "-%s", $2) ; $$ = genera_cadena (temp) ; }
            ;

operando:     VARIABLE                   { sprintf (temp, "%c @", $1) ; $$ = genera_cadena (temp) ;}
            | NUMERO                     { sprintf (temp, "%d", $1) ; $$ = genera_cadena (temp) ; }
            | '(' expresion ')'          { $$ = $2 ; }
            ;

%%

                        /* SECCION 4  Codigo en C */
int n_linea = 1 ;




int yyerror (mensaje)
char *mensaje ;
{
    fprintf (stderr, "%s en la linea %d\n", mensaje, n_linea) ;
}

int yylex ()
{
    unsigned char c ;

    do {
         c = getchar () ;
    } while (c == ' ') ;

    if (c == '.' || (c >= '0' && c <= '9')) {
         ungetc (c, stdin) ;
         scanf ("%d", &yylval.valor) ;
         return NUMERO ;
    }

    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
         yylval.indice = c  ;  // resta a c el valor ascii de a 
         return VARIABLE ;
    }

    if (c == '\n')
          n_linea++ ;
    return c ;
}

int main ()
{
    yyparse () ;
}
