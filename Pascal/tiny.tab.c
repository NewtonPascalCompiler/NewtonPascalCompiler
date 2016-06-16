/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN_PROGRAM = 258,
     TOKEN_FUNCTION = 259,
     TOKEN_PROCEDURE = 260,
     TOKEN_CONST = 261,
     TOKEN_TYPE = 262,
     TOKEN_VAR = 263,
     TOKEN_IF = 264,
     TOKEN_THEN = 265,
     TOKEN_ELSE = 266,
     TOKEN_REPEAT = 267,
     TOKEN_UNTIL = 268,
     TOKEN_WHILE = 269,
     TOKEN_DO = 270,
     TOKEN_CASE = 271,
     TOKEN_TO = 272,
     TOKEN_DOWNTO = 273,
     TOKEN_FOR = 274,
     TOKEN_EQUAL = 275,
     TOKEN_UNEQUAL = 276,
     TOKEN_GE = 277,
     TOKEN_GT = 278,
     TOKEN_LE = 279,
     TOKEN_LT = 280,
     TOKEN_ASSIGN = 281,
     TOKEN_PLUS = 282,
     TOKEN_MINUS = 283,
     TOKEN_MUL = 284,
     TOKEN_DIV = 285,
     TOKEN_OR = 286,
     TOKEN_AND = 287,
     TOKEN_NOT = 288,
     TOKEN_MOD = 289,
     TOKEN_READ = 290,
     TOKEN_WRITE = 291,
     TOKEN_WRITELN = 292,
     TOKEN_LB = 293,
     TOKEN_RB = 294,
     TOKEN_SEMI = 295,
     TOKEN_DOT = 296,
     TOKEN_DOTDOT = 297,
     TOKEN_LP = 298,
     TOKEN_RP = 299,
     TOKEN_COMMA = 300,
     TOKEN_COLON = 301,
     TOKEN_INTEGER_TYPE = 302,
     TOKEN_BOOLEAN_TYPE = 303,
     TOKEN_CHAR_TYPE = 304,
     TOKEN_REAL_TYPE = 305,
     TOKEN_TRUE = 306,
     TOKEN_FALSE = 307,
     TOKEN_MAXINT = 308,
     TOKEN_ARRAY = 309,
     TOKEN_OF = 310,
     TOKEN_RECORD = 311,
     TOKEN_BEGIN = 312,
     TOKEN_END = 313,
     TOKEN_GOTO = 314,
     TOKEN_ID = 315,
     TOKEN_INT = 316,
     TOKEN_REAL = 317,
     TOKEN_CHAR = 318,
     TOKEN_STRING = 319,
     ERROR = 320
   };
#endif
/* Tokens.  */
#define TOKEN_PROGRAM 258
#define TOKEN_FUNCTION 259
#define TOKEN_PROCEDURE 260
#define TOKEN_CONST 261
#define TOKEN_TYPE 262
#define TOKEN_VAR 263
#define TOKEN_IF 264
#define TOKEN_THEN 265
#define TOKEN_ELSE 266
#define TOKEN_REPEAT 267
#define TOKEN_UNTIL 268
#define TOKEN_WHILE 269
#define TOKEN_DO 270
#define TOKEN_CASE 271
#define TOKEN_TO 272
#define TOKEN_DOWNTO 273
#define TOKEN_FOR 274
#define TOKEN_EQUAL 275
#define TOKEN_UNEQUAL 276
#define TOKEN_GE 277
#define TOKEN_GT 278
#define TOKEN_LE 279
#define TOKEN_LT 280
#define TOKEN_ASSIGN 281
#define TOKEN_PLUS 282
#define TOKEN_MINUS 283
#define TOKEN_MUL 284
#define TOKEN_DIV 285
#define TOKEN_OR 286
#define TOKEN_AND 287
#define TOKEN_NOT 288
#define TOKEN_MOD 289
#define TOKEN_READ 290
#define TOKEN_WRITE 291
#define TOKEN_WRITELN 292
#define TOKEN_LB 293
#define TOKEN_RB 294
#define TOKEN_SEMI 295
#define TOKEN_DOT 296
#define TOKEN_DOTDOT 297
#define TOKEN_LP 298
#define TOKEN_RP 299
#define TOKEN_COMMA 300
#define TOKEN_COLON 301
#define TOKEN_INTEGER_TYPE 302
#define TOKEN_BOOLEAN_TYPE 303
#define TOKEN_CHAR_TYPE 304
#define TOKEN_REAL_TYPE 305
#define TOKEN_TRUE 306
#define TOKEN_FALSE 307
#define TOKEN_MAXINT 308
#define TOKEN_ARRAY 309
#define TOKEN_OF 310
#define TOKEN_RECORD 311
#define TOKEN_BEGIN 312
#define TOKEN_END 313
#define TOKEN_GOTO 314
#define TOKEN_ID 315
#define TOKEN_INT 316
#define TOKEN_REAL 317
#define TOKEN_CHAR 318
#define TOKEN_STRING 319
#define ERROR 320




/* Copy the first part of user declarations.  */
#line 1 "tiny.y"

#define YYPARSER
#include "global.h"
#include "util.h"
#include "scan.h"
#include "parse.h"
#include <stdarg.h>

#define YYSTYPE TreeNode *
static char * savedName;
static char * savedName1;
static int savedLineNo;
static TreeNode* savedTree;
static int savedNum;
static int level=0;
extern int yylineno;
//extern int yylex();
extern char * yytext;
static int yylex(){
    return getToken();
}

void yyerror(const char* s, ...);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 261 "tiny.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   478

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNRULES -- Number of states.  */
#define YYNSTATES  266

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    11,    18,    21,    26,    27,
      30,    33,    35,    37,    42,    43,    50,    51,    55,    59,
      61,    66,    70,    75,    76,    81,    82,    85,    88,    90,
      95,    96,    99,   102,   104,   109,   111,   113,   115,   117,
     119,   121,   123,   124,   127,   130,   132,   137,   139,   141,
     143,   147,   150,   152,   157,   164,   166,   170,   174,   179,
     185,   189,   191,   193,   195,   197,   201,   203,   205,   207,
     211,   214,   218,   219,   223,   224,   229,   231,   233,   235,
     237,   239,   241,   243,   245,   247,   249,   253,   260,   263,
     269,   270,   273,   278,   279,   284,   290,   293,   295,   300,
     305,   314,   323,   325,   330,   335,   340,   342,   347,   351,
     353,   357,   361,   365,   369,   373,   377,   379,   383,   387,
     391,   393,   397,   401,   405,   409,   411,   413,   418,   420,
     424,   427,   430,   435
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,     1,    41,    -1,    67,     1,    41,    -1,
      -1,     3,    60,    68,    40,    69,    41,    -1,    70,    99,
      -1,    84,    88,    81,    71,    -1,    -1,    71,    72,    -1,
      71,    78,    -1,    72,    -1,    78,    -1,    73,    40,    69,
      40,    -1,    -1,     4,    60,    74,    75,    46,    96,    -1,
      -1,    43,    76,    44,    -1,    76,    40,    77,    -1,    77,
      -1,     8,    97,    46,    96,    -1,    97,    46,    96,    -1,
      79,    40,    69,    40,    -1,    -1,     5,    60,    80,    75,
      -1,    -1,     8,    82,    -1,    82,    83,    -1,    83,    -1,
      97,    46,    91,    40,    -1,    -1,     6,    85,    -1,    85,
      86,    -1,    86,    -1,    98,    20,    87,    40,    -1,    61,
      -1,    62,    -1,    63,    -1,    64,    -1,    51,    -1,    52,
      -1,    53,    -1,    -1,     7,    89,    -1,    89,    90,    -1,
      90,    -1,    98,    20,    91,    40,    -1,    96,    -1,    95,
      -1,    92,    -1,    56,    93,    58,    -1,    93,    94,    -1,
      94,    -1,    97,    46,    91,    40,    -1,    54,    38,    96,
      39,    55,    91,    -1,    98,    -1,    43,    97,    44,    -1,
      87,    42,    87,    -1,    28,    87,    42,    87,    -1,    28,
      87,    42,    28,    87,    -1,    98,    42,    98,    -1,    47,
      -1,    48,    -1,    50,    -1,    49,    -1,    97,    45,    98,
      -1,    98,    -1,    60,    -1,   100,    -1,    57,   101,    58,
      -1,     1,    40,    -1,   101,     1,    40,    -1,    -1,   101,
     102,    40,    -1,    -1,    61,   103,    46,   104,    -1,   104,
      -1,   105,    -1,   100,    -1,   106,    -1,   107,    -1,   109,
      -1,   110,    -1,   111,    -1,   114,    -1,   115,    -1,    98,
      26,   117,    -1,    98,    38,   117,    39,    26,   117,    -1,
      59,    61,    -1,     9,   117,    10,   102,   108,    -1,    -1,
      11,   102,    -1,    12,   101,    13,   117,    -1,    -1,    14,
     117,    15,   102,    -1,    16,   117,    55,   112,    58,    -1,
     112,   113,    -1,   113,    -1,    87,    46,   102,    40,    -1,
      98,    46,   102,    40,    -1,    19,    98,    26,   117,    17,
     117,    15,   102,    -1,    19,    98,    26,   117,    18,   117,
      15,   102,    -1,    98,    -1,    98,    43,   116,    44,    -1,
      35,    43,   120,    44,    -1,    36,    43,   116,    44,    -1,
      37,    -1,    37,    43,   116,    44,    -1,   116,    45,   117,
      -1,   117,    -1,   117,    22,   118,    -1,   117,    23,   118,
      -1,   117,    24,   118,    -1,   117,    25,   118,    -1,   117,
      20,   118,    -1,   117,    21,   118,    -1,   118,    -1,   118,
      27,   119,    -1,   118,    28,   119,    -1,   118,    31,   119,
      -1,   119,    -1,   119,    29,   120,    -1,   119,    30,   120,
      -1,   119,    34,   120,    -1,   119,    32,   120,    -1,   120,
      -1,    98,    -1,    98,    43,   116,    44,    -1,    87,    -1,
      43,   117,    44,    -1,    33,   120,    -1,    28,   120,    -1,
      98,    38,   117,    39,    -1,    98,    41,    98,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    38,    38,    39,    42,    41,    48,    53,    62,    63,
      74,    85,    86,    88,   100,    99,   110,   111,   114,   125,
     128,   134,   141,   152,   151,   160,   161,   164,   175,   177,
     186,   187,   190,   203,   206,   215,   221,   227,   233,   241,
     247,   253,   261,   262,   265,   277,   280,   286,   287,   288,
     290,   293,   305,   307,   314,   323,   329,   334,   340,   348,
     356,   363,   367,   371,   375,   380,   392,   394,   398,   399,
     401,   402,   405,   406,   420,   419,   427,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   445,   455,   460,
     467,   468,   470,   476,   477,   482,   487,   498,   499,   505,
     511,   520,   529,   536,   543,   549,   554,   558,   563,   574,
     576,   577,   578,   579,   580,   581,   582,   584,   585,   586,
     587,   589,   590,   591,   592,   593,   595,   597,   602,   603,
     604,   607,   610,   615
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_PROGRAM", "TOKEN_FUNCTION",
  "TOKEN_PROCEDURE", "TOKEN_CONST", "TOKEN_TYPE", "TOKEN_VAR", "TOKEN_IF",
  "TOKEN_THEN", "TOKEN_ELSE", "TOKEN_REPEAT", "TOKEN_UNTIL", "TOKEN_WHILE",
  "TOKEN_DO", "TOKEN_CASE", "TOKEN_TO", "TOKEN_DOWNTO", "TOKEN_FOR",
  "TOKEN_EQUAL", "TOKEN_UNEQUAL", "TOKEN_GE", "TOKEN_GT", "TOKEN_LE",
  "TOKEN_LT", "TOKEN_ASSIGN", "TOKEN_PLUS", "TOKEN_MINUS", "TOKEN_MUL",
  "TOKEN_DIV", "TOKEN_OR", "TOKEN_AND", "TOKEN_NOT", "TOKEN_MOD",
  "TOKEN_READ", "TOKEN_WRITE", "TOKEN_WRITELN", "TOKEN_LB", "TOKEN_RB",
  "TOKEN_SEMI", "TOKEN_DOT", "TOKEN_DOTDOT", "TOKEN_LP", "TOKEN_RP",
  "TOKEN_COMMA", "TOKEN_COLON", "TOKEN_INTEGER_TYPE", "TOKEN_BOOLEAN_TYPE",
  "TOKEN_CHAR_TYPE", "TOKEN_REAL_TYPE", "TOKEN_TRUE", "TOKEN_FALSE",
  "TOKEN_MAXINT", "TOKEN_ARRAY", "TOKEN_OF", "TOKEN_RECORD", "TOKEN_BEGIN",
  "TOKEN_END", "TOKEN_GOTO", "TOKEN_ID", "TOKEN_INT", "TOKEN_REAL",
  "TOKEN_CHAR", "TOKEN_STRING", "ERROR", "$accept", "program", "@1",
  "routine", "routine_head", "routine_part", "function_decl",
  "function_head", "@2", "parameters", "para_decl_list", "para_type_list",
  "procedure_decl", "procedure_head", "@3", "var_part", "var_decl_list",
  "var_decl", "const_part", "const_expr_list", "const_expr", "const_value",
  "type_part", "type_decl_list", "type_definition", "type_decl",
  "record_type_decl", "field_decl_list", "field_decl", "array_type_decl",
  "simple_type_decl", "name_list", "ID", "routine_body", "compound_stmt",
  "stmt_list", "stmt", "@4", "no_label_stmt", "assign_stmt", "goto_stmt",
  "if_stmt", "else_clause", "repeat_stmt", "while_stmt", "case_stmt",
  "case_expr_list", "case_expr", "for_stmt", "proc_stmt", "args_list",
  "expression", "expr", "term", "factor", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    68,    67,    69,    70,    71,    71,
      71,    71,    71,    72,    74,    73,    75,    75,    76,    76,
      77,    77,    78,    80,    79,    81,    81,    82,    82,    83,
      84,    84,    85,    85,    86,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    89,    89,    90,    91,    91,    91,
      92,    93,    93,    94,    95,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    97,    97,    98,    99,   100,
     101,   101,   101,   101,   103,   102,   102,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   105,   105,   106,   107,
     108,   108,   109,   109,   110,   111,   112,   112,   113,   113,
     114,   114,   115,   115,   115,   115,   115,   115,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   118,   118,   118,
     118,   119,   119,   119,   119,   119,   120,   120,   120,   120,
     120,   120,   120,   120
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     0,     6,     2,     4,     0,     2,
       2,     1,     1,     4,     0,     6,     0,     3,     3,     1,
       4,     3,     4,     0,     4,     0,     2,     2,     1,     4,
       0,     2,     2,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     2,     1,     4,     1,     1,     1,
       3,     2,     1,     4,     6,     1,     3,     3,     4,     5,
       3,     1,     1,     1,     1,     3,     1,     1,     1,     3,
       2,     3,     0,     3,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     6,     2,     5,
       0,     2,     4,     0,     4,     5,     2,     1,     4,     4,
       8,     8,     1,     4,     4,     4,     1,     4,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     3,     3,     3,     3,     1,     1,     4,     1,     3,
       2,     2,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     4,     1,     0,     0,     3,
      30,     0,     0,     0,    42,    67,    31,    33,     0,     5,
       0,     6,    68,     0,    25,    32,     0,     0,     0,    43,
      45,     0,     0,     8,    39,    40,    41,    35,    36,    37,
      38,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,   106,    69,     0,    74,   102,    78,     0,    76,    77,
      79,    80,    81,    82,    83,    84,    85,    44,     0,    26,
      28,     0,    66,     0,     0,     7,    11,     0,    12,     0,
      34,    71,     0,     0,     0,   128,   126,     0,   116,   120,
     125,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,    73,     0,     0,    61,    62,    64,    63,
       0,     0,     0,     0,    49,    48,    47,    55,    27,     0,
       0,    14,    23,     9,    10,    30,    30,   131,   130,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,   109,     0,    93,    86,     0,     0,     0,
       0,     0,     0,    52,     0,     0,    46,     0,    65,     0,
      16,    16,     0,     0,   129,     0,   133,     0,    90,   114,
     115,   110,   111,   112,   113,   117,   118,   119,   121,   122,
     124,   123,    92,    94,     0,     0,     0,    97,     0,   104,
     105,     0,   107,    75,     0,   103,     0,    56,     0,    50,
      51,     0,    57,    60,    29,     0,     0,    24,    13,    22,
     132,   127,    93,    89,    93,    93,    95,    96,     0,     0,
     108,     0,     0,    58,     0,     0,     0,     0,    19,     0,
       0,    91,     0,     0,     0,     0,    87,    59,     0,    53,
       0,     0,    17,     0,    15,    98,    99,    93,    93,    54,
       0,    18,    21,   100,   101,    20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     8,    12,    13,    75,    76,    77,   170,   216,
     237,   238,    78,    79,   171,    33,    69,    70,    14,    16,
      17,    85,    24,    29,    30,   113,   114,   162,   163,   115,
     116,    71,    86,    21,    56,    28,    57,    99,    58,    59,
      60,    61,   223,    62,    63,    64,   196,   197,    65,    66,
     152,   153,    88,    89,    90
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -148
static const yytype_int16 yypact[] =
{
      38,   -22,   -44,    91,  -148,  -148,  -148,     1,     8,  -148,
      45,     2,    15,    18,    74,  -148,     2,  -148,    65,  -148,
     161,  -148,  -148,     2,    81,  -148,   131,    61,   229,     2,
    -148,    85,     2,    99,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,    71,  -148,   101,   368,   243,   368,   368,     2,    78,
     114,   117,  -148,   111,  -148,   -13,  -148,   129,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,   315,     2,
    -148,    89,  -148,   116,   130,    99,  -148,   159,  -148,   170,
    -148,  -148,   368,   368,   368,  -148,    -3,   250,    -4,   113,
    -148,   296,   301,    94,   148,   368,   368,   368,  -148,   166,
     368,   368,   368,  -148,   131,     2,  -148,  -148,  -148,  -148,
     186,     2,   191,   194,  -148,  -148,  -148,   197,  -148,     2,
     315,  -148,  -148,  -148,  -148,    45,    45,  -148,  -148,   143,
     368,     2,   368,    17,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,    17,   362,
     368,   192,   108,   447,   110,   282,   447,    44,   134,   208,
     158,   342,    24,  -148,   160,   131,  -148,     2,  -148,   211,
     210,   210,   214,   218,  -148,   107,  -148,   164,   252,    -4,
      -4,    -4,    -4,    -4,    -4,   113,   113,   113,  -148,  -148,
    -148,  -148,   447,  -148,   215,   221,   382,  -148,   441,  -148,
    -148,   368,  -148,  -148,   242,  -148,    35,  -148,   237,  -148,
    -148,   315,  -148,  -148,  -148,    -5,   231,  -148,  -148,  -148,
    -148,  -148,    17,  -148,    17,    17,  -148,  -148,   368,   368,
     447,   368,   131,  -148,   226,   244,     2,   -12,  -148,   171,
     342,  -148,   245,   253,   325,   432,   447,  -148,   315,  -148,
     181,    -5,  -148,   342,  -148,  -148,  -148,    17,    17,  -148,
     342,  -148,  -148,  -148,  -148,  -148
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,  -148,   106,  -148,  -148,   207,  -148,  -148,   121,
    -148,    48,   220,  -148,  -148,  -148,  -148,   238,  -148,  -148,
     290,   -25,  -148,  -148,   284,  -109,  -148,  -148,   149,  -148,
    -147,  -103,   -11,  -148,   307,   269,   -99,  -148,   172,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,   132,  -148,  -148,
     -82,   -40,   339,   -95,   -73
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -94
static const yytype_int16 yytable[] =
{
      18,    41,   160,   236,    87,    18,    92,    93,   164,   127,
     128,   169,    31,   100,   208,   154,     5,    55,    31,     4,
     158,    72,   151,   140,   141,   101,    44,   142,   251,    45,
     102,    46,   252,    47,   178,   130,    48,    94,   131,     1,
     132,     2,     9,   112,   129,   185,   186,   187,    10,   193,
     177,    11,    49,    50,    51,    15,    19,   117,    72,   164,
     156,   157,    15,   232,   134,   135,   136,   137,   138,   139,
     188,   189,   190,   191,    20,    20,    53,    15,    54,   159,
      55,    23,   209,   204,    15,    26,    34,    35,    36,    32,
     175,     6,     7,   254,    72,   112,    37,    38,    39,    40,
      72,    42,   235,    73,    74,    68,   262,   192,   168,   117,
     198,    80,   239,   265,   134,   135,   136,   137,   138,   139,
     176,    95,    55,   241,   194,   242,   243,   134,   135,   136,
     137,   138,   139,   250,   119,   120,   112,    55,   195,   259,
     212,    81,   143,   144,    55,   145,   220,   146,   239,   149,
     117,    72,   200,   201,   202,   201,   213,    96,   263,   264,
      97,   230,    27,   134,   135,   136,   137,   138,   139,   103,
     -72,   194,    98,   -72,   150,   -72,   121,   -72,   205,   201,
     -72,   233,    34,    35,    36,   195,   112,   174,   244,   245,
     122,   246,    37,    38,    39,    40,   -72,   -72,   -72,   125,
     117,   -72,   207,   119,    72,   119,   211,   247,   221,   201,
     126,    55,   155,    55,    55,   112,   119,   253,   -72,   -72,
     -72,   -72,   -72,   112,   161,    72,   119,   260,   112,   117,
      43,   172,   173,   165,   166,   112,   199,   117,    44,   167,
      72,    45,   117,    46,    27,    47,    55,    55,    48,   117,
     206,   214,   -72,   215,   218,   -72,   -72,   -72,   219,   -72,
     133,   224,   -72,   222,    49,    50,    51,   225,   231,   -93,
     134,   135,   136,   137,   138,   139,   234,   240,   -72,   -72,
     -72,   248,   123,   -72,   249,   255,    20,    52,    53,    15,
      54,    44,   217,   256,    45,   124,    46,    43,    47,   261,
     -72,    48,   -72,   -72,   -72,    44,    25,   118,    45,   147,
      46,   210,    47,    67,    91,    48,   148,    49,    50,    51,
      22,   134,   135,   136,   137,   138,   139,   203,   227,     0,
       0,    49,    50,    51,     0,     0,   -93,     0,     0,    20,
     257,    53,    15,   104,     0,   134,   135,   136,   137,   138,
     139,     0,     0,    20,     0,    53,    15,    54,   105,     0,
       0,     0,   106,   107,   108,   109,    34,    35,    36,   110,
     104,   111,     0,     0,     0,    15,    37,    38,    39,    40,
       0,     0,     0,     0,     0,   105,     0,     0,     0,   106,
     107,   108,   109,    34,    35,    36,    82,     0,     0,     0,
       0,    83,    15,    37,    38,    39,    40,     0,     0,     0,
       0,    84,     0,    34,    35,    36,     0,     0,     0,    34,
      35,    36,    15,    37,    38,    39,    40,     0,    15,    37,
      38,    39,    40,    34,    35,    36,     0,     0,     0,     0,
     226,     0,    15,    37,    38,    39,    40,   258,     0,     0,
       0,     0,   134,   135,   136,   137,   138,   139,   228,   229,
       0,   134,   135,   136,   137,   138,   139,   134,   135,   136,
     137,   138,   139,   179,   180,   181,   182,   183,   184
};

static const yytype_int16 yycheck[] =
{
      11,    26,   105,     8,    44,    16,    46,    47,   111,    82,
      83,   120,    23,    26,   161,    97,    60,    28,    29,    41,
     102,    32,    95,    27,    28,    38,     9,    31,    40,    12,
      43,    14,    44,    16,   133,    38,    19,    48,    41,     1,
      43,     3,    41,    68,    84,   140,   141,   142,    40,   148,
     132,     6,    35,    36,    37,    60,    41,    68,    69,   162,
     100,   101,    60,    28,    20,    21,    22,    23,    24,    25,
     143,   144,   145,   146,    57,    57,    59,    60,    61,   104,
      91,     7,    58,    39,    60,    20,    51,    52,    53,     8,
     130,     0,     1,   240,   105,   120,    61,    62,    63,    64,
     111,    40,   211,     4,     5,    20,   253,   147,   119,   120,
     150,    40,   215,   260,    20,    21,    22,    23,    24,    25,
     131,    43,   133,   222,   149,   224,   225,    20,    21,    22,
      23,    24,    25,   236,    45,    46,   161,   148,   149,   248,
     165,    40,    29,    30,   155,    32,    39,    34,   251,    55,
     161,   162,    44,    45,    44,    45,   167,    43,   257,   258,
      43,   201,     1,    20,    21,    22,    23,    24,    25,    40,
       9,   196,    61,    12,    26,    14,    60,    16,    44,    45,
      19,   206,    51,    52,    53,   196,   211,    44,   228,   229,
      60,   231,    61,    62,    63,    64,    35,    36,    37,    40,
     211,    40,    44,    45,   215,    45,    46,   232,    44,    45,
      40,   222,    46,   224,   225,   240,    45,    46,    57,    58,
      59,    60,    61,   248,    38,   236,    45,    46,   253,   240,
       1,   125,   126,    42,    40,   260,    44,   248,     9,    42,
     251,    12,   253,    14,     1,    16,   257,   258,    19,   260,
      42,    40,     9,    43,    40,    12,    13,    14,    40,    16,
      10,    46,    19,    11,    35,    36,    37,    46,    26,    40,
      20,    21,    22,    23,    24,    25,    39,    46,    35,    36,
      37,    55,    75,    40,    40,    40,    57,    58,    59,    60,
      61,     9,   171,    40,    12,    75,    14,     1,    16,   251,
      57,    19,    59,    60,    61,     9,    16,    69,    12,    13,
      14,   162,    16,    29,    45,    19,    15,    35,    36,    37,
      13,    20,    21,    22,    23,    24,    25,   155,   196,    -1,
      -1,    35,    36,    37,    -1,    -1,    40,    -1,    -1,    57,
      15,    59,    60,    28,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    57,    -1,    59,    60,    61,    43,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      28,    56,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    28,    -1,    -1,    -1,
      -1,    33,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    43,    -1,    51,    52,    53,    -1,    -1,    -1,    51,
      52,    53,    60,    61,    62,    63,    64,    -1,    60,    61,
      62,    63,    64,    51,    52,    53,    -1,    -1,    -1,    -1,
      58,    -1,    60,    61,    62,    63,    64,    15,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    17,    18,
      -1,    20,    21,    22,    23,    24,    25,    20,    21,    22,
      23,    24,    25,   134,   135,   136,   137,   138,   139
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    67,    41,    60,     0,     1,    68,    41,
      40,     6,    69,    70,    84,    60,    85,    86,    98,    41,
      57,    99,   100,     7,    88,    86,    20,     1,   101,    89,
      90,    98,     8,    81,    51,    52,    53,    61,    62,    63,
      64,    87,    40,     1,     9,    12,    14,    16,    19,    35,
      36,    37,    58,    59,    61,    98,   100,   102,   104,   105,
     106,   107,   109,   110,   111,   114,   115,    90,    20,    82,
      83,    97,    98,     4,     5,    71,    72,    73,    78,    79,
      40,    40,    28,    33,    43,    87,    98,   117,   118,   119,
     120,   101,   117,   117,    98,    43,    43,    43,    61,   103,
      26,    38,    43,    40,    28,    43,    47,    48,    49,    50,
      54,    56,    87,    91,    92,    95,    96,    98,    83,    45,
      46,    60,    60,    72,    78,    40,    40,   120,   120,   117,
      38,    41,    43,    10,    20,    21,    22,    23,    24,    25,
      27,    28,    31,    29,    30,    32,    34,    13,    15,    55,
      26,   120,   116,   117,   116,    46,   117,   117,   116,    87,
      97,    38,    93,    94,    97,    42,    40,    42,    98,    91,
      74,    80,    69,    69,    44,   117,    98,   116,   102,   118,
     118,   118,   118,   118,   118,   119,   119,   119,   120,   120,
     120,   120,   117,   102,    87,    98,   112,   113,   117,    44,
      44,    45,    44,   104,    39,    44,    42,    44,    96,    58,
      94,    46,    87,    98,    40,    43,    75,    75,    40,    40,
      39,    44,    11,   108,    46,    46,    58,   113,    17,    18,
     117,    26,    28,    87,    39,    91,     8,    76,    77,    97,
      46,   102,   102,   102,   117,   117,   117,    87,    55,    40,
      97,    40,    44,    46,    96,    40,    40,    15,    15,    91,
      46,    77,    96,   102,   102,    96
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 38 "tiny.y"
    {yyerror("grammar error.\n");;}
    break;

  case 3:
#line 39 "tiny.y"
    {yyerror("grammar error.\n");;}
    break;

  case 4:
#line 42 "tiny.y"
    {   savedName1 = copyString(tokenString); ;}
    break;

  case 5:
#line 44 "tiny.y"
    {   (yyval) = (yyvsp[(5) - (6)]);
                            (yyval)->attr.name=savedName1;
                            savedTree = (yyval);
                        ;}
    break;

  case 6:
#line 49 "tiny.y"
    {
                            (yyval) = (yyvsp[(1) - (2)]);
                            (yyval)->sibling=(yyvsp[(2) - (2)]);
                        ;}
    break;

  case 7:
#line 54 "tiny.y"
    {
                            (yyval) = newDeclNode(DECL_ROUTINEHEAD);
                            (yyval) ->child[0]=(yyvsp[(1) - (4)]);
                            (yyval) ->child[1]=(yyvsp[(2) - (4)]);
                            (yyval) ->child[2]=(yyvsp[(3) - (4)]);
                            (yyval) ->child[3]=(yyvsp[(4) - (4)]);
                        ;}
    break;

  case 8:
#line 62 "tiny.y"
    {   (yyval)= NULL;;}
    break;

  case 9:
#line 64 "tiny.y"
    {   YYSTYPE t=(yyvsp[(1) - (2)]);
                            if(t!=NULL){
                                while(t->sibling!=NULL)
                                  t=t->sibling;
                                t->sibling=(yyvsp[(2) - (2)]);
                                (yyval)=(yyvsp[(1) - (2)]);
                            }
                            else
                                (yyval)=(yyvsp[(2) - (2)]);
                        ;}
    break;

  case 10:
#line 75 "tiny.y"
    {   YYSTYPE t=(yyvsp[(1) - (2)]);
                            if(t!=NULL){
                                while(t->sibling!=NULL)
                                  t=t->sibling;
                                t->sibling=(yyvsp[(2) - (2)]);
                                (yyval)=(yyvsp[(1) - (2)]);
                            }
                            else
                                (yyval)=(yyvsp[(2) - (2)]);
                        ;}
    break;

  case 11:
#line 85 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 12:
#line 86 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 13:
#line 89 "tiny.y"
    {
                            (yyval)=newDeclNode(DECL_FUNCTION);
                            (yyval)->attr.name=copyString( (yyvsp[(1) - (4)])->attr.name);
			
                            (yyval)->child[0]=(yyvsp[(1) - (4)])->child[1];
                            (yyval)->child[1]=(yyvsp[(1) - (4)])->child[0];
			    			(yyval)->child[2]=(yyvsp[(3) - (4)]);
			    			free((yyvsp[(1) - (4)]));
                        ;}
    break;

  case 14:
#line 100 "tiny.y"
    {   savedName=copyString(tokenString);;}
    break;

  case 15:
#line 102 "tiny.y"
    {
                            (yyval)=newDeclNode(DECL_FUNCTIONHEAD);
                            (yyval)->attr.name=savedName;
                            (yyval)->child[0]=(yyvsp[(4) - (6)]);
                            (yyval)->child[1]=(yyvsp[(6) - (6)]);
                        ;}
    break;

  case 16:
#line 110 "tiny.y"
    {(yyval)=NULL;;}
    break;

  case 17:
#line 112 "tiny.y"
    {(yyval)=(yyvsp[(2) - (3)]);;}
    break;

  case 18:
#line 115 "tiny.y"
    {   YYSTYPE t=(yyvsp[(1) - (3)]);
                            if(t!=NULL){
                                while(t->sibling!=NULL)
                                  t=t->sibling;
                                t->sibling=(yyvsp[(3) - (3)]);
                                (yyval)=(yyvsp[(1) - (3)]);
                            }
                            else
                                (yyval)=(yyvsp[(3) - (3)]);
                        ;}
    break;

  case 19:
#line 126 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (1)]); ;}
    break;

  case 20:
#line 129 "tiny.y"
    {
                            (yyval)=newDeclNode(DECL_VAR_PARA);
                            (yyval)->child[0]=(yyvsp[(2) - (4)]);
                            (yyval)->child[1]=(yyvsp[(4) - (4)]);
                        ;}
    break;

  case 21:
#line 135 "tiny.y"
    {
                            (yyval)=newDeclNode(DECL_VAL_PARA);
                            (yyval)->child[0]=(yyvsp[(1) - (3)]);
                            (yyval)->child[1]=(yyvsp[(3) - (3)]);
                        ;}
    break;

  case 22:
#line 142 "tiny.y"
    {
                            (yyval)=newDeclNode(DECL_PROCEDURE);
                            (yyval)->attr.name=copyString( (yyvsp[(1) - (4)])->attr.name);
                            (yyval)->child[0]=NULL;
                            (yyval)->child[1]=(yyvsp[(1) - (4)])->child[0];
			    			(yyval)->child[2]=(yyvsp[(3) - (4)]);
                            free((yyvsp[(1) - (4)]));
                        ;}
    break;

  case 23:
#line 152 "tiny.y"
    {   savedName=copyString(tokenString);;}
    break;

  case 24:
#line 154 "tiny.y"
    {   (yyval)=newDeclNode(DECL_PROCEDUREHEAD);
                            (yyval)->attr.name=savedName;
                            (yyval)->child[0]=(yyvsp[(4) - (4)]);
                        ;}
    break;

  case 25:
#line 160 "tiny.y"
    {   (yyval) = NULL;;}
    break;

  case 26:
#line 162 "tiny.y"
    {   (yyval)=(yyvsp[(2) - (2)]);;}
    break;

  case 27:
#line 165 "tiny.y"
    {   YYSTYPE t = (yyvsp[(1) - (2)]);
                            if(t!=NULL){
                                while(t->sibling!=NULL)
                                  t=t->sibling;
                                t->sibling=(yyvsp[(2) - (2)]);
                                (yyval)=(yyvsp[(1) - (2)]);
                            }
                            else
                                (yyval)=(yyvsp[(2) - (2)]);
                        ;}
    break;

  case 28:
#line 175 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 29:
#line 178 "tiny.y"
    {   (yyval)=newDeclNode(DECL_VAR);
                            (yyval)->child[0]=(yyvsp[(1) - (4)]);
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);


                        ;}
    break;

  case 30:
#line 186 "tiny.y"
    {   (yyval) = NULL; ;}
    break;

  case 31:
#line 188 "tiny.y"
    {   (yyval)=(yyvsp[(2) - (2)]); ;}
    break;

  case 32:
#line 191 "tiny.y"
    {
                            YYSTYPE t = (yyvsp[(1) - (2)]);
                            if(t!=NULL){
                                while(t->sibling!=NULL)
                                  t=t->sibling;
                                t->sibling = (yyvsp[(2) - (2)]);
                                (yyval)=(yyvsp[(2) - (2)]);
                            }
                            else
                                (yyval)=(yyvsp[(1) - (2)]);
                        ;}
    break;

  case 33:
#line 204 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (1)]); ;}
    break;

  case 34:
#line 207 "tiny.y"
    {
                            (yyval) = newDeclNode(DECL_CONST);
                            (yyval)->attr.name = copyString((yyvsp[(1) - (4)])->attr.name);
                            freeNode((yyvsp[(1) - (4)]));
                            (yyval)->child[0] = (yyvsp[(3) - (4)]);
                            (yyval)->type=(yyvsp[(3) - (4)])->type;
                        ;}
    break;

  case 35:
#line 216 "tiny.y"
    {
                            (yyval) = newExpNode(EXP_CONST);
                            (yyval)->type = EXPTYPE_INT;
                            (yyval)->attr.val = atoi(tokenString);
                        ;}
    break;

  case 36:
#line 222 "tiny.y"
    {
                            (yyval) = newExpNode(EXP_CONST);
                            (yyval)->type = EXPTYPE_REAL;
                            (yyval)->attr.real_val = atof(tokenString);
                        ;}
    break;

  case 37:
#line 228 "tiny.y"
    {
                            (yyval) = newExpNode(EXP_CONST);
                            (yyval)->type = EXPTYPE_CHAR;
                            (yyval)->attr.char_val = tokenString[1];
                        ;}
    break;

  case 38:
#line 234 "tiny.y"
    {
                            (yyval) = newExpNode(EXP_CONST);
                            (yyval)->type=EXPTYPE_STRING;
                            (yyval)->attr.string_val = (char*)malloc(strlen(tokenString)-1);
                            memmove((yyval)->attr.string_val,tokenString+1,strlen(tokenString)-2);
                            (yyval)->attr.string_val[strlen(tokenString)-2]='\0';
                        ;}
    break;

  case 39:
#line 242 "tiny.y"
    {
                            (yyval)=newExpNode(EXP_CONST);
                            (yyval)->type=EXPTYPE_BOOL;
                            (yyval)->attr.val=1;
                        ;}
    break;

  case 40:
#line 248 "tiny.y"
    {
                            (yyval)=newExpNode(EXP_CONST);
                            (yyval)->type=EXPTYPE_BOOL;
                            (yyval)->attr.val=0;
                        ;}
    break;

  case 41:
#line 254 "tiny.y"
    {
                            (yyval)=newExpNode(EXP_CONST);
                            (yyval)->type=EXPTYPE_INT;
                            (yyval)->attr.val=2147483647;
                        ;}
    break;

  case 42:
#line 261 "tiny.y"
    {   (yyval)=NULL;;}
    break;

  case 43:
#line 263 "tiny.y"
    {   (yyval)=(yyvsp[(2) - (2)]);;}
    break;

  case 44:
#line 266 "tiny.y"
    {
                            YYSTYPE t=(yyvsp[(1) - (2)]);
                            if(t!=NULL){
                                while(t->sibling!=NULL)
                                  t=t->sibling;
                                t->sibling=(yyvsp[(2) - (2)]);
                                (yyval)=(yyvsp[(1) - (2)]);
                            }
                            else
                              (yyval)=(yyvsp[(2) - (2)]);
                        ;}
    break;

  case 45:
#line 278 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 46:
#line 281 "tiny.y"
    {   (yyval)=newDeclNode(DECL_TYPE);
                            (yyval)->child[0]=(yyvsp[(1) - (4)]);
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 47:
#line 286 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 48:
#line 287 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 49:
#line 288 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 50:
#line 291 "tiny.y"
    {   (yyval)=(yyvsp[(2) - (3)]);;}
    break;

  case 51:
#line 294 "tiny.y"
    {
                            YYSTYPE t=(yyvsp[(1) - (2)]);
                            if(t!=NULL){
                                while(t->sibling!=NULL)
                                  t=t->sibling;
                                t->sibling=(yyvsp[(2) - (2)]);
                                (yyval)=(yyvsp[(1) - (2)]);
                            }
                            else
                              (yyval)=(yyvsp[(2) - (2)]);
                        ;}
    break;

  case 52:
#line 305 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 53:
#line 308 "tiny.y"
    {
                            (yyval)=newTypeNode(TYPE_RECORD);
                            (yyval)->child[0]=(yyvsp[(1) - (4)]);
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 54:
#line 315 "tiny.y"
    {
                            (yyval)=newTypeNode(TYPE_ARRAY);
                            (yyval)->child[0]=(yyvsp[(3) - (6)]);
                            (yyval)->child[1]=(yyvsp[(6) - (6)]);
                            (yyval)->type=EXPTYPE_ARRAY;
                         
                        ;}
    break;

  case 55:
#line 324 "tiny.y"
    {
                            (yyval)=newTypeNode(TYPE_SIMPLE_ID);
                            (yyval)->attr.name = copyString((yyvsp[(1) - (1)])->attr.name);
                            free((yyvsp[(1) - (1)]));
                        ;}
    break;

  case 56:
#line 330 "tiny.y"
    {   (yyval)=newTypeNode(TYPE_SIMPLE_ENUM);
                            (yyval)->child[0]=(yyvsp[(2) - (3)]);
							(yyval)->type=EXPTYPE_ENUM;
                        ;}
    break;

  case 57:
#line 335 "tiny.y"
    {   (yyval)=newTypeNode(TYPE_SIMPLE_LIMIT);
                            (yyval)->child[0]=(yyvsp[(1) - (3)]);
                            (yyval)->child[1]=(yyvsp[(3) - (3)]);
							(yyval)->type=EXPTYPE_LIMIT;
                        ;}
    break;

  case 58:
#line 341 "tiny.y"
    {
                            (yyval)=newTypeNode(TYPE_SIMPLE_LIMIT);
                            (yyval)->child[0]=(yyvsp[(2) - (4)]);
                            (yyval)->child[0]->attr.val *= -1;
                            (yyval)->child[1]=(yyvsp[(4) - (4)]);
							(yyval)->type=EXPTYPE_LIMIT;
                        ;}
    break;

  case 59:
#line 349 "tiny.y"
    {   (yyval)=newTypeNode(TYPE_SIMPLE_LIMIT);
                            (yyval)->child[0]=(yyvsp[(2) - (5)]);
                            (yyval)->child[0]->attr.val *=-1;
                            (yyval)->child[1]=(yyvsp[(5) - (5)]);
                            (yyval)->child[1]->attr.val *=-1;
							(yyval)->type=EXPTYPE_LIMIT;
                        ;}
    break;

  case 60:
#line 357 "tiny.y"
    {
                            (yyval)=newTypeNode(TYPE_SIMPLE_LIMIT);
                            (yyval)->child[0]=(yyvsp[(1) - (3)]);
                            (yyval)->child[1]=(yyvsp[(3) - (3)]);
							(yyval)->type=EXPTYPE_LIMIT;
                        ;}
    break;

  case 61:
#line 364 "tiny.y"
    {   (yyval)=newTypeNode(TYPE_SIMPLE_SYS);
                            (yyval)->type=EXPTYPE_INT;
                        ;}
    break;

  case 62:
#line 368 "tiny.y"
    {   (yyval)=newTypeNode(TYPE_SIMPLE_SYS);
                            (yyval)->type=EXPTYPE_BOOL;
                        ;}
    break;

  case 63:
#line 372 "tiny.y"
    {   (yyval)=newTypeNode(TYPE_SIMPLE_SYS);
                            (yyval)->type=EXPTYPE_REAL;
                        ;}
    break;

  case 64:
#line 376 "tiny.y"
    {   (yyval)=newTypeNode(TYPE_SIMPLE_SYS);
                            (yyval)->type=EXPTYPE_CHAR;
                        ;}
    break;

  case 65:
#line 381 "tiny.y"
    {
                            YYSTYPE t=(yyvsp[(1) - (3)]);
                            if(t!=NULL){
                                while(t->sibling!=NULL)
                                  t=t->sibling;
                                t->sibling=(yyvsp[(3) - (3)]);
                                (yyval)=(yyvsp[(1) - (3)]);
                            }
                            else
                                (yyval)=(yyvsp[(1) - (3)]);
                        ;}
    break;

  case 66:
#line 392 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (1)]); ;}
    break;

  case 67:
#line 395 "tiny.y"
    {   (yyval)=newExpNode(EXP_ID);
                            (yyval)->attr.name=copyString(tokenString);
                        ;}
    break;

  case 68:
#line 398 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 69:
#line 399 "tiny.y"
    {(yyval)=(yyvsp[(2) - (3)]);;}
    break;

  case 70:
#line 401 "tiny.y"
    {   yyerror("grammar error.\n");  ;}
    break;

  case 71:
#line 402 "tiny.y"
    {   yyerror("grammar error.\n");  ;}
    break;

  case 72:
#line 405 "tiny.y"
    {(yyval)=NULL;;}
    break;

  case 73:
#line 407 "tiny.y"
    {
                            YYSTYPE t=(yyvsp[(1) - (3)]);
                            if(t!=NULL){
                                while(t->sibling!=NULL)
                                  t=t->sibling;
                                t->sibling=(yyvsp[(2) - (3)]);
                                (yyval)=(yyvsp[(1) - (3)]);
                            }
                            else
                                (yyval)=(yyvsp[(2) - (3)]);
                        ;}
    break;

  case 74:
#line 420 "tiny.y"
    {   savedNum= atoi(tokenString);;}
    break;

  case 75:
#line 422 "tiny.y"
    {
                            (yyval)=newStmtNode(STMT_LABEL);
                            (yyval)->attr.val=savedNum;
                            (yyval)->child[0]=(yyvsp[(4) - (4)]);
                        ;}
    break;

  case 76:
#line 428 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 77:
#line 430 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 78:
#line 431 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 79:
#line 432 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 80:
#line 433 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 81:
#line 434 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 82:
#line 435 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 83:
#line 436 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 84:
#line 437 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 85:
#line 438 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 86:
#line 440 "tiny.y"
    {   (yyval)=newExpNode(EXP_OP);
			    (yyval)->attr.op = TOKEN_ASSIGN;	  
			    (yyval)->child[0] = (yyvsp[(1) - (3)]);
			    (yyval)->child[1] = (yyvsp[(3) - (3)]);
                        ;}
    break;

  case 87:
#line 446 "tiny.y"
    {  (yyval)=newExpNode(EXP_OP);
			   (yyval)->attr.op = TOKEN_ASSIGN;
			   (yyvsp[(1) - (6)])->type = EXPTYPE_ARRAY;
			   (yyvsp[(1) - (6)])->child[0] = (yyvsp[(3) - (6)]);
			   (yyval)->child[0] = (yyvsp[(1) - (6)]);
                           (yyval)->child[1] = (yyvsp[(6) - (6)]);
			  		
			;}
    break;

  case 88:
#line 456 "tiny.y"
    {   (yyval)=newStmtNode(STMT_GOTO);
                            (yyval)->attr.val=atoi(tokenString);
                        ;}
    break;

  case 89:
#line 461 "tiny.y"
    {   (yyval)=newStmtNode(STMT_IF);
                            (yyval)->child[0]=(yyvsp[(2) - (5)]);
                            (yyval)->child[1]=(yyvsp[(4) - (5)]);
                            (yyval)->child[2]=(yyvsp[(5) - (5)]);
                        ;}
    break;

  case 90:
#line 467 "tiny.y"
    {(yyval)=NULL;;}
    break;

  case 91:
#line 468 "tiny.y"
    {(yyval)=(yyvsp[(2) - (2)]);;}
    break;

  case 92:
#line 471 "tiny.y"
    {
                            (yyval)=newStmtNode(STMT_REPEAT);
                            (yyval)->child[0]=(yyvsp[(2) - (4)]);
                            (yyval)->child[1]=(yyvsp[(4) - (4)]);
                        ;}
    break;

  case 94:
#line 478 "tiny.y"
    {   (yyval)=newStmtNode(STMT_WHILE);
                            (yyval)->child[0]=(yyvsp[(2) - (4)]);
                            (yyval)->child[1]=(yyvsp[(4) - (4)]);
                        ;}
    break;

  case 95:
#line 483 "tiny.y"
    {   (yyval)=newStmtNode(STMT_CASE);
                            (yyval)->child[0]=(yyvsp[(2) - (5)]);
                            (yyval)->child[1]=(yyvsp[(4) - (5)]);
                        ;}
    break;

  case 96:
#line 488 "tiny.y"
    {   YYSTYPE t=(yyvsp[(1) - (2)]);
                            if(t!=NULL){
                                while(t->sibling!=NULL)
                                  t=t->sibling;
                                t->sibling=(yyvsp[(2) - (2)]);
                                (yyval)=(yyvsp[(1) - (2)]);
                            }
                            else
                                (yyval)=(yyvsp[(2) - (2)]);
                        ;}
    break;

  case 97:
#line 498 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 98:
#line 500 "tiny.y"
    {
                            (yyval)=newExpNode(EXP_CASE);
                            (yyval)->child[0]=(yyvsp[(1) - (4)]);
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 99:
#line 506 "tiny.y"
    {
                            (yyval)=newExpNode(EXP_CASE);
                            (yyval)->child[0]=(yyvsp[(1) - (4)]);
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 100:
#line 512 "tiny.y"
    {
                            (yyval)=newStmtNode(STMT_FOR);
                            (yyval)->child[0]=(yyvsp[(2) - (8)]);
                            (yyval)->child[1]=(yyvsp[(4) - (8)]);
                            (yyval)->child[2]=(yyvsp[(6) - (8)]);
                            (yyval)->child[3]=(yyvsp[(8) - (8)]);
                            (yyval)->attr.op=TOKEN_TO;
                        ;}
    break;

  case 101:
#line 521 "tiny.y"
    {
                            (yyval)=newStmtNode(STMT_FOR);
                            (yyval)->child[0]=(yyvsp[(2) - (8)]);
                            (yyval)->child[1]=(yyvsp[(4) - (8)]);
                            (yyval)->child[2]=(yyvsp[(6) - (8)]);
                            (yyval)->child[3]=(yyvsp[(8) - (8)]);
                            (yyval)->attr.op=TOKEN_DOWNTO;
                        ;}
    break;

  case 102:
#line 530 "tiny.y"
    {
							(yyval)=newExpNode(EXP_FUNC);
                            (yyval)->attr.name=copyString((yyvsp[(1) - (1)])->attr.name);
                            (yyval)->child[0]=(yyvsp[(1) - (1)]);
							(yyval)->child[1]=NULL;
                        ;}
    break;

  case 103:
#line 537 "tiny.y"
    {   (yyval)=newExpNode(EXP_FUNC);
                            (yyval)->attr.name=copyString((yyvsp[(1) - (4)])->attr.name);
                            (yyval)->child[0]=(yyvsp[(1) - (4)]);
			    (yyval)->child[1]=(yyvsp[(3) - (4)]);
							
                        ;}
    break;

  case 104:
#line 544 "tiny.y"
    {
                            (yyval)=newStmtNode(STMT_PROC_SYS);
                            (yyval)->attr.op=TOKEN_READ;
                            (yyval)->child[0]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 105:
#line 550 "tiny.y"
    {   (yyval)=newStmtNode(STMT_PROC_SYS);
                            (yyval)->attr.op=TOKEN_WRITE;
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 106:
#line 555 "tiny.y"
    {   (yyval)=newStmtNode(STMT_PROC_SYS);
                            (yyval)->attr.op=TOKEN_WRITELN;
                        ;}
    break;

  case 107:
#line 559 "tiny.y"
    {   (yyval)=newStmtNode(STMT_PROC_SYS);
                            (yyval)->attr.op=TOKEN_WRITELN;
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 108:
#line 564 "tiny.y"
    {   YYSTYPE t=(yyvsp[(1) - (3)]);
                            if(t!=NULL){
                                while(t->sibling!=NULL)
                                  t=t->sibling;
                                t->sibling=(yyvsp[(3) - (3)]);
                                (yyval)=(yyvsp[(1) - (3)]);
                            }
                            else
                                (yyval)=(yyvsp[(3) - (3)]);
                        ;}
    break;

  case 109:
#line 574 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 110:
#line 576 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_GE); ;}
    break;

  case 111:
#line 577 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_GT); ;}
    break;

  case 112:
#line 578 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_LE); ;}
    break;

  case 113:
#line 579 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_LT); ;}
    break;

  case 114:
#line 580 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_EQUAL); ;}
    break;

  case 115:
#line 581 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_UNEQUAL); ;}
    break;

  case 116:
#line 582 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 117:
#line 584 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_PLUS); ;}
    break;

  case 118:
#line 585 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_MINUS); ;}
    break;

  case 119:
#line 586 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_OR); ;}
    break;

  case 120:
#line 587 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 121:
#line 589 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_MUL); ;}
    break;

  case 122:
#line 590 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_DIV); ;}
    break;

  case 123:
#line 591 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_MOD); ;}
    break;

  case 124:
#line 592 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_AND); ;}
    break;

  case 125:
#line 593 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 126:
#line 596 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 127:
#line 598 "tiny.y"
    {   (yyval)=newExpNode(EXP_FUNC);
                            (yyval)->attr.name=copyString((yyvsp[(1) - (4)])->attr.name);
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 128:
#line 602 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 129:
#line 603 "tiny.y"
    {(yyval)=(yyvsp[(2) - (3)]);;}
    break;

  case 130:
#line 605 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(2) - (2)]),NULL,TOKEN_NOT);
                        ;}
    break;

  case 131:
#line 608 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(2) - (2)]),NULL,TOKEN_MINUS);
                        ;}
    break;

  case 132:
#line 611 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (4)]);
                            (yyval)->child[0]=(yyvsp[(3) - (4)]);
                            (yyval)->type=EXPTYPE_ARRAY;
                        ;}
    break;

  case 133:
#line 616 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (3)]);
                            (yyval)->child[0]=(yyvsp[(3) - (3)]);
                            (yyval)->type=EXPTYPE_RECORD;
                        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2733 "tiny.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 621 "tiny.y"


void yyerror(const char* s, ...){
    
    va_list ap;
    va_start(ap, s);	
    fprintf(stderr, "line %d: error near '%s': ", yylineno, yytext);
    
    vfprintf(stderr, s, ap);
    fprintf(stderr, "\n");
    va_end(ap);
}


TreeNode * parse()
{
    yyparse();
    return savedTree;
}

