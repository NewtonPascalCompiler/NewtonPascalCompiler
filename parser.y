%{

#include "NewtonPascal.h"

%}



%union {
	
}




%%

program : program_head  routine  DOT {}

program_head : PROGRAM  ID  SEMI {}

routine : routine_head  routine_body {}

sub_routine : routine_head  routine_body {}

routine_head : label_part  const_part  type_part  var_part  routine_part {}

label_part : {}

const_part : CONST  const_expr_list
| {} 

const_expr_list : const_expr_list  ID  EQUAL  const_value  SEMI
|  ID  EQUAL  const_value  SEMI

const_value : INTEGER  |  REAL  |  CHAR  |  STRING  |  SYS_CON {}

type_part : TYPE type_decl_list  {}
|  {}

type_decl_list : type_decl_list  type_definition  |  type_definition

type_definition : ID  EQUAL  type_decl  SEMI

type_decl : simple_type_decl  |  array_type_decl  |  record_type_decl

array_type_decl : ARRAY  LB  simple_type_decl  RB  OF  type_decl

record_type_decl : RECORD  field_decl_list  END

field_decl_list : field_decl_list  field_decl  |  field_decl

field_decl : name_list  COLON  type_decl  SEMI

name_list : name_list  COMMA  ID  |  ID

simple_type_decl : SYS_TYPE  |  ID  |  LP  name_list  RP  
                |  const_value  DOTDOT  const_value  
                |  MINUS  const_value  DOTDOT  const_value
                |  MINUS  const_value  DOTDOT  MINUS  const_value
                |  ID  DOTDOT  ID

var_part : VAR  var_decl_list  |  ε

var_decl_list :  var_decl_list  var_decl  |  var_decl

var_decl :  name_list  COLON  type_decl  SEMI

routine_part:  routine_part  function_decl  |  routine_part  procedure_decl
           |  function_decl  |  procedure_decl

function_decl : function_head  SEMI  sub_routine  SEMI

function_head :  FUNCTION  ID  parameters  COLON  simple_type_decl 

procedure_decl :  procedure_head  SEMI  sub_routine  SEMI

procedure_head :  PROCEDURE ID parameters 

parameters : LP  para_decl_list  RP  |  ε

para_decl_list : para_decl_list  SEMI  para_type_list

para_type_list : var_para_list COLON  simpe_type_decl  
|  val_para_list  COLON  simple_type_decl

var_para_list : VAR  name_list

val_para_list : name_list

routine_body : compound_stmt

stmt_list : stmt_list  stmt  SEMI  |  ε

stmt : INTEGER  COLON  non_label_stmt  |  non_label_stmt
non_label_stmt : assign_stmt | proc_stmt | compound_stmt | if_stmt | repeat_stmt | while_stmt 
| for_stmt | case_stmt | goto_stmt


assign_stmt : ID  ASSIGN  expression
           | ID LB expression RB ASSIGN expression
           | ID  DOT  ID  ASSIGN  expression

proc_stmt : ID
          |  ID  LP  args_list  RP
          |  SYS_PROC
          |  SYS_PROC  LP  expression_list  RP
          |  READ  LP  factor  RP

compound_stmt : BEGIN  stmt_list  END

if_stmt : IF  expression  THEN  start  else_clause

else_clause : ELSE stmt |  ε

repeat_stmt : REPEAT  stmt_list  UNTIL  expression

while_stmt : WHILE  expression  DO stmt

for_stmt : FOR  ID  ASSIGN  expression  direction  expression  DO stmt

direction : TO | DOWNTO

case_stmt : CASE expression OF case_expr_list  END

case_expr_list : case_expr_list  case_expr  |  case_expr

case_expr : const_value  COLON  stmt  SEMI
          |  ID  COLON  stmt  SEMI
          
goto_stmt : GOTO  INTEGER

expression_list : expression_list  COMMA  expression  |  expression

expression : expression  GE  expr  |  expression  GT  expr  |  expression  LE  expr
          |  expression  LT  expr  |  expression  EQUAL  expr  
|  expression  UNEQUAL  expr  |  expr

expr : expr  PLUS  term  |  expr  MINUS  term  |  expr  OR  term  |  term

term : term  MUL  factor  |  term  DIV  factor  |  term  MOD  factor 
 |  term  AND  factor  |  factor

factor : ID  |  ID  LP  args_list  RP  |  SYS_FUNCT

SYS_FUNCT  LP  args_list  RP  |  const_value  |  LP  expression  RP
|  NOT  factor  |  MINUS  factor  |  ID  LB  expression  RB
|  ID  DOT  ID


args_list : args_list  COMMA  expression  |  expression



%%


void yyerror(const char *s, ...)
{
    va_list ap;
    va_start(ap, s);	
    fprintf(stderr, "line %d: error near '%s': ", yylineno, yytext);
    
    vfprintf(stderr, s, ap);
    fprintf(stderr, "\n");
    va_end(ap);
}


int main(int argc, char* argv[])
{
	//initialize
	FILE *ifp = NULL, *ofp = NULL;

	//filename
	char infile[100] = "";
	char outfile[100] = "";

	//if no arguments on command line: newton-pascal
	if (argc < 2)
	{
		printf("newton-pascal: error: no input files\n");
		return 1;
	}
	else 
	{
		//analyize remaining arguments
		for (int i = 1; i < argc; i++) {
			
			if (strcmp(argv[i], "-o") == 0) {

				//lack output file after "-o"
				if (i + 1 >= argc)
				{
					printf("newton-pascal: error: argument to '-o' is missing (expected 1 value)\n");
					return 1;
				}
				else
				{
					//move to next arg
					i++;

					//copy output file name 
					strcpy(outfile, argv[i]);
				}
				
			}

			//argv[i]: input file
			else {

				//open input file
				strcpy(infile, argv[i]);

				ifp = fopen(infile, "r");

				if (ifp == NULL)
				{
					printf("newton-pascal: error: no such file or directory: '%s'\n", argv[i]); //no such file found
					return 1;
				}
				else
				{
					yyin = ifp; //redirect yyin to argv[i]
				}
			}

		}


		//no input file
		if (strcmp(infile, "") == 0)
		{
			printf("newton-pascal: error: no input files\n");
			return 1;
		}

		//no output file name: give a default name
		if (strcmp(outfile, "") == 0)
			strcpy(outfile, "default.S");

		//redirect yyout to argv[i]
		ofp = fopen(outfile, "w");
	
		if (ofp == NULL) 
		{
			printf("newton-pascal: error: no such file or directory: '%s'\n", outfile); //no such file found
			return 1;
		}
		else 
		{
			yyout = ofp; //redirect yyout to argv[i]
		}

	}

	//start parser
	yyparse();

	//close input and output files
	fclose(ifp);
	fclose(ofp);

	return 0;
}


