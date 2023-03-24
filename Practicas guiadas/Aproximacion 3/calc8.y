/* David Rico Menéndez - Álvaro Marco Pérez Grupo 2 */
/* 100384036@alumnos.uc3m.es 100383382@alumnos.uc3m.es */
%{                      // SECCION 1 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int yylex () ;
extern int yyerror () ;

char temp [2048] ;

#define FF fflush(stdout);

char *mi_malloc (int nbytes)
{
    char *p ;
    static long int nb = 0;
    static int nv = 0 ;
    
    p = malloc (nbytes) ;
    if (p == NULL) {
        fprintf (stderr, "No queda memoria para %d bytes mas\n", nbytes) ;
        fprintf (stderr, "Reservados %ld bytes en %d llamadas\n", nb, nv) ;
        exit (0) ;
    }
    nb += (long) nbytes ;
    nv++ ;
    
    return p ;
}

char *genera_cadena (char *nombre)
{
    char *p ;
    int l ;
    
    l = strlen (nombre)+1 ;
    p = (char *) mi_malloc (l) ;
    strcpy (p, nombre) ;
    
    return p ;
}

char *int_to_string(int n)
{
    sprintf(temp, "%d", n);
    return genera_cadena(temp);
}

char *char_to_string(char c)
{
    sprintf(temp, "%c", c);
    return genera_cadena(temp);
}

%}
%union {                // El tipo de la pila (del AP) tiene caracter dual 
      int valor ;       //  - valor numerico entero 
      int indice ;      //  - indice para identificar una variable
      char *cadena ;
}                       // SECCION 2 

%token  <valor>  NUMERO    // Todos los token tienen un tipo para la pila
%token  <indice> VARIABLE

%type   <cadena>  expresion termino operando asignacion impresion

%right  '='             //  es la ultima operacion que se debe realizar
%left   '+' '-'         //  menor orden de precedencia 
%left   '*' '/'         //  orden de precedencia intermedio 
%left   SIGNO_UNARIO    //  mayor orden de precedencia 
%%
                        // SECCION 3: Gramatica - Semantico


axioma:         expresion '\n'				        { printf ("%s\n", $1) ; }
                r_expr
            |   asignacion '\n'                     { printf ("%s\n", $1) ; }
                r_expr
            |   impresion '\n'		                { printf ("%s\n", $1) ; }
                r_expr
            ;

r_expr:         /* lambda */				        { ; }
            |   axioma					            { ; }
            ;

asignacion:     VARIABLE '=' expresion		        { sprintf(temp, "( setq %c %s )", $1, $3); $$=genera_cadena (temp); }
            ;

impresion:     '#' expresion    		            { sprintf(temp, "( print %s )", $2); $$=genera_cadena (temp); }

            ;

expresion:      termino					            { $$ = $1 ; }
            |   expresion '+' expresion   		    { sprintf(temp, "( + %s %s )", $1, $3); $$=genera_cadena (temp); }
            |   expresion '-' expresion   		    { sprintf(temp, "( - %s %s )", $1, $3); $$=genera_cadena (temp); }
            |   expresion '*' expresion   		    { sprintf(temp, "( * %s %s )", $1, $3); $$=genera_cadena (temp); }
            |   expresion '/' expresion   		    { sprintf(temp, "( / %s %s )", $1, $3); $$=genera_cadena (temp); }
            |   asignacion					        { $$ = $1 ; }
            |   impresion					        { $$ = $1 ; }
            ;

termino:        operando				            { $$ = $1 ; }                          
            |   '+' operando %prec SIGNO_UNARIO		{ $$ = $2 ; }
            |   '-' operando %prec SIGNO_UNARIO		{ sprintf (temp, "( - 0 %s )", $2) ; $$ = genera_cadena (temp) ; }                                                     
            ;

operando:       VARIABLE				            { sprintf (temp, "%c", $1) ; $$ = genera_cadena (temp) ; }
            |   NUMERO					            { sprintf (temp, "%d", $1) ; $$ = genera_cadena (temp) ; }
            |   '(' expresion ')'			        { $$ = $2 ; }
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
    } while (c == ' ' || c == '\r') ;

    if (c == '.' || (c >= '0' && c <= '9')) {
         ungetc (c, stdin) ;
         scanf ("%d", &yylval.valor) ;
         return NUMERO ;
    }

    if ((c >= 'A' && c <= 'Z') ||
    		 (c >= 'a' && c <= 'z')) {
         yylval.indice = c;
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
