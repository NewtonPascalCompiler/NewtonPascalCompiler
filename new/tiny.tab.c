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
/*
static int yylex(){
    return getToken();
}
*/
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
#line 259 "tiny.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   447

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  258

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
       0,     0,     3,     4,    11,    14,    19,    20,    23,    26,
      28,    30,    35,    36,    43,    44,    48,    52,    54,    59,
      63,    68,    69,    74,    75,    78,    81,    83,    88,    89,
      92,    95,    97,   102,   104,   106,   108,   110,   112,   114,
     116,   117,   120,   123,   125,   130,   132,   134,   136,   140,
     143,   145,   150,   157,   159,   163,   167,   172,   178,   182,
     184,   186,   188,   190,   194,   196,   198,   200,   204,   205,
     209,   210,   215,   217,   219,   221,   223,   225,   227,   229,
     231,   233,   235,   239,   246,   249,   255,   256,   259,   264,
     265,   270,   276,   279,   281,   286,   291,   300,   309,   311,
     316,   321,   326,   328,   333,   337,   339,   343,   347,   351,
     355,   359,   363,   365,   369,   373,   377,   379,   383,   387,
     391,   395,   397,   399,   404,   406,   410,   413,   416,   421
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      67,     0,    -1,    -1,     3,    60,    68,    40,    69,    41,
      -1,    70,    99,    -1,    84,    88,    81,    71,    -1,    -1,
      71,    72,    -1,    71,    78,    -1,    72,    -1,    78,    -1,
      73,    40,    69,    40,    -1,    -1,     4,    60,    74,    75,
      46,    96,    -1,    -1,    43,    76,    44,    -1,    76,    40,
      77,    -1,    77,    -1,     8,    97,    46,    96,    -1,    97,
      46,    96,    -1,    79,    40,    69,    40,    -1,    -1,     5,
      60,    80,    75,    -1,    -1,     8,    82,    -1,    82,    83,
      -1,    83,    -1,    97,    46,    91,    40,    -1,    -1,     6,
      85,    -1,    85,    86,    -1,    86,    -1,    98,    20,    87,
      40,    -1,    61,    -1,    62,    -1,    63,    -1,    64,    -1,
      51,    -1,    52,    -1,    53,    -1,    -1,     7,    89,    -1,
      89,    90,    -1,    90,    -1,    98,    20,    91,    40,    -1,
      96,    -1,    95,    -1,    92,    -1,    56,    93,    58,    -1,
      93,    94,    -1,    94,    -1,    97,    46,    91,    40,    -1,
      54,    38,    96,    39,    55,    91,    -1,    98,    -1,    43,
      97,    44,    -1,    87,    42,    87,    -1,    28,    87,    42,
      87,    -1,    28,    87,    42,    28,    87,    -1,    98,    42,
      98,    -1,    47,    -1,    48,    -1,    50,    -1,    49,    -1,
      97,    45,    98,    -1,    98,    -1,    60,    -1,   100,    -1,
      57,   101,    58,    -1,    -1,   101,   102,    40,    -1,    -1,
      61,   103,    46,   104,    -1,   104,    -1,   105,    -1,   100,
      -1,   106,    -1,   107,    -1,   109,    -1,   110,    -1,   111,
      -1,   114,    -1,   115,    -1,    98,    26,   117,    -1,    98,
      38,   117,    39,    26,   117,    -1,    59,    61,    -1,     9,
     117,    10,   102,   108,    -1,    -1,    11,   102,    -1,    12,
     101,    13,   117,    -1,    -1,    14,   117,    15,   102,    -1,
      16,   117,    55,   112,    58,    -1,   112,   113,    -1,   113,
      -1,    87,    46,   102,    40,    -1,    98,    46,   102,    40,
      -1,    19,    98,    26,   117,    17,   117,    15,   102,    -1,
      19,    98,    26,   117,    18,   117,    15,   102,    -1,    98,
      -1,    98,    43,   116,    44,    -1,    35,    43,   120,    44,
      -1,    36,    43,   116,    44,    -1,    37,    -1,    37,    43,
     116,    44,    -1,   116,    45,   117,    -1,   117,    -1,   117,
      22,   118,    -1,   117,    23,   118,    -1,   117,    24,   118,
      -1,   117,    25,   118,    -1,   117,    20,   118,    -1,   117,
      21,   118,    -1,   118,    -1,   118,    27,   119,    -1,   118,
      28,   119,    -1,   118,    31,   119,    -1,   119,    -1,   119,
      29,   120,    -1,   119,    30,   120,    -1,   119,    34,   120,
      -1,   119,    32,   120,    -1,   120,    -1,    98,    -1,    98,
      43,   116,    44,    -1,    87,    -1,    43,   117,    44,    -1,
      33,   120,    -1,    28,   120,    -1,    98,    38,   117,    39,
      -1,    98,    41,    98,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    35,    42,    47,    56,    57,    68,    79,
      80,    82,    94,    93,   104,   105,   108,   119,   122,   128,
     135,   146,   145,   154,   155,   158,   169,   171,   180,   181,
     184,   197,   200,   209,   215,   221,   227,   235,   241,   247,
     255,   256,   259,   271,   274,   280,   281,   282,   284,   287,
     299,   301,   308,   317,   323,   328,   334,   342,   350,   357,
     361,   365,   369,   374,   386,   388,   392,   393,   395,   396,
     410,   409,   417,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   435,   445,   450,   457,   458,   460,   466,
     467,   472,   477,   488,   489,   495,   501,   510,   519,   526,
     533,   539,   544,   548,   553,   564,   566,   567,   568,   569,
     570,   571,   572,   574,   575,   576,   577,   579,   580,   581,
     582,   583,   585,   587,   592,   593,   594,   597,   600,   605
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
       0,    66,    68,    67,    69,    70,    71,    71,    71,    71,
      71,    72,    74,    73,    75,    75,    76,    76,    77,    77,
      78,    80,    79,    81,    81,    82,    82,    83,    84,    84,
      85,    85,    86,    87,    87,    87,    87,    87,    87,    87,
      88,    88,    89,    89,    90,    91,    91,    91,    92,    93,
      93,    94,    95,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    97,    97,    98,    99,   100,   101,   101,
     103,   102,   102,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   105,   105,   106,   107,   108,   108,   109,   109,
     110,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   118,   118,   118,   118,   119,   119,   119,
     119,   119,   120,   120,   120,   120,   120,   120,   120,   120
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     2,     4,     0,     2,     2,     1,
       1,     4,     0,     6,     0,     3,     3,     1,     4,     3,
       4,     0,     4,     0,     2,     2,     1,     4,     0,     2,
       2,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     2,     1,     4,     1,     1,     1,     3,     2,
       1,     4,     6,     1,     3,     3,     4,     5,     3,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     0,     3,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     6,     2,     5,     0,     2,     4,     0,
       4,     5,     2,     1,     4,     4,     8,     8,     1,     4,
       4,     4,     1,     4,     3,     1,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     3,
       3,     1,     1,     4,     1,     3,     2,     2,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,     0,    28,     0,     0,     0,
      40,    65,    29,    31,     0,     3,    68,     4,    66,     0,
      23,    30,     0,    89,    41,    43,     0,     0,     6,    37,
      38,    39,    33,    34,    35,    36,     0,     0,    68,     0,
       0,     0,     0,     0,   102,    67,     0,    70,    98,    74,
       0,    72,    73,    75,    76,    77,    78,    79,    80,    81,
      42,     0,    24,    26,     0,    64,     0,     0,     5,     9,
       0,    10,     0,    32,     0,     0,     0,   124,   122,     0,
     112,   116,   121,    89,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,     0,    69,     0,     0,    59,    60,
      62,    61,     0,     0,     0,     0,    47,    46,    45,    53,
      25,     0,     0,    12,    21,     7,     8,    28,    28,   127,
     126,     0,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,   105,     0,    89,    82,     0,
       0,     0,     0,     0,     0,    50,     0,     0,    44,     0,
      63,     0,    14,    14,     0,     0,   125,     0,   129,     0,
      86,   110,   111,   106,   107,   108,   109,   113,   114,   115,
     117,   118,   120,   119,    88,    90,     0,     0,     0,    93,
       0,   100,   101,     0,   103,    71,     0,    99,     0,    54,
       0,    48,    49,     0,    55,    58,    27,     0,     0,    22,
      11,    20,   128,   123,    89,    85,    89,    89,    91,    92,
       0,     0,   104,     0,     0,    56,     0,     0,     0,     0,
      17,     0,     0,    87,     0,     0,     0,     0,    83,    57,
       0,    51,     0,     0,    15,     0,    13,    94,    95,    89,
      89,    52,     0,    16,    19,    96,    97,    18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     8,     9,    68,    69,    70,   162,   208,
     229,   230,    71,    72,   163,    28,    62,    63,    10,    12,
      13,    77,    20,    24,    25,   105,   106,   154,   155,   107,
     108,    64,    78,    17,    49,    23,    50,    91,    51,    52,
      53,    54,   215,    55,    56,    57,   188,   189,    58,    59,
     144,   145,    80,    81,    82
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -146
static const yytype_int16 yypact[] =
{
      23,   -23,    53,  -146,  -146,    48,    91,    39,    67,    58,
     103,  -146,    39,  -146,    99,  -146,  -146,  -146,  -146,    39,
     109,  -146,   335,   156,    39,  -146,   105,    39,    10,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,    89,     5,  -146,     5,
       5,    39,    88,    96,   102,  -146,    74,  -146,    -2,  -146,
     111,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,   262,    39,  -146,    -1,  -146,   106,   118,    10,  -146,
     129,  -146,   131,  -146,     5,     5,     5,  -146,     8,   133,
      -6,    92,  -146,   235,   385,     7,   150,     5,     5,     5,
    -146,   139,     5,     5,     5,  -146,   335,    39,  -146,  -146,
    -146,  -146,   148,    39,   147,   154,  -146,  -146,  -146,   153,
    -146,    39,   262,  -146,  -146,  -146,  -146,    91,    91,  -146,
    -146,   323,     5,    39,     5,   241,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
     241,   331,     5,   155,    19,   340,    41,   247,   340,    59,
      93,   159,    97,   289,    -8,  -146,   116,   335,  -146,    39,
    -146,   157,   161,   161,   158,   162,  -146,   334,  -146,   119,
     194,    -6,    -6,    -6,    -6,    -6,    -6,    92,    92,    92,
    -146,  -146,  -146,  -146,   340,  -146,   160,   166,   317,  -146,
     416,  -146,  -146,     5,  -146,  -146,   182,  -146,    50,  -146,
     179,  -146,  -146,   262,  -146,  -146,  -146,     1,   174,  -146,
    -146,  -146,  -146,  -146,   241,  -146,   241,   241,  -146,  -146,
       5,     5,   340,     5,   335,  -146,   167,   183,    39,    -5,
    -146,   128,   289,  -146,   186,   187,   396,   407,   340,  -146,
     262,  -146,   134,     1,  -146,   289,  -146,  -146,  -146,   241,
     241,  -146,   289,  -146,  -146,  -146,  -146,  -146
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,  -146,  -146,    66,  -146,  -146,   164,  -146,  -146,    65,
    -146,   -14,   169,  -146,  -146,  -146,  -146,   168,  -146,  -146,
     222,   -21,  -146,  -146,   211,  -110,  -146,  -146,    85,  -146,
    -145,   -84,    -7,  -146,   231,   203,  -122,  -146,   115,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,    64,  -146,  -146,
     -47,   -33,   316,    16,   -64
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      14,    36,   161,   170,    79,    14,    84,    85,   200,   228,
     119,   120,    26,   152,    66,    67,    48,    26,   185,   156,
      65,   132,   133,   143,    92,   134,     1,   126,   127,   128,
     129,   130,   131,    74,    86,   243,    93,     3,    75,   244,
     104,    94,   146,   121,   111,   112,   122,   150,    76,   123,
     201,   124,    11,     4,   109,    65,    29,    30,    31,   148,
     149,    11,   141,   192,   193,    11,    32,    33,    34,    35,
     156,   180,   181,   182,   183,   151,    48,   169,   224,   126,
     127,   128,   129,   130,   131,   194,   193,   246,     6,   167,
      65,   104,   233,   227,   234,   235,    65,     7,   196,    11,
     254,    29,    30,    31,   160,   109,   184,   257,    15,   190,
      19,    32,    33,    34,    35,    16,   168,    27,    48,    22,
     186,   135,   136,   231,   137,    61,   138,   255,   256,    73,
     251,    87,   104,    48,   187,    90,   204,   197,   193,    88,
      48,   199,   111,   125,   242,    89,   109,    65,   177,   178,
     179,    95,   205,   126,   127,   128,   129,   130,   131,   231,
     222,   111,   203,   213,   193,    37,   113,   186,    38,   117,
      39,   118,    40,   111,   245,    41,   142,   225,   114,   111,
     252,   187,   104,   164,   165,   147,   153,   236,   237,   157,
     238,    42,    43,    44,   158,   159,   109,   206,   210,   191,
      65,   198,   211,   239,   207,   214,   216,    48,   223,    48,
      48,   104,   217,    16,    45,    46,    11,    47,   226,   104,
     232,    65,   240,   241,   104,   109,   247,   248,   209,   253,
     110,   104,   115,   109,    21,    60,    65,   116,   109,   202,
      18,    83,    48,    48,    37,   109,     0,    38,   139,    39,
      37,    40,   219,    38,    41,    39,    37,    40,     0,    38,
      41,    39,   195,    40,     0,     0,    41,     0,     0,     0,
      42,    43,    44,     0,     0,     0,    42,    43,    44,     0,
       0,     0,    42,    43,    44,     0,     0,     0,     0,     0,
      96,     0,    16,     0,    46,    11,    47,     0,    16,     0,
      46,    11,    47,     0,    16,    97,    46,    11,     0,    98,
      99,   100,   101,    29,    30,    31,   102,    96,   103,     0,
       0,     0,    11,    32,    33,    34,    35,     0,     0,     0,
       0,     0,    97,     0,     0,     0,    98,    99,   100,   101,
      29,    30,    31,   126,   127,   128,   129,   130,   131,    11,
      32,    33,    34,    35,   126,   127,   128,   129,   130,   131,
     126,   127,   128,   129,   130,   131,     0,   166,    29,    30,
      31,     0,     0,   212,     0,   218,     0,    11,    32,    33,
      34,    35,    29,    30,    31,     0,    29,    30,    31,     0,
       0,    11,    32,    33,    34,    35,    32,    33,    34,    35,
     140,     0,     0,     0,     0,   126,   127,   128,   129,   130,
     131,   249,     0,     0,     0,     0,   126,   127,   128,   129,
     130,   131,   250,     0,     0,     0,     0,   126,   127,   128,
     129,   130,   131,   220,   221,     0,   126,   127,   128,   129,
     130,   131,   171,   172,   173,   174,   175,   176
};

static const yytype_int16 yycheck[] =
{
       7,    22,   112,   125,    37,    12,    39,    40,   153,     8,
      74,    75,    19,    97,     4,     5,    23,    24,   140,   103,
      27,    27,    28,    87,    26,    31,     3,    20,    21,    22,
      23,    24,    25,    28,    41,    40,    38,    60,    33,    44,
      61,    43,    89,    76,    45,    46,    38,    94,    43,    41,
      58,    43,    60,     0,    61,    62,    51,    52,    53,    92,
      93,    60,    55,    44,    45,    60,    61,    62,    63,    64,
     154,   135,   136,   137,   138,    96,    83,   124,    28,    20,
      21,    22,    23,    24,    25,    44,    45,   232,    40,   122,
      97,   112,   214,   203,   216,   217,   103,     6,    39,    60,
     245,    51,    52,    53,   111,   112,   139,   252,    41,   142,
       7,    61,    62,    63,    64,    57,   123,     8,   125,    20,
     141,    29,    30,   207,    32,    20,    34,   249,   250,    40,
     240,    43,   153,   140,   141,    61,   157,    44,    45,    43,
     147,    44,    45,    10,   228,    43,   153,   154,   132,   133,
     134,    40,   159,    20,    21,    22,    23,    24,    25,   243,
     193,    45,    46,    44,    45,     9,    60,   188,    12,    40,
      14,    40,    16,    45,    46,    19,    26,   198,    60,    45,
      46,   188,   203,   117,   118,    46,    38,   220,   221,    42,
     223,    35,    36,    37,    40,    42,   203,    40,    40,    44,
     207,    42,    40,   224,    43,    11,    46,   214,    26,   216,
     217,   232,    46,    57,    58,    59,    60,    61,    39,   240,
      46,   228,    55,    40,   245,   232,    40,    40,   163,   243,
      62,   252,    68,   240,    12,    24,   243,    68,   245,   154,
       9,    38,   249,   250,     9,   252,    -1,    12,    13,    14,
       9,    16,   188,    12,    19,    14,     9,    16,    -1,    12,
      19,    14,   147,    16,    -1,    -1,    19,    -1,    -1,    -1,
      35,    36,    37,    -1,    -1,    -1,    35,    36,    37,    -1,
      -1,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    57,    -1,    59,    60,    61,    -1,    57,    -1,
      59,    60,    61,    -1,    57,    43,    59,    60,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    28,    56,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    20,    21,    22,    23,    24,    25,    60,
      61,    62,    63,    64,    20,    21,    22,    23,    24,    25,
      20,    21,    22,    23,    24,    25,    -1,    44,    51,    52,
      53,    -1,    -1,    39,    -1,    58,    -1,    60,    61,    62,
      63,    64,    51,    52,    53,    -1,    51,    52,    53,    -1,
      -1,    60,    61,    62,    63,    64,    61,    62,    63,    64,
      15,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    15,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    15,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    17,    18,    -1,    20,    21,    22,    23,
      24,    25,   126,   127,   128,   129,   130,   131
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    67,    60,     0,    68,    40,     6,    69,    70,
      84,    60,    85,    86,    98,    41,    57,    99,   100,     7,
      88,    86,    20,   101,    89,    90,    98,     8,    81,    51,
      52,    53,    61,    62,    63,    64,    87,     9,    12,    14,
      16,    19,    35,    36,    37,    58,    59,    61,    98,   100,
     102,   104,   105,   106,   107,   109,   110,   111,   114,   115,
      90,    20,    82,    83,    97,    98,     4,     5,    71,    72,
      73,    78,    79,    40,    28,    33,    43,    87,    98,   117,
     118,   119,   120,   101,   117,   117,    98,    43,    43,    43,
      61,   103,    26,    38,    43,    40,    28,    43,    47,    48,
      49,    50,    54,    56,    87,    91,    92,    95,    96,    98,
      83,    45,    46,    60,    60,    72,    78,    40,    40,   120,
     120,   117,    38,    41,    43,    10,    20,    21,    22,    23,
      24,    25,    27,    28,    31,    29,    30,    32,    34,    13,
      15,    55,    26,   120,   116,   117,   116,    46,   117,   117,
     116,    87,    97,    38,    93,    94,    97,    42,    40,    42,
      98,    91,    74,    80,    69,    69,    44,   117,    98,   116,
     102,   118,   118,   118,   118,   118,   118,   119,   119,   119,
     120,   120,   120,   120,   117,   102,    87,    98,   112,   113,
     117,    44,    44,    45,    44,   104,    39,    44,    42,    44,
      96,    58,    94,    46,    87,    98,    40,    43,    75,    75,
      40,    40,    39,    44,    11,   108,    46,    46,    58,   113,
      17,    18,   117,    26,    28,    87,    39,    91,     8,    76,
      77,    97,    46,   102,   102,   102,   117,   117,   117,    87,
      55,    40,    97,    40,    44,    46,    96,    40,    40,    15,
      15,    91,    46,    77,    96,   102,   102,    96
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
#line 36 "tiny.y"
    {   savedName1 = copyString(tokenString); ;}
    break;

  case 3:
#line 38 "tiny.y"
    {   (yyval) = (yyvsp[(5) - (6)]);
                            (yyval)->attr.name=savedName1;
                            savedTree = (yyval);
                        ;}
    break;

  case 4:
#line 43 "tiny.y"
    {
                            (yyval) = (yyvsp[(1) - (2)]);
                            (yyval)->sibling=(yyvsp[(2) - (2)]);
                        ;}
    break;

  case 5:
#line 48 "tiny.y"
    {
                            (yyval) = newDeclNode(DECL_ROUTINEHEAD);
                            (yyval) ->child[0]=(yyvsp[(1) - (4)]);
                            (yyval) ->child[1]=(yyvsp[(2) - (4)]);
                            (yyval) ->child[2]=(yyvsp[(3) - (4)]);
                            (yyval) ->child[3]=(yyvsp[(4) - (4)]);
                        ;}
    break;

  case 6:
#line 56 "tiny.y"
    {   (yyval)= NULL;;}
    break;

  case 7:
#line 58 "tiny.y"
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

  case 8:
#line 69 "tiny.y"
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

  case 9:
#line 79 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 10:
#line 80 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 11:
#line 83 "tiny.y"
    {
                            (yyval)=newDeclNode(DECL_FUNCTION);
                            (yyval)->attr.name=copyString( (yyvsp[(1) - (4)])->attr.name);
			
                            (yyval)->child[0]=(yyvsp[(1) - (4)])->child[1];
                            (yyval)->child[1]=(yyvsp[(1) - (4)])->child[0];
			    			(yyval)->child[2]=(yyvsp[(3) - (4)]);
			    			free((yyvsp[(1) - (4)]));
                        ;}
    break;

  case 12:
#line 94 "tiny.y"
    {   savedName=copyString(tokenString);;}
    break;

  case 13:
#line 96 "tiny.y"
    {
                            (yyval)=newDeclNode(DECL_FUNCTIONHEAD);
                            (yyval)->attr.name=savedName;
                            (yyval)->child[0]=(yyvsp[(4) - (6)]);
                            (yyval)->child[1]=(yyvsp[(6) - (6)]);
                        ;}
    break;

  case 14:
#line 104 "tiny.y"
    {(yyval)=NULL;;}
    break;

  case 15:
#line 106 "tiny.y"
    {(yyval)=(yyvsp[(2) - (3)]);;}
    break;

  case 16:
#line 109 "tiny.y"
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

  case 17:
#line 120 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (1)]); ;}
    break;

  case 18:
#line 123 "tiny.y"
    {
                            (yyval)=newDeclNode(DECL_VAR_PARA);
                            (yyval)->child[0]=(yyvsp[(2) - (4)]);
                            (yyval)->child[1]=(yyvsp[(4) - (4)]);
                        ;}
    break;

  case 19:
#line 129 "tiny.y"
    {
                            (yyval)=newDeclNode(DECL_VAL_PARA);
                            (yyval)->child[0]=(yyvsp[(1) - (3)]);
                            (yyval)->child[1]=(yyvsp[(3) - (3)]);
                        ;}
    break;

  case 20:
#line 136 "tiny.y"
    {
                            (yyval)=newDeclNode(DECL_PROCEDURE);
                            (yyval)->attr.name=copyString( (yyvsp[(1) - (4)])->attr.name);
                            (yyval)->child[0]=NULL;
                            (yyval)->child[1]=(yyvsp[(1) - (4)])->child[0];
			    			(yyval)->child[2]=(yyvsp[(3) - (4)]);
                            free((yyvsp[(1) - (4)]));
                        ;}
    break;

  case 21:
#line 146 "tiny.y"
    {   savedName=copyString(tokenString);;}
    break;

  case 22:
#line 148 "tiny.y"
    {   (yyval)=newDeclNode(DECL_PROCEDUREHEAD);
                            (yyval)->attr.name=savedName;
                            (yyval)->child[0]=(yyvsp[(4) - (4)]);
                        ;}
    break;

  case 23:
#line 154 "tiny.y"
    {   (yyval) = NULL;;}
    break;

  case 24:
#line 156 "tiny.y"
    {   (yyval)=(yyvsp[(2) - (2)]);;}
    break;

  case 25:
#line 159 "tiny.y"
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

  case 26:
#line 169 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 27:
#line 172 "tiny.y"
    {   (yyval)=newDeclNode(DECL_VAR);
                            (yyval)->child[0]=(yyvsp[(1) - (4)]);
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);


                        ;}
    break;

  case 28:
#line 180 "tiny.y"
    {   (yyval) = NULL; ;}
    break;

  case 29:
#line 182 "tiny.y"
    {   (yyval)=(yyvsp[(2) - (2)]); ;}
    break;

  case 30:
#line 185 "tiny.y"
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

  case 31:
#line 198 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (1)]); ;}
    break;

  case 32:
#line 201 "tiny.y"
    {
                            (yyval) = newDeclNode(DECL_CONST);
                            (yyval)->attr.name = copyString((yyvsp[(1) - (4)])->attr.name);
                            freeNode((yyvsp[(1) - (4)]));
                            (yyval)->child[0] = (yyvsp[(3) - (4)]);
                            (yyval)->type=(yyvsp[(3) - (4)])->type;
                        ;}
    break;

  case 33:
#line 210 "tiny.y"
    {
                            (yyval) = newExpNode(EXP_CONST);
                            (yyval)->type = EXPTYPE_INT;
                            (yyval)->attr.val = atoi(tokenString);
                        ;}
    break;

  case 34:
#line 216 "tiny.y"
    {
                            (yyval) = newExpNode(EXP_CONST);
                            (yyval)->type = EXPTYPE_REAL;
                            (yyval)->attr.real_val = atof(tokenString);
                        ;}
    break;

  case 35:
#line 222 "tiny.y"
    {
                            (yyval) = newExpNode(EXP_CONST);
                            (yyval)->type = EXPTYPE_CHAR;
                            (yyval)->attr.char_val = tokenString[1];
                        ;}
    break;

  case 36:
#line 228 "tiny.y"
    {
                            (yyval) = newExpNode(EXP_CONST);
                            (yyval)->type=EXPTYPE_STRING;
                            (yyval)->attr.string_val = (char*)malloc(strlen(tokenString)-1);
                            memmove((yyval)->attr.string_val,tokenString+1,strlen(tokenString)-2);
                            (yyval)->attr.string_val[strlen(tokenString)-2]='\0';
                        ;}
    break;

  case 37:
#line 236 "tiny.y"
    {
                            (yyval)=newExpNode(EXP_CONST);
                            (yyval)->type=EXPTYPE_BOOL;
                            (yyval)->attr.val=1;
                        ;}
    break;

  case 38:
#line 242 "tiny.y"
    {
                            (yyval)=newExpNode(EXP_CONST);
                            (yyval)->type=EXPTYPE_BOOL;
                            (yyval)->attr.val=0;
                        ;}
    break;

  case 39:
#line 248 "tiny.y"
    {
                            (yyval)=newExpNode(EXP_CONST);
                            (yyval)->type=EXPTYPE_INT;
                            (yyval)->attr.val=2147483647;
                        ;}
    break;

  case 40:
#line 255 "tiny.y"
    {   (yyval)=NULL;;}
    break;

  case 41:
#line 257 "tiny.y"
    {   (yyval)=(yyvsp[(2) - (2)]);;}
    break;

  case 42:
#line 260 "tiny.y"
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

  case 43:
#line 272 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 44:
#line 275 "tiny.y"
    {   (yyval)=newDeclNode(DECL_TYPE);
                            (yyval)->child[0]=(yyvsp[(1) - (4)]);
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 45:
#line 280 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 46:
#line 281 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 47:
#line 282 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 48:
#line 285 "tiny.y"
    {   (yyval)=(yyvsp[(2) - (3)]);;}
    break;

  case 49:
#line 288 "tiny.y"
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

  case 50:
#line 299 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 51:
#line 302 "tiny.y"
    {
                            (yyval)=newTypeNode(TYPE_RECORD);
                            (yyval)->child[0]=(yyvsp[(1) - (4)]);
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 52:
#line 309 "tiny.y"
    {
                            (yyval)=newTypeNode(TYPE_ARRAY);
                            (yyval)->child[0]=(yyvsp[(3) - (6)]);
                            (yyval)->child[1]=(yyvsp[(6) - (6)]);
                            (yyval)->type=EXPTYPE_ARRAY;
                         
                        ;}
    break;

  case 53:
#line 318 "tiny.y"
    {
                            (yyval)=newTypeNode(TYPE_SIMPLE_ID);
                            (yyval)->attr.name = copyString((yyvsp[(1) - (1)])->attr.name);
                            free((yyvsp[(1) - (1)]));
                        ;}
    break;

  case 54:
#line 324 "tiny.y"
    {   (yyval)=newTypeNode(TYPE_SIMPLE_ENUM);
                            (yyval)->child[0]=(yyvsp[(2) - (3)]);
							(yyval)->type=EXPTYPE_ENUM;
                        ;}
    break;

  case 55:
#line 329 "tiny.y"
    {   (yyval)=newTypeNode(TYPE_SIMPLE_LIMIT);
                            (yyval)->child[0]=(yyvsp[(1) - (3)]);
                            (yyval)->child[1]=(yyvsp[(3) - (3)]);
							(yyval)->type=EXPTYPE_LIMIT;
                        ;}
    break;

  case 56:
#line 335 "tiny.y"
    {
                            (yyval)=newTypeNode(TYPE_SIMPLE_LIMIT);
                            (yyval)->child[0]=(yyvsp[(2) - (4)]);
                            (yyval)->child[0]->attr.val *= -1;
                            (yyval)->child[1]=(yyvsp[(4) - (4)]);
							(yyval)->type=EXPTYPE_LIMIT;
                        ;}
    break;

  case 57:
#line 343 "tiny.y"
    {   (yyval)=newTypeNode(TYPE_SIMPLE_LIMIT);
                            (yyval)->child[0]=(yyvsp[(2) - (5)]);
                            (yyval)->child[0]->attr.val *=-1;
                            (yyval)->child[1]=(yyvsp[(5) - (5)]);
                            (yyval)->child[1]->attr.val *=-1;
							(yyval)->type=EXPTYPE_LIMIT;
                        ;}
    break;

  case 58:
#line 351 "tiny.y"
    {
                            (yyval)=newTypeNode(TYPE_SIMPLE_LIMIT);
                            (yyval)->child[0]=(yyvsp[(1) - (3)]);
                            (yyval)->child[1]=(yyvsp[(3) - (3)]);
							(yyval)->type=EXPTYPE_LIMIT;
                        ;}
    break;

  case 59:
#line 358 "tiny.y"
    {   (yyval)=newTypeNode(TYPE_SIMPLE_SYS);
                            (yyval)->type=EXPTYPE_INT;
                        ;}
    break;

  case 60:
#line 362 "tiny.y"
    {   (yyval)=newTypeNode(TYPE_SIMPLE_SYS);
                            (yyval)->type=EXPTYPE_BOOL;
                        ;}
    break;

  case 61:
#line 366 "tiny.y"
    {   (yyval)=newTypeNode(TYPE_SIMPLE_SYS);
                            (yyval)->type=EXPTYPE_REAL;
                        ;}
    break;

  case 62:
#line 370 "tiny.y"
    {   (yyval)=newTypeNode(TYPE_SIMPLE_SYS);
                            (yyval)->type=EXPTYPE_CHAR;
                        ;}
    break;

  case 63:
#line 375 "tiny.y"
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

  case 64:
#line 386 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (1)]); ;}
    break;

  case 65:
#line 389 "tiny.y"
    {   (yyval)=newExpNode(EXP_ID);
                            (yyval)->attr.name=copyString(tokenString);
                        ;}
    break;

  case 66:
#line 392 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 67:
#line 393 "tiny.y"
    {(yyval)=(yyvsp[(2) - (3)]);;}
    break;

  case 68:
#line 395 "tiny.y"
    {(yyval)=NULL;;}
    break;

  case 69:
#line 397 "tiny.y"
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

  case 70:
#line 410 "tiny.y"
    {   savedNum= atoi(tokenString);;}
    break;

  case 71:
#line 412 "tiny.y"
    {
                            (yyval)=newStmtNode(STMT_LABEL);
                            (yyval)->attr.val=savedNum;
                            (yyval)->child[0]=(yyvsp[(4) - (4)]);
                        ;}
    break;

  case 72:
#line 418 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 73:
#line 420 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 74:
#line 421 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 75:
#line 422 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 76:
#line 423 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 77:
#line 424 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 78:
#line 425 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 79:
#line 426 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 80:
#line 427 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 81:
#line 428 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 82:
#line 430 "tiny.y"
    {   (yyval)=newExpNode(EXP_OP);
			    (yyval)->attr.op = TOKEN_ASSIGN;	  
			    (yyval)->child[0] = (yyvsp[(1) - (3)]);
			    (yyval)->child[1] = (yyvsp[(3) - (3)]);
                        ;}
    break;

  case 83:
#line 436 "tiny.y"
    {  (yyval)=newExpNode(EXP_OP);
			   (yyval)->attr.op = TOKEN_ASSIGN;
			   (yyvsp[(1) - (6)])->type = EXPTYPE_ARRAY;
			   (yyvsp[(1) - (6)])->child[0] = (yyvsp[(3) - (6)]);
			   (yyval)->child[0] = (yyvsp[(1) - (6)]);
                           (yyval)->child[1] = (yyvsp[(6) - (6)]);
			  		
			;}
    break;

  case 84:
#line 446 "tiny.y"
    {   (yyval)=newStmtNode(STMT_GOTO);
                            (yyval)->attr.val=atoi(tokenString);
                        ;}
    break;

  case 85:
#line 451 "tiny.y"
    {   (yyval)=newStmtNode(STMT_IF);
                            (yyval)->child[0]=(yyvsp[(2) - (5)]);
                            (yyval)->child[1]=(yyvsp[(4) - (5)]);
                            (yyval)->child[2]=(yyvsp[(5) - (5)]);
                        ;}
    break;

  case 86:
#line 457 "tiny.y"
    {(yyval)=NULL;;}
    break;

  case 87:
#line 458 "tiny.y"
    {(yyval)=(yyvsp[(2) - (2)]);;}
    break;

  case 88:
#line 461 "tiny.y"
    {
                            (yyval)=newStmtNode(STMT_REPEAT);
                            (yyval)->child[0]=(yyvsp[(2) - (4)]);
                            (yyval)->child[1]=(yyvsp[(4) - (4)]);
                        ;}
    break;

  case 90:
#line 468 "tiny.y"
    {   (yyval)=newStmtNode(STMT_WHILE);
                            (yyval)->child[0]=(yyvsp[(2) - (4)]);
                            (yyval)->child[1]=(yyvsp[(4) - (4)]);
                        ;}
    break;

  case 91:
#line 473 "tiny.y"
    {   (yyval)=newStmtNode(STMT_CASE);
                            (yyval)->child[0]=(yyvsp[(2) - (5)]);
                            (yyval)->child[1]=(yyvsp[(4) - (5)]);
                        ;}
    break;

  case 92:
#line 478 "tiny.y"
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

  case 93:
#line 488 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 94:
#line 490 "tiny.y"
    {
                            (yyval)=newExpNode(EXP_CASE);
                            (yyval)->child[0]=(yyvsp[(1) - (4)]);
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 95:
#line 496 "tiny.y"
    {
                            (yyval)=newExpNode(EXP_CASE);
                            (yyval)->child[0]=(yyvsp[(1) - (4)]);
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 96:
#line 502 "tiny.y"
    {
                            (yyval)=newStmtNode(STMT_FOR);
                            (yyval)->child[0]=(yyvsp[(2) - (8)]);
                            (yyval)->child[1]=(yyvsp[(4) - (8)]);
                            (yyval)->child[2]=(yyvsp[(6) - (8)]);
                            (yyval)->child[3]=(yyvsp[(8) - (8)]);
                            (yyval)->attr.op=TOKEN_TO;
                        ;}
    break;

  case 97:
#line 511 "tiny.y"
    {
                            (yyval)=newStmtNode(STMT_FOR);
                            (yyval)->child[0]=(yyvsp[(2) - (8)]);
                            (yyval)->child[1]=(yyvsp[(4) - (8)]);
                            (yyval)->child[2]=(yyvsp[(6) - (8)]);
                            (yyval)->child[3]=(yyvsp[(8) - (8)]);
                            (yyval)->attr.op=TOKEN_DOWNTO;
                        ;}
    break;

  case 98:
#line 520 "tiny.y"
    {
							(yyval)=newExpNode(EXP_FUNC);
                            (yyval)->attr.name=copyString((yyvsp[(1) - (1)])->attr.name);
                            (yyval)->child[0]=(yyvsp[(1) - (1)]);
							(yyval)->child[1]=NULL;
                        ;}
    break;

  case 99:
#line 527 "tiny.y"
    {   (yyval)=newExpNode(EXP_FUNC);
                            (yyval)->attr.name=copyString((yyvsp[(1) - (4)])->attr.name);
                            (yyval)->child[0]=(yyvsp[(1) - (4)]);
			    (yyval)->child[1]=(yyvsp[(3) - (4)]);
							
                        ;}
    break;

  case 100:
#line 534 "tiny.y"
    {
                            (yyval)=newStmtNode(STMT_PROC_SYS);
                            (yyval)->attr.op=TOKEN_READ;
                            (yyval)->child[0]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 101:
#line 540 "tiny.y"
    {   (yyval)=newStmtNode(STMT_PROC_SYS);
                            (yyval)->attr.op=TOKEN_WRITE;
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 102:
#line 545 "tiny.y"
    {   (yyval)=newStmtNode(STMT_PROC_SYS);
                            (yyval)->attr.op=TOKEN_WRITELN;
                        ;}
    break;

  case 103:
#line 549 "tiny.y"
    {   (yyval)=newStmtNode(STMT_PROC_SYS);
                            (yyval)->attr.op=TOKEN_WRITELN;
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 104:
#line 554 "tiny.y"
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

  case 105:
#line 564 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 106:
#line 566 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_GE); ;}
    break;

  case 107:
#line 567 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_GT); ;}
    break;

  case 108:
#line 568 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_LE); ;}
    break;

  case 109:
#line 569 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_LT); ;}
    break;

  case 110:
#line 570 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_EQUAL); ;}
    break;

  case 111:
#line 571 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_UNEQUAL); ;}
    break;

  case 112:
#line 572 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 113:
#line 574 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_PLUS); ;}
    break;

  case 114:
#line 575 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_MINUS); ;}
    break;

  case 115:
#line 576 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_OR); ;}
    break;

  case 116:
#line 577 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 117:
#line 579 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_MUL); ;}
    break;

  case 118:
#line 580 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_DIV); ;}
    break;

  case 119:
#line 581 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_MOD); ;}
    break;

  case 120:
#line 582 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),TOKEN_AND); ;}
    break;

  case 121:
#line 583 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 122:
#line 586 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 123:
#line 588 "tiny.y"
    {   (yyval)=newExpNode(EXP_FUNC);
                            (yyval)->attr.name=copyString((yyvsp[(1) - (4)])->attr.name);
                            (yyval)->child[1]=(yyvsp[(3) - (4)]);
                        ;}
    break;

  case 124:
#line 592 "tiny.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 125:
#line 593 "tiny.y"
    {(yyval)=(yyvsp[(2) - (3)]);;}
    break;

  case 126:
#line 595 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(2) - (2)]),NULL,TOKEN_NOT);
                        ;}
    break;

  case 127:
#line 598 "tiny.y"
    {   (yyval)=newOpExpNode((yyvsp[(2) - (2)]),NULL,TOKEN_MINUS);
                        ;}
    break;

  case 128:
#line 601 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (4)]);
                            (yyval)->child[0]=(yyvsp[(3) - (4)]);
                            (yyval)->type=EXPTYPE_ARRAY;
                        ;}
    break;

  case 129:
#line 606 "tiny.y"
    {   (yyval)=(yyvsp[(1) - (3)]);
                            (yyval)->child[0]=(yyvsp[(3) - (3)]);
                            (yyval)->type=EXPTYPE_RECORD;
                        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2697 "tiny.tab.c"
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


#line 611 "tiny.y"


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

