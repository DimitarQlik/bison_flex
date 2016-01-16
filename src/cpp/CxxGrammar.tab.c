
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */


/* Line 189 of yacc.c  */
#line 73 "CxxGrammar.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ARROW = 258,
     ARROW_STAR = 259,
     DEC = 260,
     EQ = 261,
     GE = 262,
     INC = 263,
     LE = 264,
     LOG_AND = 265,
     LOG_OR = 266,
     NE = 267,
     SHL = 268,
     SHR = 269,
     ASS_ADD = 270,
     ASS_AND = 271,
     ASS_DIV = 272,
     ASS_MOD = 273,
     ASS_MUL = 274,
     ASS_OR = 275,
     ASS_SHL = 276,
     ASS_SHR = 277,
     ASS_SUB = 278,
     ASS_XOR = 279,
     DOT_STAR = 280,
     ELLIPSIS = 281,
     SCOPE = 282,
     PRIVATE = 283,
     PROTECTED = 284,
     PUBLIC = 285,
     BOOL = 286,
     CHAR = 287,
     DOUBLE = 288,
     FLOAT = 289,
     INT = 290,
     LONG = 291,
     SHORT = 292,
     SIGNED = 293,
     UNSIGNED = 294,
     VOID = 295,
     WCHAR_T = 296,
     CLASS = 297,
     ENUM = 298,
     NAMESPACE = 299,
     STRUCT = 300,
     TYPENAME = 301,
     UNION = 302,
     CONST = 303,
     VOLATILE = 304,
     AUTO = 305,
     EXPLICIT = 306,
     EXPORT = 307,
     EXTERN = 308,
     FRIEND = 309,
     INLINE = 310,
     MUTABLE = 311,
     REGISTER = 312,
     STATIC = 313,
     TEMPLATE = 314,
     TYPEDEF = 315,
     USING = 316,
     VIRTUAL = 317,
     ASM = 318,
     BREAK = 319,
     CASE = 320,
     CATCH = 321,
     CONST_CAST = 322,
     CONTINUE = 323,
     DEFAULT = 324,
     DELETE = 325,
     DO = 326,
     DYNAMIC_CAST = 327,
     ELSE = 328,
     FALSE = 329,
     FOR = 330,
     GOTO = 331,
     IF = 332,
     NEW = 333,
     OPERATOR = 334,
     REINTERPRET_CAST = 335,
     RETURN = 336,
     SIZEOF = 337,
     STATIC_CAST = 338,
     SWITCH = 339,
     THIS = 340,
     THROW = 341,
     TRUE = 342,
     TRY = 343,
     TYPEID = 344,
     WHILE = 345,
     CharacterLiteral = 346,
     FloatingLiteral = 347,
     Identifier = 348,
     IntegerLiteral = 349,
     NumberLiteral = 350,
     StringLiteral = 351,
     SHIFT_THERE = 352,
     REDUCE_HERE_MOSTLY = 353
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 212 "CxxGrammar.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4700

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  129
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  210
/* YYNRULES -- Number of rules.  */
#define YYNRULES  559
/* YYNRULES -- Number of states.  */
#define YYNSTATES  894

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   353

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    12,    26,   128,    29,     7,     9,    25,
      21,    22,     5,     3,    31,     4,    24,     6,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    16,    30,
      13,    15,    14,    23,    28,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    17,    27,    18,     8,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    19,    10,    20,    11,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    13,    17,    19,    21,    23,
      26,    29,    31,    34,    36,    39,    42,    45,    47,    49,
      52,    54,    57,    60,    62,    65,    67,    69,    71,    73,
      76,    81,    84,    87,    89,    92,    94,    97,    99,   101,
     103,   105,   107,   109,   111,   113,   115,   117,   119,   121,
     123,   125,   129,   132,   135,   139,   140,   142,   147,   156,
     164,   170,   175,   179,   183,   187,   191,   194,   197,   205,
     213,   221,   229,   232,   233,   235,   237,   241,   243,   246,
     249,   252,   256,   259,   262,   265,   268,   271,   273,   276,
     278,   281,   284,   288,   293,   296,   301,   304,   307,   310,
     313,   315,   319,   324,   325,   329,   331,   334,   336,   340,
     344,   346,   350,   354,   358,   360,   364,   368,   370,   374,
     378,   380,   384,   388,   392,   396,   398,   402,   406,   408,
     412,   414,   418,   420,   424,   426,   430,   432,   436,   438,
     444,   446,   450,   454,   456,   458,   460,   462,   464,   466,
     468,   470,   472,   474,   476,   478,   479,   481,   483,   487,
     489,   491,   495,   499,   503,   505,   509,   513,   515,   519,
     521,   525,   527,   531,   533,   537,   539,   543,   545,   551,
     553,   557,   559,   561,   565,   567,   571,   574,   576,   580,
     583,   585,   587,   589,   591,   593,   595,   597,   599,   603,
     608,   612,   616,   624,   625,   628,   635,   641,   649,   655,
     656,   658,   660,   666,   674,   683,   685,   688,   691,   695,
     699,   701,   706,   716,   717,   721,   729,   732,   734,   738,
     741,   743,   745,   747,   749,   751,   753,   755,   758,   760,
     762,   764,   766,   768,   770,   773,   775,   778,   781,   784,
     786,   789,   792,   794,   797,   799,   801,   804,   806,   809,
     811,   814,   816,   818,   821,   823,   826,   828,   831,   835,
     838,   840,   842,   844,   846,   848,   850,   852,   855,   857,
     859,   861,   863,   865,   867,   869,   871,   873,   875,   877,
     879,   881,   883,   886,   888,   890,   892,   894,   896,   898,
     900,   902,   904,   906,   908,   910,   912,   914,   916,   919,
     922,   926,   929,   932,   936,   941,   943,   947,   949,   953,
     954,   958,   960,   964,   967,   969,   973,   975,   979,   982,
     988,   992,   997,  1002,  1008,  1012,  1016,  1020,  1024,  1026,
    1028,  1031,  1033,  1036,  1038,  1040,  1043,  1045,  1048,  1049,
    1052,  1053,  1056,  1058,  1060,  1063,  1066,  1067,  1070,  1072,
    1073,  1075,  1078,  1082,  1087,  1090,  1094,  1098,  1099,  1101,
    1104,  1106,  1110,  1112,  1116,  1118,  1121,  1125,  1127,  1131,
    1133,  1135,  1137,  1140,  1142,  1144,  1148,  1151,  1153,  1156,
    1160,  1162,  1164,  1167,  1170,  1173,  1176,  1179,  1182,  1184,
    1188,  1192,  1195,  1197,  1199,  1201,  1205,  1210,  1213,  1220,
    1229,  1231,  1235,  1238,  1240,  1244,  1247,  1249,  1252,  1257,
    1263,  1268,  1272,  1275,  1277,  1279,  1281,  1285,  1294,  1295,
    1299,  1307,  1310,  1312,  1316,  1319,  1321,  1323,  1325,  1327,
    1329,  1331,  1334,  1337,  1340,  1343,  1347,  1351,  1355,  1357,
    1359,  1362,  1366,  1369,  1371,  1377,  1379,  1383,  1385,  1389,
    1391,  1394,  1397,  1399,  1401,  1403,  1406,  1409,  1412,  1413,
    1415,  1418,  1423,  1425,  1428,  1431,  1436,  1441,  1443,  1446,
    1448,  1450,  1452,  1454,  1456,  1458,  1460,  1462,  1464,  1466,
    1468,  1470,  1472,  1474,  1476,  1478,  1480,  1482,  1484,  1486,
    1488,  1490,  1492,  1494,  1496,  1498,  1500,  1502,  1504,  1506,
    1508,  1510,  1512,  1514,  1516,  1518,  1520,  1522,  1525,  1528,
    1531,  1534,  1539,  1541,  1545,  1547,  1551,  1553,  1557,  1559,
    1562,  1564,  1566,  1569,  1573,  1579,  1582,  1584,  1588,  1590,
    1595,  1599,  1601,  1604,  1610,  1612,  1614,  1617,  1619,  1622,
    1626,  1631,  1633,  1637,  1639,  1640,  1641,  1642,  1643,  1644
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     149,     0,    -1,   122,    -1,   130,    -1,   130,   132,     3,
     321,    14,    -1,   130,   132,     4,    -1,   320,    -1,    13,
      -1,    56,    -1,    88,   133,    -1,   131,    56,    -1,   131,
      -1,   134,   135,    -1,   135,    -1,   133,   135,    -1,    11,
     131,    -1,    88,   137,    -1,   304,    -1,   312,    -1,    88,
     138,    -1,   138,    -1,   134,   137,    -1,   134,   139,    -1,
     139,    -1,   133,   139,    -1,   136,    -1,   140,    -1,   137,
      -1,   232,    -1,   142,   232,    -1,   142,    56,    11,   142,
      -1,    11,   142,    -1,    88,   143,    -1,   143,    -1,   134,
     144,    -1,   144,    -1,   133,   145,    -1,   125,    -1,   123,
      -1,   120,    -1,   121,    -1,   146,    -1,   148,    -1,   103,
      -1,   116,    -1,   208,    -1,   147,    -1,   114,    -1,   222,
      -1,   151,    -1,   263,    -1,    17,   179,    18,    -1,    88,
     151,    -1,   266,    30,    -1,   152,   266,    30,    -1,    -1,
     150,    -1,   154,   263,   153,     4,    -1,   154,   263,   153,
       3,   152,   334,    19,     1,    -1,   154,   263,   153,     3,
     152,   334,     1,    -1,   154,   263,   153,     3,     1,    -1,
     154,    17,   179,    18,    -1,   154,    24,   141,    -1,   154,
      24,   145,    -1,   154,    32,   141,    -1,   154,    32,   145,
      -1,   154,    37,    -1,   154,    34,    -1,   101,    13,   259,
      14,    21,   180,    22,    -1,   112,    13,   259,    14,    21,
     180,    22,    -1,   109,    13,   259,    14,    21,   180,    22,
      -1,    96,    13,   259,    14,    21,   180,    22,    -1,   118,
     264,    -1,    -1,   156,    -1,   177,    -1,   156,    31,   177,
      -1,   154,    -1,    37,   164,    -1,    34,   164,    -1,   254,
     164,    -1,   223,   252,   164,    -1,     3,   164,    -1,     4,
     164,    -1,    12,   164,    -1,    11,   164,    -1,   111,   157,
      -1,   159,    -1,   133,   159,    -1,   158,    -1,   133,   158,
      -1,    99,   164,    -1,   107,   160,   163,    -1,   107,   264,
     160,   163,    -1,   107,   264,    -1,   107,   264,   264,   163,
      -1,   229,   256,    -1,   229,   161,    -1,   229,   160,    -1,
     254,   161,    -1,   162,    -1,    17,   180,    18,    -1,   162,
      17,   181,    18,    -1,    -1,    21,   155,    22,    -1,   157,
      -1,   151,   164,    -1,   164,    -1,   165,    54,   164,    -1,
     165,    33,   164,    -1,   165,    -1,   166,   252,   165,    -1,
     166,     6,   165,    -1,   166,     7,   165,    -1,   166,    -1,
     167,     3,   166,    -1,   167,     4,   166,    -1,   167,    -1,
     168,    42,   167,    -1,   168,    43,   167,    -1,   168,    -1,
     169,    13,   168,    -1,   169,    14,   168,    -1,   169,    38,
     168,    -1,   169,    36,   168,    -1,   169,    -1,   170,    35,
     169,    -1,   170,    41,   169,    -1,   170,    -1,   171,     9,
     170,    -1,   171,    -1,   172,     8,   171,    -1,   172,    -1,
     173,    10,   172,    -1,   173,    -1,   174,    39,   173,    -1,
     174,    -1,   175,    40,   174,    -1,   175,    -1,   175,    23,
     180,    16,   177,    -1,   176,    -1,   175,   178,   177,    -1,
     175,    15,   281,    -1,   328,    -1,    15,    -1,    44,    -1,
      45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,
      50,    -1,    51,    -1,    52,    -1,    53,    -1,    -1,   180,
      -1,   177,    -1,   156,    31,   177,    -1,   176,    -1,   168,
      -1,   182,    13,   168,    -1,   182,    38,   168,    -1,   182,
      36,   168,    -1,   182,    -1,   183,    35,   182,    -1,   183,
      41,   182,    -1,   183,    -1,   184,     9,   183,    -1,   184,
      -1,   185,     8,   184,    -1,   185,    -1,   186,    10,   185,
      -1,   186,    -1,   187,    39,   186,    -1,   187,    -1,   188,
      40,   187,    -1,   188,    -1,   188,    23,   191,    16,   190,
      -1,   189,    -1,   188,   178,   190,    -1,   329,    -1,   190,
      -1,   192,    31,   190,    -1,   190,    -1,   192,    31,   190,
      -1,   336,   194,    -1,   195,    -1,   332,     3,   194,    -1,
     332,     4,    -1,   196,    -1,   198,    -1,   206,    -1,   324,
      -1,   197,    -1,   200,    -1,   203,    -1,   205,    -1,   130,
      16,   193,    -1,    94,   181,    16,   193,    -1,    98,    16,
     193,    -1,    19,   199,    20,    -1,    19,   199,   193,   128,
     333,     1,    20,    -1,    -1,   199,   193,    -1,   199,   193,
     128,   333,     1,    30,    -1,   106,    21,   202,    22,   193,
      -1,   106,    21,   202,    22,   193,   102,   193,    -1,   113,
      21,   202,    22,   193,    -1,    -1,   202,    -1,   266,    -1,
     119,    21,   202,    22,   193,    -1,   100,   193,   119,    21,
     180,    22,    30,    -1,   104,    21,   204,   201,    30,   179,
      22,   193,    -1,   215,    -1,    93,    30,    -1,    97,    30,
      -1,   110,   179,    30,    -1,   105,   130,    30,    -1,   213,
      -1,    19,   335,   208,    20,    -1,    19,   335,   208,   338,
     209,   128,   333,     1,    20,    -1,    -1,   208,   338,   209,
      -1,   208,   338,   209,   128,   333,     1,    30,    -1,   337,
     210,    -1,   211,    -1,   332,     3,   210,    -1,   332,     4,
      -1,   213,    -1,   273,    -1,   314,    -1,   323,    -1,   212,
      -1,   249,    -1,   244,    -1,    88,   212,    -1,   215,    -1,
     214,    -1,   248,    -1,   245,    -1,   246,    -1,   247,    -1,
      88,   214,    -1,    30,    -1,   251,    30,    -1,   250,    30,
      -1,   226,   215,    -1,   232,    -1,   216,   232,    -1,   216,
     225,    -1,   216,    -1,    88,   217,    -1,   136,    -1,   230,
      -1,   218,   225,    -1,   218,    -1,   218,   216,    -1,   219,
      -1,   220,   219,    -1,   140,    -1,   220,    -1,   220,   140,
      -1,   217,    -1,   217,   221,    -1,   221,    -1,   220,    56,
      -1,   217,   220,    56,    -1,   217,    56,    -1,   227,    -1,
     228,    -1,    83,    -1,    89,    -1,   258,    -1,   224,    -1,
     224,    -1,    88,   226,    -1,    86,    -1,    87,    -1,    85,
      -1,    82,    -1,    79,    -1,    80,    -1,    84,    -1,    91,
      -1,   231,    -1,   230,    -1,   258,    -1,   289,    -1,   235,
      -1,   233,    -1,    88,   230,    -1,   136,    -1,   232,    -1,
      61,    -1,    70,    -1,    60,    -1,    66,    -1,    64,    -1,
      65,    -1,    67,    -1,    68,    -1,    63,    -1,    62,    -1,
      69,    -1,   286,    -1,   234,    -1,    75,   136,    -1,    72,
     136,    -1,    72,   136,   236,    -1,    72,   236,    -1,    19,
     237,    -1,    19,   241,   237,    -1,    19,   241,    31,   238,
      -1,    20,    -1,   333,     1,    20,    -1,    20,    -1,   333,
       1,    20,    -1,    -1,   333,     1,    31,    -1,   239,    -1,
     241,    31,   239,    -1,   240,   242,    -1,   243,    -1,   243,
      15,   181,    -1,   130,    -1,    73,   136,   207,    -1,    73,
     207,    -1,    73,   136,    15,   136,    30,    -1,    90,   141,
      30,    -1,    90,    75,   141,    30,    -1,    90,    73,   136,
      30,    -1,    92,    21,   146,    22,    30,    -1,    82,   146,
     209,    -1,    82,   146,   207,    -1,   177,    31,   251,    -1,
     250,    31,   251,    -1,   177,    -1,     5,    -1,   252,   258,
      -1,   252,    -1,   134,   253,    -1,     9,    -1,   253,    -1,
     133,   253,    -1,   254,    -1,   254,   255,    -1,    -1,   254,
     256,    -1,    -1,   257,   258,    -1,    77,    -1,    78,    -1,
     229,   260,    -1,   229,   259,    -1,    -1,   254,   260,    -1,
     262,    -1,    -1,   262,    -1,   261,   263,    -1,   261,    17,
      18,    -1,   261,    17,   181,    18,    -1,   264,   257,    -1,
     264,   257,   330,    -1,    21,   265,    22,    -1,    -1,   266,
      -1,   266,    55,    -1,   270,    -1,   266,    31,   270,    -1,
     255,    -1,   166,   252,   256,    -1,   267,    -1,   171,     9,
      -1,   171,     9,   267,    -1,   268,    -1,   268,    15,   177,
      -1,    55,    -1,   177,    -1,   269,    -1,   226,   270,    -1,
     190,    -1,   272,    -1,   272,    15,   190,    -1,   226,   271,
      -1,   267,    -1,   184,     9,    -1,   184,     9,   267,    -1,
     275,    -1,   274,    -1,   177,   277,    -1,   177,   279,    -1,
     226,   274,    -1,   276,   277,    -1,   276,   279,    -1,   226,
     275,    -1,   300,    -1,   276,    31,   177,    -1,   117,   278,
     325,    -1,   306,   279,    -1,   198,    -1,   177,    -1,   281,
      -1,    19,   282,    20,    -1,    19,   282,    31,    20,    -1,
      19,    20,    -1,    19,   283,   128,   333,     1,    20,    -1,
      19,   282,    31,   283,   128,   333,     1,    20,    -1,   283,
      -1,   282,    31,   283,    -1,   336,   284,    -1,   280,    -1,
     332,     3,   284,    -1,   332,     4,    -1,    16,    -1,   288,
     136,    -1,   288,   136,   285,     1,    -1,   288,   136,   285,
     301,    19,    -1,   288,    16,   301,    19,    -1,   288,   136,
      19,    -1,   288,    19,    -1,    71,    -1,    74,    -1,    76,
      -1,   287,   290,    20,    -1,   287,   290,   338,   291,   128,
     333,     1,    20,    -1,    -1,   290,   338,   291,    -1,   290,
     338,   291,   128,   333,     1,    30,    -1,   336,   292,    -1,
     293,    -1,   332,     3,   292,    -1,   332,     4,    -1,   297,
      -1,   294,    -1,   273,    -1,   246,    -1,   314,    -1,    30,
      -1,   177,    30,    -1,   276,    30,    -1,   295,    30,    -1,
     226,   294,    -1,   177,    31,   296,    -1,   276,    31,   300,
      -1,   295,    31,   296,    -1,   177,    -1,   300,    -1,   303,
      16,    -1,   177,    16,   299,    -1,    16,   299,    -1,   175,
      -1,   175,    23,   299,    16,   299,    -1,   298,    -1,   298,
      15,   280,    -1,   302,    -1,   301,    31,   302,    -1,   136,
      -1,   303,   302,    -1,    91,   302,    -1,    57,    -1,    58,
      -1,    59,    -1,   108,   305,    -1,   229,   256,    -1,   229,
     305,    -1,    -1,   307,    -1,    16,   308,    -1,    16,   308,
     333,     1,    -1,   310,    -1,   309,   310,    -1,   308,    31,
      -1,   308,   333,     1,    31,    -1,   311,    21,   155,    22,
      -1,   136,    -1,   108,   313,    -1,   107,    -1,    99,    -1,
       3,    -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,
      15,    -1,    13,    -1,    14,    -1,    44,    -1,    52,    -1,
      48,    -1,    46,    -1,    47,    -1,    53,    -1,    45,    -1,
      49,    -1,    42,    -1,    43,    -1,    51,    -1,    50,    -1,
      35,    -1,    41,    -1,    38,    -1,    36,    -1,    39,    -1,
      40,    -1,    37,    -1,    34,    -1,    31,    -1,    33,    -1,
      32,    -1,    21,    22,    -1,    17,    18,    -1,   315,   211,
      -1,    81,   314,    -1,    88,    13,   316,    14,    -1,   317,
      -1,   316,    31,   317,    -1,   318,    -1,   318,    15,   259,
      -1,   319,    -1,   319,    15,   130,    -1,   271,    -1,   333,
       1,    -1,    71,    -1,    75,    -1,   315,    71,    -1,   315,
      71,   130,    -1,    88,   130,    13,   321,    14,    -1,    88,
     320,    -1,   322,    -1,   321,    31,   322,    -1,   271,    -1,
      88,    13,    14,   211,    -1,   117,   198,   325,    -1,   326,
      -1,   326,   325,    -1,    95,    21,   327,    22,   198,    -1,
     270,    -1,   115,    -1,   115,   177,    -1,   115,    -1,   115,
     190,    -1,   115,    21,    22,    -1,   115,    21,   331,    22,
      -1,   259,    -1,   331,    31,   259,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   206,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   219,   220,   221,   222,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   241,   242,   243,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   269,   272,   273,
     274,   275,   276,   277,   278,   283,   315,   316,   317,   321,
     326,   327,   328,   335,   336,   337,   338,   340,   341,   343,
     345,   347,   351,   353,   354,   356,   357,   358,   359,   360,
     361,   362,   363,   366,   367,   368,   369,   371,   372,   373,
     374,   379,   381,   382,   383,   384,   385,   387,   388,   389,
     390,   394,   396,   397,   398,   400,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   417,   418,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,   453,
     459,   460,   461,   462,   463,   463,   463,   463,   463,   463,
     463,   463,   463,   463,   463,   468,   469,   470,   471,   472,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   488,   489,   491,   492,   494,   495,   497,   498,   500,
     501,   503,   504,   505,   507,   508,   515,   516,   517,   518,
     519,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   532,   533,   534,   535,   536,   540,   541,   542,   543,
     544,   545,   548,   549,   550,   552,   554,   555,   556,   557,
     558,   563,   564,   566,   567,   568,   569,   570,   571,   572,
     573,   574,   575,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   589,   590,   591,   592,   607,
     608,   609,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,   627,
     629,   630,   631,   632,   633,   635,   637,   638,   640,   640,
     640,   641,   642,   644,   645,   646,   648,   649,   650,   652,
     653,   654,   655,   656,   657,   658,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   669,   670,   671,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,   683,
     684,   685,   686,   687,   688,   689,   690,   692,   693,   694,
     696,   697,   699,   700,   701,   702,   708,   709,   710,   717,
     718,   719,   720,   721,   722,   723,   724,   725,   727,   728,
     730,   731,   732,   732,   735,   736,   739,   740,   741,   742,
     743,   744,   745,   746,   749,   750,   751,   753,   754,   755,
     756,   757,   765,   766,   767,   768,   769,   770,   771,   772,
     773,   774,   775,   779,   780,   781,   783,   784,   785,   786,
     792,   793,   794,   795,   796,   797,   798,   799,   800,   801,
     802,   803,   804,   812,   813,   814,   815,   816,   817,   818,
     820,   821,   822,   823,   824,   825,   840,   841,   842,   843,
     844,   845,   846,   847,   847,   847,   848,   849,   851,   852,
     853,   855,   856,   857,   858,   859,   860,   861,   864,   865,
     872,   873,   874,   875,   876,   877,   878,   879,   880,   883,
     884,   885,   886,   887,   889,   890,   891,   897,   898,   899,
     900,   901,   902,   902,   902,   907,   908,   909,   917,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   931,   941,
     942,   947,   948,   949,   950,   951,   952,   953,   954,   955,
     956,   957,   958,   959,   960,   961,   962,   963,   964,   965,
     966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
     976,   977,   978,   979,   980,   981,   982,   983,   984,   989,
     990,   991,   992,   993,   994,   995,   996,   997,   998,   999,
    1000,  1002,  1004,  1005,  1006,  1007,  1011,  1012,  1013,  1023,
    1028,  1030,  1031,  1032,  1033,  1035,  1036,  1037,  1038,  1039,
    1040,  1041,  1042,  1047,  1048,  1049,  1050,  1051,  1052,  1053
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "'&'", "'|'", "'~'", "'!'", "'<'", "'>'", "'='", "':'", "'['", "']'",
  "'{'", "'}'", "'('", "')'", "'?'", "'.'", "'\\''", "'\"'", "'\\\\'",
  "'@'", "'$'", "';'", "','", "ARROW", "ARROW_STAR", "DEC", "EQ", "GE",
  "INC", "LE", "LOG_AND", "LOG_OR", "NE", "SHL", "SHR", "ASS_ADD",
  "ASS_AND", "ASS_DIV", "ASS_MOD", "ASS_MUL", "ASS_OR", "ASS_SHL",
  "ASS_SHR", "ASS_SUB", "ASS_XOR", "DOT_STAR", "ELLIPSIS", "SCOPE",
  "PRIVATE", "PROTECTED", "PUBLIC", "BOOL", "CHAR", "DOUBLE", "FLOAT",
  "INT", "LONG", "SHORT", "SIGNED", "UNSIGNED", "VOID", "WCHAR_T", "CLASS",
  "ENUM", "NAMESPACE", "STRUCT", "TYPENAME", "UNION", "CONST", "VOLATILE",
  "AUTO", "EXPLICIT", "EXPORT", "EXTERN", "FRIEND", "INLINE", "MUTABLE",
  "REGISTER", "STATIC", "TEMPLATE", "TYPEDEF", "USING", "VIRTUAL", "ASM",
  "BREAK", "CASE", "CATCH", "CONST_CAST", "CONTINUE", "DEFAULT", "DELETE",
  "DO", "DYNAMIC_CAST", "ELSE", "FALSE", "FOR", "GOTO", "IF", "NEW",
  "OPERATOR", "REINTERPRET_CAST", "RETURN", "SIZEOF", "STATIC_CAST",
  "SWITCH", "THIS", "THROW", "TRUE", "TRY", "TYPEID", "WHILE",
  "CharacterLiteral", "FloatingLiteral", "Identifier", "IntegerLiteral",
  "NumberLiteral", "StringLiteral", "SHIFT_THERE", "REDUCE_HERE_MOSTLY",
  "'#'", "$accept", "identifier", "id", "template_test", "global_scope",
  "id_scope", "nested_id", "scoped_id", "destructor_id",
  "special_function_id", "nested_special_function_id",
  "scoped_special_function_id", "declarator_id", "built_in_type_id",
  "pseudo_destructor_id", "nested_pseudo_destructor_id",
  "scoped_pseudo_destructor_id", "string", "literal", "boolean_literal",
  "translation_unit", "primary_expression", "abstract_expression",
  "type1_parameters", "mark_type1", "postfix_expression",
  "expression_list.opt", "expression_list", "unary_expression",
  "delete_expression", "new_expression", "new_type_id", "new_declarator",
  "direct_new_declarator", "new_initializer.opt", "cast_expression",
  "pm_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression.opt", "expression", "constant_expression",
  "templated_relational_expression", "templated_equality_expression",
  "templated_and_expression", "templated_exclusive_or_expression",
  "templated_inclusive_or_expression", "templated_logical_and_expression",
  "templated_logical_or_expression", "templated_conditional_expression",
  "templated_assignment_expression", "templated_expression",
  "templated_expression_list", "looping_statement", "looped_statement",
  "statement", "control_statement", "labeled_statement",
  "compound_statement", "statement_seq.opt", "selection_statement",
  "condition.opt", "condition", "iteration_statement",
  "for_init_statement", "jump_statement", "declaration_statement",
  "compound_declaration", "declaration_seq.opt", "looping_declaration",
  "looped_declaration", "declaration", "specialised_declaration",
  "block_declaration", "specialised_block_declaration",
  "simple_declaration", "suffix_built_in_decl_specifier.raw",
  "suffix_built_in_decl_specifier", "suffix_named_decl_specifier",
  "suffix_named_decl_specifier.bi", "suffix_named_decl_specifiers",
  "suffix_named_decl_specifiers.sf", "suffix_decl_specified_ids",
  "suffix_decl_specified_scope", "decl_specifier_affix",
  "decl_specifier_suffix", "decl_specifier_prefix",
  "storage_class_specifier", "function_specifier", "type_specifier",
  "elaborate_type_specifier", "simple_type_specifier",
  "built_in_type_specifier", "elaborated_type_specifier",
  "elaborated_enum_specifier", "enum_specifier", "enumerator_clause",
  "enumerator_list_ecarb", "enumerator_definition_ecarb",
  "enumerator_definition_filler", "enumerator_list_head",
  "enumerator_list", "enumerator_definition", "enumerator",
  "namespace_definition", "namespace_alias_definition",
  "using_declaration", "using_directive", "asm_definition",
  "linkage_specification", "init_declarations", "init_declaration",
  "star_ptr_operator", "nested_ptr_operator", "ptr_operator",
  "ptr_operator_seq", "ptr_operator_seq.opt", "cv_qualifier_seq.opt",
  "cv_qualifier", "type_id", "abstract_declarator.opt",
  "direct_abstract_declarator.opt", "direct_abstract_declarator",
  "parenthesis_clause", "parameters_clause",
  "parameter_declaration_clause", "parameter_declaration_list",
  "abstract_pointer_declaration", "abstract_parameter_declaration",
  "special_parameter_declaration", "parameter_declaration",
  "templated_parameter_declaration", "templated_abstract_declaration",
  "function_definition", "func_definition", "ctor_definition",
  "constructor_head", "function_try_block", "function_block",
  "function_body", "initializer_clause", "braced_initializer",
  "initializer_list", "looping_initializer_clause",
  "looped_initializer_clause", "colon_mark", "elaborated_class_specifier",
  "class_specifier_head", "class_key", "class_specifier",
  "member_specification.opt", "looping_member_declaration",
  "looped_member_declaration", "member_declaration",
  "simple_member_declaration", "member_init_declarations",
  "member_init_declaration", "accessibility_specifier",
  "bit_field_declaration", "bit_field_width", "bit_field_init_declaration",
  "base_specifier_list", "base_specifier", "access_specifier",
  "conversion_function_id", "conversion_type_id", "ctor_initializer.opt",
  "ctor_initializer", "mem_initializer_list", "mem_initializer_list_head",
  "mem_initializer", "mem_initializer_id", "operator_function_id",
  "operator", "template_declaration", "template_parameter_clause",
  "template_parameter_list", "template_parameter", "simple_type_parameter",
  "templated_type_parameter", "template_id", "template_argument_list",
  "template_argument", "explicit_specialization", "try_block",
  "handler_seq", "handler", "exception_declaration", "throw_expression",
  "templated_throw_expression", "exception_specification", "type_id_list",
  "advance_search", "bang", "mark", "nest", "start_search",
  "start_search1", "util", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    43,    45,    42,    47,    37,    94,    38,
     124,   126,    33,    60,    62,    61,    58,    91,    93,   123,
     125,    40,    41,    63,    46,    39,    34,    92,    64,    36,
      59,    44,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,    35
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   129,   130,   131,   131,   131,   131,   132,   133,   133,
     134,   135,   135,   136,   136,   137,   137,   138,   138,   138,
     139,   139,   139,   140,   140,   141,   141,   141,   142,   142,
     143,   143,   143,   144,   144,   145,   145,   146,   147,   147,
     147,   147,   147,   148,   148,   149,   150,   150,   150,   150,
     151,   151,   151,   152,   152,   153,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   155,   155,   156,   156,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   158,   159,   159,   159,   159,   160,   160,   160,   161,
     161,   162,   162,   163,   163,   164,   164,   165,   165,   165,
     166,   166,   166,   166,   167,   167,   167,   168,   168,   168,
     169,   169,   169,   169,   169,   170,   170,   170,   171,   171,
     172,   172,   173,   173,   174,   174,   175,   175,   176,   176,
     177,   177,   177,   177,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   179,   179,   180,   180,   181,
     182,   182,   182,   182,   183,   183,   183,   184,   184,   185,
     185,   186,   186,   187,   187,   188,   188,   189,   189,   190,
     190,   190,   191,   191,   192,   192,   193,   194,   194,   194,
     195,   195,   195,   195,   196,   196,   196,   196,   197,   197,
     197,   198,   198,   199,   199,   199,   200,   200,   200,   201,
     201,   202,   203,   203,   203,   204,   205,   205,   205,   205,
     206,   207,   207,   208,   208,   208,   209,   210,   210,   210,
     211,   211,   211,   211,   211,   212,   212,   212,   213,   213,
     214,   214,   214,   214,   214,   215,   215,   215,   215,   216,
     216,   216,   217,   217,   218,   218,   218,   219,   219,   220,
     220,   221,   221,   221,   222,   222,   222,   223,   223,   223,
     224,   224,   224,   224,   224,   225,   226,   226,   227,   227,
     227,   227,   227,   228,   228,   228,   229,   229,   229,   230,
     230,   230,   230,   231,   231,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   233,   233,   233,   234,
     235,   235,   236,   236,   236,   237,   237,   238,   238,   239,
     239,   240,   240,   241,   242,   242,   243,   244,   244,   245,
     246,   246,   247,   248,   249,   249,   250,   250,   251,   252,
     252,   253,   253,   254,   254,   254,   255,   255,   256,   256,
     257,   257,   258,   258,   259,   259,   260,   260,   260,   261,
     261,   262,   262,   262,   263,   263,   264,   265,   265,   265,
     266,   266,   267,   267,   268,   268,   268,   269,   269,   269,
     270,   270,   270,   271,   271,   271,   271,   272,   272,   272,
     273,   273,   274,   274,   274,   275,   275,   275,   276,   276,
     277,   278,   279,   280,   280,   281,   281,   281,   281,   281,
     282,   282,   283,   284,   284,   284,   285,   286,   286,   287,
     287,   287,   287,   288,   288,   288,   289,   289,   290,   290,
     290,   291,   292,   292,   292,   293,   293,   293,   293,   293,
     294,   294,   294,   294,   294,   295,   295,   295,   296,   296,
     297,   298,   298,   299,   299,   300,   300,   301,   301,   302,
     302,   302,   303,   303,   303,   304,   305,   305,   306,   306,
     307,   307,   308,   308,   309,   309,   310,   311,   312,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   314,
     314,   315,   316,   316,   317,   317,   317,   317,   317,   317,
     318,   318,   319,   319,   320,   320,   321,   321,   322,   323,
     324,   325,   325,   326,   327,   328,   328,   329,   329,   330,
     330,   331,   331,   332,   333,   334,   335,   336,   337,   338
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     5,     3,     1,     1,     1,     2,
       2,     1,     2,     1,     2,     2,     2,     1,     1,     2,
       1,     2,     2,     1,     2,     1,     1,     1,     1,     2,
       4,     2,     2,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     3,     0,     1,     4,     8,     7,
       5,     4,     3,     3,     3,     3,     2,     2,     7,     7,
       7,     7,     2,     0,     1,     1,     3,     1,     2,     2,
       2,     3,     2,     2,     2,     2,     2,     1,     2,     1,
       2,     2,     3,     4,     2,     4,     2,     2,     2,     2,
       1,     3,     4,     0,     3,     1,     2,     1,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     3,     1,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1,     3,     1,     3,     2,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     3,     7,     0,     2,     6,     5,     7,     5,     0,
       1,     1,     5,     7,     8,     1,     2,     2,     3,     3,
       1,     4,     9,     0,     3,     7,     2,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     2,     2,     1,
       2,     2,     1,     2,     1,     1,     2,     1,     2,     1,
       2,     1,     1,     2,     1,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     2,     2,     3,     4,     1,     3,     1,     3,     0,
       3,     1,     3,     2,     1,     3,     1,     3,     2,     5,
       3,     4,     4,     5,     3,     3,     3,     3,     1,     1,
       2,     1,     2,     1,     1,     2,     1,     2,     0,     2,
       0,     2,     1,     1,     2,     2,     0,     2,     1,     0,
       1,     2,     3,     4,     2,     3,     3,     0,     1,     2,
       1,     3,     1,     3,     1,     2,     3,     1,     3,     1,
       1,     1,     2,     1,     1,     3,     2,     1,     2,     3,
       1,     1,     2,     2,     2,     2,     2,     2,     1,     3,
       3,     2,     1,     1,     1,     3,     4,     2,     6,     8,
       1,     3,     2,     1,     3,     2,     1,     2,     4,     5,
       4,     3,     2,     1,     1,     1,     3,     8,     0,     3,
       7,     2,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     3,     3,     1,     1,
       2,     3,     2,     1,     5,     1,     3,     1,     3,     1,
       2,     2,     1,     1,     1,     2,     2,     2,     0,     1,
       2,     4,     1,     2,     2,     4,     4,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     4,     1,     3,     1,     3,     1,     3,     1,     2,
       1,     1,     2,     3,     5,     2,     1,     3,     1,     4,
       3,     1,     2,     5,     1,     1,     2,     1,     2,     3,
       4,     1,     3,     1,     0,     0,     0,     0,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     223,     0,   559,     1,   558,   224,     0,   554,   553,     0,
       0,   339,   343,     0,     0,     0,   155,   367,   245,     0,
       0,     8,   297,   295,   304,   303,   299,   300,   298,   301,
     302,   305,   296,   423,     0,     0,   424,     0,   425,   352,
     353,   282,   283,     0,   281,   272,   284,   280,   278,   279,
       0,   273,     0,   285,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,    47,   545,    44,     0,    39,    40,
       2,    38,    37,     3,    11,     0,     0,    13,   254,    20,
      23,   261,    41,    46,    42,    56,    49,    77,   105,    89,
      87,   107,   110,   114,   117,   120,   125,   128,   130,   132,
     134,   136,   138,   140,   338,   226,   227,   234,   230,   239,
     238,   252,   264,   257,   259,   262,   266,    48,     0,   276,
       0,   270,   271,   255,   249,   291,   307,   290,   236,   241,
     242,   243,   240,   235,     0,     0,   341,   344,     0,   274,
      50,   350,   231,   391,   390,     0,   306,   428,     0,   289,
     455,   398,    17,    18,   232,     0,     6,   233,   143,     0,
       0,     0,    82,    83,    85,    84,   453,   452,     0,   157,
       0,   156,   379,   281,     0,   114,   130,   380,     0,   346,
     372,     0,   368,   374,   377,   381,   370,    79,    78,   319,
       0,     0,     0,   309,   311,   556,     0,   328,   308,     0,
     520,   558,   554,     0,     0,     9,    19,    52,   237,   244,
     253,   277,   292,   535,     0,     0,     0,     0,     0,     0,
      25,    27,    26,     0,     0,     0,    91,     0,     0,   293,
     103,   348,   287,   286,   294,   288,    94,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   492,   493,   491,
       0,     0,   514,   516,   515,   513,   506,   509,   512,   508,
     510,   511,   507,   502,   503,   494,   500,   497,   498,   496,
     501,   505,   504,   495,   499,   480,   479,   348,   465,   478,
       0,    49,    86,     0,   546,    72,     7,     0,    10,     0,
      14,    24,    90,    88,   345,     0,    12,    21,    22,   342,
     106,   155,     0,     0,    67,    66,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,     0,     0,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
       0,   203,     0,   468,   402,   392,   393,   275,   251,   250,
       8,     0,   262,   265,   258,   256,     8,   263,   260,     0,
     248,   394,   397,   247,     0,   246,   340,    80,   364,     0,
     395,   396,   559,     0,   422,   417,     0,   519,     0,   229,
       0,     0,     0,    51,   348,   375,   382,   347,   366,     0,
     369,     0,   315,   312,   321,     0,   554,     0,     0,   310,
     223,     0,   327,   554,   335,   334,     0,   423,   531,     0,
     547,   160,   164,   167,   169,   171,   173,   175,   177,   179,
     383,     0,   387,   528,   384,     0,     0,   522,   524,   526,
     181,     0,     0,    15,     0,     0,    16,   330,     0,   356,
       0,     0,    73,    92,     0,     0,     0,    98,    97,   100,
     348,    96,   103,   103,   518,   517,   348,   466,   467,     0,
       0,     0,     5,     0,     0,     0,     0,     0,    62,     0,
      33,    35,    63,    28,    64,    65,     0,   109,   108,   112,
     113,   111,   115,   116,   118,   119,   121,   122,   124,   123,
     126,   127,   129,   131,   133,   135,   557,   142,     0,   137,
     141,   451,   557,   338,   336,     0,     0,     0,   469,     8,
      81,   337,     0,   351,   365,   399,   426,   557,   462,   463,
     464,     0,   459,     0,   457,     0,   416,   421,     0,   403,
     456,   404,   228,   225,     0,   158,   348,   373,   376,   371,
     378,   326,   323,   324,   319,   313,     0,     0,   559,     0,
     539,   169,   548,     0,     0,     0,     0,     0,   388,     0,
       0,     0,   144,     0,     0,     0,   386,     0,   532,   521,
     554,     0,     0,   529,   538,     0,   536,   332,   331,     0,
     356,   355,   354,     0,   358,     0,     0,     0,    74,    75,
       0,     0,     0,     0,     0,    99,   349,    93,    95,     0,
       0,     0,    61,    31,    32,     0,     0,     0,    36,     0,
      34,     0,    29,     0,    57,   407,     0,   410,     0,     0,
     201,   204,     0,   477,   470,     0,   472,     0,     0,   400,
     541,   401,     0,   429,     0,   461,   420,     0,   460,   418,
       0,     0,     0,   317,   314,   322,     0,     0,   316,   320,
     221,   558,   329,     0,   161,   163,   162,   165,   166,   168,
     389,   170,   172,   174,   182,     0,     0,   176,   180,   385,
     533,   523,   525,   527,   534,     0,   333,   357,     0,   361,
       0,     0,   104,     0,   101,   138,   159,     0,     0,     0,
       4,     0,     0,     0,    60,   555,     0,   405,   557,   554,
     413,   412,     0,   139,   554,     0,     0,     0,     0,     0,
       0,   557,     0,     0,     0,   155,     0,     0,     0,     3,
     338,   186,   187,   190,   194,   191,   195,   196,   197,   192,
     220,     0,   193,     0,   474,     0,   473,    73,     0,   542,
     549,   551,     0,   554,   440,     0,     0,     0,   438,   437,
       0,   431,   432,   436,     0,   435,     0,   439,     0,   458,
     419,   454,   325,     0,   224,     0,     0,   537,   362,     0,
       0,     0,    76,   102,     0,     0,     0,    30,     0,     0,
      53,   406,   411,     0,     0,   415,     0,     0,   216,     0,
     217,   557,     0,     0,     0,     0,     0,     0,     0,     0,
     557,     0,   189,   471,     0,   544,     0,   550,     0,     0,
     441,     0,   444,   442,     0,   443,     0,   450,     0,   434,
     318,   554,   178,   183,   363,    71,    68,    70,    69,    54,
      59,     0,   554,     0,   414,     0,   557,   200,     0,   209,
     215,   219,     0,   211,   218,     0,   540,     0,   198,   188,
     475,   476,     0,   552,     0,   448,   445,   449,   399,   446,
     447,   433,     0,    58,     0,   408,   202,   205,   199,     0,
       0,   210,   557,   557,   557,   543,   427,   430,     0,     0,
       0,   155,   206,   208,   212,   222,   409,     0,     0,   557,
     213,   557,   207,   214
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    73,    74,   287,    75,    76,    77,    78,   221,    79,
      80,    81,   223,   469,   470,   471,   608,    82,    83,    84,
       1,    85,    86,   695,   476,    87,   587,   168,    88,    89,
      90,   230,   448,   449,   443,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   169,   339,
     170,   171,   687,   412,   413,   551,   415,   416,   417,   418,
     419,   420,   665,   666,   621,   721,   722,   723,   724,   344,
     502,   726,   870,   842,   727,   839,   728,   729,   197,     2,
       5,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   348,   178,   121,   122,
     439,   123,   233,   124,   125,   126,   127,   194,   393,   644,
     394,   395,   396,   542,   543,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   180,   596,   368,   139,
     440,   582,   583,   584,   140,   141,   181,   843,   183,   184,
     185,   186,   423,   424,   142,   143,   144,   145,   345,   506,
     346,   700,   531,   616,   617,   701,   528,   146,   147,   148,
     149,   372,   633,   751,   752,   753,   754,   856,   755,   150,
     167,   151,   523,   524,   525,   152,   278,   507,   508,   624,
     625,   626,   627,   153,   279,   154,   155,   426,   427,   428,
     429,   156,   575,   576,   157,   732,   629,   630,   806,   158,
     430,   514,   742,   159,   431,   779,   400,   622,     6,     4
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -683
static const yytype_int16 yypact[] =
{
    -683,    55,    90,  -683,  -683,     7,  1757,  -683,  -683,  3848,
    3848,  -683,  -683,  3848,  3848,  3848,  3479,  2495,  -683,  3848,
    3848,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,    54,   517,  -683,    32,  -683,  -683,
    -683,  -683,  -683,   271,    94,  -683,  -683,  -683,  -683,  -683,
    4107,  -683,   426,  -683,   295,   317,  3848,   326,  -683,  4514,
    3971,   344,  3848,   354,  -683,  3479,  -683,   356,  -683,  -683,
    -683,  -683,  -683,   386,   406,   462,   209,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,  -683,  4039,   686,  -683,  -683,
    -683,  -683,    89,   573,   428,   445,   299,   361,   459,   473,
     484,   491,  1512,  -683,   487,  -683,  -683,  -683,  -683,  -683,
    -683,  1842,   819,  1842,  -683,  1146,  -683,  -683,   530,  -683,
    2249,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,   478,   513,   446,  -683,  3848,  -683,
    -683,  -683,  -683,  -683,  -683,   303,  -683,  -683,    67,  -683,
     525,  -683,  -683,  -683,  -683,  2126,  -683,  -683,  -683,   605,
     548,  4485,  -683,  -683,  -683,  -683,   205,  -683,   521,   524,
     542,  -683,  -683,  -683,  4412,   573,   554,  -683,  2495,  3848,
    -683,   543,    77,  -683,   553,  -683,  -683,  -683,  -683,   168,
      32,   -24,   -24,   567,  -683,  -683,   399,  -683,  -683,   576,
    -683,   584,  2618,  4260,   579,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,   -24,    32,   355,   355,    36,   463,
    -683,  -683,  -683,   565,    94,  4578,  -683,  4578,   575,  -683,
     585,  1075,  -683,  -683,  -683,  -683,  4514,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
     593,   598,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,  -683,  -683,  1411,  -683,  -683,
    4578,  -683,  -683,  4578,  -683,  -683,  -683,   619,  -683,    36,
    -683,  -683,  -683,  -683,  -683,   463,  -683,  -683,  -683,  -683,
    -683,  3479,   983,   983,  -683,  -683,  -683,  3848,  3848,  3848,
    3848,  3110,  3848,  3848,  3848,  3848,  3848,  3848,  3848,  3848,
    3848,  3848,  3848,  3848,  3848,  3848,   596,  3479,  3848,  -683,
    -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  3479,
    3848,  -683,  3479,   608,  -683,  -683,  -683,  -683,  -683,  -683,
     625,  1203,  1319,  -683,  1842,  -683,   631,  -683,  -683,  3110,
    -683,  -683,  -683,  -683,  3479,  -683,  -683,  -683,    53,  3479,
    -683,  -683,   620,   791,  -683,   180,  3233,  -683,  1757,  -683,
     622,  3848,  3479,  -683,  3110,  3848,  -683,  -683,  -683,  2495,
    -683,  3479,  -683,  -683,  -683,   534,    73,   661,   -24,  -683,
    -683,    32,  -683,  2864,  -683,  -683,  2126,   125,    32,  4187,
    3602,   445,   368,   417,   663,   678,   668,   649,  1629,  -683,
    -683,  2987,  -683,  -683,   694,   643,   134,  -683,   702,   704,
    -683,   723,  2987,  -683,   706,   707,  -683,  -683,   720,   905,
     730,   731,  3479,  -683,  3479,    57,    57,  -683,  -683,   729,
     410,  -683,   585,   585,  -683,  -683,   510,  -683,  -683,   733,
     735,  2987,  -683,   737,  3072,   983,  1104,  1275,  -683,  1736,
    -683,  -683,  -683,  -683,  -683,  -683,   639,  -683,  -683,    89,
      89,    89,   573,   573,   428,   428,   445,   445,   445,   445,
     299,   299,   361,   459,   473,   484,   736,  -683,   744,   491,
    -683,  -683,   742,  -683,  -683,    32,   658,   732,  -683,   758,
    -683,  -683,   745,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,   791,  -683,   257,  -683,   791,  -683,  -683,   223,  -683,
    -683,  -683,  -683,  -683,   753,   739,  3848,  -683,  -683,  -683,
    -683,  -683,  -683,   757,   196,  -683,   772,   181,   755,   760,
    -683,   776,  -683,  3848,  3848,  3848,  3848,  3848,  3848,  3848,
    3848,  3848,  -683,  3602,  3848,  3602,  -683,  3602,   534,  -683,
    2864,  4578,   534,  -683,  -683,   263,  -683,  -683,  -683,   767,
      82,  -683,  -683,   427,   560,   778,   780,   785,   771,  -683,
     793,  3848,   406,    57,    57,  -683,  -683,  -683,  -683,   788,
     792,   292,  -683,  1981,  -683,  1981,  1104,  1304,  -683,  1275,
    -683,   803,  -683,  1880,  -683,  -683,   318,   687,  2003,  3479,
    -683,   690,  1511,  -683,    78,    32,  -683,   799,   800,  -683,
     658,  -683,  4549,   701,  1634,  -683,  -683,   791,  -683,  -683,
     313,  3848,  3848,  -683,  -683,  -683,   830,   812,  -683,  -683,
    -683,  -683,  -683,  3848,   445,   445,   445,   368,   368,   417,
    -683,   776,   678,   668,   804,   818,   807,   649,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,  2987,  -683,  -683,  3725,  -683,
    3479,  3479,  -683,  3479,  -683,   302,  -683,   825,  3479,  3479,
    -683,  1304,  1966,  1981,  -683,  2495,   624,  -683,   831,  -683,
    -683,  -683,   662,  -683,  -683,    32,  4336,   815,  3848,   823,
     839,  -683,   835,   534,   837,  3479,   840,   732,   842,   494,
     829,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,  2741,  -683,   665,  -683,   865,  -683,  3479,  2495,  -683,
    -683,  -683,   252,  -683,  -683,   766,   363,  2372,  -683,  -683,
     254,  -683,  -683,  -683,   644,  -683,   851,  -683,   692,  -683,
    -683,  -683,  -683,   333,   740,  3602,  3602,  -683,  -683,   852,
     856,   863,  -683,  -683,   864,   874,  1966,  1981,   670,   133,
    -683,  -683,   769,   897,  2003,  -683,   898,   885,  -683,   886,
    -683,  -683,   782,  2741,   873,  2495,   876,  2495,   658,  2495,
    -683,  1511,  -683,   877,   882,  -683,   887,  -683,  4578,   910,
    -683,  3356,  -683,  -683,  3356,  -683,  3356,  -683,  1634,  -683,
    -683,  -683,  -683,   881,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,   914,  -683,   896,  -683,   106,  -683,  -683,   900,  2495,
    -683,  -683,   901,   888,  -683,   902,  -683,   903,  -683,  -683,
    -683,  -683,   732,  -683,   131,   912,  -683,  -683,   912,  -683,
    -683,  -683,   928,  -683,   929,  -683,  -683,  -683,  -683,  3479,
     904,  -683,  -683,  -683,  -683,  -683,  -683,  -683,   331,   911,
     913,  3479,   836,  -683,  -683,  -683,  -683,   907,   918,  -683,
    -683,  -683,  -683,  -683
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -683,    61,  -102,  -683,   656,   805,    19,    16,   -37,    52,
      30,   -43,   139,  -431,  -416,  -420,   402,   -21,  -683,  -683,
    -683,  -683,    -8,  -683,  -683,  -683,   207,  -410,   880,   870,
     871,   259,   497,  -683,   260,    21,   -19,   -11,   414,   891,
     413,  -238,    -3,   626,   623,   621,     3,  -413,    -6,   533,
    -280,  -242,  -562,   183,  -493,   101,   392,   394,   393,  -683,
    -683,  -358,  -683,  -683,  -298,   155,  -683,  -683,  -683,  -584,
    -683,  -683,  -683,  -682,  -683,  -683,  -683,  -683,   315,   563,
    -182,   582,  -135,    63,  -593,   -26,  -117,   872,    24,  -683,
     -89,   866,   879,  -683,  -683,   -68,   889,    51,  -683,  -683,
      69,   248,  -683,   523,  -683,  -683,  -683,   802,   568,  -683,
     440,  -683,  -683,  -683,  -683,  -683,  -683,  -588,  -683,  -683,
    -683,  -683,  -223,   -57,   -48,   -16,   820,  -150,  -683,   -44,
    -183,   418,  -683,  -683,   -70,     4,  -683,   -13,    68,  -683,
    -683,  -171,  -365,  -683,  -576,  -112,  -110,  -597,  -133,  -683,
    -132,   610,   674,  -683,   305,   217,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,   187,  -683,   262,  -683,   190,  -683,  -683,
    -315,  -258,   483,  -443,  -574,  -683,   738,  -683,  -683,  -683,
    -683,   387,  -683,  -683,  -683,   -38,  -180,  -683,   443,  -683,
    -683,   715,   555,   339,  -683,  -683,  -541,  -683,  -683,  -683,
    -683,  -683,  -683,  -497,    -5,  -683,  -683,  -448,  -683,  -302
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -555
static const yytype_int16 yytable[] =
{
     104,   179,   160,   360,   182,   200,   175,   386,   361,   222,
     362,   177,   370,   371,   176,   235,   235,   306,   166,   405,
     377,   463,   425,   201,   209,   501,   358,   294,   299,   730,
     162,   163,   588,   603,   164,   165,   311,   750,   725,   297,
     187,   188,   207,   347,   441,   347,   748,   610,   618,   604,
     193,   196,   552,   198,   281,     3,   566,   120,   749,   284,
     756,   359,    11,   236,   398,   659,   534,   574,   220,   634,
     517,   285,   357,   189,   210,   229,   229,   226,   635,  -554,
     762,   451,   638,   373,   492,   498,   374,    11,    21,   739,
     -45,    12,   366,   392,   290,   296,   574,   459,    70,  -359,
     460,   211,   206,  -359,   544,   291,   298,   300,   389,   734,
      21,   204,   433,   208,   104,   845,   769,   847,   384,   504,
     190,   702,   307,    21,   289,   733,   866,   457,   231,   277,
      39,    40,   390,   798,   830,     7,   867,   758,    21,  -530,
    -530,   511,   190,   308,    60,   398,   789,   492,   569,   104,
     750,   876,   831,   207,    70,   190,  -530,   871,    70,   367,
     659,   877,   179,   179,   375,   570,   207,   175,   512,  -554,
     190,   120,   177,   222,   603,   176,    70,   209,   686,    70,
     436,   235,   297,   235,   397,   210,   179,   235,   392,    70,
     604,   175,   235,   604,   759,   207,   526,  -554,   210,   527,
     367,   648,   590,   438,    70,   664,   120,   668,   730,   669,
     290,   296,   649,   206,    11,   450,   643,   725,   539,    72,
     214,   750,   204,   425,   639,   211,   206,   210,   381,   686,
     748,   434,   220,   235,   537,   204,   235,   290,   296,   235,
     453,   229,   749,   229,   756,   328,   651,   229,   291,   298,
     618,   204,   229,   421,   211,   206,   581,   846,   436,   222,
     222,   456,   777,   358,   204,   686,   208,   366,   875,   206,
     422,   550,   610,   341,   807,   604,   636,   674,   204,    21,
     518,   519,   520,   808,   813,   814,   347,   702,   637,   204,
     479,   480,   481,   229,   675,   686,   229,   295,   212,   229,
     231,   482,   483,   414,   733,   231,   690,   232,   232,   357,
     574,   190,   316,   317,   521,   366,   224,    60,   220,   220,
     493,   758,   341,   675,   513,   327,   761,   588,   477,   478,
     225,    70,   760,   500,   369,   318,   503,   319,   697,   227,
     366,   206,   328,   166,   637,    70,   277,   206,   592,   698,
     204,   885,    43,   820,   592,   435,   204,   280,   503,   199,
     604,   533,   433,   515,   649,   481,   214,   283,   536,   179,
     529,   343,   104,   179,   175,   631,   535,    17,   175,   340,
     510,   553,   341,   177,   166,   540,   176,   179,   672,   522,
     425,   546,   175,   810,   811,   235,   320,   294,   299,   286,
     104,   207,   321,   206,   554,   179,   555,   822,   823,   212,
     175,    21,   204,   792,   401,    11,   179,   549,   195,    12,
     343,   175,   212,   580,   198,   311,   311,   444,   436,   120,
     297,   312,   313,   210,   450,   796,   589,   214,   770,   771,
     456,   468,   474,   217,   678,   179,   774,   775,    17,   741,
     175,   212,   556,   538,   421,   229,   541,   120,   557,   204,
     211,   206,   288,    60,   290,   296,    21,    11,   322,   764,
     204,   422,   421,   232,   214,   232,   212,    70,   592,   232,
     343,   323,    21,   421,   232,   290,   296,   314,   315,   422,
     447,   592,   592,   837,   324,   452,   291,   298,   190,   215,
     422,   216,   848,   340,   414,   592,   341,   286,   363,   364,
     800,   402,   421,   679,   217,    11,   404,   206,   342,    12,
     536,   623,   414,    39,    40,   232,   204,   235,   232,   422,
     325,   232,    70,   414,    60,    11,   195,   522,   868,   646,
     376,   522,   179,   365,   522,   294,   299,   175,    70,   380,
     289,   295,   382,   857,   179,   -75,   859,   367,   857,   175,
     383,    56,   414,   385,   580,   388,    21,   805,   391,    59,
      60,    60,   436,    21,   882,   883,   884,  -360,    11,   309,
     310,  -360,   234,   234,    70,    70,   189,   229,   235,   403,
     592,   892,   432,   893,   685,   437,   757,   179,   190,   212,
     696,   888,   175,   195,   343,   190,   442,   177,   378,   379,
     176,   454,   529,   703,   360,   496,   720,   370,   371,   735,
     455,   421,   461,   462,   505,   853,   660,   880,   746,   670,
    -269,    21,    70,   673,   349,   361,  -267,   362,   422,    70,
     516,   623,   613,   614,   166,   685,    33,    34,   229,    36,
      37,    38,   533,   522,   780,   389,    70,   212,   206,   179,
     661,   206,   547,   228,   175,   784,   785,   204,   801,   802,
     204,   414,   558,   731,   815,   816,   840,   772,   560,   179,
     209,   685,   778,   719,   175,   747,   559,   232,   561,   177,
     191,   191,   176,   191,   783,   818,   819,    70,   207,   786,
     829,   389,   222,   301,   472,   475,   205,    17,   218,   567,
     302,   685,   597,   598,   568,   191,   191,   571,   303,   572,
     304,   787,   179,   305,   573,   720,   421,   175,   484,   485,
     210,   589,   177,   490,   491,   176,   577,   578,   809,   657,
     658,   746,   579,   422,   585,   586,   591,   599,   234,   600,
     234,   341,   204,   628,   234,   602,   615,   211,   206,   234,
     619,   220,   620,  -268,   235,   213,   632,   204,   218,   641,
     -76,   218,   642,   647,   794,   650,   414,   214,   529,   179,
     757,   179,   731,   179,   175,   653,   175,   720,   175,   177,
     652,   177,   176,   177,   176,   720,   176,   676,   747,   680,
     234,   681,   683,   234,   191,   855,   234,   682,   858,   688,
     855,   684,   746,   689,   693,   699,   862,   205,   704,   232,
     737,   738,    21,   179,   229,   473,   473,   864,   175,   743,
     205,   763,   648,   177,   765,  -184,   176,   204,   766,   192,
     192,   216,   192,   773,   731,   788,   205,    21,   518,   519,
     520,   781,   731,   790,   217,   791,   793,   219,   795,   205,
     342,   797,   719,   799,   192,   192,   803,   817,   821,   747,
     824,   191,   218,   205,    60,   350,   213,   349,   825,   190,
     232,   191,   521,   191,   205,   826,   827,   445,    70,   213,
      33,    34,   191,    36,    37,    38,   828,   832,   833,   835,
     401,   838,   836,   841,   851,   213,   844,   351,   850,   852,
      11,   854,  -185,    70,    12,   863,   865,   219,   213,   389,
     219,   869,  -359,   872,   873,   874,  -359,    60,   340,   878,
     879,   886,   213,   445,   881,   887,   191,   890,   889,   191,
     891,    70,   282,   213,   804,   292,   293,   595,   495,   499,
     494,   565,   662,   192,   212,   663,   849,   667,   466,   466,
     532,    21,   234,   548,   545,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   352,    36,
      37,    38,    39,    40,   645,   354,   530,   473,   473,   473,
     473,   353,   612,   228,   464,   399,   192,   192,   677,   387,
     497,   834,   355,   782,   213,   861,   860,   205,   218,   812,
     213,   640,   736,   671,   767,   458,   601,     0,     0,     0,
     192,   219,     0,   219,   219,     0,     0,    70,     0,   191,
     192,     0,   192,     0,     0,     0,   446,     0,     0,    21,
       0,   192,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     0,     0,   232,   191,     0,     0,
       0,     0,     0,     0,   191,   205,   213,     0,     0,     0,
       0,   465,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,   446,     0,    12,   192,     0,     0,   192,     0,
       0,    60,   444,   411,   234,   445,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,   593,   467,   467,     0,
       0,     0,   593,   213,     0,   605,     0,     0,     0,     0,
       0,   205,   607,     0,   213,     0,   612,     0,   473,   473,
     473,    21,   473,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     0,    36,
      37,    38,    39,    40,     0,   234,     0,   219,     0,     0,
      21,   191,     0,   228,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     0,     0,   191,   192,     0,
     213,   191,     0,     0,   191,     0,     0,     0,     0,     0,
       0,     0,   606,     0,     0,     0,     0,    70,     0,     0,
       0,     0,   356,     0,     0,     0,   192,   486,   487,   488,
     489,     0,    60,   192,   473,   473,   473,    33,    34,     0,
      36,    37,    38,     0,     0,     0,    70,   191,     0,     0,
       0,     0,     0,     0,   351,     0,   593,     0,     0,     0,
       0,     0,     0,     0,   446,     0,     0,     0,     0,     0,
     446,   446,     0,     0,    60,   594,     0,     0,     0,    21,
       0,   594,   205,   607,     0,     0,     0,     0,    70,     0,
       0,   467,   467,     0,    33,    34,     0,    36,    37,    38,
       0,   191,     0,     0,     0,     0,   464,     0,   191,     0,
       0,   351,     0,   191,   411,     0,     0,     0,     0,   473,
     612,   411,     0,     0,     0,     0,     0,     0,     0,     0,
     192,    60,   411,     0,     0,   605,     0,     0,     0,     0,
       0,   213,     0,   411,   213,    70,   192,     0,     0,     0,
     192,   234,     0,   192,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     0,   205,     0,     0,
       0,     0,   411,     0,     0,     0,     0,     0,     0,     0,
      21,   191,   205,   609,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   509,   192,     0,     0,     0,
       0,     0,     0,    60,     0,   594,     0,     0,     0,     0,
      33,    34,   691,    36,    37,    38,     0,    70,   594,   594,
       0,   218,     0,     0,     0,     0,   213,   351,     0,     0,
       0,     0,   692,     0,     0,     0,    11,     0,     0,     0,
      12,   213,     0,     0,     0,     0,    70,    60,     0,     0,
     192,     0,     0,     0,     0,     0,     0,   192,     0,     0,
       0,    70,   192,     0,   654,   655,   656,   411,   411,   411,
     411,   411,   411,     0,   411,   411,   411,     0,   411,     0,
       0,   411,     0,     0,   191,     0,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     0,    36,    37,    38,    39,    40,
       0,   213,     0,     0,     0,     0,     0,   692,     0,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     192,     0,     8,     0,     9,    10,    11,     0,     0,     0,
      12,     0,    13,    14,     0,     0,     0,   326,    16,     0,
     341,     0,    17,    70,     0,   327,     0,     0,     0,     0,
       0,    18,     0,     0,   411,    19,     0,     0,    20,     0,
     219,     0,   328,     0,     0,     0,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   411,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   705,    36,    37,    38,    39,    40,
      41,    42,     0,   173,    45,    46,    47,    48,    49,   706,
      51,    52,    53,    54,   707,   708,     0,    55,   709,   710,
      56,   711,    57,   192,    58,   712,   713,   714,    59,    60,
      61,   715,    62,    63,   716,    64,    65,    66,   717,    67,
     718,    68,    69,    70,    71,     8,    72,     9,    10,    11,
       0,     0,     0,    12,   562,    13,    14,     0,     0,     0,
      15,    16,   563,     0,     0,    17,   411,   411,     0,     0,
       0,     0,     0,     0,   744,     0,     0,     0,    19,   564,
       0,    20,     0,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,     0,     0,     0,     0,     0,     0,     0,
      21,   518,   519,   520,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     0,    36,    37,
      38,    39,    40,    41,    42,    43,   173,    45,    46,    47,
      48,    49,   409,    51,   745,    53,     0,     0,     0,     0,
      55,     0,     0,    56,     0,    57,     0,    58,     0,     0,
       0,    59,    60,    61,     0,    62,    63,     0,    64,    65,
      66,     0,    67,     0,    68,    69,    70,    71,     8,    72,
       9,    10,    11,     0,     0,     0,    12,     0,    13,    14,
       0,     0,     0,    15,    16,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
       0,    19,   611,     0,    20,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,    55,     0,     0,    56,     0,    57,     0,
      58,     0,     0,     0,    59,    60,    61,     0,    62,    63,
       0,    64,    65,    66,     0,    67,     0,    68,    69,    70,
      71,   694,    72,     9,    10,    11,     0,     0,     0,    12,
       0,    13,    14,     0,     0,     0,     0,    16,     0,     0,
       0,    17,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     0,    19,     0,     0,    20,     0,    39,
      40,    41,    42,     0,   173,    45,    46,    47,    48,    49,
       0,    51,     0,    53,     0,   172,    21,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     0,    36,    37,    38,    39,    40,    41,
      42,     0,   173,    45,    46,    47,    48,    49,   174,    51,
       0,    53,     0,     0,     0,     0,    55,   605,     0,    56,
       0,    57,     0,    58,     0,     0,     0,    59,    60,    61,
       0,    62,    63,     0,    64,    65,    66,     0,    67,     0,
      68,    69,    70,    71,     8,    72,     9,    10,    11,     0,
       0,     0,    12,     0,    13,    14,     0,     0,     0,     0,
      16,     0,   496,     0,    17,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    19,     0,     0,
      20,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     0,     0,   776,     0,     0,     0,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     0,    36,    37,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    70,     0,
       0,   161,     0,     0,     0,     0,     0,     0,     0,    55,
       0,     0,    56,     0,    57,     0,    58,     0,     0,     0,
      59,    60,    61,     0,    62,    63,     0,    64,    65,    66,
       0,    67,     0,    68,    69,    70,    71,     0,    72,     9,
      10,    11,     0,     0,     0,    12,     0,    13,    14,     0,
       0,     0,    15,    16,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
      19,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     0,
       0,     0,    55,     0,     0,    56,     0,    57,     0,    58,
       0,     0,     0,    59,    60,    61,     0,    62,    63,     0,
      64,    65,    66,     0,    67,     0,    68,    69,    70,    71,
       0,    72,     9,    10,    11,     0,     0,     0,    12,     0,
      13,    14,     0,     0,     0,    15,    16,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,    19,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    36,    37,    38,    39,    40,    41,    42,
       0,   173,    45,    46,    47,    48,    49,   174,    51,     0,
      53,     0,     0,     0,     0,    55,     0,     0,    56,     0,
      57,     0,    58,     0,     0,     0,    59,    60,    61,     0,
      62,    63,     0,    64,    65,    66,     0,    67,     0,    68,
      69,    70,    71,     0,    72,     9,    10,    11,     0,     0,
       0,    12,     0,    13,    14,     0,     0,     0,    15,    16,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,   744,     0,     0,     0,    19,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     0,    36,    37,    38,    39,
      40,    41,    42,     0,   173,    45,    46,    47,    48,    49,
     174,    51,     0,    53,     0,     0,     0,     0,    55,     0,
       0,    56,     0,    57,     0,    58,     0,     0,     0,    59,
      60,    61,     0,    62,    63,     0,    64,    65,    66,     0,
      67,     0,    68,    69,    70,    71,     0,    72,     9,    10,
      11,     0,     0,     0,    12,     0,    13,    14,     0,     0,
       0,     0,    16,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     172,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     0,    36,
      37,    38,    39,    40,    41,    42,     0,   173,    45,    46,
      47,    48,    49,   174,    51,     0,    53,     0,     0,     0,
       0,    55,     0,     0,    56,     0,    57,     0,    58,     0,
       0,     0,    59,    60,    61,     0,    62,    63,     0,    64,
      65,    66,     0,    67,     0,    68,    69,    70,    71,     0,
      72,     9,    10,    11,     0,     0,     0,    12,     0,    13,
      14,     0,   406,     0,     0,    16,     0,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   407,
      34,     0,    36,   408,    38,    39,    40,    41,    42,     0,
     173,    45,    46,    47,    48,    49,   409,    51,     0,    53,
       0,     0,     0,     0,    55,     0,     0,    56,     0,    57,
       0,    58,     0,     0,     0,    59,    60,    61,     0,    62,
      63,     0,    64,   410,    66,     0,    67,     0,    68,    69,
      70,    71,     0,    72,     9,    10,    11,     0,     0,     0,
      12,     0,    13,    14,     0,     0,     0,     0,    16,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,    19,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     0,    36,    37,    38,    39,    40,
      41,    42,     0,   173,    45,    46,    47,    48,    49,   174,
      51,     0,    53,     0,     0,     0,     0,    55,     0,     0,
      56,     0,    57,     0,    58,     0,     0,     0,    59,    60,
      61,     0,    62,    63,     0,    64,    65,    66,     0,    67,
       0,    68,    69,    70,    71,     0,    72,     9,    10,    11,
       0,     0,     0,    12,     0,    13,    14,     0,     0,     0,
       0,    16,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   407,    34,     0,    36,   408,
      38,    39,    40,    41,    42,     0,   173,    45,    46,    47,
      48,    49,   409,    51,     0,    53,     0,     0,     0,     0,
      55,     0,     0,    56,     0,    57,     0,    58,     0,     0,
       0,    59,    60,    61,     0,    62,    63,     0,    64,   410,
      66,     0,    67,     0,    68,    69,    70,    71,     0,    72,
       9,    10,    11,     0,     0,     0,    12,     0,    13,    14,
       0,     0,     0,     0,    16,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       0,    36,    37,    38,    39,    40,    41,    42,     0,   173,
      45,    46,    47,    48,    49,   174,    51,     0,    53,     0,
       0,     0,     0,    55,     0,     0,    56,     0,    57,     0,
      58,     0,     0,     0,    59,    60,    61,     0,    62,    63,
       0,    64,   410,    66,     0,    67,     0,    68,    69,    70,
      71,     0,    72,     9,    10,    11,     0,     0,     0,    12,
       0,    13,    14,     0,     0,     0,     0,    16,     0,     0,
       0,    17,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     0,    19,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     398,     0,     0,     0,     0,     0,    21,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     0,    36,    37,    38,    39,    40,     0,
       0,     0,     0,     0,    70,     0,     0,     0,   161,     0,
       0,     0,     0,     0,     0,     0,    55,     0,     0,    56,
       0,    57,     0,    58,     0,     0,     0,    59,    60,    61,
       0,    62,    63,     0,    64,     0,    66,     0,    67,     0,
      68,    69,    70,    71,     0,    72,     9,    10,    11,     0,
       0,     0,    12,     0,    13,    14,     0,     0,     0,     0,
      16,     0,   496,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     0,    36,    37,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,     0,     0,     0,     0,     0,     0,     0,    55,
       0,     0,    56,     0,    57,     0,    58,     0,     0,     0,
      59,    60,    61,     0,    62,    63,     0,    64,    65,    66,
       0,    67,     0,    68,    69,    70,    71,     0,    72,     9,
      10,    11,     0,     0,     0,    12,     0,    13,    14,     0,
       0,     0,    15,    16,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     0,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,    56,     0,    57,     0,    58,
       0,     0,     0,    59,    60,    61,     0,    62,    63,     0,
      64,    65,    66,     0,    67,     0,    68,    69,    70,    71,
       0,    72,     9,    10,    11,     0,     0,     0,    12,     0,
      13,    14,     0,     0,     0,     0,    16,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    36,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   161,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     0,    56,     0,
      57,     0,    58,     0,     0,     0,    59,    60,    61,     0,
      62,    63,     0,    64,    65,    66,     0,    67,     0,    68,
      69,    70,    71,     0,    72,     9,    10,    11,     0,     0,
       0,    12,     0,    13,    14,     0,     0,     0,     0,    16,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     0,    36,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,     0,     0,     0,     0,     0,     0,     0,    55,     0,
       0,    56,     0,    57,     0,    58,     0,     0,     0,    59,
      60,    61,     0,    62,    63,     0,    64,   410,    66,     0,
      67,     0,    68,    69,    70,    71,     0,    72,     9,    10,
      11,     0,     0,     0,    12,     0,    13,    14,     0,     0,
       0,     0,    16,   768,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     0,    36,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,     0,     0,     0,     0,     0,     0,
       0,    55,     0,     0,    56,     0,    57,     0,    58,     0,
       0,     0,    59,    60,    61,     0,    62,    63,     0,    64,
       0,    66,     0,    67,     0,    68,    69,    70,    71,     0,
      72,     9,    10,    11,     0,     0,     0,    12,     0,    13,
      14,     0,     0,     0,     0,    16,     0,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     0,    36,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,    56,     0,    57,
       0,    58,     0,     0,     0,    59,    60,    61,     0,    62,
      63,     0,    64,     0,    66,     0,    67,     0,    68,    69,
      70,    71,     0,    72,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,     0,   250,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,     0,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     0,    36,    37,    38,    39,    40,
      13,    14,     0,     0,     0,     0,     0,     0,     0,   228,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     275,     0,     0,     0,     0,     0,     0,     0,   276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    36,    37,    38,     0,     0,     0,     0,
     202,     0,     0,     0,    16,     0,     0,   161,    17,     0,
       0,     0,     0,     0,     0,    55,     0,     0,    56,     0,
      57,     0,    58,     0,     0,     0,    59,    60,    61,     0,
      62,    63,     0,    64,     0,    66,     0,    67,     0,    68,
      69,    70,    71,    21,    72,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     0,    44,
      45,    46,    47,    48,    49,   203,    51,    52,    53,    54,
     403,     0,     0,     0,    16,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       0,    36,    37,    38,    39,    40,    41,    42,     0,   173,
      45,    46,    47,    48,    49,   174,    51,    16,    53,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    44,    45,    46,    47,    48,    49,   203,    51,
      52,    53,    54,    16,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   705,
      36,    37,    38,    39,    40,    41,    42,     0,   173,    45,
      46,    47,    48,    49,   706,    51,    52,    53,    54,    16,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     0,    36,    37,    38,    39,
      40,    41,    42,     0,   173,    45,    46,    47,    48,    49,
     174,    51,    16,    53,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    17,     0,     0,     0,     0,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     0,    36,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
      21,   740,     0,   161,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     0,    36,    37,
      38,    39,    40,    60,     0,     0,     0,     0,     0,     0,
       0,     0,   228,     0,     0,    21,     0,    70,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,     0,    21,     0,    70,   228,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     0,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   228,     0,     0,     0,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70
};

static const yytype_int16 yycheck[] =
{
       6,    17,     7,   120,    17,    43,    17,   178,   120,    52,
     120,    17,   145,   145,    17,    59,    60,    87,    15,   201,
     155,   301,   202,    44,    50,   340,   115,    75,    76,   622,
       9,    10,   442,   464,    13,    14,    93,   634,   622,    76,
      19,    20,    50,   111,   227,   113,   634,   467,   496,   465,
      34,    35,   410,    37,    62,     0,   421,     6,   634,    65,
     634,   118,     5,    59,    88,   558,   381,   432,    52,   517,
     372,    67,   115,    19,    50,    59,    60,    56,   521,     1,
     642,   231,   525,    16,   322,   327,    19,     5,    56,   630,
       0,     9,   136,    20,    75,    76,   461,   280,   122,    17,
     283,    50,    50,    21,    31,    75,    76,    86,    31,    31,
      56,    50,   214,    50,   120,   797,   678,   799,   175,   342,
      88,   618,    33,    56,    88,   622,    20,   277,    59,    60,
      77,    78,    55,   717,     1,   128,    30,   634,    56,    14,
      15,   364,    88,    54,   108,    88,   708,   385,    14,   155,
     747,    20,    19,   161,   122,    88,    31,   839,   122,   138,
     653,    30,   178,   179,   148,    31,   174,   178,   115,     1,
      88,   120,   178,   216,   605,   178,   122,   203,   591,   122,
     217,   225,   219,   227,   189,   161,   202,   231,    20,   122,
     606,   202,   236,   609,   637,   203,    16,     1,   174,    19,
     179,    20,   444,   224,   122,   563,   155,   565,   801,   567,
     191,   192,    31,   161,     5,   231,    20,   801,   389,   125,
      11,   818,   161,   403,     1,   174,   174,   203,    23,   642,
     818,   215,   216,   277,   384,   174,   280,   218,   219,   283,
     236,   225,   818,   227,   818,    40,   548,   231,   218,   219,
     698,   190,   236,   202,   203,   203,   439,   798,   295,   302,
     303,   277,   693,   352,   203,   678,   203,   311,   852,   217,
     202,   406,   692,    19,    22,   691,    19,    14,   217,    56,
      57,    58,    59,    31,    30,    31,   354,   784,    31,   228,
     309,   310,   311,   277,    31,   708,   280,    88,    50,   283,
     231,   312,   313,   202,   801,   236,    14,    59,    60,   352,
     675,    88,    13,    14,    91,   359,    21,   108,   302,   303,
     323,   818,    19,    31,   368,    23,   641,   737,   307,   308,
      13,   122,    19,   339,    31,    36,   342,    38,    20,    13,
     384,   289,    40,   340,    31,   122,   277,   295,   450,    31,
     289,    20,    81,    20,   456,   216,   295,    13,   364,    88,
     776,    30,   464,   369,    31,   384,    11,    13,   384,   385,
     376,   117,   378,   389,   385,   507,   382,    21,   389,    16,
     359,    13,    19,   389,   381,   391,   389,   403,   571,   373,
     570,   396,   403,    30,    31,   439,    35,   445,   446,    13,
     406,   409,    41,   351,    36,   421,    38,   765,   766,   161,
     421,    56,   351,   711,    15,     5,   432,   401,    19,     9,
     117,   432,   174,   439,   408,   482,   483,    17,   465,   378,
     467,     3,     4,   409,   450,   715,   442,    11,   680,   681,
     456,   302,   303,    88,    17,   461,   688,   689,    21,   632,
     461,   203,    35,   385,   403,   439,   395,   406,    41,   398,
     409,   409,    56,   108,   445,   446,    56,     5,     9,   651,
     409,   403,   421,   225,    11,   227,   228,   122,   580,   231,
     117,     8,    56,   432,   236,   466,   467,    42,    43,   421,
     231,   593,   594,   791,    10,   236,   466,   467,    88,    73,
     432,    75,   800,    16,   403,   607,    19,    13,    30,    31,
      16,   196,   461,   583,    88,     5,   201,   465,    31,     9,
     536,   505,   421,    77,    78,   277,   465,   571,   280,   461,
      39,   283,   122,   432,   108,     5,    19,   521,   836,   544,
      15,   525,   558,    30,   528,   593,   594,   558,   122,     1,
      88,    88,    31,   811,   570,    31,   814,   536,   816,   570,
      18,    99,   461,     9,   580,    22,    56,   738,    15,   107,
     108,   108,   609,    56,   872,   873,   874,    17,     5,     6,
       7,    21,    59,    60,   122,   122,    19,   571,   632,    13,
     692,   889,    13,   891,   591,    30,   634,   613,    88,   351,
     613,   881,   613,    19,   117,    88,    21,   613,     3,     4,
     613,    18,   618,   619,   731,    19,   622,   750,   750,   624,
      22,   570,     3,     4,    16,   808,   558,   869,   634,   568,
       5,    56,   122,   572,   111,   747,     5,   747,   570,   122,
      20,   625,     3,     4,   641,   642,    71,    72,   632,    74,
      75,    76,    30,   637,    30,    31,   122,   409,   606,   675,
     559,   609,     1,    88,   675,     3,     4,   606,     3,     4,
     609,   570,     9,   622,    30,    31,   793,   683,    10,   695,
     706,   678,   695,   622,   695,   634,     8,   439,    39,   695,
      34,    35,   695,    37,   699,     3,     4,   122,   706,   704,
      30,    31,   745,    17,   302,   303,    50,    21,    52,    15,
      24,   708,   452,   453,    71,    59,    60,    15,    32,    15,
      34,   705,   738,    37,     1,   731,   675,   738,   314,   315,
     706,   737,   738,   320,   321,   738,    30,    30,   743,   556,
     557,   747,    22,   675,    14,    14,    17,    14,   225,    14,
     227,    19,   691,    95,   231,    18,    20,   706,   706,   236,
      16,   745,    20,     5,   808,    50,    21,   706,   112,    16,
      31,   115,    15,     1,   713,    20,   675,    11,   784,   795,
     818,   797,   731,   799,   795,     9,   797,   793,   799,   795,
      30,   797,   795,   799,   797,   801,   799,    30,   747,    21,
     277,    21,    31,   280,   148,   811,   283,    22,   814,    21,
     816,    18,   818,    21,    11,   128,   821,   161,   128,   571,
      21,    21,    56,   839,   808,   302,   303,   832,   839,   128,
     174,     1,    20,   839,    16,    31,   839,   776,    31,    34,
      35,    75,    37,    18,   793,    30,   190,    56,    57,    58,
      59,    20,   801,    30,    88,    16,    21,    52,    21,   203,
      31,    21,   801,    21,    59,    60,     1,    16,   128,   818,
      18,   215,   216,   217,   108,    56,   161,   354,    22,    88,
     632,   225,    91,   227,   228,    22,    22,   231,   122,   174,
      71,    72,   236,    74,    75,    76,    22,   128,     1,     1,
      15,   119,    16,    30,    22,   190,    30,    88,    31,    22,
       5,     1,    31,   122,     9,     1,    20,   112,   203,    31,
     115,    21,    17,    22,    22,    22,    21,   108,    16,     1,
       1,    20,   217,   277,    30,    22,   280,    30,   102,   283,
      22,   122,    62,   228,   737,    75,    75,   450,   325,   328,
     324,   418,   560,   148,   706,   561,   801,   564,   302,   303,
     378,    56,   439,   400,   396,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,   112,    74,
      75,    76,    77,    78,   544,   113,   376,   464,   465,   466,
     467,   112,   469,    88,    11,   193,   191,   192,   580,   179,
     326,   784,   113,   698,   289,   818,   816,   351,   352,   747,
     295,   528,   625,   570,   675,   277,   461,    -1,    -1,    -1,
     215,   216,    -1,   218,   219,    -1,    -1,   122,    -1,   373,
     225,    -1,   227,    -1,    -1,    -1,   231,    -1,    -1,    56,
      -1,   236,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,   808,   401,    -1,    -1,
      -1,    -1,    -1,    -1,   408,   409,   351,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    -1,   277,    -1,     9,   280,    -1,    -1,   283,    -1,
      -1,   108,    17,   202,   571,   439,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   450,   302,   303,    -1,
      -1,    -1,   456,   398,    -1,    11,    -1,    -1,    -1,    -1,
      -1,   465,   466,    -1,   409,    -1,   603,    -1,   605,   606,
     607,    56,   609,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    74,
      75,    76,    77,    78,    -1,   632,    -1,   352,    -1,    -1,
      56,   505,    -1,    88,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    -1,   521,   373,    -1,
     465,   525,    -1,    -1,   528,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,   401,   316,   317,   318,
     319,    -1,   108,   408,   691,   692,   693,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,   122,   571,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,   580,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   439,    -1,    -1,    -1,    -1,    -1,
     445,   446,    -1,    -1,   108,   450,    -1,    -1,    -1,    56,
      -1,   456,   606,   607,    -1,    -1,    -1,    -1,   122,    -1,
      -1,   466,   467,    -1,    71,    72,    -1,    74,    75,    76,
      -1,   625,    -1,    -1,    -1,    -1,    11,    -1,   632,    -1,
      -1,    88,    -1,   637,   403,    -1,    -1,    -1,    -1,   776,
     777,   410,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     505,   108,   421,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,   606,    -1,   432,   609,   122,   521,    -1,    -1,    -1,
     525,   808,    -1,   528,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,   691,    -1,    -1,
      -1,    -1,   461,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,   705,   706,    88,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    56,   571,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,   580,    -1,    -1,    -1,    -1,
      71,    72,    88,    74,    75,    76,    -1,   122,   593,   594,
      -1,   745,    -1,    -1,    -1,    -1,   691,    88,    -1,    -1,
      -1,    -1,   607,    -1,    -1,    -1,     5,    -1,    -1,    -1,
       9,   706,    -1,    -1,    -1,    -1,   122,   108,    -1,    -1,
     625,    -1,    -1,    -1,    -1,    -1,    -1,   632,    -1,    -1,
      -1,   122,   637,    -1,   553,   554,   555,   556,   557,   558,
     559,   560,   561,    -1,   563,   564,   565,    -1,   567,    -1,
      -1,   570,    -1,    -1,   808,    -1,    -1,    56,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    -1,    74,    75,    76,    77,    78,
      -1,   776,    -1,    -1,    -1,    -1,    -1,   692,    -1,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     705,    -1,     1,    -1,     3,     4,     5,    -1,    -1,    -1,
       9,    -1,    11,    12,    -1,    -1,    -1,    15,    17,    -1,
      19,    -1,    21,   122,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,   653,    34,    -1,    -1,    37,    -1,
     745,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   675,    56,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    -1,    96,    97,    98,
      99,   100,   101,   808,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,     1,   125,     3,     4,     5,
      -1,    -1,    -1,     9,    15,    11,    12,    -1,    -1,    -1,
      16,    17,    23,    -1,    -1,    21,   765,   766,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    40,
      -1,    37,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,    -1,   111,   112,    -1,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,     1,   125,
       3,     4,     5,    -1,    -1,    -1,     9,    -1,    11,    12,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    34,    56,    -1,    37,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,    -1,   111,   112,
      -1,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,     1,   125,     3,     4,     5,    -1,    -1,    -1,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    21,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    34,    -1,    -1,    37,    -1,    77,
      78,    79,    80,    -1,    82,    83,    84,    85,    86,    87,
      -1,    89,    -1,    91,    -1,    55,    56,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    -1,    -1,    -1,    -1,    96,    11,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
      -1,   111,   112,    -1,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,     1,   125,     3,     4,     5,    -1,
      -1,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      17,    -1,    19,    -1,    21,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    34,    -1,    -1,
      37,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    -1,    88,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    -1,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,    -1,   111,   112,    -1,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,    -1,   125,     3,
       4,     5,    -1,    -1,    -1,     9,    -1,    11,    12,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    -1,
      -1,    -1,    96,    -1,    -1,    99,    -1,   101,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,    -1,   111,   112,    -1,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
      -1,   125,     3,     4,     5,    -1,    -1,    -1,     9,    -1,
      11,    12,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    -1,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      91,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,    -1,
     101,    -1,   103,    -1,    -1,    -1,   107,   108,   109,    -1,
     111,   112,    -1,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,    -1,   125,     3,     4,     5,    -1,    -1,
      -1,     9,    -1,    11,    12,    -1,    -1,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    91,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,    -1,   111,   112,    -1,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,    -1,   125,     3,     4,
       5,    -1,    -1,    -1,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    -1,    91,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    99,    -1,   101,    -1,   103,    -1,
      -1,    -1,   107,   108,   109,    -1,   111,   112,    -1,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,    -1,
     125,     3,     4,     5,    -1,    -1,    -1,     9,    -1,    11,
      12,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    91,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,    -1,   111,
     112,    -1,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,    -1,   125,     3,     4,     5,    -1,    -1,    -1,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    -1,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    91,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      99,    -1,   101,    -1,   103,    -1,    -1,    -1,   107,   108,
     109,    -1,   111,   112,    -1,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,    -1,   125,     3,     4,     5,
      -1,    -1,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    91,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,
      -1,   107,   108,   109,    -1,   111,   112,    -1,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,    -1,   125,
       3,     4,     5,    -1,    -1,    -1,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    91,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,    -1,
     103,    -1,    -1,    -1,   107,   108,   109,    -1,   111,   112,
      -1,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,    -1,   125,     3,     4,     5,    -1,    -1,    -1,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    21,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,    -1,   103,    -1,    -1,    -1,   107,   108,   109,
      -1,   111,   112,    -1,   114,    -1,   116,    -1,   118,    -1,
     120,   121,   122,   123,    -1,   125,     3,     4,     5,    -1,
      -1,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      17,    -1,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    -1,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,
     107,   108,   109,    -1,   111,   112,    -1,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,    -1,   125,     3,
       4,     5,    -1,    -1,    -1,     9,    -1,    11,    12,    -1,
      -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    99,    -1,   101,    -1,   103,
      -1,    -1,    -1,   107,   108,   109,    -1,   111,   112,    -1,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
      -1,   125,     3,     4,     5,    -1,    -1,    -1,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,    -1,
     101,    -1,   103,    -1,    -1,    -1,   107,   108,   109,    -1,
     111,   112,    -1,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,    -1,   125,     3,     4,     5,    -1,    -1,
      -1,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    99,    -1,   101,    -1,   103,    -1,    -1,    -1,   107,
     108,   109,    -1,   111,   112,    -1,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,    -1,   125,     3,     4,
       5,    -1,    -1,    -1,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    18,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    99,    -1,   101,    -1,   103,    -1,
      -1,    -1,   107,   108,   109,    -1,   111,   112,    -1,   114,
      -1,   116,    -1,   118,    -1,   120,   121,   122,   123,    -1,
     125,     3,     4,     5,    -1,    -1,    -1,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,
      -1,   103,    -1,    -1,    -1,   107,   108,   109,    -1,   111,
     112,    -1,   114,    -1,   116,    -1,   118,    -1,   120,   121,
     122,   123,    -1,   125,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    56,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    -1,    74,    75,    76,    77,    78,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    56,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    17,    -1,    -1,    88,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    99,    -1,
     101,    -1,   103,    -1,    -1,    -1,   107,   108,   109,    -1,
     111,   112,    -1,   114,    -1,   116,    -1,   118,    -1,   120,
     121,   122,   123,    56,   125,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      13,    -1,    -1,    -1,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    17,    91,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    17,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    83,    84,    85,    86,    87,
      88,    89,    17,    91,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    21,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    22,    -1,    88,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    56,    -1,   122,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    -1,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,   122,    88,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    -1,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   149,   208,     0,   338,   209,   337,   128,     1,     3,
       4,     5,     9,    11,    12,    16,    17,    21,    30,    34,
      37,    56,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    96,    99,   101,   103,   107,
     108,   109,   111,   112,   114,   115,   116,   118,   120,   121,
     122,   123,   125,   130,   131,   133,   134,   135,   136,   138,
     139,   140,   146,   147,   148,   150,   151,   154,   157,   158,
     159,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     226,   227,   228,   230,   232,   233,   234,   235,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   258,
     263,   264,   273,   274,   275,   276,   286,   287,   288,   289,
     298,   300,   304,   312,   314,   315,   320,   323,   328,   332,
     333,    88,   164,   164,   164,   164,   175,   299,   156,   177,
     179,   180,    55,    82,    88,   166,   171,   177,   226,   254,
     255,   265,   266,   267,   268,   269,   270,   164,   164,    19,
      88,   133,   134,   136,   236,    19,   136,   207,   136,    88,
     314,   146,    13,    88,   130,   133,   138,   151,   212,   214,
     217,   226,   230,   320,    11,    73,    75,    88,   133,   134,
     136,   137,   140,   141,    21,    13,   164,    13,    88,   136,
     160,   229,   230,   231,   232,   258,   264,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      17,    21,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    99,   107,   229,   305,   313,
      13,   151,   157,    13,   177,   264,    13,   132,    56,    88,
     135,   139,   158,   159,   253,    88,   135,   137,   139,   253,
     164,    17,    24,    32,    34,    37,   263,    33,    54,     6,
       7,   252,     3,     4,    42,    43,    13,    14,    36,    38,
      35,    41,     9,     8,    10,    39,    15,    23,    40,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   178,
      16,    19,    31,   117,   198,   277,   279,   224,   225,   232,
      56,    88,   220,   221,   216,   225,    56,   140,   219,   252,
     215,   274,   275,    30,    31,    30,   258,   164,   257,    31,
     277,   279,   290,    16,    19,   136,    15,   211,     3,     4,
       1,    23,    31,    18,   252,     9,   270,   255,    22,    31,
      55,    15,    20,   237,   239,   240,   241,   333,    88,   236,
     335,    15,   207,    13,   207,   209,    14,    71,    75,    88,
     115,   168,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   226,   267,   271,   272,   315,   316,   317,   318,   319,
     329,   333,    13,   131,   136,   141,   137,    30,   146,   229,
     259,   259,    21,   163,    17,   133,   134,   160,   161,   162,
     254,   256,   160,   264,    18,    22,   254,   256,   305,   259,
     259,     3,     4,   179,    11,    88,   133,   134,   141,   142,
     143,   144,   145,   232,   141,   145,   153,   164,   164,   165,
     165,   165,   166,   166,   167,   167,   168,   168,   168,   168,
     169,   169,   170,   171,   172,   173,    19,   281,   180,   174,
     177,   299,   199,   177,   251,    16,   278,   306,   307,    56,
     164,   251,   115,   258,   330,   177,    20,   338,    57,    58,
      59,    91,   136,   301,   302,   303,    16,    19,   285,   177,
     280,   281,   210,    30,   299,   177,   254,   256,   267,   270,
     177,   130,   242,   243,    31,   237,   333,     1,   208,   136,
     211,   184,   190,    13,    36,    38,    35,    41,     9,     8,
      10,    39,    15,    23,    40,   178,   271,    15,    71,    14,
      31,    15,    15,     1,   271,   321,   322,    30,    30,    22,
     254,   259,   260,   261,   262,    14,    14,   155,   156,   177,
     180,    17,   131,   133,   134,   161,   256,   163,   163,    14,
      14,   321,    18,   142,   143,    11,    88,   133,   145,    88,
     144,    56,   232,     3,     4,    20,   282,   283,   336,    16,
      20,   193,   336,   136,   308,   309,   310,   311,    95,   325,
     326,   279,    21,   291,   336,   302,    19,    31,   302,     1,
     301,    16,    15,    20,   238,   239,   333,     1,    20,    31,
      20,   338,    30,     9,   168,   168,   168,   182,   182,   183,
     267,   184,   185,   186,   190,   191,   192,   187,   190,   190,
     130,   317,   259,   130,    14,    31,    30,   260,    17,   263,
      21,    21,    22,    31,    18,   175,   176,   181,    21,    21,
      14,    88,   134,    11,     1,   152,   266,    20,    31,   128,
     280,   284,   332,   177,   128,    73,    88,    93,    94,    97,
      98,   100,   104,   105,   106,   110,   113,   117,   119,   130,
     177,   194,   195,   196,   197,   198,   200,   203,   205,   206,
     213,   226,   324,   332,    31,   333,   310,    21,    21,   325,
      22,   259,   331,   128,    30,    90,   177,   226,   246,   273,
     276,   292,   293,   294,   295,   297,   303,   314,   332,   302,
      19,   299,   181,     1,   209,    16,    31,   322,    18,   181,
     180,   180,   177,    18,   180,   180,    88,   142,   266,   334,
      30,    20,   283,   333,     3,     4,   333,   136,    30,   181,
      30,    16,   193,    21,   130,    21,   179,    21,   198,    21,
      16,     3,     4,     1,   155,   270,   327,    22,    31,   333,
      30,    31,   294,    30,    31,    30,    31,    16,     3,     4,
      20,   128,   190,   190,    18,    22,    22,    22,    22,    30,
       1,    19,   128,     1,   284,     1,    16,   193,   119,   204,
     215,    30,   202,   266,    30,   202,   325,   202,   193,   194,
      31,    22,    22,   259,     1,   177,   296,   300,   177,   300,
     296,   292,   333,     1,   333,    20,    20,    30,   193,    21,
     201,   202,    22,    22,    22,   198,    20,    30,     1,     1,
     180,    30,   193,   193,   193,    20,    20,    22,   179,   102,
      30,    22,   193,   193
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 7:

/* Line 1455 of yacc.c  */
#line 211 "CxxGrammar.y"
    { template_test(); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 337 "CxxGrammar.y"
    { mark_type1(); yyclearin; ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 342 "CxxGrammar.y"
    { yyerrok; yyclearin; remark_type1(); unmark(); unmark(); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 344 "CxxGrammar.y"
    { yyerrok; yyclearin; remark_type1(); unmark(); unmark(); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 346 "CxxGrammar.y"
    { yyerrok; yyclearin; remark_type1(); unmark(); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 515 "CxxGrammar.y"
    { end_search(); ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 533 "CxxGrammar.y"
    { UNBANG("Bad statement-seq."); ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 536 "CxxGrammar.y"
    { UNBANG("Bad statement."); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 563 "CxxGrammar.y"
    { unnest(); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 565 "CxxGrammar.y"
    { unnest(); UNBANG("Bad declaration-seq."); ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 568 "CxxGrammar.y"
    { UNBANG("Bad declaration."); ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 569 "CxxGrammar.y"
    { end_search(); ;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 680 "CxxGrammar.y"
    { UNBANG("Bad enumerator-list."); ;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 682 "CxxGrammar.y"
    { UNBANG("Bad enumerator-definition."); ;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 684 "CxxGrammar.y"
    { UNBANG("Bad enumerator-definition."); ;}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 817 "CxxGrammar.y"
    { UNBANG("Bad initializer_clause."); ;}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 819 "CxxGrammar.y"
    { UNBANG("Bad initializer_clause."); ;}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 822 "CxxGrammar.y"
    { end_search(); ;}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 840 "CxxGrammar.y"
    { mark(); ;}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 842 "CxxGrammar.y"
    { rewind_colon(); ;}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 843 "CxxGrammar.y"
    { unmark(); ;}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 850 "CxxGrammar.y"
    { UNBANG("Bad member_specification.opt."); ;}
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 854 "CxxGrammar.y"
    { UNBANG("Bad member-declaration."); ;}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 855 "CxxGrammar.y"
    { end_search(); ;}
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 920 "CxxGrammar.y"
    { UNBANG("Bad ctor-initializer."); ;}
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 924 "CxxGrammar.y"
    { UNBANG("Bad mem-initializer."); ;}
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 999 "CxxGrammar.y"
    { UNBANG("Bad template-parameter."); ;}
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 1047 "CxxGrammar.y"
    { yyerrok; yyclearin; advance_search(); ;}
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 1048 "CxxGrammar.y"
    { BANG(); ;}
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 1049 "CxxGrammar.y"
    { mark(); ;}
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 1050 "CxxGrammar.y"
    { nest(); ;}
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 1051 "CxxGrammar.y"
    { start_search(false); ;}
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 1052 "CxxGrammar.y"
    { start_search(true); ;}
    break;



/* Line 1455 of yacc.c  */
#line 3367 "CxxGrammar.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



