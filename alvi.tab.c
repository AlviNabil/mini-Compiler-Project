
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
#line 1 "alvi.y"
 //header functions	
	#include<stdio.h>
	#include<stdlib.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	int yylex(void);
	void yyerror(char *s);
	FILE *yyin;
	
	int no_var = 0;//variable index tracker
	
	
	
	struct variable_structure{// Defining a structure to handle the properties of variables.
		int vType;
		char vName[200];
		int ival;
		float fval;
		char *cval;
	}variable[100];
	
// Function for searching if the present variable name has already been used.
	
	int usedVar(char name[200]){
		int i;
		for(i=0; i<no_var; i++){
			if(!strcmp(variable[i].vName, name)){
				return 1;
			}
		}
		return 0;
	}
	
// Setting the type of a variable (in integer value)
	
	void setType(int type){
		int i;
		for(i=0; i<no_var; i++){
			if(variable[i].vType == -1){
				variable[i].vType = type;
			}
		}
	}
	
// Fining the index of any variable
	
	int getIndex(char name[200]){
		int i;
		for(i=0; i<no_var; i++){
			if(!strcmp(variable[i].vName, name)){
				return i;
			}
		}
		return -1;
	}
	


/* Line 189 of yacc.c  */
#line 133 "alvi.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     MAIN = 258,
     INT = 259,
     CHAR = 260,
     FLOAT = 261,
     POW = 262,
     FACTO = 263,
     LOOP = 264,
     PRIME = 265,
     READ = 266,
     SHOW = 267,
     IF = 268,
     ELIF = 269,
     ELSE = 270,
     SWITCH = 271,
     OFFSET = 272,
     THEKE = 273,
     CASE = 274,
     DEFAULT = 275,
     FROM = 276,
     TO = 277,
     INC = 278,
     DEC = 279,
     MAX = 280,
     MIN = 281,
     ID = 282,
     NUM = 283,
     WHILE = 284,
     EQUAL = 285,
     NOTEQUAL = 286,
     GT = 287,
     GOE = 288,
     LT = 289,
     LOE = 290,
     SHURU = 291,
     SHESH = 292,
     JOG = 293,
     SIN = 294,
     COS = 295,
     TAN = 296,
     LOG = 297,
     LOG10 = 298,
     BIYOG = 299,
     GUN = 300,
     VAAG = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 60 "alvi.y"

	double val;
	char* stringValue;



/* Line 214 of yacc.c  */
#line 222 "alvi.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 234 "alvi.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   219

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  184

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,    48,     2,     2,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    49,
       2,    53,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    54,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    12,    15,    18,    21,    24,
      27,    30,    33,    36,    39,    42,    45,    48,    50,    56,
      64,    70,    76,    82,    88,    94,   102,   105,   112,   113,
     118,   128,   138,   148,   158,   166,   176,   185,   186,   191,
     192,   196,   198,   200,   202,   206,   208,   213,   215,   219,
     223,   227,   231,   235,   239,   243,   247,   251,   255,   257,
     261,   263
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,     3,    36,    57,    37,    -1,    -1,    74,
      57,    -1,    77,    57,    -1,    71,    57,    -1,    69,    57,
      -1,    65,    57,    -1,    58,    57,    -1,    59,    57,    -1,
      60,    57,    -1,    61,    57,    -1,    62,    57,    -1,    64,
      57,    -1,    63,    57,    -1,    70,    57,    -1,    78,    -1,
      12,    47,    27,    48,    49,    -1,     7,    47,    28,    50,
      28,    48,    49,    -1,    39,    47,    28,    48,    49,    -1,
      40,    47,    28,    48,    49,    -1,    41,    47,    28,    48,
      49,    -1,    43,    47,    28,    48,    49,    -1,    42,    47,
      28,    48,    49,    -1,    16,    47,    27,    48,    51,    66,
      52,    -1,    67,    68,    -1,    19,    28,    51,    57,    52,
      67,    -1,    -1,    20,    51,    57,    52,    -1,     9,    27,
      18,    28,    17,    28,    51,    57,    52,    -1,     9,    27,
      18,    27,    17,    28,    51,    57,    52,    -1,     9,    28,
      18,    27,    17,    28,    51,    57,    52,    -1,     9,    28,
      18,    28,    17,    28,    51,    57,    52,    -1,    29,    47,
      78,    48,    51,    57,    52,    -1,    13,    47,    78,    48,
      51,    57,    52,    72,    73,    -1,    14,    47,    78,    48,
      51,    57,    52,    72,    -1,    -1,    15,    51,    57,    52,
      -1,    -1,    75,    76,    49,    -1,     4,    -1,     6,    -1,
       5,    -1,    76,    50,    27,    -1,    27,    -1,    27,    53,
      78,    49,    -1,    28,    -1,    78,    38,    78,    -1,    78,
      44,    78,    -1,    78,    45,    78,    -1,    78,    46,    78,
      -1,    78,    54,    78,    -1,    78,    34,    78,    -1,    78,
      32,    78,    -1,    78,    33,    78,    -1,    78,    35,    78,
      -1,    47,    78,    48,    -1,    79,    -1,    47,    78,    48,
      -1,    27,    -1,    28,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   109,   124,
     131,   138,   143,   150,   155,   163,   167,   170,   173,   175,
     179,   191,   204,   216,   230,   241,   252,   262,   264,   267,
     277,   281,   282,   283,   285,   297,   313,   336,   338,   340,
     342,   344,   352,   353,   355,   356,   358,   360,   364,   366,
     367,   389
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "INT", "CHAR", "FLOAT", "POW",
  "FACTO", "LOOP", "PRIME", "READ", "SHOW", "IF", "ELIF", "ELSE", "SWITCH",
  "OFFSET", "THEKE", "CASE", "DEFAULT", "FROM", "TO", "INC", "DEC", "MAX",
  "MIN", "ID", "NUM", "WHILE", "EQUAL", "NOTEQUAL", "GT", "GOE", "LT",
  "LOE", "SHURU", "SHESH", "JOG", "SIN", "COS", "TAN", "LOG", "LOG10",
  "BIYOG", "GUN", "VAAG", "'('", "')'", "';'", "','", "'{'", "'}'", "'='",
  "'^'", "$accept", "program", "statement", "print_code", "powFunct",
  "sinFunct", "cosFunct", "tanFunct", "log10Funct", "logFunct",
  "switch_code", "case_code", "casenum_code", "default_code", "for_code",
  "while_code", "ifCondition", "else_if_Condition", "else_Condition",
  "declaration", "TYPE", "ID1", "assignment", "expression", "t", 0
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
     295,   296,   297,   298,   299,   300,   301,    40,    41,    59,
      44,   123,   125,    61,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    67,    68,
      69,    69,    69,    69,    70,    71,    72,    72,    73,    73,
      74,    75,    75,    75,    76,    76,    77,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    79,
      79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     5,     7,
       5,     5,     5,     5,     5,     7,     2,     6,     0,     4,
       9,     9,     9,     9,     7,     9,     8,     0,     4,     0,
       3,     1,     1,     1,     3,     1,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,    41,    43,    42,     0,     0,
       0,     0,     0,    60,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     0,     3,    17,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,     0,     2,     9,    10,    11,    12,    13,
      15,    14,     8,     7,    16,     6,     4,    45,     0,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,    40,     0,    54,    55,    53,    56,    48,
      49,    50,    51,    52,     0,     0,     0,     0,     0,     0,
       0,     0,    46,     0,     0,     0,     0,     0,     0,    44,
       0,     0,     0,     0,     0,    18,     3,    28,     3,    20,
      21,    22,    24,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     3,     3,     3,     3,    37,
       0,    25,     0,    26,    34,     0,     0,     0,     0,     0,
      39,     3,     3,    31,    30,    32,    33,     0,     0,    35,
       0,     0,     0,     3,    28,    29,     0,     0,    27,     3,
      38,     0,    37,    36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   141,   142,   153,    31,    32,    33,   160,   169,    34,
      35,    68,    36,    37,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -24
static const yytype_int16 yypact[] =
{
      16,   -22,    35,    11,   -24,   -24,   -24,   -24,    -5,    -2,
      -4,    -3,    -1,    -8,   -24,     0,     1,     2,     8,     9,
      10,    -6,    22,    11,    11,    11,    11,    11,    11,    11,
      11,    11,    11,    11,    11,    33,    11,   144,   -24,    46,
      57,    63,    58,    -6,    60,    -6,    -6,    65,    67,    68,
      69,    70,   -24,    38,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -21,   -24,
      -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    -6,    59,
       3,     5,    64,    56,    71,    82,   109,    73,    81,    84,
      85,    86,   -24,   -24,    79,   144,   144,   144,   144,   151,
     151,    45,    45,   144,    80,    90,    94,    96,   101,    88,
      89,    95,   -24,    97,   100,   102,   103,   115,   117,   -24,
      87,   139,   140,   141,   142,   -24,    11,   111,    11,   -24,
     -24,   -24,   -24,   -24,   125,   129,   136,   143,   148,    93,
     163,   149,   172,   150,   -24,    11,    11,    11,    11,   179,
     152,   -24,   153,   -24,   -24,   154,   155,   156,   157,   164,
     180,    11,    11,   -24,   -24,   -24,   -24,    -6,   159,   -24,
     160,   161,   127,    11,   111,   -24,   165,   162,   -24,    11,
     -24,   166,   179,   -24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -24,   -24,   -23,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,    26,   -24,   -24,   -24,   -24,    37,   -24,   -24,
     -24,   -24,   -24,    -9,   -24
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    53,    69,     3,     5,     6,     7,     8,     1,
       9,    52,    14,    10,    11,    40,    41,    12,    93,    94,
     105,   106,   107,   108,    83,     4,    85,    86,    13,    14,
      15,    21,    39,    42,    43,    45,    44,    46,    47,    48,
      16,    17,    18,    19,    20,    49,    50,    51,    21,    54,
      67,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      70,    71,    72,    73,    79,    80,    74,    70,    71,    72,
      73,    81,    75,    76,    77,    82,    92,    84,    70,    71,
      72,    73,    78,    87,    74,    88,    89,    90,    91,    78,
      75,    76,    77,   139,   110,   143,   119,   121,   120,   104,
      78,   122,   109,   123,    70,    71,    72,    73,   124,   111,
      74,   114,   155,   156,   157,   158,    75,    76,    77,   115,
     140,   112,   116,   117,   118,   134,    78,   125,   170,   171,
     126,    70,    71,    72,    73,   149,   127,    74,   128,   129,
     177,   130,   131,    75,    76,    77,   181,   113,   172,    70,
      71,    72,    73,    78,   132,    74,   133,   135,   136,   137,
     138,    75,    76,    77,   144,   176,    70,    71,    72,    73,
     145,    78,    74,    70,    71,    72,    73,   146,    75,    76,
      77,   150,   152,   159,   147,   168,    76,    77,    78,   148,
     178,   151,   154,   161,   162,    78,   163,   164,   165,   166,
     173,   167,   174,   175,   180,     0,   179,     0,   182,   183
};

static const yytype_int16 yycheck[] =
{
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    21,    36,    36,     4,     5,     6,     7,     3,
       9,    27,    28,    12,    13,    27,    28,    16,    49,    50,
      27,    28,    27,    28,    43,     0,    45,    46,    27,    28,
      29,    47,    47,    47,    47,    53,    47,    47,    47,    47,
      39,    40,    41,    42,    43,    47,    47,    47,    47,    37,
      27,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      32,    33,    34,    35,    28,    18,    38,    32,    33,    34,
      35,    18,    44,    45,    46,    27,    48,    27,    32,    33,
      34,    35,    54,    28,    38,    28,    28,    28,    28,    54,
      44,    45,    46,   126,    48,   128,    27,    17,    28,    50,
      54,    17,    48,    17,    32,    33,    34,    35,    17,    48,
      38,    48,   145,   146,   147,   148,    44,    45,    46,    48,
      19,    49,    48,    48,    48,    48,    54,    49,   161,   162,
      51,    32,    33,    34,    35,    52,    51,    38,    51,    49,
     173,    49,    49,    44,    45,    46,   179,    48,   167,    32,
      33,    34,    35,    54,    49,    38,    49,    28,    28,    28,
      28,    44,    45,    46,    49,    48,    32,    33,    34,    35,
      51,    54,    38,    32,    33,    34,    35,    51,    44,    45,
      46,    28,    20,    14,    51,    15,    45,    46,    54,    51,
     174,    52,    52,    51,    51,    54,    52,    52,    52,    52,
      51,    47,    52,    52,    52,    -1,    51,    -1,    52,   182
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    56,    36,     0,     4,     5,     6,     7,     9,
      12,    13,    16,    27,    28,    29,    39,    40,    41,    42,
      43,    47,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    69,    70,    71,    74,    75,    77,    78,    79,    47,
      27,    28,    47,    47,    47,    53,    47,    47,    47,    47,
      47,    47,    27,    78,    37,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    27,    76,    57,
      32,    33,    34,    35,    38,    44,    45,    46,    54,    28,
      18,    18,    27,    78,    27,    78,    78,    28,    28,    28,
      28,    28,    48,    49,    50,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    50,    27,    28,    27,    28,    48,
      48,    48,    49,    48,    48,    48,    48,    48,    48,    27,
      28,    17,    17,    17,    17,    49,    51,    51,    51,    49,
      49,    49,    49,    49,    48,    28,    28,    28,    28,    57,
      19,    66,    67,    57,    49,    51,    51,    51,    51,    52,
      28,    52,    20,    68,    52,    57,    57,    57,    57,    14,
      72,    51,    51,    52,    52,    52,    52,    47,    15,    73,
      57,    57,    78,    51,    52,    52,    48,    57,    67,    51,
      52,    57,    52,    72
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
        case 2:

/* Line 1455 of yacc.c  */
#line 80 "alvi.y"
    {printf("\nValid statement\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 109 "alvi.y"
    {
	int i = getIndex((yyvsp[(3) - (5)].stringValue));
	if(variable[i].vType == 1){
		printf("\nVariable name: %s, Value: %d\n\n", variable[i].vName, variable[i].ival);
	}
	else if(variable[i].vType == 2){
		printf("\nVariable name: %s, Value: %f\n\n", variable[i].vName, variable[i].fval);
	}
	else{
		printf("\nVariable name: %s, Value: %c\n\n", variable[i].vName, variable[i].cval);
	}

	;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 124 "alvi.y"
    {		
	int i;
	i = pow((yyvsp[(3) - (7)].val),(yyvsp[(5) - (7)].val));
	printf("\nPower function value: %d \n\n", i);
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 131 "alvi.y"
    {
	printf("\nValue of Sin(%lf) is %lf\n\n",(yyvsp[(3) - (5)].val),sin((yyvsp[(3) - (5)].val)*3.1416/180)); 
	(yyval.val)=sin((yyvsp[(3) - (5)].val)*3.1416/180);
;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 138 "alvi.y"
    {
	printf("\nValue of Cos(%lf) is %lf\n\n",(yyvsp[(3) - (5)].val),cos((yyvsp[(3) - (5)].val)*3.1416/180)); 
	(yyval.val)=cos((yyvsp[(3) - (5)].val)*3.1416/180);
;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 143 "alvi.y"
    {
	printf("\nValue of Tan(%lf) is %lf\n\n",(yyvsp[(3) - (5)].val),tan((yyvsp[(3) - (5)].val)*3.1416/180)); 
	(yyval.val)=tan((yyvsp[(3) - (5)].val)*3.1416/180);
;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 150 "alvi.y"
    {
	printf("Value of Log10(%lf) is %lf\n\n",(yyvsp[(3) - (5)].val),(log((yyvsp[(3) - (5)].val)*1.0)/log(10.0))); 
	(yyval.val)=(log((yyvsp[(3) - (5)].val)*1.0)/log(10.0));
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 155 "alvi.y"
    {
	printf("Value of Log(%lf) is %lf\n\n",(yyvsp[(3) - (5)].val),(log((yyvsp[(3) - (5)].val)))); 
	(yyval.val)=(log((yyvsp[(3) - (5)].val)));
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 163 "alvi.y"
    {
	printf("\nSwitch Case demo.\n");
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 170 "alvi.y"
    {
	printf("\nCase no: %d\n", (yyvsp[(2) - (6)].val));
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 179 "alvi.y"
    {
	printf("\nFor loop\n");
	int ii = getIndex((yyvsp[(2) - (9)].stringValue));
	int i = variable[ii].ival;
	int j = (yyvsp[(4) - (9)].val);
	int inc = (yyvsp[(6) - (9)].val);
	int k;
	for(k=i; k<j; k=k+inc){
		printf("\nLOOP RUNNING(LOOP-THEKE)\n");
	}
		
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 191 "alvi.y"
    {
	printf("\nFor loop\n");
	int ii = getIndex((yyvsp[(2) - (9)].stringValue));
	int i = variable[ii].ival;
	int jj = getIndex((yyvsp[(4) - (9)].stringValue));
	int j = variable[jj].ival;
	int inc = (yyvsp[(6) - (9)].val);
	int k;
	for(k=i; k<j; k=k+inc){
		printf("\nLOOP RUNNING(LOOP-THEKE)\n");
	}
		
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 204 "alvi.y"
    {
	printf("\nFor loop\n");
	int i = (yyvsp[(2) - (9)].val);
	int jj = getIndex((yyvsp[(4) - (9)].stringValue));
	int j = variable[jj].ival;
	int inc = (yyvsp[(6) - (9)].val);
	int k;
	for(k=i; k<j; k=k+inc){
		printf("\nLOOP RUNNING(LOOP-THEKE)\n");
	}
		
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 216 "alvi.y"
    {
	printf("\nFor loop\n");
	int i = (yyvsp[(2) - (9)].val);
	int j = (yyvsp[(4) - (9)].val);
	int inc = (yyvsp[(6) - (9)].val);
	int k;
	for(k=i; k<j; k=k+inc){
		printf("\nLOOP RUNNING(LOOP-THEKE)\n");
	}
		
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 230 "alvi.y"
    {
	printf("\nWhile Loop\n");
	int i = (yyvsp[(3) - (7)].val);
	while(i==1){
		printf("\nWhile Loop running: %d\n", (yyvsp[(6) - (7)].val));
	}
	
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 241 "alvi.y"
    {
	printf("\nIF CONDITION");
	int i = (yyvsp[(3) - (9)].val);
	if(i==1){
		printf("\nIF CONDITION IS TRUE\n");
	}
	else{
		printf("\nIF CONDITION IS FALSE\n");
	}
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 252 "alvi.y"
    {
	printf("\nELSE IF CONDITION\n");
	int i = (yyvsp[(3) - (8)].val);
	if(i==1){
		printf("\nELSE IF CONDITION IS TRUE\n");
	}
	else{
		printf("\nELSE IF CONDITION IS FALSE\n");
	}
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 264 "alvi.y"
    {
	printf("\nELSE CONDITION\n");
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 277 "alvi.y"
    {
	setType((yyvsp[(1) - (3)].val));
;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 281 "alvi.y"
    {(yyval.val) = 1; printf("\nTyp:- Integer\n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 282 "alvi.y"
    {(yyval.val) = 2; printf("\n Typ:- Float\n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 283 "alvi.y"
    {(yyval.val) = 0; printf("\n Typ:- Character\n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 285 "alvi.y"
    {
	if(usedVar((yyvsp[(3) - (3)].stringValue))==0){
		printf("\nValid declaration\n");
		strcpy(variable[no_var].vName, (yyvsp[(3) - (3)].stringValue));
		printf("\nVariable name: %s", (yyvsp[(3) - (3)].stringValue));
		variable[no_var].vType =  -1;
		no_var = no_var + 1;
	}
	else{
		printf("\nVariable is already used");
	}
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 297 "alvi.y"
    {
	if(usedVar((yyvsp[(1) - (1)].stringValue))==0){
		printf("\nValid declaration\n");
		strcpy(variable[no_var].vName, (yyvsp[(1) - (1)].stringValue));
		printf("\nVariable name: %s", (yyvsp[(1) - (1)].stringValue));
		variable[no_var].vType =  -1;
		no_var = no_var + 1;
	}
	else{
		printf("\nVariable is already used\n");
	}
	strcpy((yyval.stringValue), (yyvsp[(1) - (1)].stringValue));
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 313 "alvi.y"
    {
	(yyval.val) = (yyvsp[(3) - (4)].val);
	if(usedVar((yyvsp[(1) - (4)].stringValue))==1){
		int i = getIndex((yyvsp[(1) - (4)].stringValue));
		if(variable[i].vType==0){
			variable[i].cval = (char*)&(yyvsp[(3) - (4)].val)-'a';
			printf("\nVariable value: %s", variable[i].cval);
		}
		else if(variable[i].vType==1){
			variable[i].ival = (yyvsp[(3) - (4)].val);
			printf("\nVariable value: %d", variable[i].ival);
		}
		else if(variable[i].vType==2){
			variable[i].fval = (float)(yyvsp[(3) - (4)].val);
			printf("\nVariable value: %f", variable[i].fval);
		}
	}
	else{
		printf("\nVariable is not declared\n");
	}
;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 336 "alvi.y"
    { (yyval.val) = (yyvsp[(1) - (1)].val); 	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 338 "alvi.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 340 "alvi.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 342 "alvi.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) * (yyvsp[(3) - (3)].val); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 344 "alvi.y"
    { if((yyvsp[(3) - (3)].val)){
				     					(yyval.val) = (yyvsp[(1) - (3)].val) / (yyvsp[(3) - (3)].val);
				  					}
				  					else{
										(yyval.val) = 0;
										printf("\ndivision by zero error\t");
				  					} 	
				    			;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 352 "alvi.y"
    { (yyval.val) = pow((yyvsp[(1) - (3)].val) , (yyvsp[(3) - (3)].val));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 353 "alvi.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 355 "alvi.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 356 "alvi.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) >= (yyvsp[(3) - (3)].val); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 358 "alvi.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) <= (yyvsp[(3) - (3)].val); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 360 "alvi.y"
    { (yyval.val) = (yyvsp[(2) - (3)].val);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 364 "alvi.y"
    {(yyval.val)=(yyvsp[(1) - (1)].val);}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 366 "alvi.y"
    {(yyval.val) = (yyvsp[(2) - (3)].val);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 367 "alvi.y"
    {
	int id_index = getIndex((yyvsp[(1) - (1)].stringValue));
	if(id_index == -1)
	{
		yyerror("VARIABLE DOESN'T EXIST\n");
	}
	else
	{
		/*if(variable[id_index].vType == 0)
		{
			$$ = variable[id_index].cval;
		}*/
		if(variable[id_index].vType == 1)
		{
			(yyval.val) = variable[id_index].ival;
		}
		else if(variable[id_index].vType == 2)
		{
			(yyval.val) = variable[id_index].fval;
		}
	}
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 389 "alvi.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val);;}
    break;



/* Line 1455 of yacc.c  */
#line 2039 "alvi.tab.c"
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



/* Line 1675 of yacc.c  */
#line 392 "alvi.y"


void yyerror(char *s)
{
	fprintf(stderr, "\n%s", s);
}

int main(){
	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
	yyparse();
	return 0;
}
