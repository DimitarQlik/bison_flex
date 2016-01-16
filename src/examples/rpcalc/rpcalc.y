/* reverse polish notation calculator */

%{
  #define YYSTYPE double
  #include <math.h>
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
