/* Location tracking calculator */

%{
	  #define YYSTYPE int
		#include <math.h>
		int yylex (void);
		void yyerror (char const *);
%} 

/* Bison declarations */
%token NUM

%left '-' '+'
%left '*' '/'
%left NEG
%right '^'

%% /* grammar follows */
input 	: /* empty */
				| input line
;

line		: '\n'
				| exp '\n' { printf ("%d\n", $1); }
;

exp			: NUM 					{ $$ = $1; }
					| exp '+' exp	{ $$ = $1 + $3; }
					| exp '-' exp	{ $$ = $1 - $3; }
					| exp '*' exp	{ $$ = $1 * $3; }
					| exp '/' exp
							{
								if ($3)
									$$ = $1 / $3;
								else
								{
									$$ = 1;
									fprintf (stderr, "%d.%d-%d.%d: division by zero",
														@3.first_line, @3.first_column,
														@3.last_line, @3.last_column);
								}
							}
					| '-' exp %prec NEG	{ $$ = -$2; }
					| exp '^' exp				{ $$ = pow ($1, $3); }
					| '(' exp ')'				{ $$ = $2; }

%%  /* epilogue */

#include <ctype.h>

int yylex (void)
{
  int c;
  
  /* skip whitespace */
  while ((c = getchar ()) == ' ' || c == '\t')
		++yylloc.last_column;

  /* step */
  yylloc.first_line = yylloc.last_line;
  yylloc.first_column = yyloc.last_column;

  /* process numbers */
  if (isdigit (c))
   {
			yylval = c - '0';
			++yylval.last_column;
			while (isdigit (c = getchar ()) )
				{
					++yylloc.last_column;
					yylval = yylval * 10 + c - '0';
				}
			ungetc (c, stdin);
			return NUM;
   } 

   /* return end-of-input */
   if (c == EOF)
			return 0;

	 /* return a single char, and update location */
	 if (c == '\n')
		{
			++yylloc.last_line;
			yylloc.last_column = 0;
		}
		else
			++yylloc.last_column;
		return c;
};

#include <stdio.h>

/* called by yyparse on error */
void yyerror (char const * s)
{
  fprintf (stderr, "%s\n", s);
};

int main (void)
{
  return yyparse();
}
