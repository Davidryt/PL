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
#line 3 "trad3.y"
                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para cadenas
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata

int yylex () ;
int yyerror () ;
char *mi_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;

char temp [2048] ;

// Definitions for explicit attributes

typedef struct s_attr {
        int value ;
        char *code ;
} t_attr ;

#define YYSTYPE t_attr


#line 100 "trad3.tab.c"

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
    OR = 269,                      /* OR  */
    AND = 270,                     /* AND  */
    EQUAL = 271,                   /* EQUAL  */
    NOT_EQUAL = 272,               /* NOT_EQUAL  */
    GREATER_EQUAL = 273,           /* GREATER_EQUAL  */
    LESS_EQUAL = 274,              /* LESS_EQUAL  */
    UNARY_SIGN = 275               /* UNARY_SIGN  */
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
  YYSYMBOL_14_ = 14,                       /* '='  */
  YYSYMBOL_OR = 15,                        /* OR  */
  YYSYMBOL_AND = 16,                       /* AND  */
  YYSYMBOL_EQUAL = 17,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 18,                 /* NOT_EQUAL  */
  YYSYMBOL_19_ = 19,                       /* '<'  */
  YYSYMBOL_20_ = 20,                       /* '>'  */
  YYSYMBOL_GREATER_EQUAL = 21,             /* GREATER_EQUAL  */
  YYSYMBOL_LESS_EQUAL = 22,                /* LESS_EQUAL  */
  YYSYMBOL_23_ = 23,                       /* '+'  */
  YYSYMBOL_24_ = 24,                       /* '-'  */
  YYSYMBOL_25_ = 25,                       /* '*'  */
  YYSYMBOL_26_ = 26,                       /* '/'  */
  YYSYMBOL_UNARY_SIGN = 27,                /* UNARY_SIGN  */
  YYSYMBOL_28_ = 28,                       /* ';'  */
  YYSYMBOL_29_ = 29,                       /* '('  */
  YYSYMBOL_30_ = 30,                       /* ')'  */
  YYSYMBOL_31_ = 31,                       /* '{'  */
  YYSYMBOL_32_ = 32,                       /* '}'  */
  YYSYMBOL_33_ = 33,                       /* ','  */
  YYSYMBOL_34_ = 34,                       /* '['  */
  YYSYMBOL_35_ = 35,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_axioma = 37,                    /* axioma  */
  YYSYMBOL_globales = 38,                  /* globales  */
  YYSYMBOL_r_globales = 39,                /* r_globales  */
  YYSYMBOL_funciones = 40,                 /* funciones  */
  YYSYMBOL_r_funciones = 41,               /* r_funciones  */
  YYSYMBOL_main = 42,                      /* main  */
  YYSYMBOL_args = 43,                      /* args  */
  YYSYMBOL_r_args = 44,                    /* r_args  */
  YYSYMBOL_body = 45,                      /* body  */
  YYSYMBOL_r_body = 46,                    /* r_body  */
  YYSYMBOL_sentencia = 47,                 /* sentencia  */
  YYSYMBOL_r_sentencia = 48,               /* r_sentencia  */
  YYSYMBOL_declaracion = 49,               /* declaracion  */
  YYSYMBOL_declaracion_global = 50,        /* declaracion_global  */
  YYSYMBOL_r_declaracion = 51,             /* r_declaracion  */
  YYSYMBOL_expresion = 52,                 /* expresion  */
  YYSYMBOL_incremento = 53,                /* incremento  */
  YYSYMBOL_termino = 54,                   /* termino  */
  YYSYMBOL_operando = 55                   /* operando  */
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
#define YYLAST   379

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  181

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   275


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,    25,    23,    33,    24,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    28,
      19,    14,    20,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    15,
      16,    17,    18,    21,    22,    27
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    83,    83,    86,    87,    91,    92,    96,    97,   101,
     102,   106,   110,   111,   115,   116,   120,   122,   124,   126,
     128,   133,   134,   137,   138,   140,   145,   146,   150,   152,
     154,   156,   158,   162,   164,   166,   170,   171,   173,   175,
     177,   181,   182,   184,   186,   188,   190,   192,   194,   196,
     198,   200,   202,   204,   208,   210,   214,   215,   217,   221,
     223,   225,   227,   229
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
  "ELSE", "'='", "OR", "AND", "EQUAL", "NOT_EQUAL", "'<'", "'>'",
  "GREATER_EQUAL", "LESS_EQUAL", "'+'", "'-'", "'*'", "'/'", "UNARY_SIGN",
  "';'", "'('", "')'", "'{'", "'}'", "','", "'['", "']'", "$accept",
  "axioma", "globales", "r_globales", "funciones", "r_funciones", "main",
  "args", "r_args", "body", "r_body", "sentencia", "r_sentencia",
  "declaracion", "declaracion_global", "r_declaracion", "expresion",
  "incremento", "termino", "operando", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-104)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-56)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,    12,    18,    41,    -6,     5,  -104,    24,    64,     2,
       7,    61,     9,    44,  -104,    69,    51,  -104,  -104,    85,
      82,    44,  -104,     9,  -104,  -104,    22,    40,    40,    44,
     156,  -104,  -104,    88,    59,    69,     2,     9,   177,  -104,
      81,    44,  -104,  -104,   280,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,     9,    93,    99,
     101,  -104,  -104,     9,  -104,   198,  -104,   353,    98,    83,
      83,   -20,   -20,   -20,   -20,   -11,   -11,  -104,  -104,  -104,
     133,  -104,   124,   108,  -104,  -104,   136,    36,   140,   116,
     117,   118,   119,   120,   132,   138,  -104,   124,    93,   162,
      44,    32,    44,   161,   163,    44,    72,   164,   124,   151,
    -104,  -104,   219,   181,    44,  -104,   296,   155,   153,   312,
     159,   160,  -104,  -104,  -104,  -104,   174,     9,   240,   173,
    -104,    44,   175,    44,    69,    44,  -104,     9,   124,   261,
     124,   328,   178,   137,  -104,   158,    44,   179,   193,   201,
     176,  -104,   124,   261,  -104,    86,   196,   197,   124,  -104,
    -104,   180,  -104,    44,   195,   199,   124,   342,   124,   164,
     200,    44,    44,   214,  -104,   124,    29,    57,   124,  -104,
    -104
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     7,     0,    36,     1,     0,     0,     5,
      36,     0,    36,     0,    34,    12,     0,     2,     4,     0,
       0,     0,    39,    36,    37,    60,    59,     0,     0,     0,
       0,    41,    56,     0,     0,    12,     5,    36,     0,    33,
       0,     0,    57,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,    14,     0,
       0,     6,    38,    36,    62,     0,    63,    46,    47,    50,
      51,    52,    53,    48,    49,    42,    43,    44,    45,    35,
       0,    13,     0,     0,    40,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,     0,    14,     0,
       0,    36,     0,     0,     0,     0,     0,     9,    21,     0,
      15,    30,     0,     0,     0,    29,     0,     0,     0,     0,
       0,     0,     8,    22,    16,    11,     0,    36,     0,     0,
      25,     0,     0,     0,    12,     0,    28,    36,     0,    26,
       0,     0,     0,    36,    31,     0,     0,     0,     0,     0,
       0,    32,    21,    26,    24,    21,     0,     0,     0,    17,
      27,     0,    18,     0,     0,     0,     0,     0,     0,     9,
       0,     0,     0,     0,    10,    21,    42,    43,    21,    19,
      20
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,  -104,   192,  -104,    60,  -104,   -34,   149,   -80,
    -103,  -104,    77,   142,   249,     0,   -21,  -104,  -104,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    18,     8,   122,    17,    34,    81,   123,
     124,    95,   147,    96,    19,    14,    30,   157,    31,    32
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    60,    94,    53,    54,    55,    56,     1,    44,    10,
      22,    10,    24,    10,    55,    56,     5,   109,     6,    11,
      65,    20,     9,    39,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    10,    62,    12,    13,
      12,    21,    12,    25,    26,     7,   113,    25,    26,   159,
      99,    40,   162,    15,    55,    56,    41,    79,   145,   -54,
     148,    42,    43,    84,    23,    12,   114,    27,    28,    29,
     100,    16,   179,    29,    33,   180,    87,    88,   165,   112,
      35,   116,    55,    56,   119,    37,   170,   -55,   173,    59,
      87,    88,    58,   128,    89,    90,    91,    92,    93,   161,
     142,   115,    49,    50,    51,    52,    53,    54,    55,    56,
     139,    64,   141,    36,   143,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,   153,    80,   136,    87,    88,
      82,    83,    89,    90,    91,    92,    93,   144,    86,    97,
      98,    10,   167,   151,   101,   102,   103,   104,   105,   106,
     176,   177,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,   107,   111,   108,   117,   121,   118,
      12,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,   125,   127,   130,   131,   133,   135,   134,
     152,    57,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,   138,   156,   140,   158,   150,   154,
     163,   166,    63,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,   155,   168,   164,    61,   174,
     160,   169,   175,    85,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,   178,   110,   120,     4,
       0,     0,     0,     0,   126,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,   137,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,   146,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     0,     0,     0,
      66,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,     0,     0,     0,   129,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     0,
       0,     0,   132,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     0,   149,    45,    46,    47,
      48,    49,    50,    51,    52,   171,   172,    55,    56,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56
};

static const yytype_int16 yycheck[] =
{
      21,    35,    82,    23,    24,    25,    26,     5,    29,     4,
      10,     4,    12,     4,    25,    26,     4,    97,     0,    14,
      41,    14,    28,    23,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     4,    37,    33,    34,
      33,    34,    33,     3,     4,     4,    14,     3,     4,   152,
      14,    29,   155,    29,    25,    26,    34,    57,   138,    30,
     140,    27,    28,    63,     3,    33,    34,    23,    24,    29,
      34,     7,   175,    29,     5,   178,     4,     5,   158,   100,
      29,   102,    25,    26,   105,     3,   166,    30,   168,    30,
       4,     5,     4,   114,     8,     9,    10,    11,    12,    13,
     134,   101,    19,    20,    21,    22,    23,    24,    25,    26,
     131,    30,   133,    28,   135,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   146,    33,   127,     4,     5,
      31,    30,     8,     9,    10,    11,    12,   137,     5,    31,
       4,     4,   163,   143,     4,    29,    29,    29,    29,    29,
     171,   172,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    32,     3,    28,     6,     4,     6,
      33,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    32,     3,    30,    33,    28,    14,    29,
      32,    35,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    31,     4,    31,    31,    30,    30,
      14,    31,    35,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    32,    31,    30,    36,   169,
     153,    32,    32,    35,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    32,    98,   106,     0,
      -1,    -1,    -1,    -1,    35,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    37,    38,    50,     4,     0,     4,    40,    28,
       4,    14,    33,    34,    51,    29,     7,    42,    39,    50,
      14,    34,    51,     3,    51,     3,     4,    23,    24,    29,
      52,    54,    55,     5,    43,    29,    28,     3,    52,    51,
      29,    34,    55,    55,    52,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    35,     4,    30,
      43,    39,    51,    35,    30,    52,    30,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    51,
      33,    44,    31,    30,    51,    35,     5,     4,     5,     8,
       9,    10,    11,    12,    45,    47,    49,    31,     4,    14,
      34,     4,    29,    29,    29,    29,    29,    32,    28,    45,
      44,     3,    52,    14,    34,    51,    52,     6,     6,    52,
      49,     4,    41,    45,    46,    32,    35,     3,    52,    30,
      30,    33,    30,    28,    29,    14,    51,    35,    31,    52,
      31,    52,    43,    52,    51,    45,    33,    48,    45,    28,
      30,    51,    32,    52,    30,    32,     4,    53,    31,    46,
      48,    13,    46,    14,    30,    45,    31,    52,    31,    32,
      45,    23,    24,    45,    41,    32,    52,    52,    32,    46,
      46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    40,    40,    41,
      41,    42,    43,    43,    44,    44,    45,    45,    45,    45,
      45,    46,    46,    47,    47,    47,    48,    48,    49,    49,
      49,    49,    49,    50,    50,    50,    51,    51,    51,    51,
      51,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    53,    53,    54,    54,    54,    55,
      55,    55,    55,    55
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     3,     0,     3,     0,     8,     0,
       8,     7,     0,     3,     0,     4,     3,     8,     8,    12,
      12,     0,     1,     1,     7,     4,     0,     3,     5,     3,
       3,     6,     7,     5,     3,     6,     0,     2,     4,     2,
       5,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     5,     1,     2,     2,     1,
       1,     4,     3,     3
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
#line 83 "trad3.y"
                                                                            { printf ("%s%s%s\n", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code) ; }
#line 1339 "trad3.tab.c"
    break;

  case 3: /* globales: %empty  */
#line 86 "trad3.y"
                                                                            { yyval.code = ""; }
#line 1345 "trad3.tab.c"
    break;

  case 4: /* globales: declaracion_global ';' r_globales  */
#line 87 "trad3.y"
                                                                            { sprintf (temp, "%s \n%s", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1352 "trad3.tab.c"
    break;

  case 5: /* r_globales: %empty  */
#line 91 "trad3.y"
                                                                            { yyval.code = ""; }
#line 1358 "trad3.tab.c"
    break;

  case 6: /* r_globales: declaracion_global ';' r_globales  */
#line 92 "trad3.y"
                                                                            { sprintf (temp, "%s \n%s", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1365 "trad3.tab.c"
    break;

  case 7: /* funciones: %empty  */
#line 96 "trad3.y"
                                                                            { yyval.code = ""; }
#line 1371 "trad3.tab.c"
    break;

  case 8: /* funciones: IDENTIF '(' args ')' '{' body '}' r_funciones  */
#line 97 "trad3.y"
                                                                            { sprintf (temp, "(defun %s (%s) \n%s)\n%s", yyvsp[-7].code, yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code ) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1378 "trad3.tab.c"
    break;

  case 9: /* r_funciones: %empty  */
#line 101 "trad3.y"
                                                                            { yyval.code = ""; }
#line 1384 "trad3.tab.c"
    break;

  case 10: /* r_funciones: IDENTIF '(' args ')' '{' body '}' r_funciones  */
#line 102 "trad3.y"
                                                                            { sprintf (temp, "(defun %s (%s) \n%s)\n%s", yyvsp[-7].code, yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code ) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1391 "trad3.tab.c"
    break;

  case 11: /* main: MAIN '(' args ')' '{' body '}'  */
#line 106 "trad3.y"
                                                                            { sprintf (temp, "(defun main (%s)\n%s) ", yyvsp[-4].code, yyvsp[-1].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1398 "trad3.tab.c"
    break;

  case 12: /* args: %empty  */
#line 110 "trad3.y"
                                                                            { yyval.code = ""; }
#line 1404 "trad3.tab.c"
    break;

  case 13: /* args: INTEGER IDENTIF r_args  */
#line 111 "trad3.y"
                                                                            { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1411 "trad3.tab.c"
    break;

  case 14: /* r_args: %empty  */
#line 115 "trad3.y"
                                                                            { yyval.code = ""; }
#line 1417 "trad3.tab.c"
    break;

  case 15: /* r_args: ',' INTEGER IDENTIF r_args  */
#line 116 "trad3.y"
                                                                            { sprintf (temp, "%s , %s", yyvsp[-3].code, yyvsp[-1].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1424 "trad3.tab.c"
    break;

  case 16: /* body: sentencia ';' r_body  */
#line 120 "trad3.y"
                                                                            { sprintf (temp, "\t%s \n%s", yyvsp[-2].code, yyvsp[0].code) ;
                                                                               yyval.code = gen_code (temp) ; }
#line 1431 "trad3.tab.c"
    break;

  case 17: /* body: WHILE '(' expresion ')' '{' body '}' r_body  */
#line 122 "trad3.y"
                                                                            { sprintf (temp, "\t(loop while %s do \n%s\t) \n%s", yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1438 "trad3.tab.c"
    break;

  case 18: /* body: IF '(' expresion ')' '{' body '}' r_body  */
#line 124 "trad3.y"
                                                                            { sprintf (temp, "\t(if %s \n%s\t) \n%s", yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1445 "trad3.tab.c"
    break;

  case 19: /* body: IF '(' expresion ')' '{' body '}' ELSE '{' body '}' r_body  */
#line 126 "trad3.y"
                                                                            { sprintf (temp, "\t(if %s \n%s%s\t) \n%s", yyvsp[-9].code, yyvsp[-6].code, yyvsp[-2].code, yyvsp[0].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1452 "trad3.tab.c"
    break;

  case 20: /* body: FOR '(' declaracion ';' expresion ';' incremento ')' '{' body '}' r_body  */
#line 129 "trad3.y"
                                                                            { sprintf (temp, "\t%s\n\t(loop while %s do \n%s\t%s)\n%s", yyvsp[-9].code, yyvsp[-7].code, yyvsp[-2].code, yyvsp[-5].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1459 "trad3.tab.c"
    break;

  case 21: /* r_body: %empty  */
#line 133 "trad3.y"
                                                                            { yyval.code = ""; }
#line 1465 "trad3.tab.c"
    break;

  case 22: /* r_body: body  */
#line 134 "trad3.y"
                                                                            { yyval = yyvsp[0] ; }
#line 1471 "trad3.tab.c"
    break;

  case 23: /* sentencia: declaracion  */
#line 137 "trad3.y"
                                                                            { yyval = yyvsp[0] ; }
#line 1477 "trad3.tab.c"
    break;

  case 24: /* sentencia: PRINTF '(' STRING ',' expresion r_sentencia ')'  */
#line 138 "trad3.y"
                                                                            { sprintf (temp, "(print %s) %s", yyvsp[-2].code, yyvsp[-1].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1484 "trad3.tab.c"
    break;

  case 25: /* sentencia: PUTS '(' STRING ')'  */
#line 140 "trad3.y"
                                                                            { sprintf (temp, "(print \"%s\")", yyvsp[-1].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1491 "trad3.tab.c"
    break;

  case 26: /* r_sentencia: %empty  */
#line 145 "trad3.y"
                                                                            { yyval.code = ""; }
#line 1497 "trad3.tab.c"
    break;

  case 27: /* r_sentencia: ',' expresion r_sentencia  */
#line 146 "trad3.y"
                                                                              { sprintf (temp, "(print %s) %s", yyvsp[-1].code, yyvsp[0].code) ;  
                                                                                yyval.code = gen_code (temp) ;}
#line 1504 "trad3.tab.c"
    break;

  case 28: /* declaracion: INTEGER IDENTIF '=' NUMBER r_declaracion  */
#line 150 "trad3.y"
                                                                            { sprintf (temp, "(setq %s %d) %s", yyvsp[-3].code, yyvsp[-1].value, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1511 "trad3.tab.c"
    break;

  case 29: /* declaracion: INTEGER IDENTIF r_declaracion  */
#line 152 "trad3.y"
                                                                            { sprintf (temp, "(setq %s 0) %s", yyvsp[-1].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1518 "trad3.tab.c"
    break;

  case 30: /* declaracion: IDENTIF '=' NUMBER  */
#line 154 "trad3.y"
                                                                            { sprintf (temp, "(setq %s %d)", yyvsp[-2].code, yyvsp[0].value) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1525 "trad3.tab.c"
    break;

  case 31: /* declaracion: INTEGER IDENTIF '[' expresion ']' r_declaracion  */
#line 156 "trad3.y"
                                                                            { sprintf (temp, "(setq %s (make-array %s)) %s", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1532 "trad3.tab.c"
    break;

  case 32: /* declaracion: IDENTIF '[' expresion ']' '=' expresion r_declaracion  */
#line 158 "trad3.y"
                                                                                         { sprintf (temp, "(setf (aref %s %s) %s) %s", yyvsp[-6].code, yyvsp[-4].code, yyvsp[-1].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1539 "trad3.tab.c"
    break;

  case 33: /* declaracion_global: INTEGER IDENTIF '=' NUMBER r_declaracion  */
#line 162 "trad3.y"
                                                                            { sprintf (temp, "(setq %s %d) %s", yyvsp[-3].code, yyvsp[-1].value, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1546 "trad3.tab.c"
    break;

  case 34: /* declaracion_global: INTEGER IDENTIF r_declaracion  */
#line 164 "trad3.y"
                                                                            { sprintf (temp, "(setq %s 0) %s", yyvsp[-1].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1553 "trad3.tab.c"
    break;

  case 35: /* declaracion_global: INTEGER IDENTIF '[' expresion ']' r_declaracion  */
#line 166 "trad3.y"
                                                                            { sprintf (temp, "(setq %s (make-array %s)) %s", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1560 "trad3.tab.c"
    break;

  case 36: /* r_declaracion: %empty  */
#line 170 "trad3.y"
                                                                            { yyval.code = ""; }
#line 1566 "trad3.tab.c"
    break;

  case 37: /* r_declaracion: ',' r_declaracion  */
#line 171 "trad3.y"
                                                                            { sprintf (temp, " %s", yyvsp[0].code) ;  
                                                                                yyval.code = gen_code (temp) ;}
#line 1573 "trad3.tab.c"
    break;

  case 38: /* r_declaracion: IDENTIF '=' NUMBER r_declaracion  */
#line 173 "trad3.y"
                                                                            { sprintf (temp, "(setq %s %d) %s", yyvsp[-3].code, yyvsp[-1].value, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1580 "trad3.tab.c"
    break;

  case 39: /* r_declaracion: IDENTIF r_declaracion  */
#line 175 "trad3.y"
                                                                            { sprintf (temp, "(setq %s 0) %s", yyvsp[-1].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1587 "trad3.tab.c"
    break;

  case 40: /* r_declaracion: IDENTIF '[' expresion ']' r_declaracion  */
#line 177 "trad3.y"
                                                                            { sprintf (temp, "(setq %s (make-array %s)) %s", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1594 "trad3.tab.c"
    break;

  case 41: /* expresion: termino  */
#line 181 "trad3.y"
                                                                            { yyval = yyvsp[0] ; }
#line 1600 "trad3.tab.c"
    break;

  case 42: /* expresion: expresion '+' expresion  */
#line 182 "trad3.y"
                                                                            { sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1607 "trad3.tab.c"
    break;

  case 43: /* expresion: expresion '-' expresion  */
#line 184 "trad3.y"
                                                                            { sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1614 "trad3.tab.c"
    break;

  case 44: /* expresion: expresion '*' expresion  */
#line 186 "trad3.y"
                                                                            { sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1621 "trad3.tab.c"
    break;

  case 45: /* expresion: expresion '/' expresion  */
#line 188 "trad3.y"
                                                                            { sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1628 "trad3.tab.c"
    break;

  case 46: /* expresion: expresion OR expresion  */
#line 190 "trad3.y"
                                                                            { sprintf (temp, "(or %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1635 "trad3.tab.c"
    break;

  case 47: /* expresion: expresion AND expresion  */
#line 192 "trad3.y"
                                                                            { sprintf (temp, "(And %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1642 "trad3.tab.c"
    break;

  case 48: /* expresion: expresion GREATER_EQUAL expresion  */
#line 194 "trad3.y"
                                                                            { sprintf (temp, "(>= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1649 "trad3.tab.c"
    break;

  case 49: /* expresion: expresion LESS_EQUAL expresion  */
#line 196 "trad3.y"
                                                                            { sprintf (temp, "(<= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1656 "trad3.tab.c"
    break;

  case 50: /* expresion: expresion EQUAL expresion  */
#line 198 "trad3.y"
                                                                            { sprintf (temp, "(= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1663 "trad3.tab.c"
    break;

  case 51: /* expresion: expresion NOT_EQUAL expresion  */
#line 200 "trad3.y"
                                                                            { sprintf (temp, "(/= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1670 "trad3.tab.c"
    break;

  case 52: /* expresion: expresion '<' expresion  */
#line 202 "trad3.y"
                                                                            { sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1677 "trad3.tab.c"
    break;

  case 53: /* expresion: expresion '>' expresion  */
#line 204 "trad3.y"
                                                                            { sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1684 "trad3.tab.c"
    break;

  case 54: /* incremento: IDENTIF '=' expresion '+' expresion  */
#line 208 "trad3.y"
                                                                            { sprintf (temp, "(setq %s (+ %s %s))", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1691 "trad3.tab.c"
    break;

  case 55: /* incremento: IDENTIF '=' expresion '-' expresion  */
#line 210 "trad3.y"
                                                                            { sprintf (temp, "(setq %s (- %s %s))", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1698 "trad3.tab.c"
    break;

  case 56: /* termino: operando  */
#line 214 "trad3.y"
                                                                            { yyval = yyvsp[0] ; }
#line 1704 "trad3.tab.c"
    break;

  case 57: /* termino: '+' operando  */
#line 215 "trad3.y"
                                                                            { sprintf (temp, "(+ %s)", yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1711 "trad3.tab.c"
    break;

  case 58: /* termino: '-' operando  */
#line 217 "trad3.y"
                                                                            { sprintf (temp, "(- %s)", yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1718 "trad3.tab.c"
    break;

  case 59: /* operando: IDENTIF  */
#line 221 "trad3.y"
                                                                            { sprintf (temp, "%s", yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1725 "trad3.tab.c"
    break;

  case 60: /* operando: NUMBER  */
#line 223 "trad3.y"
                                                                            { sprintf (temp, "%d", yyvsp[0].value) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1732 "trad3.tab.c"
    break;

  case 61: /* operando: IDENTIF '[' expresion ']'  */
#line 225 "trad3.y"
                                                                            { sprintf (temp, "(aref %s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1739 "trad3.tab.c"
    break;

  case 62: /* operando: IDENTIF '(' ')'  */
#line 227 "trad3.y"
                                                                            { sprintf (temp, "(%s)", yyvsp[-2].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1746 "trad3.tab.c"
    break;

  case 63: /* operando: '(' expresion ')'  */
#line 229 "trad3.y"
                                                                            { yyval = yyvsp[-1] ; }
#line 1752 "trad3.tab.c"
    break;


#line 1756 "trad3.tab.c"

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

#line 233 "trad3.y"
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
    "<=",           GREATER_EQUAL,
    ">=",           LESS_EQUAL,
    "!=",           NOT_EQUAL,
    "==",           EQUAL,
    "if",           IF,
    "else",         ELSE,
    "for",         FOR,
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
