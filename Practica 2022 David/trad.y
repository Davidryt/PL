/* David Rico Pedro del Moral  60*/
/* 100384036@alumnos.uc3m.es 100383350@alumnos.uc3m.es */


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
    int valor ;             // - valor numerico de un NUMERO
    char *cadena ;          // - para pasar los nombres de IDENTIFES
}

%token <valor> NUMERO         // Todos los token tienen un tipo para la pila
%token <cadena> IDENTIF       // Identificador=variable
%token <cadena> INTEGER       // identifica la definicion de un entero
%token <cadena> STRING
%token <cadena> MAIN          // identifica el comienzo del proc. main
%token <cadena> WHILE         // identifica el bucle main
%token <cadena> PUTS         // identifica puts
%token <cadena> PRINTF         // identifica printf
%token <cadena> IF         // identifica if
%token <cadena> ELSE         // identifica else
%token <cadena> FOR         // identifica for
%token <cadena> AND
%token <cadena> OR
%token <cadena> NOT_EQUAL
%token <cadena> EQUAL
%token <cadena> LESS_OR_EQUAL
%token <cadena> MORE_OR_EQUAL
%token <cadena> RETURN

%type   <cadena>  funcion r_main globals deffunc fun r_fun  args r_args retorno_code args_llamada r_args_llamada while condition asignacion r_main_loop vardecl print otra_exp expresion termino operando otro_def

%right '='                    // es la ultima operacion que se debe realizar
%left ':'
%left '?'
%left OR
%left AND
%left EQUAL NOT_EQUAL
%left '<' LESS_OR_EQUAL '>' MORE_OR_EQUAL
%left '+' '-'                 // menor orden de precedencia
%left '*' '/' '%'                // orden de precedencia intermedio
%left SIGNO_UNARIO            // mayor orden de precedencia

%%
                            // Seccion 3 Gramatica - Semantico
                            
axioma:         globals deffunc main_part	{ ; };

globals: 	 /* lambda */					{ ; }
	    |	vardecl ';'			{ printf("%s\n",$1); } globals;

deffunc:  	 /* lambda */					{ ; }
	    |	fun						{ ; }		r_fun				{ ; };

fun:  		IDENTIF '(' args')''{'funcion '}'			{ printf("(defun %s(%s)\n%s)\n",$1,$3,$6); }
	//    |   IDENTIF '(' args')''{' retorno'}'			{ printf("(defun %s(%s)\n%s)\n",$1,$3,$6); }
	//    |   IDENTIF '(' ')''{' retorno'}'			{ printf("(defun %s()\n%s)\n",$1,$5); }
	    |   IDENTIF '(' ')''{' funcion '}'			{ printf("(defun %s()\n%s)\n",$1,$5); }
;



r_fun:         /* lambda */				{ ; }
            |   fun	r_fun				{ ; }
            ;

//retorno:	 /* lambda */				{ ; }
//	    |   RETURN operando	';'			{ sprintf (temp, "%s",$2); $$ = genera_cadena (temp) ; };

retorno_code:       RETURN expresion	';'			{ sprintf (temp, "%s",$2); $$ = genera_cadena (temp) ; };


args:          INTEGER IDENTIF	r_args			{ sprintf (temp, "%s %s",$2, $3); $$ = genera_cadena (temp) ; }
            ;

r_args:       ',' INTEGER IDENTIF r_args		{ sprintf (temp, "%s %s",$3, $4); $$ = genera_cadena (temp) ; }
	    |    /* lambda */				{ sprintf (temp, "");  $$ = genera_cadena (temp) ; }
        ;

main_part:  	MAIN '('')''{'funcion'}'			{ printf("(defun main()\n%s)\n(main);\n",$5); };

condition: 	IF '('expresion')' '{'funcion'}'			{ sprintf (temp, "(if %s\n %s)",$3,$6); $$ = genera_cadena (temp) ; }
	    |   IF '('expresion')' '{'funcion'}' ELSE '{'funcion'}'	{ sprintf (temp, "(if %s\n %s\n %s)",$3,$6,$10); $$ = genera_cadena (temp) ; }
	    |   FOR '('INTEGER IDENTIF '=' expresion ';' expresion';' asignacion ')' '{'funcion'}' 		
		{ sprintf (temp, "(setq %s %s)\n(loop while %s do\n %s %s\n)",$4,$6,$8,$13,$10); $$ = genera_cadena (temp) ; }
	    |   FOR '(' IDENTIF '=' expresion ';' expresion';' asignacion ')' '{'funcion'}' 		
		{ sprintf (temp, "(setq %s %s)\n(loop while %s do\n %s %s\n)",$3,$5,$7,$12,$9); $$ = genera_cadena (temp) ; }
;

while: 		WHILE '('expresion')' '{'funcion'}'	{ sprintf (temp, "(loop while %s do %s)",$3,$6); $$ = genera_cadena (temp) ; };

funcion:        expresion 	r_main			{ sprintf (temp,"\t%s\n %s",$1, $2); $$ = genera_cadena (temp) ; }	
            |   print  	 	r_main			{ sprintf (temp,"\t%s\n %s",$1, $2); $$ = genera_cadena (temp) ; }
	    |   asignacion 	r_main			{ sprintf (temp,"\t%s %s",$1, $2); $$ = genera_cadena (temp) ; }
            |   vardecl 	r_main			{ sprintf (temp,"\t%s %s",$1, $2); $$ = genera_cadena (temp) ; }
            |   while 		r_main_loop		{ sprintf (temp,"\t%s %s",$1, $2); $$ = genera_cadena (temp) ; }            	
            |   condition 	r_main_loop		{ sprintf (temp,"\t%s %s",$1, $2); $$ = genera_cadena (temp) ; }
	    |   retorno_code                           { sprintf (temp,"\t%s",$1); $$ = genera_cadena (temp) ; }
            ;

r_main:         ';'					{ sprintf (temp, ""); $$ = genera_cadena (temp) ; }
            |	';' expresion 	r_main			{ sprintf (temp,"\t%s\n %s",$2, $3); $$ = genera_cadena (temp) ; }	
            |   ';' print  	r_main			{ sprintf (temp,"\t%s\n %s",$2, $3); $$ = genera_cadena (temp) ; }
            |   ';' vardecl 	r_main			{ sprintf (temp,"\t%s %s",$2, $3); $$ = genera_cadena (temp) ; }
            |   ';' asignacion 	r_main			{ sprintf (temp,"\t%s %s",$2, $3); $$ = genera_cadena (temp) ; }
            |   ';' while 	r_main_loop		{ sprintf (temp,"\t%s %s",$2, $3); $$ = genera_cadena (temp) ; }
            |   ';' condition 	r_main_loop		{ sprintf (temp,"\t%s %s",$2, $3); $$ = genera_cadena (temp) ; }
	    |   ';' retorno_code                       { sprintf (temp,"\t%s",$2); $$ = genera_cadena (temp) ; }
            ;
			
r_main_loop:    /*lambda*/				{ sprintf (temp, ""); $$ = genera_cadena (temp) ; }
            |	expresion 	r_main			{ sprintf (temp,"\t%s\n %s",$1, $2); $$ = genera_cadena (temp) ; }	
            |   print  	r_main				{ sprintf (temp,"\t%s\n %s",$1, $2); $$ = genera_cadena (temp) ; }
            |   vardecl 	r_main			{ sprintf (temp,"\t%s %s",$1, $2); $$ = genera_cadena (temp) ; }
            |   asignacion 	r_main			{ sprintf (temp,"\t%s %s",$1, $2); $$ = genera_cadena (temp) ; }
            |   while 		r_main_loop		{ sprintf (temp,"\t%s %s",$1, $2); $$ = genera_cadena (temp) ; }
            |   condition 	r_main_loop		{ sprintf (temp,"\t%s %s",$1, $2); $$ = genera_cadena (temp) ; }
	    |   retorno_code                           { sprintf (temp,"\t%s",$1); $$ = genera_cadena (temp) ; }	
            ;

vardecl:        INTEGER IDENTIF	     otro_def			{ sprintf (temp, "(setq %s 0)\n%s",$2, $3); $$ = genera_cadena (temp) ; }
	    |   INTEGER IDENTIF '='  expresion  otro_def	{ sprintf (temp, "(setq %s %s)\n%s",$2, $4, $5); $$ = genera_cadena (temp) ; } 
            |   INTEGER IDENTIF '[' expresion ']'  		{ sprintf (temp, "(setq %s (make-array %s))\n",$2, $4); $$ = genera_cadena (temp) ; } 
        ;

asignacion: IDENTIF '=' expresion                       { sprintf (temp, "(setq %s %s)\n",$1, $3); $$ = genera_cadena (temp) ; } 
        |   IDENTIF '[' expresion ']' '=' expresion        { sprintf (temp, "(setf (aref %s %s) %s)\n",$1, $3, $6); $$ = genera_cadena (temp) ; } 
        ;

otro_def:       ',' IDENTIF otro_def			{ sprintf (temp, "(setq %s 0)\n%s",$2, $3); $$ = genera_cadena (temp) ; }
	    |   ',' IDENTIF '='  expresion  otro_def	{ sprintf (temp, "(setq %s %s)\n%s",$2, $4, $5); $$ = genera_cadena (temp) ; }
	    |    /* lambda */								{ sprintf (temp, "");  $$ = genera_cadena (temp) ; }
        ;

print:	    PRINTF '(' expresion otra_exp ')'			{ sprintf (temp, "(print %s) %s",$3,$4); $$ = genera_cadena (temp) ; }
	    |   PRINTF '(' STRING otra_exp ')'			{ sprintf (temp, "%s",$4); $$ = genera_cadena (temp) ; }
        |   PRINTF '(' STRING',' IDENTIF'[' expresion ']' ')'	{ sprintf (temp, "(print (aref %s %s))",$5,$7); $$ = genera_cadena (temp) ; }
	    |   PUTS '(' STRING ')'				{ sprintf (temp, "(print \"%s\")",$3); $$ = genera_cadena (temp) ; }
	     ;
							    
otra_exp:	',' expresion otra_exp				{ sprintf (temp, "(print %s) %s",$2,$3); $$ = genera_cadena (temp) ; }
	    |   ',' STRING otra_exp				{ sprintf (temp, "%s",$3); $$ = genera_cadena (temp) ; }
	    |    /* lambda */					{ sprintf (temp, ""); $$ = genera_cadena (temp) ; };



expresion:      termino					{ $$=$1; }
            |   expresion '+' expresion   		{   sprintf (temp, "(+ %s %s)",$1,$3);
							    $$ = genera_cadena (temp) ; }
            |   expresion '-' expresion   		{   sprintf (temp, "(- %s %s)",$1,$3);
							    $$ = genera_cadena (temp) ; }
            |   expresion '*' expresion   		{   sprintf (temp, "(* %s %s)",$1,$3);
							    $$ = genera_cadena (temp) ; }
            |   expresion '/' expresion   		{   sprintf (temp, "(/ %s %s)",$1,$3);
							    $$ = genera_cadena (temp) ; }
            |   expresion '%' expresion   		{   sprintf (temp, "(mod %s %s)",$1,$3);
							    $$ = genera_cadena (temp) ; }
            |   expresion AND expresion   		{   sprintf (temp, "(and %s %s)",$1,$3);
							    $$ = genera_cadena (temp) ; }
            |   expresion OR expresion   		{   sprintf (temp, "(or %s %s)",$1,$3);
							    $$ = genera_cadena (temp) ; }
            |   expresion NOT_EQUAL expresion   		{   sprintf (temp, "(/= %s %s)",$1,$3);
							    $$ = genera_cadena (temp) ; }
            |   expresion EQUAL expresion   		{   sprintf (temp, "(= %s %s)",$1,$3);
							    $$ = genera_cadena (temp) ; }
            |   expresion '<' expresion   		{   sprintf (temp, "(< %s %s)",$1,$3);
							    $$ = genera_cadena (temp) ; }
            |   expresion '>' expresion   		{   sprintf (temp, "(> %s %s)",$1,$3);
							    $$ = genera_cadena (temp) ; }
            |   expresion LESS_OR_EQUAL expresion   		{   sprintf (temp, "(<= %s %s)",$1,$3);
							    $$ = genera_cadena (temp) ; }
            |   expresion MORE_OR_EQUAL expresion   		{   sprintf (temp, "(>= %s %s)",$1,$3);
							    $$ = genera_cadena (temp) ; }
	    |   expresion '?' expresion ':' expresion 	{   sprintf (temp, "(if %s %s %s)",$1,$3,$5); $$ = genera_cadena (temp) ; }
	    |   IDENTIF '(' args_llamada ')' 		{   sprintf (temp, "(%s %s)",$1,$3); $$ = genera_cadena (temp) ; }
            ;

args_llamada:         /* lambda */				{ sprintf (temp, "");  $$ = genera_cadena (temp) ; }
            |    expresion	r_args_llamada			{ sprintf (temp, "%s %s",$1, $2); $$ = genera_cadena (temp) ; }
            ;

r_args_llamada:       ','  expresion r_args_llamada		{ sprintf (temp, "%s %s",$2, $3); $$ = genera_cadena (temp) ; }
	    |    /* lambda */				{ sprintf (temp, "");  $$ = genera_cadena (temp) ; }
        ;



termino:        operando				{ $$=$1; }                          
            |   '+' operando %prec SIGNO_UNARIO		{ sprintf (temp, "(+ 0 %s)",$2);
						  	  $$ = genera_cadena (temp) ; }
            |   '-' operando %prec SIGNO_UNARIO		{ sprintf (temp, "(- 0 %s)",$2);
						  	  $$ = genera_cadena (temp) ; }  
                                                    
                                                 
            ;

operando:       IDENTIF			{ $$ = $1 ; }
	    |   IDENTIF	'['expresion']'		{ sprintf (temp, "(aref %s %s)",$1,$3);  $$ = genera_cadena (temp) ; }
            |   NUMERO				{ $$ = int_to_string ($1) ; }
            |   '(' expresion ')'		{ $$=$2; }
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
    "puts",	   PUTS,
    "printf",	   PRINTF,
	"while",		WHILE,
	"if",			IF,
	"else",			ELSE,
	"for",			FOR,
    "&&",           AND,
    "||",           OR,
    "!=",          NOT_EQUAL,
    "==",          EQUAL,
    "<=",          LESS_OR_EQUAL,
    ">=",          MORE_OR_EQUAL,
    "return", 	   RETURN,
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
