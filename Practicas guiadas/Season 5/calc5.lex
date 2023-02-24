/* David Rico Pedro del Moral */
/* 100384036 100383350 */
%{                            /* Primera Seccion */
#include "calc5.tab.h"        /* Cabecera con decl. de token etc. */
extern int n_linea;
%}
%%                            /* Segunda Seccion */
[ \t]                    { ; } /* ignorar espacios y tabuladores */
[0-9]+\.?|[0-9]*\.[0-9]+ { sscanf (yytext, "%lf", &yylval); return (NUMERO); }
[a-z] { sscanf (yytext, "%lf", &yylval.valor); yylval.indice =  +26 ; return (VARIABLE); }
[A-Z] { sscanf (yytext, "%lf", &yylval.valor);  return (VARIABLE); }
\n                       { n_linea++; return ('\n'); }
.                        { return (yytext [0]); }   /* literales */
%%                            /* Tercera Seccion */
int yywrap ()     /* se incluye para evitar un error de compilacion */
{
    return (0) ; /* para el control de fin de fichero */
}
