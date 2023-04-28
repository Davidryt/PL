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
} t_attr ;

#define YYSTYPE t_attr


#line 103 "trad4.tab.c"

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
  YYSYMBOL_UNARY_SIGN = 28,                /* UNARY_SIGN  */
  YYSYMBOL_29_ = 29,                       /* ';'  */
  YYSYMBOL_30_ = 30,                       /* '('  */
  YYSYMBOL_31_ = 31,                       /* ')'  */
  YYSYMBOL_32_ = 32,                       /* '{'  */
  YYSYMBOL_33_ = 33,                       /* '}'  */
  YYSYMBOL_34_ = 34,                       /* ','  */
  YYSYMBOL_35_ = 35,                       /* '['  */
  YYSYMBOL_36_ = 36,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_axioma = 38,                    /* axioma  */
  YYSYMBOL_globales = 39,                  /* globales  */
  YYSYMBOL_r_globales = 40,                /* r_globales  */
  YYSYMBOL_funciones = 41,                 /* funciones  */
  YYSYMBOL_42_1 = 42,                      /* $@1  */
  YYSYMBOL_r_funciones = 43,               /* r_funciones  */
  YYSYMBOL_44_2 = 44,                      /* $@2  */
  YYSYMBOL_main = 45,                      /* main  */
  YYSYMBOL_args = 46,                      /* args  */
  YYSYMBOL_r_args = 47,                    /* r_args  */
  YYSYMBOL_body = 48,                      /* body  */
  YYSYMBOL_r_body = 49,                    /* r_body  */
  YYSYMBOL_sentencia = 50,                 /* sentencia  */
  YYSYMBOL_r_sentencia = 51,               /* r_sentencia  */
  YYSYMBOL_declaracion = 52,               /* declaracion  */
  YYSYMBOL_declaracion_global = 53,        /* declaracion_global  */
  YYSYMBOL_r_declaracion = 54,             /* r_declaracion  */
  YYSYMBOL_expresion = 55,                 /* expresion  */
  YYSYMBOL_r_expresion = 56,               /* r_expresion  */
  YYSYMBOL_incremento = 57,                /* incremento  */
  YYSYMBOL_termino = 58,                   /* termino  */
  YYSYMBOL_operando = 59                   /* operando  */
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
#define YYLAST   448

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      30,    31,    26,    24,    34,    25,     2,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    29,
      20,    15,    21,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    33,     2,     2,     2,     2,
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
      16,    17,    18,    19,    22,    23,    28
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    88,    88,    91,    92,    96,    97,   101,   102,   102,
     107,   108,   108,   113,   117,   118,   122,   123,   127,   129,
     131,   133,   135,   139,   144,   145,   148,   149,   151,   156,
     157,   161,   163,   165,   167,   169,   173,   175,   177,   181,
     182,   184,   186,   188,   192,   193,   195,   197,   199,   201,
     203,   205,   207,   209,   211,   213,   215,   219,   220,   224,
     226,   230,   231,   233,   237,   239,   241,   243,   245,   247
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
  "GREATER_EQUAL", "LESS_EQUAL", "'+'", "'-'", "'*'", "'/'", "UNARY_SIGN",
  "';'", "'('", "')'", "'{'", "'}'", "','", "'['", "']'", "$accept",
  "axioma", "globales", "r_globales", "funciones", "$@1", "r_funciones",
  "$@2", "main", "args", "r_args", "body", "r_body", "sentencia",
  "r_sentencia", "declaracion", "declaracion_global", "r_declaracion",
  "expresion", "r_expresion", "incremento", "termino", "operando", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-128)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-61)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,     4,    23,    48,    34,     3,  -128,  -128,    58,    -3,
      39,    64,    10,   125,  -128,    38,    47,  -128,  -128,    40,
     125,   125,  -128,    10,  -128,  -128,    25,    18,    18,   125,
     169,  -128,  -128,    66,    66,    -3,    91,   190,  -128,    54,
     125,  -128,  -128,   312,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,    10,    76,    51,    52,
    -128,  -128,    10,  -128,   274,   211,  -128,   411,   421,   177,
     177,   106,   106,   106,   106,   -21,   -21,  -128,  -128,  -128,
      53,    61,    67,  -128,   125,    59,  -128,    96,  -128,   160,
     160,   274,  -128,    92,    26,    98,    75,    89,    90,    94,
      97,   125,    73,   105,  -128,   102,  -128,    53,   125,   125,
      41,   125,   130,   135,   125,    11,   360,   147,   160,  -128,
    -128,   388,   232,   125,   125,  -128,   328,   121,   119,   344,
     127,   160,  -128,  -128,  -128,  -128,   142,    91,   253,   126,
    -128,   125,   128,   125,  -128,   129,   125,  -128,    10,   160,
     293,   160,   374,    66,    91,  -128,   133,   125,   144,   140,
     157,   145,  -128,   160,   293,  -128,   134,   162,   148,   149,
    -128,  -128,   150,  -128,   125,   151,   160,   160,   400,   160,
     185,   186,   125,   125,   187,   147,   160,   -14,    20,   160,
    -128,  -128,  -128
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     7,     0,    39,     1,     8,     0,     5,
      39,     0,    39,     0,    37,     0,     0,     2,     4,     0,
       0,     0,    42,    39,    40,    65,    64,     0,     0,     0,
       0,    44,    61,    14,    14,     5,    39,     0,    36,     0,
       0,    62,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       6,    41,    39,    67,    57,     0,    69,    49,    50,    53,
      54,    55,    56,    51,    52,    45,    46,    47,    48,    38,
      16,     0,     0,    43,     0,     0,    66,     0,    15,     0,
       0,    57,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    58,    16,     0,     0,
      39,     0,     0,     0,     0,     0,     0,    10,    24,    13,
      17,    33,     0,     0,     0,    32,     0,     0,     0,     0,
       0,    24,    11,     9,    25,    18,     0,    39,     0,     0,
      28,     0,     0,     0,    23,     0,     0,    31,    39,     0,
      29,     0,     0,    14,    39,    34,     0,     0,     0,     0,
       0,     0,    35,    24,    29,    27,    24,     0,     0,     0,
      19,    30,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    24,    45,    46,    24,
      12,    21,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,  -128,   188,  -128,  -128,    -5,  -128,  -128,   -31,
     114,   -79,  -127,  -128,    60,   107,   225,    30,   -20,   152,
    -128,  -128,    22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    18,     8,    15,   133,   145,    17,    58,
      88,   134,   135,   103,   158,   104,    19,    14,    30,    85,
     168,    31,    32
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    37,     1,    59,   144,    54,    55,    10,     5,    43,
     102,   105,    54,    55,    10,    94,    95,   -59,    11,    64,
      65,    25,    26,     6,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,   170,    12,    13,   173,
      22,   108,    24,    10,    12,    10,    54,    55,    29,    41,
      42,   -60,     7,    38,    20,    39,   123,    25,    26,   191,
      40,   109,   192,     9,    91,    16,    61,    23,    33,    35,
     156,    57,   159,    12,    21,    12,   124,    34,    27,    28,
      80,   116,    81,    82,    29,    63,    79,    87,   121,   122,
      92,   126,    83,    89,   129,    10,   107,   180,   181,    90,
     184,    93,   110,   137,   138,   111,   117,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   112,
     113,   150,   161,   152,   114,    12,   154,   115,    25,    26,
      52,    53,    54,    55,   118,   119,   127,   164,    94,    95,
     125,   128,    96,    97,    98,    99,   100,   172,   101,    27,
      28,   132,   140,   141,   178,    29,   143,   146,   149,   153,
     151,   167,   187,   188,    94,    95,   163,   147,    96,    97,
      98,    99,   100,   166,   101,   165,   169,   174,   155,   175,
     190,   176,   177,   179,   162,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,   185,   186,
     189,   120,   130,    60,   171,     4,    62,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     0,
       0,     0,     0,   106,     0,     0,     0,    86,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       0,     0,     0,     0,     0,     0,     0,     0,   136,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,   148,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     0,    84,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,   157,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       0,     0,     0,    66,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     0,     0,     0,   139,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,     0,     0,   142,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     0,   131,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,   160,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    44,    45,    46,    47,
      48,    49,    50,    51,   182,   183,    54,    55,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55
};

static const yytype_int16 yycheck[] =
{
      20,    21,     5,    34,   131,    26,    27,     4,     4,    29,
      89,    90,    26,    27,     4,     4,     5,    31,    15,    39,
      40,     3,     4,     0,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,   163,    34,    35,   166,
      10,    15,    12,     4,    34,     4,    26,    27,    30,    27,
      28,    31,     4,    23,    15,    30,    15,     3,     4,   186,
      35,    35,   189,    29,    84,     7,    36,     3,    30,    29,
     149,     5,   151,    34,    35,    34,    35,    30,    24,    25,
       4,   101,    31,    31,    30,    31,    56,    34,   108,   109,
      31,   111,    62,    32,   114,     4,     4,   176,   177,    32,
     179,     5,     4,   123,   124,    30,    33,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    30,
      30,   141,   153,   143,    30,    34,   146,    30,     3,     4,
      24,    25,    26,    27,    29,    33,     6,   157,     4,     5,
     110,     6,     8,     9,    10,    11,    12,    13,    14,    24,
      25,     4,    31,    34,   174,    30,    29,    15,    32,    30,
      32,     4,   182,   183,     4,     5,    33,   137,     8,     9,
      10,    11,    12,    33,    14,    31,    31,    15,   148,    31,
     185,    32,    32,    32,   154,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    20,    21,    22,
      23,    24,    25,    26,    27,    36,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    33,    33,
      33,   107,   115,    35,   164,     0,    36,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    36,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    31,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    31,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    29,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    38,    39,    53,     4,     0,     4,    41,    29,
       4,    15,    34,    35,    54,    42,     7,    45,    40,    53,
      15,    35,    54,     3,    54,     3,     4,    24,    25,    30,
      55,    58,    59,    30,    30,    29,    55,    55,    54,    30,
      35,    59,    59,    55,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    36,     5,    46,    46,
      40,    54,    36,    31,    55,    55,    31,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    54,
       4,    31,    31,    54,    34,    56,    36,    34,    47,    32,
      32,    55,    31,     5,     4,     5,     8,     9,    10,    11,
      12,    14,    48,    50,    52,    48,    56,     4,    15,    35,
       4,    30,    30,    30,    30,    30,    55,    33,    29,    33,
      47,    55,    55,    15,    35,    54,    55,     6,     6,    55,
      52,    29,     4,    43,    48,    49,    36,    55,    55,    31,
      31,    34,    31,    29,    49,    44,    15,    54,    36,    32,
      55,    32,    55,    30,    55,    54,    48,    34,    51,    48,
      29,    46,    54,    33,    55,    31,    33,     4,    57,    31,
      49,    51,    13,    49,    15,    31,    32,    32,    55,    32,
      48,    48,    24,    25,    48,    33,    33,    55,    55,    33,
      43,    49,    49
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    41,    42,    41,
      43,    44,    43,    45,    46,    46,    47,    47,    48,    48,
      48,    48,    48,    48,    49,    49,    50,    50,    50,    51,
      51,    52,    52,    52,    52,    52,    53,    53,    53,    54,
      54,    54,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    56,    56,    57,
      57,    58,    58,    58,    59,    59,    59,    59,    59,    59
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     3,     0,     3,     0,     0,     9,
       0,     0,     9,     7,     0,     3,     0,     4,     3,     8,
       8,    12,    12,     4,     0,     1,     1,     7,     4,     0,
       3,     5,     3,     3,     6,     7,     5,     3,     6,     0,
       2,     4,     2,     5,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     0,     3,     5,
       5,     1,     2,     2,     1,     1,     4,     3,     5,     3
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
#line 88 "trad4.y"
                                                                            { printf ("%s%s%s\n", yyvsp[-2].code, yyvsp[-1].code, yyvsp[0].code) ; }
#line 1366 "trad4.tab.c"
    break;

  case 3: /* globales: %empty  */
#line 91 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1372 "trad4.tab.c"
    break;

  case 4: /* globales: declaracion_global ';' r_globales  */
#line 92 "trad4.y"
                                                                            { sprintf (temp, "%s \n%s", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1379 "trad4.tab.c"
    break;

  case 5: /* r_globales: %empty  */
#line 96 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1385 "trad4.tab.c"
    break;

  case 6: /* r_globales: declaracion_global ';' r_globales  */
#line 97 "trad4.y"
                                                                            { sprintf (temp, "%s \n%s", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1392 "trad4.tab.c"
    break;

  case 7: /* funciones: %empty  */
#line 101 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1398 "trad4.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 102 "trad4.y"
                                                                            { strcpy(funcion, yyvsp[0].code); }
#line 1404 "trad4.tab.c"
    break;

  case 9: /* funciones: IDENTIF $@1 '(' args ')' '{' body '}' r_funciones  */
#line 103 "trad4.y"
                                                                            { sprintf (temp, "(defun %s (%s) \n%s\n)\n%s", yyvsp[-8].code, yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code ) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1411 "trad4.tab.c"
    break;

  case 10: /* r_funciones: %empty  */
#line 107 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1417 "trad4.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 108 "trad4.y"
                                                                            { strcpy(funcion, yyvsp[0].code); }
#line 1423 "trad4.tab.c"
    break;

  case 12: /* r_funciones: IDENTIF $@2 '(' args ')' '{' body '}' r_funciones  */
#line 109 "trad4.y"
                                                                            { sprintf (temp, "(defun %s (%s) \n%s\n)\n%s", yyvsp[-8].code, yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code ) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1430 "trad4.tab.c"
    break;

  case 13: /* main: MAIN '(' args ')' '{' body '}'  */
#line 113 "trad4.y"
                                                                            { sprintf (temp, "(defun main (%s)\n%s) ", yyvsp[-4].code, yyvsp[-1].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1437 "trad4.tab.c"
    break;

  case 14: /* args: %empty  */
#line 117 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1443 "trad4.tab.c"
    break;

  case 15: /* args: INTEGER IDENTIF r_args  */
#line 118 "trad4.y"
                                                                            { sprintf (temp, "%s %s", yyvsp[-1].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1450 "trad4.tab.c"
    break;

  case 16: /* r_args: %empty  */
#line 122 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1456 "trad4.tab.c"
    break;

  case 17: /* r_args: ',' INTEGER IDENTIF r_args  */
#line 123 "trad4.y"
                                                                            { sprintf (temp, ", %s %s", yyvsp[-1].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1463 "trad4.tab.c"
    break;

  case 18: /* body: sentencia ';' r_body  */
#line 127 "trad4.y"
                                                                            { sprintf (temp, "\t%s \n%s", yyvsp[-2].code, yyvsp[0].code) ;
                                                                               yyval.code = gen_code (temp) ; }
#line 1470 "trad4.tab.c"
    break;

  case 19: /* body: WHILE '(' expresion ')' '{' body '}' r_body  */
#line 129 "trad4.y"
                                                                            { sprintf (temp, "\t(loop while %s do \n%s\t) \n%s", yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1477 "trad4.tab.c"
    break;

  case 20: /* body: IF '(' expresion ')' '{' body '}' r_body  */
#line 131 "trad4.y"
                                                                            { sprintf (temp, "\t(if %s \n%s\t) \n%s", yyvsp[-5].code, yyvsp[-2].code, yyvsp[0].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1484 "trad4.tab.c"
    break;

  case 21: /* body: IF '(' expresion ')' '{' body '}' ELSE '{' body '}' r_body  */
#line 133 "trad4.y"
                                                                            { sprintf (temp, "\t(if %s \n%s%s\t) \n%s", yyvsp[-9].code, yyvsp[-6].code, yyvsp[-2].code, yyvsp[0].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1491 "trad4.tab.c"
    break;

  case 22: /* body: FOR '(' declaracion ';' expresion ';' incremento ')' '{' body '}' r_body  */
#line 137 "trad4.y"
                                                                            { sprintf (temp, "\t%s\n\t(loop while %s do \n%s\t%s)\n%s", yyvsp[-9].code, yyvsp[-7].code, yyvsp[-2].code, yyvsp[-5].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1498 "trad4.tab.c"
    break;

  case 23: /* body: RETURN expresion ';' r_body  */
#line 139 "trad4.y"
                                                                            { sprintf (temp, "\t(return-from %s %s)\n%s",funcion, yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1505 "trad4.tab.c"
    break;

  case 24: /* r_body: %empty  */
#line 144 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1511 "trad4.tab.c"
    break;

  case 25: /* r_body: body  */
#line 145 "trad4.y"
                                                                            { yyval = yyvsp[0] ; }
#line 1517 "trad4.tab.c"
    break;

  case 26: /* sentencia: declaracion  */
#line 148 "trad4.y"
                                                                            { yyval = yyvsp[0] ; }
#line 1523 "trad4.tab.c"
    break;

  case 27: /* sentencia: PRINTF '(' STRING ',' expresion r_sentencia ')'  */
#line 149 "trad4.y"
                                                                            { sprintf (temp, "(print %s) %s", yyvsp[-2].code, yyvsp[-1].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1530 "trad4.tab.c"
    break;

  case 28: /* sentencia: PUTS '(' STRING ')'  */
#line 151 "trad4.y"
                                                                            { sprintf (temp, "(print \"%s\")", yyvsp[-1].code) ;  
                                                                                yyval.code = gen_code (temp) ; }
#line 1537 "trad4.tab.c"
    break;

  case 29: /* r_sentencia: %empty  */
#line 156 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1543 "trad4.tab.c"
    break;

  case 30: /* r_sentencia: ',' expresion r_sentencia  */
#line 157 "trad4.y"
                                                                            { sprintf (temp, "(print %s) %s", yyvsp[-1].code, yyvsp[0].code) ;  
                                                                                yyval.code = gen_code (temp) ;}
#line 1550 "trad4.tab.c"
    break;

  case 31: /* declaracion: INTEGER IDENTIF '=' expresion r_declaracion  */
#line 161 "trad4.y"
                                                                            { sprintf (temp, "(setq %s %d) %s", yyvsp[-3].code, yyvsp[-1].value, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1557 "trad4.tab.c"
    break;

  case 32: /* declaracion: INTEGER IDENTIF r_declaracion  */
#line 163 "trad4.y"
                                                                            { sprintf (temp, "(setq %s 0) %s", yyvsp[-1].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1564 "trad4.tab.c"
    break;

  case 33: /* declaracion: IDENTIF '=' expresion  */
#line 165 "trad4.y"
                                                                            { sprintf (temp, "(setq %s %d)", yyvsp[-2].code, yyvsp[0].value) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1571 "trad4.tab.c"
    break;

  case 34: /* declaracion: INTEGER IDENTIF '[' expresion ']' r_declaracion  */
#line 167 "trad4.y"
                                                                            { sprintf (temp, "(setq %s (make-array %s)) %s", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1578 "trad4.tab.c"
    break;

  case 35: /* declaracion: IDENTIF '[' expresion ']' '=' expresion r_declaracion  */
#line 169 "trad4.y"
                                                                            { sprintf (temp, "(setf (aref %s %s) %s) %s", yyvsp[-6].code, yyvsp[-4].code, yyvsp[-1].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1585 "trad4.tab.c"
    break;

  case 36: /* declaracion_global: INTEGER IDENTIF '=' NUMBER r_declaracion  */
#line 173 "trad4.y"
                                                                            { sprintf (temp, "(setq %s %d) %s", yyvsp[-3].code, yyvsp[-1].value, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1592 "trad4.tab.c"
    break;

  case 37: /* declaracion_global: INTEGER IDENTIF r_declaracion  */
#line 175 "trad4.y"
                                                                            { sprintf (temp, "(setq %s 0) %s", yyvsp[-1].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1599 "trad4.tab.c"
    break;

  case 38: /* declaracion_global: INTEGER IDENTIF '[' expresion ']' r_declaracion  */
#line 177 "trad4.y"
                                                                            { sprintf (temp, "(setq %s (make-array %s)) %s", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1606 "trad4.tab.c"
    break;

  case 39: /* r_declaracion: %empty  */
#line 181 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1612 "trad4.tab.c"
    break;

  case 40: /* r_declaracion: ',' r_declaracion  */
#line 182 "trad4.y"
                                                                            { sprintf (temp, " %s", yyvsp[0].code) ;  
                                                                                yyval.code = gen_code (temp) ;}
#line 1619 "trad4.tab.c"
    break;

  case 41: /* r_declaracion: IDENTIF '=' expresion r_declaracion  */
#line 184 "trad4.y"
                                                                            { sprintf (temp, "(setq %s %d) %s", yyvsp[-3].code, yyvsp[-1].value, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1626 "trad4.tab.c"
    break;

  case 42: /* r_declaracion: IDENTIF r_declaracion  */
#line 186 "trad4.y"
                                                                            { sprintf (temp, "(setq %s 0) %s", yyvsp[-1].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1633 "trad4.tab.c"
    break;

  case 43: /* r_declaracion: IDENTIF '[' expresion ']' r_declaracion  */
#line 188 "trad4.y"
                                                                            { sprintf (temp, "(setq %s (make-array %s)) %s", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ; 
                                                                                yyval.code = gen_code (temp) ; }
#line 1640 "trad4.tab.c"
    break;

  case 44: /* expresion: termino  */
#line 192 "trad4.y"
                                                                            { yyval = yyvsp[0] ; }
#line 1646 "trad4.tab.c"
    break;

  case 45: /* expresion: expresion '+' expresion  */
#line 193 "trad4.y"
                                                                            { sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1653 "trad4.tab.c"
    break;

  case 46: /* expresion: expresion '-' expresion  */
#line 195 "trad4.y"
                                                                            { sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1660 "trad4.tab.c"
    break;

  case 47: /* expresion: expresion '*' expresion  */
#line 197 "trad4.y"
                                                                            { sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1667 "trad4.tab.c"
    break;

  case 48: /* expresion: expresion '/' expresion  */
#line 199 "trad4.y"
                                                                            { sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1674 "trad4.tab.c"
    break;

  case 49: /* expresion: expresion OR expresion  */
#line 201 "trad4.y"
                                                                            { sprintf (temp, "(or %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1681 "trad4.tab.c"
    break;

  case 50: /* expresion: expresion AND expresion  */
#line 203 "trad4.y"
                                                                            { sprintf (temp, "(And %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1688 "trad4.tab.c"
    break;

  case 51: /* expresion: expresion GREATER_EQUAL expresion  */
#line 205 "trad4.y"
                                                                            { sprintf (temp, "(>= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1695 "trad4.tab.c"
    break;

  case 52: /* expresion: expresion LESS_EQUAL expresion  */
#line 207 "trad4.y"
                                                                            { sprintf (temp, "(<= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1702 "trad4.tab.c"
    break;

  case 53: /* expresion: expresion EQUAL expresion  */
#line 209 "trad4.y"
                                                                            { sprintf (temp, "(= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1709 "trad4.tab.c"
    break;

  case 54: /* expresion: expresion NOT_EQUAL expresion  */
#line 211 "trad4.y"
                                                                            { sprintf (temp, "(/= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1716 "trad4.tab.c"
    break;

  case 55: /* expresion: expresion '<' expresion  */
#line 213 "trad4.y"
                                                                            { sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1723 "trad4.tab.c"
    break;

  case 56: /* expresion: expresion '>' expresion  */
#line 215 "trad4.y"
                                                                            { sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1730 "trad4.tab.c"
    break;

  case 57: /* r_expresion: %empty  */
#line 219 "trad4.y"
                                                                            { yyval.code = ""; }
#line 1736 "trad4.tab.c"
    break;

  case 58: /* r_expresion: ',' expresion r_expresion  */
#line 220 "trad4.y"
                                                                            { sprintf (temp, ", %s %s", yyvsp[-1].code, yyvsp[0].code) ;  
                                                                                yyval.code = gen_code (temp) ;}
#line 1743 "trad4.tab.c"
    break;

  case 59: /* incremento: IDENTIF '=' expresion '+' expresion  */
#line 224 "trad4.y"
                                                                            { sprintf (temp, "(setq %s (+ %s %s))", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1750 "trad4.tab.c"
    break;

  case 60: /* incremento: IDENTIF '=' expresion '-' expresion  */
#line 226 "trad4.y"
                                                                            { sprintf (temp, "(setq %s (- %s %s))", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1757 "trad4.tab.c"
    break;

  case 61: /* termino: operando  */
#line 230 "trad4.y"
                                                                            { yyval = yyvsp[0] ; }
#line 1763 "trad4.tab.c"
    break;

  case 62: /* termino: '+' operando  */
#line 231 "trad4.y"
                                                                            { sprintf (temp, "(+ %s)", yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1770 "trad4.tab.c"
    break;

  case 63: /* termino: '-' operando  */
#line 233 "trad4.y"
                                                                            { sprintf (temp, "(- %s)", yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1777 "trad4.tab.c"
    break;

  case 64: /* operando: IDENTIF  */
#line 237 "trad4.y"
                                                                            { sprintf (temp, "%s", yyvsp[0].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1784 "trad4.tab.c"
    break;

  case 65: /* operando: NUMBER  */
#line 239 "trad4.y"
                                                                            { sprintf (temp, "%d", yyvsp[0].value) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1791 "trad4.tab.c"
    break;

  case 66: /* operando: IDENTIF '[' expresion ']'  */
#line 241 "trad4.y"
                                                                            { sprintf (temp, "(aref %s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1798 "trad4.tab.c"
    break;

  case 67: /* operando: IDENTIF '(' ')'  */
#line 243 "trad4.y"
                                                                            { sprintf (temp, "(%s)", yyvsp[-2].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1805 "trad4.tab.c"
    break;

  case 68: /* operando: IDENTIF '(' expresion r_expresion ')'  */
#line 245 "trad4.y"
                                                                            { sprintf (temp, "(%s %s %s)", yyvsp[-4].code, yyvsp[-2].code, yyvsp[-1].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1812 "trad4.tab.c"
    break;

  case 69: /* operando: '(' expresion ')'  */
#line 247 "trad4.y"
                                                                            { yyval = yyvsp[-1] ; }
#line 1818 "trad4.tab.c"
    break;


#line 1822 "trad4.tab.c"

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

#line 251 "trad4.y"
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
