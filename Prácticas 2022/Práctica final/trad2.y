/* Bogdan Andrei Baltes - Álvaro Marco Pérez Grupo 3
100406687@alumnos.uc3m.es 100383382@alumnos.uc3m.es
*/
%{                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para cadenas
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata

char *mi_malloc (int) ;
char *genera_cadena (char *) ;
int yylex () ;
int yyerror () ;

char temp [2048] ;

char *int_to_string (int n)
{
    sprintf (temp, "%d", n) ;
    return genera_cadena (temp) ;
}

char *char_to_string (char c)
{
    sprintf (temp, "%c", c) ;
    return genera_cadena (temp) ;
}


%}

%union {                      // El tipo de la pila tiene caracter dual
    int valor ;               // - valor numerico de un NUMERO
    char *cadena ;            // - para pasar los nombres de IDENTIFES
}

%token <valor>  NUMERO        // Todos los token tienen un tipo para la pila
%token <cadena> IDENTIF       // Identificador=variable
%token <cadena> INTEGER       // identifica la definicion de un entero
%token <cadena> STRING
%token <cadena> PUTS
%token <cadena> PRINT
%token <cadena> MAIN          // identifica el comienzo del proc. main
%token <cadena> WHILE         // identifica el bucle main
%token <cadena> IF
%token <cadena> ELSE
%token <cadena> FOR
%token <cadena> RETURN
%token <cadena> IMPR_STRING

%type   <cadena>    Decl_Funciones_Main     Decl_Variables      r_funciones
                    cuerpo_main             declaracion         Decl_Funciones
                    retu                                        l_arg
                                                                r_argu
                    sentencia 
                    asignacion  impresion   expresion   puts    while   if      else    for
                    r_asig      r_impr      r_expr                      r_if
                    
                    termino
                    operando

                    op_logica   op_comparacion


%right '='                    // es la ultima operacion que se debe realizar
%left OR
%left AND
%left EQU NEQ
%left GEQ LEQ '>' '<'
%left '+' '-'                 // menor orden de precedencia
%left '*' '/' '%'                 // orden de precedencia intermedio
%left SIGNO_UNARIO            // mayor orden de precedencia

%%
                            // Seccion 3 Gramatica - Semantico
							
axioma:         Decl_Variables r_funciones Decl_Funciones_Main
                                                    { printf ("\n%s\n%s%s", $1, $2, $3) ; }
                r_expr                              { ; }
            |   Decl_Variables Decl_Funciones_Main  { printf ("\n%s\n%s", $1, $2 ) ; }
                r_expr                              { ; }
            |   Decl_Funciones Decl_Funciones_Main  { printf ("\n%s%s", $1, $2 ) ; }
                r_expr                              { ; }
            |   Decl_Funciones_Main                 { printf ("\n%s", $1 ) ; }
                r_expr                              { ; }
;

r_expr:         /* lambda */				        { ; }
            |   axioma					            { ; }
;

Decl_Variables: declaracion Decl_Variables           { sprintf (temp, "%s\n%s", $1, $2);
            									        $$ = genera_cadena (temp);}
            |   declaracion                          { sprintf (temp, "%s", $1);
            									        $$ = genera_cadena (temp);}
;

r_funciones:    Decl_Funciones                      { sprintf (temp,"%s",$1);
                                                        $$ = genera_cadena (temp);}
            |   Decl_Funciones r_funciones          { sprintf (temp,"%s %s",$1, $2);
                                                        $$ = genera_cadena (temp);}
Decl_Funciones: IDENTIF '(' ')' '{' cuerpo_main '}'     
                                                    { sprintf (temp, "(defun %s () \n%s\n)\n", $1, $5) ; 
                                                        $$ = genera_cadena (temp);}
                                                        |   IDENTIF '(' l_arg ')' '{' cuerpo_main '}'     
                                                    { sprintf (temp, "(defun %s (%s) \n%s\n)\n", $1,$3, $6) ; 
                                                        $$ = genera_cadena (temp);}
            |   IDENTIF '(' ')' '{' cuerpo_main retu '}'
                                                    { sprintf (temp, "(defun main ()\n%s\n(return-from %s %s))\n",$5,$1,$6) ; 
                                                        $$ = genera_cadena (temp);}
;

l_arg:          INTEGER IDENTIF '=' expresion r_argu
                                                    { sprintf (temp, "(setq %s %s ) %s", $2, $4, $5);
            									        $$ = genera_cadena (temp);}
            |   INTEGER IDENTIF r_argu              { sprintf (temp, "(setq %s 0) %s", $2, $3);
            									        $$ = genera_cadena (temp);}
;

r_argu:         ',' INTEGER IDENTIF '=' expresion r_argu
                                                    { sprintf (temp, "(setq %s %s ) %s", $3, $5, $6);
            									        $$ = genera_cadena (temp);}
            |   ',' INTEGER IDENTIF r_argu
                                                    { sprintf (temp, "(setq %s 0) %s", $3, $4);
            									        $$ = genera_cadena (temp);}
            |   /* lamda */                         { sprintf (temp, " ");
            									        $$ = genera_cadena (temp);}

;

Decl_Funciones_Main: 
                MAIN '(' ')' '{' cuerpo_main '}'
                                                    { sprintf (temp, "(defun main ()\n%s\n)\n", $5) ; 
                                                        $$ = genera_cadena (temp);}
            |   MAIN '(' ')' '{' cuerpo_main retu '}'
                                                    { sprintf (temp, "(defun main ()\n%s\n(return-from %s %s))\n",$5,$1,$6) ; 
                                                        $$ = genera_cadena (temp);}
;

cuerpo_main:    sentencia cuerpo_main               { sprintf (temp, "    %s\n%s", $1, $2);
                                                        $$ = genera_cadena (temp);}
            |   sentencia                           { sprintf (temp, "    %s", $1);
                                                        $$ = genera_cadena (temp);}
;

retu:           RETURN expresion ';'                { sprintf (temp, "%s", $2);
                                                        $$ = genera_cadena (temp);}
            |   RETURN expresion ';' cuerpo_main    { sprintf (temp, "%s\n%s", $2,$4);
                                                        $$ = genera_cadena (temp);}
;

sentencia:      asignacion                          { sprintf (temp, "%s", $1) ;
                                                        $$ = genera_cadena(temp);}
            |   impresion ';'                       { sprintf (temp, "%s", $1) ;
                                                        $$ = genera_cadena(temp);}
            |   puts ';'                            { sprintf (temp, "%s", $1) ;
                                                        $$ = genera_cadena(temp);}
            |   while                               { sprintf (temp, "%s", $1);
                                                        $$ = genera_cadena (temp) ; }
            |   if                                  { sprintf (temp, "%s", $1);
                                                        $$ = genera_cadena (temp) ; }
            |   for                                 { sprintf (temp, "%s", $1);
                                                        $$ = genera_cadena (temp) ; }
            |   IDENTIF '(' ')' ';'                         { sprintf (temp, "%s", $1);
                                                        $$ = genera_cadena (temp) ; }
;

declaracion:    INTEGER IDENTIF '=' expresion r_asig
                                                    { sprintf (temp, "(setq %s %s ) %s", $2, $4, $5);
            									        $$ = genera_cadena (temp);}
            |   INTEGER IDENTIF r_asig              { sprintf (temp, "(setq %s 0) %s", $2, $3);
            									        $$ = genera_cadena (temp);}
            |   INTEGER IDENTIF '[' NUMERO ']' ';'  { sprintf (temp, "(setq %s (make-array %d))", $2, $4);
            									        $$ = genera_cadena (temp);}
//            |   INTEGER IDENTIF '=' '(' op_logica ')' '?' expresion ':' expresion ';'   
//                                                    { sprintf(temp, "(if (%s))\n", $5);
//                                                        sprintf (temp, "    (setq %s %s)", $2, $8) ;
//                                                        sprintf (temp, "    (setq %s %s)", $2, $10) ;
//                                                        $$ = genera_cadena(temp);}
;

asignacion:     IDENTIF '=' expresion r_asig                { sprintf (temp, "(setq %s %s %s)", $1, $3, $4);
            									                $$ = genera_cadena (temp);}
            |   IDENTIF '[' expresion ']' '=' expresion ';'    { sprintf (temp, "(setf (aref %s %s) %s)", $1, $3, $6); 
            									                $$ = genera_cadena (temp);}
            |   declaracion                                 { sprintf (temp, "%s",$1);
                                                                $$ = genera_cadena (temp);}
;

r_asig:         ',' IDENTIF '=' expresion r_asig    { sprintf (temp, "(setq %s %s ) %s", $2, $4, $5);
            									        $$ = genera_cadena (temp);}
            |   ',' IDENTIF r_asig                  { sprintf (temp, "(setq %s 0) %s", $2, $3);
            									        $$ = genera_cadena (temp);}
            |   ';'                                 { sprintf (temp, " ");
            									        $$ = genera_cadena (temp);}
;

impresion:      PRINT '(' expresion ')'	            { sprintf (temp, "(print %s)", $3);
                                                        $$ = genera_cadena (temp);}
            |   PRINT '(' STRING r_impr ')'         { sprintf (temp, "%s", $4);
                                                        $$ = genera_cadena (temp);}
            |   PRINT '(' IMPR_STRING ',' IDENTIF '[' expresion ']' ')'   { sprintf (temp, "(print (aref %s %s))", $5, $7);
                                                        $$ = genera_cadena (temp);}
;

r_impr:         ',' expresion r_impr				{ sprintf (temp, "(print %s) %s", $2, $3);
                                                        $$ = genera_cadena (temp);}
            |   ',' expresion       				{ sprintf (temp, "(print %s)", $2);
                                                        $$ = genera_cadena (temp);}
;

puts:           PUTS '(' STRING ')'		            { sprintf (temp, "(print \"%s\")", $3);
									                    $$ = genera_cadena (temp) ; }
;

expresion:      termino					            { $$ = $1 ; } 
            |   expresion '+' expresion   		    { sprintf (temp, "(+ %s %s)", $1, $3);
                                                      $$ = genera_cadena (temp) ; }
            |   expresion '-' expresion   		    { sprintf (temp, "(- %s %s)", $1, $3);
                                                      $$ = genera_cadena (temp) ; }
            |   expresion '*' expresion   		    { sprintf (temp, "(* %s %s)", $1, $3);
                                                      $$ = genera_cadena (temp) ; }
            |   expresion '/' expresion   		    { sprintf (temp, "(/ %s %s)", $1, $3);
                                                      $$ = genera_cadena (temp) ; }
            |   expresion '%' expresion   		    { sprintf (temp, "(mod %s %s)", $1, $3);
                                                      $$ = genera_cadena (temp) ; }
;

while:          WHILE '(' op_logica ')' '{' cuerpo_main '}'	
                                                    { sprintf (temp, "(loop while %s\n    do\n%s)", $3, $6);
														$$ = genera_cadena (temp) ; }
;

if:     		IF '(' op_logica ')' '{' r_if '}' else	
                                                    { sprintf (temp, "(if %s\n    (progn\n%s )%s)", $3, $6, $8);
														$$ = genera_cadena (temp) ; }
;			
			
else:     		/*lambda*/				            { $$ = ""; }
            |	ELSE '{' r_if '}'		            { sprintf (temp, "    (progn \n        %s )", $3);
										                $$ = genera_cadena (temp) ; }
;

r_if:           sentencia r_if                       { sprintf (temp, "    %s\n %s", $1, $2);
                                                        $$ = genera_cadena (temp);}
            |   sentencia                           { sprintf (temp, "    %s", $1);
                                                        $$ = genera_cadena (temp);}

;

for:     	    FOR '(' asignacion op_logica ';' IDENTIF '=' expresion ')' '{' cuerpo_main '}'
                                                    { sprintf (temp, "(loop while %s do\n    %s\n)", $4, $11);
														$$ = genera_cadena (temp) ; }
;

op_logica:		op_comparacion						{ $$ = $1 ; }
            |   op_logica AND op_logica  		    { sprintf (temp, "(And %s %s)", $1, $3);
												    	$$ = genera_cadena (temp) ; }
            |   op_logica OR op_logica  		    { sprintf (temp, "(or %s %s)", $1, $3);
												    	$$ = genera_cadena (temp) ; }
;

op_comparacion: expresion							{ $$ = $1 ; }
            |   expresion NEQ expresion   	        { sprintf (temp, "(/= %s %s)", $1, $3);
											        	$$ = genera_cadena (temp) ; }
            |   expresion EQU expresion   	        { sprintf (temp, "(= %s %s)", $1, $3);
											    		$$ = genera_cadena (temp) ; }
            |   expresion '<' expresion   	    	{ sprintf (temp, "(< %s %s)", $1, $3);
											    		$$ = genera_cadena (temp) ; }
            |   expresion LEQ expresion 	      	{ sprintf (temp, "(<= %s %s)", $1, $3);
											    		$$ = genera_cadena (temp) ; }
            |   expresion '>' expresion 	      	{ sprintf (temp, "(> %s %s)", $1, $3);
											    		$$ = genera_cadena (temp) ; }
            |   expresion GEQ expresion  	     	{ sprintf (temp, "(>= %s %s)", $1, $3);
											    		$$ = genera_cadena (temp) ; }
;

termino:        operando				            { $$ = $1 ; }                         
            |   '+' operando %prec SIGNO_UNARIO		{ sprintf (temp, "+%s", $2);
                                                      $$ = genera_cadena (temp) ;  }
            |   '-' operando %prec SIGNO_UNARIO		{ sprintf (temp, "-%s", $2);
                                                      $$ = genera_cadena (temp) ;  }                                                    
;

operando:       IDENTIF				                { sprintf (temp, "%s", $1) ;
                                                        $$ = genera_cadena (temp) ; }
            |   NUMERO					            { sprintf (temp, "%d", $1) ;
                                                        $$ = genera_cadena (temp) ; }
            |   IDENTIF '[' expresion ']'		    { sprintf (temp, "%s[%s]", $1, $3) ;
                                                        $$ = genera_cadena (temp) ; }
            |   '(' expresion ')'		            { $$ = $2; }
;

%%
                            // SECCION 4    Codigo en C
int n_linea = 1 ;

int yyerror (mensaje)
char *mensaje ;
{
    fprintf (stderr, "%s en la linea %d\n", mensaje, n_linea) ;
    printf ( "\n") ;	// bye
}

char *mi_malloc (int nbytes)       // reserva n bytes de memoria dinamica
{
    char *p ;
    static long int nb = 0;        // sirven para contabilizar la memoria
    static int nv = 0 ;            // solicitada en total

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


/***************************************************************************/
/********************** Seccion de Palabras Reservadas *********************/
/***************************************************************************/

typedef struct s_pal_reservadas { // para las palabras reservadas de C
    char *nombre ;
    int token ;
} t_reservada ;

t_reservada pal_reservadas [] = { // define las palabras reservadas y los
    "main",        MAIN,           // y los token asociados
    "int",         INTEGER,
    "puts",		   PUTS,
    "printf",      PRINT,
    "&&",		   AND,
    "||",		   OR,
    "==",          EQU,
    "!=",          NEQ,
    "<=",          LEQ,
    ">=",          GEQ,
    "while",	   WHILE,
    "if",		   IF,
    "else",		   ELSE,
    "for",		   FOR,  
    "return",      RETURN, 
    NULL,          0               // para marcar el fin de la tabla
} ;
t_reservada *busca_pal_reservada (char *nombre_simbolo)
{                                  // Busca n_s en la tabla de pal. res.
                                   // y devuelve puntero a registro (simbolo)
    int i ;
    t_reservada *sim ;

    i = 0 ;
    sim = pal_reservadas ;
    while (sim [i].nombre != NULL) {
	    if (strcmp (sim [i].nombre, nombre_simbolo) == 0) {
		                             // strcmp(a, b) devuelve == 0 si a==b
            return &(sim [i]) ;
        }
        i++ ;
    }

    return NULL ;
}

 
/***************************************************************************/
/******************* Seccion del Analizador Lexicografico ******************/
/***************************************************************************/

char *genera_cadena (char *nombre)     // copia el argumento a un
{                                      // string en memoria dinamica
    char *p ;
    int l ;
	
    l = strlen (nombre)+1 ;
    p = (char *) mi_malloc (l) ;
    strcpy (p, nombre) ;
	
    return p ;
}


int yylex ()
{
    int i ;
    unsigned char c ;
    unsigned char cc ;
    char ops_expandibles [] = "!<=>|&%+-/*" ;
    char cadena [256] ;
    t_reservada *simbolo ;

    do {
        c = getchar () ;

        if (c == '#') {	// Ignora las lineas que empiezan por #  (#define, #include)
            do {		//	OJO que puede funcionar mal si una linea contiene #
                c = getchar () ;
            } while (c != '\n') ;
        }

        if (c == '/') {	// Si la linea contiene un / puede ser inicio de comentario
            cc = getchar () ;
            if (cc != '/') {   // Si el siguiente char es /  es un comentario, pero...
                ungetc (cc, stdin) ;
            } else {
                c = getchar () ;	// ...
                if (c == '@') {	// Si es la secuencia //@  ==> transcribimos la linea
                    do {		// Se trata de codigo inline (Codigo embebido en C)
                        c = getchar () ;
                        putchar (c) ;
                    } while (c != '\n') ;
                } else {		// ==> comentario, ignorar la linea
                    while (c != '\n') {
                        c = getchar () ;
                    }
                }
            }
        } else if (c == '\\') c = getchar () ;
		
        if (c == '\n')
            n_linea++ ;

    } while (c == ' ' || c == '\n' || c == 10 || c == 13 || c == '\t') ;

    if (c == '\"') {
        i = 0 ;
        do {
            c = getchar () ;
            cadena [i++] = c ;
        } while (c != '\"' && i < 255) ;
        if (i == 256) {
            printf ("AVISO: string con mas de 255 caracteres en linea %d\n", n_linea) ;
        }		 	// habria que leer hasta el siguiente " , pero, y si falta?
        cadena [--i] = '\0' ;
        yylval.cadena = genera_cadena (cadena) ;
        return (STRING) ;
    }

    if (c == '.' || (c >= '0' && c <= '9')) {
        ungetc (c, stdin) ;
        scanf ("%d", &yylval.valor) ;
//         printf ("\nDEV: NUMERO %d\n", yylval.valor) ;        // PARA DEPURAR
        return NUMERO ;
    }

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        i = 0 ;
        while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9') || c == '_') && i < 255) {
            cadena [i++] = tolower (c) ;
            c = getchar () ;
        }
        cadena [i] = '\0' ;
        ungetc (c, stdin) ;

        yylval.cadena = genera_cadena (cadena) ;
        simbolo = busca_pal_reservada (yylval.cadena) ;
        if (simbolo == NULL) {    // no es palabra reservada -> identificador 
//               printf ("\nDEV: IDENTIF %s\n", yylval.cadena) ;    // PARA DEPURAR
            return (IDENTIF) ;
        } else {
//               printf ("\nDEV: OTRO %s\n", yylval.cadena) ;       // PARA DEPURAR
            return (simbolo->token) ;
        }
    }

    if (strchr (ops_expandibles, c) != NULL) { // busca c en ops_expandibles
        cc = getchar () ;
        sprintf (cadena, "%c%c", (char) c, (char) cc) ;
        simbolo = busca_pal_reservada (cadena) ;
        if (simbolo == NULL) {
            ungetc (cc, stdin) ;
            yylval.cadena = NULL ;
            return (c) ;
        } else {
            yylval.cadena = genera_cadena (cadena) ; // aunque no se use
            return (simbolo->token) ;
        }
    }

//    printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
    if (c == EOF || c == 255 || c == 26) {
//         printf ("tEOF ") ;                                // PARA DEPURAR
        return (0) ;
    }

    return c ;
}


int main ()
{
    yyparse () ;
}