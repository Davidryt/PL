/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "trad4.y"
                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para cadenas
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata
#define MAX_STRINGS 5
#define MAX_LENGTH 20


int yylex () ;
int yyerror () ;
char *mi_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;

char temp [2048] ;
char funcion [20] ;
// Definitions for explicit attributes

typedef struct s_attr {
        int value ;
        char *code ;
        int tipo;   // 0 es int 1 es boolean
} t_attr ;

#define YYSTYPE t_attr


#line 104 "trad4.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUMBER = 258,                  /* NUMBER  */
    IDENTIF = 259,                 /* IDENTIF  */
    INTEGER = 260,                 /* INTEGER  */
    STRING = 261,                  /* STRING  */
    MAIN = 262,                    /* MAIN  */
    WHILE = 263,                   /* WHILE  */
    PUTS = 264,                    /* PUTS  */
    PRINTF = 265,                  /* PRINTF  */
    IF = 266,                      /* IF  */
    FOR = 267,                     /* FOR  */
    ELSE = 268,                    /* ELSE  */
    RETURN = 269,                  /* RETURN  */
    OR = 270,                      /* OR  */
    AND = 271,                     /* AND  */
    EQUAL = 272,                   /* EQUAL  */
    NOT_EQUAL = 273,               /* NOT_EQUAL  */
    GREATER_EQUAL = 274,           /* GREATER_EQUAL  */
    LESS_EQUAL = 275,              /* LESS_EQUAL  */
    UNARY_SIGN = 276               /* UNARY_SIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_IDENTIF = 4,                    /* IDENTIF  */
  YYSYMBOL_INTEGER = 5,                    /* INTEGER  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_MAIN = 7,                       /* MAIN  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_PUTS = 9,                       /* PUTS  */
  YYSYMBOL_PRINTF = 10,                    /* PRINTF  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_FOR = 12,                       /* FOR  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_RETURN = 14,                    /* RETURN  */
  YYSYMBOL_15_ = 15,                       /* '='  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_AND = 17,                       /* AND  */
  YYSYMBOL_EQUAL = 18,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 19,                 /* NOT_EQUAL  */
  YYSYMBOL_20_ = 20,                       /* '<'  */
  YYSYMBOL_21_ = 21,                       /* '>'  */
  YYSYMBOL_GREATER_EQUAL = 22,             /* GREATER_EQUAL  */
  YYSYMBOL_LESS_EQUAL = 23,                /* LESS_EQUAL  */
  YYSYMBOL_24_ = 24,                       /* '+'  */
  YYSYMBOL_25_ = 25,                       /* '-'  */
  YYSYMBOL_26_ = 26,                       /* '*'  */
  YYSYMBOL_27_ = 27,                       /* '/'  */
  YYSYMBOL_28_ = 28,                       /* '%'  */
  YYSYMBOL_UNARY_SIGN = 29,                /* UNARY_SIGN  */
  YYSYMBOL_30_ = 30,                       /* ';'  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* '{'  */
  YYSYMBOL_34_ = 34,                       /* '}'  */
  YYSYMBOL_35_ = 35,                       /* ','  */
  YYSYMBOL_36_ = 36,                       /* '['  */
  YYSYMBOL_37_ = 37,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_axioma = 39,                    /* axioma  */
  YYSYMBOL_globales = 40,                  /* globales  */
  YYSYMBOL_r_globales = 41,                /* r_globales  */
  YYSYMBOL_funciones = 42,                 /* funciones  */
  YYSYMBOL_43_1 = 43,                      /* $@1  */
  YYSYMBOL_r_funciones = 44,               /* r_funciones  */
  YYSYMBOL_45_2 = 45,                      /* $@2  */
  YYSYMBOL_main = 46,                      /* main  */
  YYSYMBOL_args = 47,                      /* args  */
  YYSYMBOL_r_args = 48,                    /* r_args  */
  YYSYMBOL_body = 49,                      /* body  */
  YYSYMBOL_r_body = 50,                    /* r_body  */
  YYSYMBOL_sentencia = 51,                 /* sentencia  */
  YYSYMBOL_r_sentencia = 52,               /* r_sentencia  */
  YYSYMBOL_declaracion = 53,               /* declaracion  */
  YYSYMBOL_declaracion_global = 54,        /* declaracion_global  */
  YYSYMBOL_r_declaracion = 55,             /* r_declaracion  */
  YYSYMBOL_expresion = 56,                 /* expresion  */
  YYSYMBOL_r_expresion = 57,               /* r_expresion  */
  YYSYMBOL_incremento = 58,                /* incremento  */
  YYSYMBOL_termino = 59,                   /* termino  */
  YYSYMBOL_operando = 60                   /* operando  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   506

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  203

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   276


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    28,     2,     2,
      31,    32,    26,    24,    35,    25,     2,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    30,
      20,    15,    21,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      16,    17,    18,    19,    22,    23,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    90,    90,    93,    94,    98,    99,   103,   104,   104,
     109,   110,   110,   115,   119,   120,   124,   125,   129,   131,
     137,   143,   149,   153,   155,   159,   160,   163,   164,   166,
     171,   172,   176,   178,   180,   182,   184,   189,   191,   193,
     197,   198,   200,   202,   204,   208,   209,   212,   215,   218,
     221,   224,   227,   230,   233,   236,   239,   242,   245,   250,
     251,   255,   257,   261,   262,   264,   268,   270,   273,   275,
     277,   279
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "IDENTIF",
  "INTEGER", "STRING", "MAIN", "WHILE", "PUTS", "PRINTF", "IF", "FOR",
  "ELSE", "RETURN", "'='", "OR", "AND", "EQUAL", "NOT_EQUAL", "'<'", "'>'",
  "GREATER_EQUAL", "LESS_EQUAL", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY_SIGN", "';'", "'('", "')'", "'{'", "'}'", "','", "'['", "']'",
  "$accept", "axioma", "globales", "r_globales", "funciones", "$@1",
  "r_funciones", "$@2", "main", "args", "r_args", "body", "r_body",
  "sentencia", "r_sentencia", "declaracion", "declaracion_global",
  "r_declaracion", "expresion", "r_expresion", "incremento", "termino",
  "operando", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-106)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-63)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,     5,    14,    16,   -12,     9,  -106,  -106,    40,     1,
      15,    22,    17,    61,  -106,    27,    32,  -106,  -106,    47,
      61,    61,  -106,    17,  -106,  -106,   -26,    53,    53,    61,
     189,  -106,  -106,    67,    67,     1,   140,   211,  -106,    50,
      61,  -106,  -106,   361,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    17,    85,    63,
      64,  -106,  -106,    17,  -106,   321,   233,  -106,   467,   478,
     168,   168,   175,   175,   175,   175,    34,    34,  -106,  -106,
    -106,  -106,    58,    69,    70,  -106,    61,    65,  -106,    95,
    -106,   173,   173,   321,  -106,   104,    52,   106,    92,    96,
      97,   100,   107,    61,   109,   111,  -106,   412,   112,  -106,
      58,    61,    61,    44,    61,   136,   139,    61,    18,   321,
     147,   173,   173,  -106,  -106,   442,   255,    61,    61,  -106,
     378,   120,   134,   395,    51,   142,   143,  -106,  -106,  -106,
    -106,  -106,   155,   140,   277,   141,  -106,    61,   153,    61,
      61,   173,   187,    61,  -106,    17,   173,   341,   173,   299,
     427,  -106,    67,   140,  -106,   185,    61,   188,   190,   155,
     217,   191,  -106,   173,   341,  -106,   108,   207,   193,   208,
    -106,  -106,   209,  -106,    61,   210,   173,   173,   455,   173,
     206,   212,    61,    61,   213,   147,   173,    98,   122,   173,
    -106,  -106,  -106
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     7,     0,    40,     1,     8,     0,     5,
      40,     0,    40,     0,    38,     0,     0,     2,     4,     0,
       0,     0,    43,    40,    41,    67,    66,     0,     0,     0,
       0,    45,    63,    14,    14,     5,    40,     0,    37,     0,
       0,    64,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     6,    42,    40,    69,    59,     0,    71,    50,    51,
      54,    55,    56,    57,    52,    53,    46,    47,    48,    49,
      58,    39,    16,     0,     0,    44,     0,     0,    68,     0,
      15,     0,     0,    59,    70,     0,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,    60,
      16,     0,     0,    40,     0,     0,     0,     0,     0,    59,
      10,    25,    25,    13,    17,    34,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,     0,    11,     9,    26,
      18,    24,    68,    40,     0,     0,    29,     0,     0,     0,
       0,    25,     0,     0,    32,    40,     0,    30,     0,     0,
       0,    23,    14,    40,    35,     0,     0,     0,     0,     0,
       0,     0,    36,    25,    30,    28,    25,     0,     0,     0,
      19,    31,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    25,    46,    47,    25,
      12,    21,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,  -106,  -106,   227,  -106,  -106,    49,  -106,  -106,   -33,
     135,   -80,  -105,  -106,    89,   146,   265,    -8,   -13,   -90,
    -106,  -106,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    18,     8,    15,   138,   152,    17,    59,
      90,   139,   140,   105,   167,   106,    19,    14,   107,    87,
     178,    31,    32
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    60,    22,   109,    24,    39,     1,    36,    37,     5,
      40,   104,   108,    10,     6,    38,    43,   141,     9,    10,
       7,    10,   134,    97,    11,    23,    65,    66,    62,   136,
      20,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    12,    13,   161,    16,    10,    81,
      12,    21,    12,    25,    26,    85,    25,    26,    33,   127,
      54,    55,    56,    34,    25,    26,   111,   111,   180,    41,
      42,   183,    58,    93,    27,    28,   165,    35,   168,    12,
     128,    29,    64,    39,    29,    27,    28,   149,   112,    82,
     119,   201,    29,    89,   202,    83,    84,    94,   125,   126,
      95,   130,    91,    92,   133,   129,   190,   191,   110,   194,
     113,    25,    96,    97,   143,   144,    98,    99,   100,   101,
     102,   182,   103,   114,    54,    55,    56,   115,   116,   171,
     -61,   117,    27,    28,   157,   154,   159,   160,   118,    29,
     163,   121,   131,   120,    10,   132,   123,   164,    54,    55,
      56,   137,   146,   174,   -62,   172,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,   147,
     153,   188,   150,   151,   156,    12,    25,    96,    97,   197,
     198,    98,    99,   100,   101,   102,   158,   103,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    27,    28,    52,
      53,    54,    55,    56,    29,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,   162,   173,
     175,   177,   184,   179,   176,   185,    57,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
     195,   186,   187,   189,   200,   124,   196,   199,    63,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    61,   181,   135,     4,     0,     0,     0,     0,
      88,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,     0,
       0,     0,   142,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,   155,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,     0,     0,   169,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,    86,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       0,     0,     0,     0,     0,     0,   166,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       0,     0,     0,    67,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     0,     0,     0,
     145,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     0,     0,     0,   148,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,     0,   122,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     0,   170,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    44,    45,    46,    47,    48,    49,    50,    51,   192,
     193,    54,    55,    56,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56
};

static const yytype_int16 yycheck[] =
{
      13,    34,    10,    93,    12,    31,     5,    20,    21,     4,
      36,    91,    92,     4,     0,    23,    29,   122,    30,     4,
       4,     4,     4,     5,    15,     3,    39,    40,    36,   119,
      15,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    35,    36,   151,     7,     4,    57,
      35,    36,    35,     3,     4,    63,     3,     4,    31,    15,
      26,    27,    28,    31,     3,     4,    15,    15,   173,    27,
      28,   176,     5,    86,    24,    25,   156,    30,   158,    35,
      36,    31,    32,    31,    31,    24,    25,    36,    36,     4,
     103,   196,    31,    35,   199,    32,    32,    32,   111,   112,
       5,   114,    33,    33,   117,   113,   186,   187,     4,   189,
       4,     3,     4,     5,   127,   128,     8,     9,    10,    11,
      12,    13,    14,    31,    26,    27,    28,    31,    31,   162,
      32,    31,    24,    25,   147,   143,   149,   150,    31,    31,
     153,    30,     6,    34,     4,     6,    34,   155,    26,    27,
      28,     4,    32,   166,    32,   163,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    35,
      15,   184,    30,    30,    33,    35,     3,     4,     5,   192,
     193,     8,     9,    10,    11,    12,    33,    14,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    24,    25,    24,
      25,    26,    27,    28,    31,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    31,    34,
      32,     4,    15,    32,    34,    32,    37,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      34,    33,    33,    33,   195,   110,    34,    34,    37,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    35,   174,   118,     0,    -1,    -1,    -1,    -1,
      37,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      32,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    32,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    30,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    39,    40,    54,     4,     0,     4,    42,    30,
       4,    15,    35,    36,    55,    43,     7,    46,    41,    54,
      15,    36,    55,     3,    55,     3,     4,    24,    25,    31,
      56,    59,    60,    31,    31,    30,    56,    56,    55,    31,
      36,    60,    60,    56,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    37,     5,    47,
      47,    41,    55,    37,    32,    56,    56,    32,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    55,     4,    32,    32,    55,    35,    57,    37,    35,
      48,    33,    33,    56,    32,     5,     4,     5,     8,     9,
      10,    11,    12,    14,    49,    51,    53,    56,    49,    57,
       4,    15,    36,     4,    31,    31,    31,    31,    31,    56,
      34,    30,    30,    34,    48,    56,    56,    15,    36,    55,
      56,     6,     6,    56,     4,    53,    57,     4,    44,    49,
      50,    50,    37,    56,    56,    32,    32,    35,    32,    36,
      30,    30,    45,    15,    55,    37,    33,    56,    33,    56,
      56,    50,    31,    56,    55,    49,    35,    52,    49,    37,
      30,    47,    55,    34,    56,    32,    34,     4,    58,    32,
      50,    52,    13,    50,    15,    32,    33,    33,    56,    33,
      49,    49,    24,    25,    49,    34,    34,    56,    56,    34,
      44,    50,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    42,    43,    42,
      44,    45,    44,    46,    47,    47,    48,    48,    49,    49,
      49,    49,    49,    49,    49,    50,    50,    51,    51,    51,
      52,    52,    53,    53,    53,    53,    53,    54,    54,    54,
      55,    55,    55,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    57,
      57,    58,    58,    59,    59,    59,    60,    60,    60,    60,
      60,    60
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     3,     0,     3,     0,     0,     9,
       0,     0,     9,     7,     0,     3,     0,     4,     3,     8,
       8,    12,    12,     5,     3,     0,     1,     1,     7,     4,
       0,     3,     5,     3,     3,     6,     7,     5,     3,     6,
       0,     2,     4,     2,     5,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
       3,     5,     5,     1,     2,     2,     1,     1,     4,     3,
       5,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* axioma: globales funciones main  */
#line 90 "trad4.y"
                                                                            { printf ("%s%s%s\n", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code) ; }
#line 1387 "trad4.tab.c"
    break;

  case 3: /* globales: %empty  */
#line 93 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1393 "trad4.tab.c"
    break;

  case 4: /* globales: declaracion_global ';' r_globales  */
#line 94 "trad4.y"
                                                                            { sprintf (temp, "%s \n%s", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1400 "trad4.tab.c"
    break;

  case 5: /* r_globales: %empty  */
#line 98 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1406 "trad4.tab.c"
    break;

  case 6: /* r_globales: declaracion_global ';' r_globales  */
#line 99 "trad4.y"
                                                                            { sprintf (temp, "%s \n%s", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1413 "trad4.tab.c"
    break;

  case 7: /* funciones: %empty  */
#line 103 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1419 "trad4.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 104 "trad4.y"
                                                                            { strcpy(funcion, yyvsp[0].code); }
#line 1425 "trad4.tab.c"
    break;

  case 9: /* funciones: IDENTIF $@1 '(' args ')' '{' body '}' r_funciones  */
#line 105 "trad4.y"
                                                                            { sprintf (temp, "(defun %s (%s) \n%s\n)\n%s", yyvsp[-8].code, yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code ) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1432 "trad4.tab.c"
    break;

  case 10: /* r_funciones: %empty  */
#line 109 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1438 "trad4.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 110 "trad4.y"
                                                                            { strcpy(funcion, yyvsp[0].code); }
#line 1444 "trad4.tab.c"
    break;

  case 12: /* r_funciones: IDENTIF $@2 '(' args ')' '{' body '}' r_funciones  */
#line 111 "trad4.y"
                                                                            { sprintf (temp, "(defun %s (%s) \n%s\n)\n%s", yyvsp[-8].code, yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code ) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1451 "trad4.tab.c"
    break;

  case 13: /* main: MAIN '(' args ')' '{' body '}'  */
#line 115 "trad4.y"
                                                                            { sprintf (temp, "(defun main (%s)\n%s) ", yyvsp[-4].code, yyvsp[-1].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1458 "trad4.tab.c"
    break;

  case 14: /* args: %empty  */
#line 119 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1464 "trad4.tab.c"
    break;

  case 15: /* args: INTEGER IDENTIF r_args  */
#line 120 "trad4.y"
                                                                            { sprintf (temp, "%s %s", yyvsp[-1].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1471 "trad4.tab.c"
    break;

  case 16: /* r_args: %empty  */
#line 124 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1477 "trad4.tab.c"
    break;

  case 17: /* r_args: ',' INTEGER IDENTIF r_args  */
#line 125 "trad4.y"
                                                                            { sprintf (temp, " %s %s", yyvsp[-1].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1484 "trad4.tab.c"
    break;

  case 18: /* body: sentencia ';' r_body  */
#line 129 "trad4.y"
                                                                            { sprintf (temp, "\t%s \n%s", yyvsp[-2].code, yyvsp[0].code) ;
                                                                               yyval.code = gen_code (temp) ; }
#line 1491 "trad4.tab.c"
    break;

  case 19: /* body: WHILE '(' expresion ')' '{' body '}' r_body  */
#line 131 "trad4.y"
                                                                            { if (yyvsp[-5].tipo) {
                                                                                sprintf (temp, "\t(loop while %s do \n%s\t) \n%s", yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                                              } else {
                                                                                sprintf (temp, "\t(loop while ( /= 0 %s) do \n%s\t) \n%s", yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                                              }  
                                                                                yyval.code = gen_code (temp) ; }
#line 1502 "trad4.tab.c"
    break;

  case 20: /* body: IF '(' expresion ')' '{' body '}' r_body  */
#line 137 "trad4.y"
                                                                            { if (yyvsp[-5].tipo) {
                                                                                sprintf (temp, "\t(if %s \n\t(progn \n%s)\t) \n%s", yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code) ;  
                                                                              } else {
                                                                                sprintf (temp, "\t(if ( /= 0 %s) \n\t(progn \n%s)\t) \n%s", yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code) ;  
                                                                              }
                                                                                yyval.code = gen_code (temp) ; }
#line 1513 "trad4.tab.c"
    break;

  case 21: /* body: IF '(' expresion ')' '{' body '}' ELSE '{' body '}' r_body  */
#line 143 "trad4.y"
                                                                            { if (yyvsp[-9].tipo) {
                                                                                sprintf (temp, "\t(if %s \n\t(progn \n%s)\t(progn \n%s)\t) \n%s", yyvsp[-9].code, yyvsp[-6].code, yyvsp[-2].code, yyvsp[0].code) ;  
                                                                              } else {    
                                                                                sprintf (temp, "\t(if ( /= 0 %s) \n\t(progn \n%s)\t(progn \n%s)\t) \n%s", yyvsp[-9].code, yyvsp[-6].code, yyvsp[-2].code, yyvsp[0].code) ;  
                                                                              }
                                                                                yyval.code = gen_code (temp) ; }
#line 1524 "trad4.tab.c"
    break;

  case 22: /* body: FOR '(' declaracion ';' expresion ';' incremento ')' '{' body '}' r_body  */
#line 151 "trad4.y"
                                                                            { sprintf (temp, "\t%s\n\t(loop while %s do \n%s\t%s)\n%s", yyvsp[-9].code, yyvsp[-7].code, yyvsp[-2].code, yyvsp[-5].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1531 "trad4.tab.c"
    break;

  case 23: /* body: RETURN expresion r_expresion ';' r_body  */
#line 153 "trad4.y"
                                                                                        { sprintf (temp, "\t(return-from %s (values %s %s))\n%s",funcion, yyvsp[-3].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1538 "trad4.tab.c"
    break;

  case 24: /* body: expresion ';' r_body  */
#line 155 "trad4.y"
                                                                            { sprintf (temp, "\t%s \n%s", yyvsp[-2].code, yyvsp[0].code) ;
                                                                               yyval.code = gen_code (temp) ; }
#line 1545 "trad4.tab.c"
    break;

  case 25: /* r_body: %empty  */
#line 159 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1551 "trad4.tab.c"
    break;

  case 26: /* r_body: body  */
#line 160 "trad4.y"
                                                                            { yyval = yyvsp[0] ; }
#line 1557 "trad4.tab.c"
    break;

  case 27: /* sentencia: declaracion  */
#line 163 "trad4.y"
                                                                            { yyval = yyvsp[0] ; }
#line 1563 "trad4.tab.c"
    break;

  case 28: /* sentencia: PRINTF '(' STRING ',' expresion r_sentencia ')'  */
#line 164 "trad4.y"
                                                                            { sprintf (temp, "(print %s) %s", yyvsp[-2].code, yyvsp[-1].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1570 "trad4.tab.c"
    break;

  case 29: /* sentencia: PUTS '(' STRING ')'  */
#line 166 "trad4.y"
                                                                            { sprintf (temp, "(print \"%s\")", yyvsp[-1].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1577 "trad4.tab.c"
    break;

  case 30: /* r_sentencia: %empty  */
#line 171 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1583 "trad4.tab.c"
    break;

  case 31: /* r_sentencia: ',' expresion r_sentencia  */
#line 172 "trad4.y"
                                                                            { sprintf (temp, "(print %s) %s", yyvsp[-1].code, yyvsp[0].code) ;  
                                                                                yyval.code = gen_code (temp) ;}
#line 1590 "trad4.tab.c"
    break;

  case 32: /* declaracion: INTEGER IDENTIF '=' expresion r_declaracion  */
#line 176 "trad4.y"
                                                                            { sprintf (temp, "(setq %s %s) %s", yyvsp[-3].code, yyvsp[-1].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1597 "trad4.tab.c"
    break;

  case 33: /* declaracion: INTEGER IDENTIF r_declaracion  */
#line 178 "trad4.y"
                                                                            { sprintf (temp, "(setq %s 0) %s", yyvsp[-1].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1604 "trad4.tab.c"
    break;

  case 34: /* declaracion: IDENTIF '=' expresion  */
#line 180 "trad4.y"
                                                                            { sprintf (temp, "(setq %s %s)", yyvsp[-2].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1611 "trad4.tab.c"
    break;

  case 35: /* declaracion: INTEGER IDENTIF '[' expresion ']' r_declaracion  */
#line 182 "trad4.y"
                                                                            { sprintf (temp, "(setq %s (make-array %s)) %s", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1618 "trad4.tab.c"
    break;

  case 36: /* declaracion: IDENTIF '[' expresion ']' '=' expresion r_declaracion  */
#line 184 "trad4.y"
                                                                            { sprintf (temp, "(setf (aref %s %s) %s) %s", yyvsp[-6].code, yyvsp[-4].code, yyvsp[-1].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1625 "trad4.tab.c"
    break;

  case 37: /* declaracion_global: INTEGER IDENTIF '=' NUMBER r_declaracion  */
#line 189 "trad4.y"
                                                                     { sprintf (temp, "(setq %s %d) %s", yyvsp[-3].code, yyvsp[-1].value, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1632 "trad4.tab.c"
    break;

  case 38: /* declaracion_global: INTEGER IDENTIF r_declaracion  */
#line 191 "trad4.y"
                                                                            { sprintf (temp, "(setq %s 0) %s", yyvsp[-1].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1639 "trad4.tab.c"
    break;

  case 39: /* declaracion_global: INTEGER IDENTIF '[' expresion ']' r_declaracion  */
#line 193 "trad4.y"
                                                                            { sprintf (temp, "(setq %s (make-array %s)) %s", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1646 "trad4.tab.c"
    break;

  case 40: /* r_declaracion: %empty  */
#line 197 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1652 "trad4.tab.c"
    break;

  case 41: /* r_declaracion: ',' r_declaracion  */
#line 198 "trad4.y"
                                                                            { sprintf (temp, " %s", yyvsp[0].code) ;  
                                                                                yyval.code = gen_code (temp) ;}
#line 1659 "trad4.tab.c"
    break;

  case 42: /* r_declaracion: IDENTIF '=' expresion r_declaracion  */
#line 200 "trad4.y"
                                                                            { sprintf (temp, "(setq %s %s) %s", yyvsp[-3].code, yyvsp[-1].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1666 "trad4.tab.c"
    break;

  case 43: /* r_declaracion: IDENTIF r_declaracion  */
#line 202 "trad4.y"
                                                                            { sprintf (temp, "(setq %s 0) %s", yyvsp[-1].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1673 "trad4.tab.c"
    break;

  case 44: /* r_declaracion: IDENTIF '[' expresion ']' r_declaracion  */
#line 204 "trad4.y"
                                                                            { sprintf (temp, "(setq %s (make-array %s)) %s", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1680 "trad4.tab.c"
    break;

  case 45: /* expresion: termino  */
#line 208 "trad4.y"
                                                                            { yyval = yyvsp[0] ; }
#line 1686 "trad4.tab.c"
    break;

  case 46: /* expresion: expresion '+' expresion  */
#line 209 "trad4.y"
                                                                            { sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ;
                                                                                yyval.tipo = 0 ; }
#line 1694 "trad4.tab.c"
    break;

  case 47: /* expresion: expresion '-' expresion  */
#line 212 "trad4.y"
                                                                            { sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ;
                                                                                yyval.tipo = 0 ; }
#line 1702 "trad4.tab.c"
    break;

  case 48: /* expresion: expresion '*' expresion  */
#line 215 "trad4.y"
                                                                            { sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ;
                                                                                yyval.tipo = 0 ; }
#line 1710 "trad4.tab.c"
    break;

  case 49: /* expresion: expresion '/' expresion  */
#line 218 "trad4.y"
                                                                            { sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ;
                                                                                yyval.tipo = 0 ; }
#line 1718 "trad4.tab.c"
    break;

  case 50: /* expresion: expresion OR expresion  */
#line 221 "trad4.y"
                                                                            { sprintf (temp, "(or %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ;
                                                                                yyval.tipo = 1 ; }
#line 1726 "trad4.tab.c"
    break;

  case 51: /* expresion: expresion AND expresion  */
#line 224 "trad4.y"
                                                                            { sprintf (temp, "(And %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ;
                                                                                yyval.tipo = 1 ; }
#line 1734 "trad4.tab.c"
    break;

  case 52: /* expresion: expresion GREATER_EQUAL expresion  */
#line 227 "trad4.y"
                                                                            { sprintf (temp, "(>= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; 
                                                                                yyval.tipo = 1 ; }
#line 1742 "trad4.tab.c"
    break;

  case 53: /* expresion: expresion LESS_EQUAL expresion  */
#line 230 "trad4.y"
                                                                            { sprintf (temp, "(<= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; 
                                                                                yyval.tipo = 1 ; }
#line 1750 "trad4.tab.c"
    break;

  case 54: /* expresion: expresion EQUAL expresion  */
#line 233 "trad4.y"
                                                                            { sprintf (temp, "(= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; 
                                                                                yyval.tipo = 1 ; }
#line 1758 "trad4.tab.c"
    break;

  case 55: /* expresion: expresion NOT_EQUAL expresion  */
#line 236 "trad4.y"
                                                                            { sprintf (temp, "(/= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; 
                                                                                yyval.tipo = 1 ; }
#line 1766 "trad4.tab.c"
    break;

  case 56: /* expresion: expresion '<' expresion  */
#line 239 "trad4.y"
                                                                            { sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; 
                                                                                yyval.tipo = 1 ; }
#line 1774 "trad4.tab.c"
    break;

  case 57: /* expresion: expresion '>' expresion  */
#line 242 "trad4.y"
                                                                            { sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; 
                                                                                yyval.tipo = 1 ; }
#line 1782 "trad4.tab.c"
    break;

  case 58: /* expresion: expresion '%' expresion  */
#line 245 "trad4.y"
                                                                            { sprintf (temp, "(mod %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; 
                                                                                yyval.tipo = 0 ; }
#line 1790 "trad4.tab.c"
    break;

  case 59: /* r_expresion: %empty  */
#line 250 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1796 "trad4.tab.c"
    break;

  case 60: /* r_expresion: ',' expresion r_expresion  */
#line 251 "trad4.y"
                                                                            { sprintf (temp, " %s %s", yyvsp[-1].code, yyvsp[0].code) ;  
                                                                                yyval.code = gen_code (temp) ;}
#line 1803 "trad4.tab.c"
    break;

  case 61: /* incremento: IDENTIF '=' expresion '+' expresion  */
#line 255 "trad4.y"
                                                                            { sprintf (temp, "(setq %s (+ %s %s))", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1810 "trad4.tab.c"
    break;

  case 62: /* incremento: IDENTIF '=' expresion '-' expresion  */
#line 257 "trad4.y"
                                                                            { sprintf (temp, "(setq %s (- %s %s))", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1817 "trad4.tab.c"
    break;

  case 63: /* termino: operando  */
#line 261 "trad4.y"
                                                                            { yyval = yyvsp[0] ; }
#line 1823 "trad4.tab.c"
    break;

  case 64: /* termino: '+' operando  */
#line 262 "trad4.y"
                                                                            { sprintf (temp, "(+ %s)", yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1830 "trad4.tab.c"
    break;

  case 65: /* termino: '-' operando  */
#line 264 "trad4.y"
                                                                            { sprintf (temp, "(- %s)", yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1837 "trad4.tab.c"
    break;

  case 66: /* operando: IDENTIF  */
#line 268 "trad4.y"
                                                                            { sprintf (temp, "%s", yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1844 "trad4.tab.c"
    break;

  case 67: /* operando: NUMBER  */
#line 270 "trad4.y"
                                                                            { sprintf (temp, "%d", yyvsp[0].value) ;
                                                                                yyval.code = gen_code (temp) ; 
                                                                                yyval.tipo = 0 ; }
#line 1852 "trad4.tab.c"
    break;

  case 68: /* operando: IDENTIF '[' expresion ']'  */
#line 273 "trad4.y"
                                                                            { sprintf (temp, "(aref %s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1859 "trad4.tab.c"
    break;

  case 69: /* operando: IDENTIF '(' ')'  */
#line 275 "trad4.y"
                                                                            { sprintf (temp, "(%s)", yyvsp[-2].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1866 "trad4.tab.c"
    break;

  case 70: /* operando: IDENTIF '(' expresion r_expresion ')'  */
#line 277 "trad4.y"
                                                                            { sprintf (temp, "(%s %s %s)", yyvsp[-4].code, yyvsp[-2].code, yyvsp[-1].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1873 "trad4.tab.c"
    break;

  case 71: /* operando: '(' expresion ')'  */
#line 279 "trad4.y"
                                                                            { yyval = yyvsp[-1] ; }
#line 1879 "trad4.tab.c"
    break;


#line 1883 "trad4.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 283 "trad4.y"
                            // SECCION 4    Codigo en C

int n_line = 1 ;

int yyerror (mensaje)
char *mensaje ;
{
    fprintf (stderr, "%s en la linea %d\n", mensaje, n_line) ;
    printf ( "\n") ;	// bye
}

char *int_to_string (int n)
{
    sprintf (temp, "%d", n) ;
    return gen_code (temp) ;
}

char *char_to_string (char c)
{
    sprintf (temp, "%c", c) ;
    return gen_code (temp) ;
}

char *my_malloc (int nbytes)       // reserva n bytes de memoria dinamica
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

typedef struct s_keyword { // para las palabras reservadas de C
    char *name ;
    int token ;
} t_keyword ;

t_keyword keywords [] = { // define las palabras reservadas y los
    "main",         MAIN,           // y los token asociados
    "while",        WHILE,
    "int",          INTEGER,
    "puts",         PUTS,
    "printf",       PRINTF,
    "||",           OR,
    "&&",           AND,
    ">=",           GREATER_EQUAL,
    "<=",           LESS_EQUAL,
    "!=",           NOT_EQUAL,
    "==",           EQUAL,
    "if",           IF,
    "else",         ELSE,
    "for",         FOR,
    "return",      RETURN,
    NULL,           0               // para marcar el fin de la tabla
} ;

t_keyword *search_keyword (char *symbol_name)
{                                  // Busca n_s en la tabla de pal. res.
                                   // y devuelve puntero a registro (simbolo)
    int i ;
    t_keyword *sim ;

    i = 0 ;
    sim = keywords ;
    while (sim [i].name != NULL) {
	    if (strcmp (sim [i].name, symbol_name) == 0) {
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

char *gen_code (char *name)     // copia el argumento a un
{                                      // string en memoria dinamica
    char *p ;
    int l ;
	
    l = strlen (name)+1 ;
    p = (char *) my_malloc (l) ;
    strcpy (p, name) ;
	
    return p ;
}


int yylex ()
{
    int i ;
    unsigned char c ;
    unsigned char cc ;
    char ops_expandibles [] = "!<=>|%/&+-*" ;
    char temp_str [256] ;
    t_keyword *symbol ;

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
            n_line++ ;

    } while (c == ' ' || c == '\n' || c == 10 || c == 13 || c == '\t') ;

    if (c == '\"') {
        i = 0 ;
        do {
            c = getchar () ;
            temp_str [i++] = c ;
        } while (c != '\"' && i < 255) ;
        if (i == 256) {
            printf ("AVISO: string con mas de 255 caracteres en linea %d\n", n_line) ;
        }		 	// habria que leer hasta el siguiente " , pero, y si falta?
        temp_str [--i] = '\0' ;
        yylval.code = gen_code (temp_str) ;
        return (STRING) ;
    }

    if (c == '.' || (c >= '0' && c <= '9')) {
        ungetc (c, stdin) ;
        scanf ("%d", &yylval.value) ;
//         printf ("\nDEV: NUMBER %d\n", yylval.value) ;        // PARA DEPURAR
        return NUMBER ;
    }

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        i = 0 ;
        while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9') || c == '_') && i < 255) {
            temp_str [i++] = tolower (c) ;
            c = getchar () ;
        }
        temp_str [i] = '\0' ;
        ungetc (c, stdin) ;

        yylval.code = gen_code (temp_str) ;
        symbol = search_keyword (yylval.code) ;
        if (symbol == NULL) {    // no es palabra reservada -> identificador antes vrariabre
//               printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
            return (IDENTIF) ;
        } else {
//               printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
            return (symbol->token) ;
        }
    }

    if (strchr (ops_expandibles, c) != NULL) { // busca c en ops_expandibles
        cc = getchar () ;
        sprintf (temp_str, "%c%c", (char) c, (char) cc) ;
        symbol = search_keyword (temp_str) ;
        if (symbol == NULL) {
            ungetc (cc, stdin) ;
            yylval.code = NULL ;
            return (c) ;
        } else {
            yylval.code = gen_code (temp_str) ; // aunque no se use
            return (symbol->token) ;
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
