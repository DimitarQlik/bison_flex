/* reverse polish notation calculator */

%{
  #define YYSTYPE double
  #include <math.h>
  #include <stdio.h>
  int yylex (void);
  void yyerror (const char *);
%}


%token NUM

%% /* grammar rules and actions follow */
input: 	/* empty */
				| input line
;
line:	'\n'
				| exp '\n'	{ printf ("\t%.10g\n", $1); }
;
exp:		NUM						{ $$ = $1;			 		}
				| exp exp '+'	{ $$ = $1 + $2;			}
				| exp exp '-'	{ $$ = $1 - $2;			}
				| exp exp '*'	{ $$ = $1 * $2;			}
				| exp exp '/'	{ $$ = $1 / $2;			}
				/* exponentiation */
				| exp exp '^'	{ $$ = pow ($1, $2); }
				/* unary minus */
				| exp 'n'			{ $$ = -$1; 				}
;
%%
/* The lexical analyzer returns a double floating point 
   number on the stack and the token NUM or the numeric code
   of the character read if not a number. It skips all blanks
   and tabs and returns 0 for an end-of-input. */

#include <ctype.h>
#include <stdio.h>

int yylex (void)
{
   int c;
   /* skip white space */
   while ((c = getchar ()) == ' ' || c == '\t')
          ;

  /* process numbers */
  if (c == '.' || isdigit(c))
  {
    ungetc (c, stdin);
    scanf("%lf", &yylval);
    return NUM;
  }
  /* return end-of-input */
  if (c == EOF)
  {
    return 0;
  }

  /* return a single char */
  return c;
};

#include <stdio.h>

/* called by yyparse on error */
void yyerror (const char * s)
{
  fprintf(stderr, "%s\n", s);
};

int main(void)
{
  return yyparse(); 
}

