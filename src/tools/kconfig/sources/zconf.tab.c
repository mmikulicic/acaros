/* A Bison parser, made from zconf.y, by GNU bison 1.75.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON	1

/* Pure parsers.  */
#define YYPURE	0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* If NAME_PREFIX is specified substitute the variables and functions
   names.  */
#define yyparse zconfparse
#define yylex   zconflex
#define yyerror zconferror
#define yylval  zconflval
#define yychar  zconfchar
#define yydebug zconfdebug
#define yynerrs zconfnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_MAINMENU = 258,
     T_MENU = 259,
     T_ENDMENU = 260,
     T_SOURCE = 261,
     T_CHOICE = 262,
     T_ENDCHOICE = 263,
     T_COMMENT = 264,
     T_CONFIG = 265,
     T_HELP = 266,
     T_HELPTEXT = 267,
     T_IF = 268,
     T_ENDIF = 269,
     T_DEPENDS = 270,
     T_REQUIRES = 271,
     T_OPTIONAL = 272,
     T_PROMPT = 273,
     T_DEFAULT = 274,
     T_TRISTATE = 275,
     T_BOOLEAN = 276,
     T_STRING = 277,
     T_INT = 278,
     T_HEX = 279,
     T_WORD = 280,
     T_WORD_QUOTE = 281,
     T_UNEQUAL = 282,
     T_EOF = 283,
     T_EOL = 284,
     T_CLOSE_PAREN = 285,
     T_OPEN_PAREN = 286,
     T_ON = 287,
     T_OR = 288,
     T_AND = 289,
     T_EQUAL = 290,
     T_NOT = 291
   };
#endif
#define T_MAINMENU 258
#define T_MENU 259
#define T_ENDMENU 260
#define T_SOURCE 261
#define T_CHOICE 262
#define T_ENDCHOICE 263
#define T_COMMENT 264
#define T_CONFIG 265
#define T_HELP 266
#define T_HELPTEXT 267
#define T_IF 268
#define T_ENDIF 269
#define T_DEPENDS 270
#define T_REQUIRES 271
#define T_OPTIONAL 272
#define T_PROMPT 273
#define T_DEFAULT 274
#define T_TRISTATE 275
#define T_BOOLEAN 276
#define T_STRING 277
#define T_INT 278
#define T_HEX 279
#define T_WORD 280
#define T_WORD_QUOTE 281
#define T_UNEQUAL 282
#define T_EOF 283
#define T_EOL 284
#define T_CLOSE_PAREN 285
#define T_OPEN_PAREN 286
#define T_ON 287
#define T_OR 288
#define T_AND 289
#define T_EQUAL 290
#define T_NOT 291




/* Copy the first part of user declarations.  */

/*
 * Copyright (C) 2002 Roman Zippel <zippel@linux-m68k.org>
 * Released under the terms of the GNU GPL v2.0.
 */

#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define printd(mask, fmt...) if (cdebug & (mask)) printf(fmt)

#define PRINTD		0x0001
#define DEBUG_PARSE	0x0002

int cdebug = PRINTD;

extern int zconflex(void);
static void zconfprint(const char *err, ...);
static void zconferror(const char *err);
static bool zconf_endtoken(int token, int starttoken, int endtoken);

struct symbol *symbol_hash[257];

#define YYERROR_VERBOSE


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

#ifndef YYSTYPE
#line 33 "zconf.y"
typedef union {
	int token;
	char *string;
	struct symbol *symbol;
	struct expr *expr;
	struct menu *menu;
} yystype;
/* Line 193 of /usr/share/bison/yacc.c.  */
#line 191 "zconf.tab.c"
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif

#ifndef YYLTYPE
typedef struct yyltype
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} yyltype;
# define YYLTYPE yyltype
# define YYLTYPE_IS_TRIVIAL 1
#endif

/* Copy the second part of user declarations.  */

#define LKC_DIRECT_LINK
#include "lkc.h"


/* Line 213 of /usr/share/bison/yacc.c.  */
#line 215 "zconf.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];	\
	}					\
      while (0)
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
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  2
#define YYLAST   154

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  39
/* YYNRULES -- Number of rules. */
#define YYNRULES  96
/* YYNRULES -- Number of states. */
#define YYNSTATES  146

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
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
      35,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    17,    19,
      21,    23,    26,    28,    30,    32,    34,    36,    39,    43,
      44,    48,    52,    55,    58,    61,    64,    67,    70,    73,
      77,    81,    83,    87,    89,    94,    97,    98,   102,   106,
     109,   112,   116,   118,   122,   123,   126,   129,   131,   137,
     141,   142,   145,   148,   151,   154,   158,   160,   165,   168,
     169,   172,   175,   178,   182,   185,   188,   191,   195,   198,
     201,   202,   206,   209,   213,   216,   219,   220,   222,   226,
     228,   230,   232,   234,   236,   238,   240,   241,   244,   246,
     250,   254,   258,   261,   265,   269,   271
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      38,     0,    -1,    -1,    38,    39,    -1,    40,    -1,    48,
      -1,    59,    -1,     3,    70,    72,    -1,     5,    -1,    14,
      -1,     8,    -1,     1,    72,    -1,    54,    -1,    64,    -1,
      42,    -1,    62,    -1,    72,    -1,    10,    25,    -1,    41,
      29,    43,    -1,    -1,    43,    44,    29,    -1,    43,    68,
      29,    -1,    43,    66,    -1,    43,    29,    -1,    20,    69,
      -1,    21,    69,    -1,    23,    69,    -1,    24,    69,    -1,
      22,    69,    -1,    18,    70,    73,    -1,    19,    75,    73,
      -1,     7,    -1,    45,    29,    49,    -1,    71,    -1,    46,
      51,    47,    29,    -1,    46,    51,    -1,    -1,    49,    50,
      29,    -1,    49,    68,    29,    -1,    49,    66,    -1,    49,
      29,    -1,    18,    70,    73,    -1,    17,    -1,    19,    75,
      73,    -1,    -1,    51,    40,    -1,    13,    74,    -1,    71,
      -1,    52,    29,    55,    53,    29,    -1,    52,    29,    55,
      -1,    -1,    55,    40,    -1,    55,    59,    -1,    55,    48,
      -1,     4,    70,    -1,    56,    29,    67,    -1,    71,    -1,
      57,    60,    58,    29,    -1,    57,    60,    -1,    -1,    60,
      40,    -1,    60,    59,    -1,    60,    48,    -1,    60,     1,
      29,    -1,     6,    70,    -1,    61,    29,    -1,     9,    70,
      -1,    63,    29,    67,    -1,    11,    29,    -1,    65,    12,
      -1,    -1,    67,    68,    29,    -1,    67,    29,    -1,    15,
      32,    74,    -1,    15,    74,    -1,    16,    74,    -1,    -1,
      70,    -1,    70,    13,    74,    -1,    25,    -1,    26,    -1,
       5,    -1,     8,    -1,    14,    -1,    29,    -1,    28,    -1,
      -1,    13,    74,    -1,    75,    -1,    75,    35,    75,    -1,
      75,    27,    75,    -1,    31,    74,    30,    -1,    36,    74,
      -1,    74,    33,    74,    -1,    74,    34,    74,    -1,    25,
      -1,    26,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,    89,    89,    90,    93,    94,    95,    96,    97,    98,
      99,   100,   103,   105,   106,   107,   108,   114,   122,   128,
     130,   131,   132,   133,   136,   142,   148,   154,   160,   166,
     172,   180,   189,   195,   203,   205,   211,   213,   214,   215,
     216,   219,   225,   231,   237,   239,   244,   253,   261,   263,
     269,   271,   272,   273,   278,   285,   291,   299,   301,   307,
     309,   310,   311,   312,   315,   321,   328,   335,   342,   348,
     355,   356,   357,   360,   365,   370,   378,   380,   384,   389,
     390,   393,   394,   395,   398,   399,   401,   402,   405,   406,
     407,   408,   409,   410,   411,   414,   415
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_MAINMENU", "T_MENU", "T_ENDMENU", 
  "T_SOURCE", "T_CHOICE", "T_ENDCHOICE", "T_COMMENT", "T_CONFIG", 
  "T_HELP", "T_HELPTEXT", "T_IF", "T_ENDIF", "T_DEPENDS", "T_REQUIRES", 
  "T_OPTIONAL", "T_PROMPT", "T_DEFAULT", "T_TRISTATE", "T_BOOLEAN", 
  "T_STRING", "T_INT", "T_HEX", "T_WORD", "T_WORD_QUOTE", "T_UNEQUAL", 
  "T_EOF", "T_EOL", "T_CLOSE_PAREN", "T_OPEN_PAREN", "T_ON", "T_OR", 
  "T_AND", "T_EQUAL", "T_NOT", "$accept", "input", "block", 
  "common_block", "config_entry_start", "config_stmt", 
  "config_option_list", "config_option", "choice", "choice_entry", 
  "choice_end", "choice_stmt", "choice_option_list", "choice_option", 
  "choice_block", "if", "if_end", "if_stmt", "if_block", "menu", 
  "menu_entry", "menu_end", "menu_stmt", "menu_block", "source", 
  "source_stmt", "comment", "comment_stmt", "help_start", "help", 
  "depends_list", "depends", "prompt_stmt_opt", "prompt", "end", 
  "nl_or_eof", "if_expr", "expr", "symbol", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    37,    38,    38,    39,    39,    39,    39,    39,    39,
      39,    39,    40,    40,    40,    40,    40,    41,    42,    43,
      43,    43,    43,    43,    44,    44,    44,    44,    44,    44,
      44,    45,    46,    47,    48,    48,    49,    49,    49,    49,
      49,    50,    50,    50,    51,    51,    52,    53,    54,    54,
      55,    55,    55,    55,    56,    57,    58,    59,    59,    60,
      60,    60,    60,    60,    61,    62,    63,    64,    65,    66,
      67,    67,    67,    68,    68,    68,    69,    69,    69,    70,
      70,    71,    71,    71,    72,    72,    73,    73,    74,    74,
      74,    74,    74,    74,    74,    75,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     3,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     2,     3,     0,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     1,     3,     1,     4,     2,     0,     3,     3,     2,
       2,     3,     1,     3,     0,     2,     2,     1,     5,     3,
       0,     2,     2,     2,     2,     3,     1,     4,     2,     0,
       2,     2,     2,     3,     2,     2,     2,     3,     2,     2,
       0,     3,     2,     3,     2,     2,     0,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     3,
       3,     3,     2,     3,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       2,     0,     1,     0,     0,     0,     8,     0,    31,    10,
       0,     0,     0,     9,    85,    84,     3,     4,     0,    14,
       0,    44,     5,     0,    12,     0,    59,     6,     0,    15,
       0,    13,    16,    11,    79,    80,     0,    54,    64,    66,
      17,    95,    96,     0,     0,    46,    88,    19,    36,    35,
      50,    70,     0,    65,    70,     7,     0,    92,     0,     0,
       0,     0,    18,    32,    81,    82,    83,    45,     0,    33,
      49,    55,     0,    60,    62,     0,    61,    56,    67,    91,
      93,    94,    90,    89,     0,     0,     0,     0,     0,    76,
      76,    76,    76,    76,    23,     0,     0,    22,     0,    42,
       0,     0,    40,     0,    39,     0,    34,    51,    53,     0,
      52,    47,    72,     0,    63,    57,    68,     0,    74,    75,
      86,    86,    24,    77,    25,    28,    26,    27,    20,    69,
      21,    86,    86,    37,    38,    48,    71,    73,     0,    29,
      30,     0,    41,    43,    87,    78
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,    16,    17,    18,    19,    62,    95,    20,    21,
      68,    22,    63,   103,    49,    23,   109,    24,    70,    25,
      26,    75,    27,    52,    28,    29,    30,    31,    96,    97,
      71,   113,   122,   123,    69,    32,   139,    45,    46
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -120
static const short yypact[] =
{
    -120,    17,  -120,    32,    71,    71,  -120,    71,  -120,  -120,
      71,    11,    99,  -120,  -120,  -120,  -120,  -120,    12,  -120,
      22,  -120,  -120,    35,  -120,    52,  -120,  -120,    56,  -120,
      60,  -120,  -120,  -120,  -120,  -120,    32,  -120,  -120,  -120,
    -120,  -120,  -120,    99,    99,    83,    38,  -120,  -120,    74,
    -120,  -120,    49,  -120,  -120,  -120,    98,  -120,    99,    99,
     101,   101,    89,   104,  -120,  -120,  -120,  -120,    65,  -120,
      62,    77,    72,  -120,  -120,    85,  -120,  -120,    77,  -120,
      95,  -120,  -120,  -120,   105,     8,    99,    71,   101,    71,
      71,    71,    71,    71,  -120,   113,   131,  -120,   115,  -120,
      71,   101,  -120,   116,  -120,   117,  -120,  -120,  -120,   118,
    -120,  -120,  -120,   119,  -120,  -120,  -120,    99,    83,    83,
     136,   136,  -120,   137,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,   136,   136,  -120,  -120,  -120,  -120,    83,    99,  -120,
    -120,    99,  -120,  -120,    83,    83
};

/* YYPGOTO[NTERM-NUM].  */
static const yysigned_char yypgoto[] =
{
    -120,  -120,  -120,   -38,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,   -42,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,   -33,  -120,  -120,  -120,  -120,  -120,  -120,    88,
     100,    78,    46,    -1,   -23,     2,  -119,   -43,   -53
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -59
static const short yytable[] =
{
      56,    57,   140,    36,    37,    33,    38,    82,    83,    39,
      74,    67,   142,   143,    73,    80,    81,     2,     3,    76,
       4,     5,     6,     7,     8,     9,    10,    11,   108,    77,
      12,    13,   107,    41,    42,   121,    40,   110,    55,    43,
     117,    47,   118,   119,    44,    14,    15,   111,   132,   -58,
      72,    48,   -58,     5,    64,     7,     8,    65,    10,    11,
      14,    15,    12,    66,    50,    60,     5,    64,     7,     8,
      65,    10,    11,    61,   137,    12,    66,    14,    15,    64,
       7,    51,    65,    10,    11,    53,   120,    12,    66,    54,
      14,    15,    85,    86,   106,   144,    34,    35,   145,   131,
      84,   114,    14,    15,    85,    86,   112,    87,    88,    89,
      90,    91,    92,    93,   115,    84,    58,    59,    94,    85,
      86,    99,   100,   101,    41,    42,    41,    42,    79,    59,
      43,    58,    59,   102,   116,    44,   124,   125,   126,   127,
      98,   105,   128,   129,   130,   133,   134,   135,   136,   138,
     141,   104,     0,     0,    78
};

static const short yycheck[] =
{
      43,    44,   121,     4,     5,     3,     7,    60,    61,    10,
      52,    49,   131,   132,    52,    58,    59,     0,     1,    52,
       3,     4,     5,     6,     7,     8,     9,    10,    70,    52,
      13,    14,    70,    25,    26,    88,    25,    70,    36,    31,
      32,    29,    85,    86,    36,    28,    29,    70,   101,     0,
       1,    29,     3,     4,     5,     6,     7,     8,     9,    10,
      28,    29,    13,    14,    29,    27,     4,     5,     6,     7,
       8,     9,    10,    35,   117,    13,    14,    28,    29,     5,
       6,    29,     8,     9,    10,    29,    87,    13,    14,    29,
      28,    29,    15,    16,    29,   138,    25,    26,   141,   100,
      11,    29,    28,    29,    15,    16,    29,    18,    19,    20,
      21,    22,    23,    24,    29,    11,    33,    34,    29,    15,
      16,    17,    18,    19,    25,    26,    25,    26,    30,    34,
      31,    33,    34,    29,    29,    36,    90,    91,    92,    93,
      62,    63,    29,    12,    29,    29,    29,    29,    29,    13,
      13,    63,    -1,    -1,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    38,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    13,    14,    28,    29,    39,    40,    41,    42,
      45,    46,    48,    52,    54,    56,    57,    59,    61,    62,
      63,    64,    72,    72,    25,    26,    70,    70,    70,    70,
      25,    25,    26,    31,    36,    74,    75,    29,    29,    51,
      29,    29,    60,    29,    29,    72,    74,    74,    33,    34,
      27,    35,    43,    49,     5,     8,    14,    40,    47,    71,
      55,    67,     1,    40,    48,    58,    59,    71,    67,    30,
      74,    74,    75,    75,    11,    15,    16,    18,    19,    20,
      21,    22,    23,    24,    29,    44,    65,    66,    68,    17,
      18,    19,    29,    50,    66,    68,    29,    40,    48,    53,
      59,    71,    29,    68,    29,    29,    29,    32,    74,    74,
      70,    75,    69,    70,    69,    69,    69,    69,    29,    12,
      29,    70,    75,    29,    29,    29,    29,    74,    13,    73,
      73,    13,    73,    73,    74,    74
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

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
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)           \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#define YYLEX	yylex ()

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
} while (0)
# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*-----------------------------.
| Print this symbol on YYOUT.  |
`-----------------------------*/

static void
#if defined (__STDC__) || defined (__cplusplus)
yysymprint (FILE* yyout, int yytype, YYSTYPE yyvalue)
#else
yysymprint (yyout, yytype, yyvalue)
    FILE* yyout;
    int yytype;
    YYSTYPE yyvalue;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvalue;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyout, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyout, yytoknum[yytype], yyvalue);
# endif
    }
  else
    YYFPRINTF (yyout, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyout, ")");
}
#endif /* YYDEBUG. */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
#if defined (__STDC__) || defined (__cplusplus)
yydestruct (int yytype, YYSTYPE yyvalue)
#else
yydestruct (yytype, yyvalue)
    int yytype;
    YYSTYPE yyvalue;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvalue;

  switch (yytype)
    {
      default:
        break;
    }
}



/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of parse errors so far.  */
int yynerrs;


int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
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

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with.  */

  if (yychar <= 0)		/* This means end of input.  */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more.  */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

      /* We have to keep this `#if YYDEBUG', since we use variables
	 which are defined only if `YYDEBUG' is set.  */
      YYDPRINTF ((stderr, "Next token is "));
      YYDSYMPRINT ((stderr, yychar1, yylval));
      YYDPRINTF ((stderr, "\n"));
    }

  /* If the proper action on seeing token YYCHAR1 is to reduce or to
     detect an error, take that action.  */
  yyn += yychar1;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yychar1)
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

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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



#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn - 1, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] >= 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif
  switch (yyn)
    {
        case 8:
    { zconfprint("unexpected 'endmenu' statement"); }
    break;

  case 9:
    { zconfprint("unexpected 'endif' statement"); }
    break;

  case 10:
    { zconfprint("unexpected 'endchoice' statement"); }
    break;

  case 11:
    { zconfprint("syntax error"); yyerrok; }
    break;

  case 17:
    {
	struct symbol *sym = sym_lookup(yyvsp[0].string, 0);
	sym->flags |= SYMBOL_OPTIONAL;
	menu_add_entry(sym);
	printd(DEBUG_PARSE, "%s:%d:config %s\n", zconf_curname(), zconf_lineno(), yyvsp[0].string);
}
    break;

  case 18:
    {
	menu_end_entry();
	printd(DEBUG_PARSE, "%s:%d:endconfig\n", zconf_curname(), zconf_lineno());
}
    break;

  case 23:
    { }
    break;

  case 24:
    {
	menu_set_type(S_TRISTATE);
	printd(DEBUG_PARSE, "%s:%d:tristate\n", zconf_curname(), zconf_lineno());
}
    break;

  case 25:
    {
	menu_set_type(S_BOOLEAN);
	printd(DEBUG_PARSE, "%s:%d:boolean\n", zconf_curname(), zconf_lineno());
}
    break;

  case 26:
    {
	menu_set_type(S_INT);
	printd(DEBUG_PARSE, "%s:%d:int\n", zconf_curname(), zconf_lineno());
}
    break;

  case 27:
    {
	menu_set_type(S_HEX);
	printd(DEBUG_PARSE, "%s:%d:hex\n", zconf_curname(), zconf_lineno());
}
    break;

  case 28:
    {
	menu_set_type(S_STRING);
	printd(DEBUG_PARSE, "%s:%d:string\n", zconf_curname(), zconf_lineno());
}
    break;

  case 29:
    {
	menu_add_prop(P_PROMPT, yyvsp[-1].string, NULL, yyvsp[0].expr);
	printd(DEBUG_PARSE, "%s:%d:prompt\n", zconf_curname(), zconf_lineno());
}
    break;

  case 30:
    {
	menu_add_prop(P_DEFAULT, NULL, yyvsp[-1].symbol, yyvsp[0].expr);
	printd(DEBUG_PARSE, "%s:%d:default\n", zconf_curname(), zconf_lineno());
}
    break;

  case 31:
    {
	struct symbol *sym = sym_lookup(NULL, 0);
	sym->flags |= SYMBOL_CHOICE;
	menu_add_entry(sym);
	menu_add_prop(P_CHOICE, NULL, NULL, NULL);
	printd(DEBUG_PARSE, "%s:%d:choice\n", zconf_curname(), zconf_lineno());
}
    break;

  case 32:
    {
	menu_end_entry();
	menu_add_menu();
}
    break;

  case 33:
    {
	if (zconf_endtoken(yyvsp[0].token, T_CHOICE, T_ENDCHOICE)) {
		menu_end_menu();
		printd(DEBUG_PARSE, "%s:%d:endchoice\n", zconf_curname(), zconf_lineno());
	}
}
    break;

  case 35:
    {
	printf("%s:%d: missing 'endchoice' for this 'choice' statement\n", current_menu->file->name, current_menu->lineno);
	zconfnerrs++;
}
    break;

  case 41:
    {
	menu_add_prop(P_PROMPT, yyvsp[-1].string, NULL, yyvsp[0].expr);
	printd(DEBUG_PARSE, "%s:%d:prompt\n", zconf_curname(), zconf_lineno());
}
    break;

  case 42:
    {
	current_entry->sym->flags |= SYMBOL_OPTIONAL;
	printd(DEBUG_PARSE, "%s:%d:optional\n", zconf_curname(), zconf_lineno());
}
    break;

  case 43:
    {
	menu_add_prop(P_DEFAULT, NULL, yyvsp[-1].symbol, yyvsp[0].expr);
	printd(DEBUG_PARSE, "%s:%d:default\n", zconf_curname(), zconf_lineno());
}
    break;

  case 46:
    {
	printd(DEBUG_PARSE, "%s:%d:if\n", zconf_curname(), zconf_lineno());
	menu_add_entry(NULL);
	menu_add_dep(yyvsp[0].expr);
	menu_end_entry();
	menu_add_menu();
}
    break;

  case 47:
    {
	if (zconf_endtoken(yyvsp[0].token, T_IF, T_ENDIF)) {
		menu_end_menu();
		printd(DEBUG_PARSE, "%s:%d:endif\n", zconf_curname(), zconf_lineno());
	}
}
    break;

  case 49:
    {
	printf("%s:%d: missing 'endif' for this 'if' statement\n", current_menu->file->name, current_menu->lineno);
	zconfnerrs++;
}
    break;

  case 54:
    {
	menu_add_entry(NULL);
	menu_add_prop(P_MENU, yyvsp[0].string, NULL, NULL);
	printd(DEBUG_PARSE, "%s:%d:menu\n", zconf_curname(), zconf_lineno());
}
    break;

  case 55:
    {
	menu_end_entry();
	menu_add_menu();
}
    break;

  case 56:
    {
	if (zconf_endtoken(yyvsp[0].token, T_MENU, T_ENDMENU)) {
		menu_end_menu();
		printd(DEBUG_PARSE, "%s:%d:endmenu\n", zconf_curname(), zconf_lineno());
	}
}
    break;

  case 58:
    {
	printf("%s:%d: missing 'endmenu' for this 'menu' statement\n", current_menu->file->name, current_menu->lineno);
	zconfnerrs++;
}
    break;

  case 63:
    { zconfprint("invalid menu option"); yyerrok; }
    break;

  case 64:
    {
	yyval.string = yyvsp[0].string;
	printd(DEBUG_PARSE, "%s:%d:source %s\n", zconf_curname(), zconf_lineno(), yyvsp[0].string);
}
    break;

  case 65:
    {
	zconf_nextfile(yyvsp[-1].string);
}
    break;

  case 66:
    {
	menu_add_entry(NULL);
	menu_add_prop(P_COMMENT, yyvsp[0].string, NULL, NULL);
	printd(DEBUG_PARSE, "%s:%d:comment\n", zconf_curname(), zconf_lineno());
}
    break;

  case 67:
    {
	menu_end_entry();
}
    break;

  case 68:
    {
	printd(DEBUG_PARSE, "%s:%d:help\n", zconf_curname(), zconf_lineno());
	zconf_starthelp();
}
    break;

  case 69:
    {
	current_entry->sym->help = yyvsp[0].string;
}
    break;

  case 72:
    { }
    break;

  case 73:
    {
	menu_add_dep(yyvsp[0].expr);
	printd(DEBUG_PARSE, "%s:%d:depends on\n", zconf_curname(), zconf_lineno());
}
    break;

  case 74:
    {
	menu_add_dep(yyvsp[0].expr);
	printd(DEBUG_PARSE, "%s:%d:depends\n", zconf_curname(), zconf_lineno());
}
    break;

  case 75:
    {
	menu_add_dep(yyvsp[0].expr);
	printd(DEBUG_PARSE, "%s:%d:requires\n", zconf_curname(), zconf_lineno());
}
    break;

  case 77:
    {
	menu_add_prop(P_PROMPT, yyvsp[0].string, NULL, NULL);
}
    break;

  case 78:
    {
	menu_add_prop(P_PROMPT, yyvsp[-2].string, NULL, yyvsp[0].expr);
}
    break;

  case 81:
    { yyval.token = T_ENDMENU; }
    break;

  case 82:
    { yyval.token = T_ENDCHOICE; }
    break;

  case 83:
    { yyval.token = T_ENDIF; }
    break;

  case 86:
    { yyval.expr = NULL; }
    break;

  case 87:
    { yyval.expr = yyvsp[0].expr; }
    break;

  case 88:
    { yyval.expr = expr_alloc_symbol(yyvsp[0].symbol); }
    break;

  case 89:
    { yyval.expr = expr_alloc_comp(E_EQUAL, yyvsp[-2].symbol, yyvsp[0].symbol); }
    break;

  case 90:
    { yyval.expr = expr_alloc_comp(E_UNEQUAL, yyvsp[-2].symbol, yyvsp[0].symbol); }
    break;

  case 91:
    { yyval.expr = yyvsp[-1].expr; }
    break;

  case 92:
    { yyval.expr = expr_alloc_one(E_NOT, yyvsp[0].expr); }
    break;

  case 93:
    { yyval.expr = expr_alloc_two(E_OR, yyvsp[-2].expr, yyvsp[0].expr); }
    break;

  case 94:
    { yyval.expr = expr_alloc_two(E_AND, yyvsp[-2].expr, yyvsp[0].expr); }
    break;

  case 95:
    { yyval.symbol = sym_lookup(yyvsp[0].string, 0); free(yyvsp[0].string); }
    break;

  case 96:
    { yyval.symbol = sym_lookup(yyvsp[0].string, 1); free(yyvsp[0].string); }
    break;


    }

/* Line 1016 of /usr/share/bison/yacc.c.  */
#line 1509 "zconf.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyssp > yyss)
	    {
	      YYDPRINTF ((stderr, "Error: popping "));
	      YYDSYMPRINT ((stderr,
			    yystos[*yyssp],
			    *yyvsp));
	      YYDPRINTF ((stderr, "\n"));
	      yydestruct (yystos[*yyssp], *yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yydestruct (yychar1, yylval);
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

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

      YYDPRINTF ((stderr, "Error: popping "));
      YYDSYMPRINT ((stderr,
		    yystos[*yyssp], *yyvsp));
      YYDPRINTF ((stderr, "\n"));

      yydestruct (yystos[yystate], *yyvsp);
      yyvsp--;
      yystate = *--yyssp;


#if YYDEBUG
      if (yydebug)
	{
	  short *yyssp1 = yyss - 1;
	  YYFPRINTF (stderr, "Error: state stack now");
	  while (yyssp1 != yyssp)
	    YYFPRINTF (stderr, " %d", *++yyssp1);
	  YYFPRINTF (stderr, "\n");
	}
#endif
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}




void conf_parse(const char *name)
{
	zconf_initscan(name);

	sym_init();
	menu_init();
	rootmenu.prompt = menu_add_prop(P_MENU, "Linux Kernel Configuration", NULL, NULL);

	//zconfdebug = 1;
	zconfparse();
	if (zconfnerrs)
		exit(1);
	menu_finalize(&rootmenu);

	modules_sym = sym_lookup("MODULES", 0);

	sym_change_count = 1;
}

const char *zconf_tokenname(int token)
{
	switch (token) {
	case T_MENU:		return "menu";
	case T_ENDMENU:		return "endmenu";
	case T_CHOICE:		return "choice";
	case T_ENDCHOICE:	return "endchoice";
	case T_IF:		return "if";
	case T_ENDIF:		return "endif";
	}
	return "<token>";
} 

static bool zconf_endtoken(int token, int starttoken, int endtoken)
{
	if (token != endtoken) {
		zconfprint("unexpected '%s' within %s block", zconf_tokenname(token), zconf_tokenname(starttoken));
		zconfnerrs++;
		return false;
	}
	if (current_menu->file != current_file) {
		zconfprint("'%s' in different file than '%s'", zconf_tokenname(token), zconf_tokenname(starttoken));
		zconfprint("location of the '%s'", zconf_tokenname(starttoken));
		zconfnerrs++;
		return false;
	}
	return true;
}

static void zconfprint(const char *err, ...)
{
	va_list ap;

	fprintf(stderr, "%s:%d: ", zconf_curname(), zconf_lineno());
	va_start(ap, err);
	vfprintf(stderr, err, ap);
	va_end(ap);
	fprintf(stderr, "\n");
}

static void zconferror(const char *err)
{
	fprintf(stderr, "%s:%d: %s\n", zconf_curname(), zconf_lineno(), err);
}

void print_quoted_string(FILE *out, const char *str)
{
	const char *p;
	int len;

	putc('"', out);
	while ((p = strchr(str, '"'))) {
		len = p - str;
		if (len)
			fprintf(out, "%.*s", len, str);
		fputs("\\\"", out);
		str = p + 1;
	}
	fputs(str, out);
	putc('"', out);
}

void print_symbol(FILE *out, struct menu *menu)
{
	struct symbol *sym = menu->sym;
	struct property *prop;

	//sym->flags |= SYMBOL_PRINTED;

	if (sym_is_choice(sym))
		fprintf(out, "choice\n");
	else
		fprintf(out, "config %s\n", sym->name);
	switch (sym->type) {
	case S_BOOLEAN:
		fputs("  boolean\n", out);
		break;
	case S_TRISTATE:
		fputs("  tristate\n", out);
		break;
	case S_STRING:
		fputs("  string\n", out);
		break;
	case S_INT:
		fputs("  integer\n", out);
		break;
	case S_HEX:
		fputs("  hex\n", out);
		break;
	default:
		fputs("  ???\n", out);
		break;
	}
#if 0
	if (!expr_is_yes(sym->dep)) {
		fputs("  depends ", out);
		expr_fprint(sym->dep, out);
		fputc('\n', out);
	}
#endif
	for (prop = sym->prop; prop; prop = prop->next) {
		if (prop->menu != menu)
			continue;
		switch (prop->type) {
		case P_PROMPT:
			fputs("  prompt ", out);
			print_quoted_string(out, prop->text);
			if (prop->def) {
				fputc(' ', out);
				if (prop->def->flags & SYMBOL_CONST)
					print_quoted_string(out, prop->def->name);
				else
					fputs(prop->def->name, out);
			}
			if (!expr_is_yes(E_EXPR(prop->visible))) {
				fputs(" if ", out);
				expr_fprint(E_EXPR(prop->visible), out);
			}
			fputc('\n', out);
			break;
		case P_DEFAULT:
			fputs( "  default ", out);
			print_quoted_string(out, prop->def->name);
			if (!expr_is_yes(E_EXPR(prop->visible))) {
				fputs(" if ", out);
				expr_fprint(E_EXPR(prop->visible), out);
			}
			fputc('\n', out);
			break;
		case P_CHOICE:
			fputs("  #choice value\n", out);
			break;
		default:
			fprintf(out, "  unknown prop %d!\n", prop->type);
			break;
		}
	}
	if (sym->help) {
		int len = strlen(sym->help);
		while (sym->help[--len] == '\n')
			sym->help[len] = 0;
		fprintf(out, "  help\n%s\n", sym->help);
	}
	fputc('\n', out);
}

void zconfdump(FILE *out)
{
	//struct file *file;
	struct property *prop;
	struct symbol *sym;
	struct menu *menu;

	menu = rootmenu.list;
	while (menu) {
		if ((sym = menu->sym))
			print_symbol(out, menu);
		else if ((prop = menu->prompt)) {
			switch (prop->type) {
			//case T_MAINMENU:
			//	fputs("\nmainmenu ", out);
			//	print_quoted_string(out, prop->text);
			//	fputs("\n", out);
			//	break;
			case P_COMMENT:
				fputs("\ncomment ", out);
				print_quoted_string(out, prop->text);
				fputs("\n", out);
				break;
			case P_MENU:
				fputs("\nmenu ", out);
				print_quoted_string(out, prop->text);
				fputs("\n", out);
				break;
			//case T_SOURCE:
			//	fputs("\nsource ", out);
			//	print_quoted_string(out, prop->text);
			//	fputs("\n", out);
			//	break;
			//case T_IF:
			//	fputs("\nif\n", out);
			default:
				;
			}
			if (!expr_is_yes(E_EXPR(prop->visible))) {
				fputs("  depends ", out);
				expr_fprint(E_EXPR(prop->visible), out);
				fputc('\n', out);
			}
			fputs("\n", out);
		}

		if (menu->list)
			menu = menu->list;
		else if (menu->next)
			menu = menu->next;
		else while ((menu = menu->parent)) {
			if (menu->prompt && menu->prompt->type == P_MENU)
				fputs("\nendmenu\n", out);
			if (menu->next) {
				menu = menu->next;
				break;
			}
		}
	}
}

#include "lex.zconf.c"
#include "confdata.c"
#include "expr.c"
#include "symbol.c"
#include "menu.c"


