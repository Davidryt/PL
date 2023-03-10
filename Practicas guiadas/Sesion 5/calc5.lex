/* David Rico Menéndez - Álvaro Marco Pérez*/
/* 100384036@alumnos.uc3m.es - 100383350@alumnos.uc3m.es */
%{                            /* Primera Seccion */
#include "calc5.tab.h"        /* Cabecera con decl. de token etc. */
extern int n_linea;
%}
%%                            /* Segunda Seccion */
[ \t]                           { ; } /* ignorar espacios y tabuladores */
[0-9]+\.?|[0-9]*\.[0-9]+        { sscanf (yytext, "%lf", &yylval.valor);  return (NUMERO); }
[a-z]                           { sscanf (yytext, "%c", &yylval.indice);  return (VARIABLE); }
[A-Z]                           { sscanf (yytext, "%c", &yylval.indice);  return (VARIABLE); }
\n                              { n_linea++; return ('\n'); }
.                               { return (yytext [0]); }   /* literales */
%%                            /* Tercera Seccion */
int yywrap ()     /* se incluye para evitar un error de compilacion */
{
    return (0) ; /* para el control de fin de fichero */
}
