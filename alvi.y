%{ //header functions	
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
	
%}

%union{
	double val;
	char* stringValue;
}

// Defining all the used tokens and precendences of the required ones.

%error-verbose
%token MAIN INT CHAR FLOAT POW FACTO LOOP PRIME READ SHOW IF ELIF ELSE SWITCH OFFSET THEKE CASE DEFAULT FROM TO INC DEC MAX MIN ID NUM  WHILE EQUAL NOTEQUAL GT GOE LT LOE SHURU SHESH JOG SIN COS TAN LOG LOG10
%left JOG BIYOG
%left VAAG GUN

// Defining token type

%type<val>  casenum_code default_code sinFunct case_code logFunct log10Funct switch_code tanFunct cosFunct t expression else_if_Condition else_Condition OFFSET THEKE powFunct LOOP WHILE declaration assignment ifCondition for_code print_code program statement TYPE MAIN INT CHAR FLOAT POW FACTO PRIME READ SHOW SWITCH CASE DEFAULT IF ELIF ELSE FROM TO INC DEC MAX MIN NUM   NOTEQUAL GT GOE LT LOE SHURU SHESH JOG BIYOG VAAG GUN SIN COS TAN LOG LOG10
%type<stringValue> ID1 ID

%%
	// Rules for the statement using tokens

program: MAIN SHURU statement SHESH	{printf("\nValid statement\n");}
		;

statement: 
	|declaration statement
	| assignment statement
	| ifCondition statement
	| for_code statement
	| switch_code statement
	| print_code statement
	| powFunct statement
	| sinFunct statement
	| cosFunct statement
	| tanFunct statement
	| logFunct statement
	| log10Funct statement
	| while_code statement
	|expression
	;

	


	//CFG for calculating factorial of a number





print_code: SHOW '(' ID ')'';'{
	int i = getIndex($3);
	if(variable[i].vType == 1){
		printf("\nVariable name: %s, Value: %d\n\n", variable[i].vName, variable[i].ival);
	}
	else if(variable[i].vType == 2){
		printf("\nVariable name: %s, Value: %f\n\n", variable[i].vName, variable[i].fval);
	}
	else{
		printf("\nVariable name: %s, Value: %c\n\n", variable[i].vName, variable[i].cval);
	}

	}
	;
	
powFunct: POW '(' NUM ',' NUM ')'';'	{		
	int i;
	i = pow($3,$5);
	printf("\nPower function value: %d \n\n", i);
}
	;

sinFunct: SIN '(' NUM ')' ';' {
	printf("\nValue of Sin(%lf) is %lf\n\n",$3,sin($3*3.1416/180)); 
	$$=sin($3*3.1416/180);
}
	;
	

cosFunct: COS '(' NUM ')' ';' {
	printf("\nValue of Cos(%lf) is %lf\n\n",$3,cos($3*3.1416/180)); 
	$$=cos($3*3.1416/180);
}
	;
tanFunct: TAN '(' NUM ')' ';' {
	printf("\nValue of Tan(%lf) is %lf\n\n",$3,tan($3*3.1416/180)); 
	$$=tan($3*3.1416/180);
}
	;


log10Funct: LOG10 '(' NUM ')' ';' {
	printf("Value of Log10(%lf) is %lf\n\n",$3,(log($3*1.0)/log(10.0))); 
	$$=(log($3*1.0)/log(10.0));
}
	;
logFunct: LOG '(' NUM ')' ';' {
	printf("Value of Log(%lf) is %lf\n\n",$3,(log($3))); 
	$$=(log($3));
}	
;

	

switch_code: SWITCH '(' ID ')' '{' case_code '}' {
	printf("\nSwitch Case demo.\n");
}
	;
case_code: casenum_code default_code
	;

casenum_code: CASE NUM '{' statement '}' casenum_code {
	printf("\nCase no: %d\n", $2);
}
	|
	;
default_code: DEFAULT '{' statement '}'
	;


for_code: LOOP ID THEKE NUM OFFSET NUM '{' statement '}' {
	printf("\nFor loop\n");
	int ii = getIndex($2);
	int i = variable[ii].ival;
	int j = $4;
	int inc = $6;
	int k;
	for(k=i; k<j; k=k+inc){
		printf("\nLOOP RUNNING(LOOP-THEKE)\n");
	}
		
}
	|LOOP ID THEKE ID OFFSET NUM '{' statement '}' {
	printf("\nFor loop\n");
	int ii = getIndex($2);
	int i = variable[ii].ival;
	int jj = getIndex($4);
	int j = variable[jj].ival;
	int inc = $6;
	int k;
	for(k=i; k<j; k=k+inc){
		printf("\nLOOP RUNNING(LOOP-THEKE)\n");
	}
		
}
	|LOOP NUM THEKE ID OFFSET NUM '{' statement '}' {
	printf("\nFor loop\n");
	int i = $2;
	int jj = getIndex($4);
	int j = variable[jj].ival;
	int inc = $6;
	int k;
	for(k=i; k<j; k=k+inc){
		printf("\nLOOP RUNNING(LOOP-THEKE)\n");
	}
		
}
	|LOOP NUM THEKE NUM OFFSET NUM '{' statement '}' {
	printf("\nFor loop\n");
	int i = $2;
	int j = $4;
	int inc = $6;
	int k;
	for(k=i; k<j; k=k+inc){
		printf("\nLOOP RUNNING(LOOP-THEKE)\n");
	}
		
}
	;
	
	
while_code: WHILE'(' expression ')''{' statement '}'{
	printf("\nWhile Loop\n");
	int i = $3;
	while(i==1){
		printf("\nWhile Loop running: %d\n", $6);
	}
	
}
	;
	
	
ifCondition:  IF '(' expression ')''{'statement  '}' else_if_Condition else_Condition {
	printf("\nIF CONDITION");
	int i = $3;
	if(i==1){
		printf("\nIF CONDITION IS TRUE\n");
	}
	else{
		printf("\nIF CONDITION IS FALSE\n");
	}
}
	;
else_if_Condition: ELIF '(' expression ')''{' statement  '}' else_if_Condition {
	printf("\nELSE IF CONDITION\n");
	int i = $3;
	if(i==1){
		printf("\nELSE IF CONDITION IS TRUE\n");
	}
	else{
		printf("\nELSE IF CONDITION IS FALSE\n");
	}
}
		|
	;
else_Condition: ELSE '{' statement  '}' {
	printf("\nELSE CONDITION\n");
}
	|
	;
	
	//CFG for evaluating boolian expression


	;


	// CFG for variable declaration
declaration: TYPE ID1 ';' {
	setType($1);
}
	;
TYPE: INT	{$$ = 1; printf("\nTyp:- Integer\n");}
	| FLOAT	{$$ = 2; printf("\n Typ:- Float\n");}
	| CHAR	{$$ = 0; printf("\n Typ:- Character\n");}
	;
ID1: ID1 ',' ID {
	if(usedVar($3)==0){
		printf("\nValid declaration\n");
		strcpy(variable[no_var].vName, $3);
		printf("\nVariable name: %s", $3);
		variable[no_var].vType =  -1;
		no_var = no_var + 1;
	}
	else{
		printf("\nVariable is already used");
	}
} 
	| ID {
	if(usedVar($1)==0){
		printf("\nValid declaration\n");
		strcpy(variable[no_var].vName, $1);
		printf("\nVariable name: %s", $1);
		variable[no_var].vType =  -1;
		no_var = no_var + 1;
	}
	else{
		printf("\nVariable is already used\n");
	}
	strcpy($$, $1);
}
	;

	
assignment: ID '=' expression ';' {
	$$ = $3;
	if(usedVar($1)==1){
		int i = getIndex($1);
		if(variable[i].vType==0){
			variable[i].cval = (char*)&$3-'a';
			printf("\nVariable value: %s", variable[i].cval);
		}
		else if(variable[i].vType==1){
			variable[i].ival = $3;
			printf("\nVariable value: %d", variable[i].ival);
		}
		else if(variable[i].vType==2){
			variable[i].fval = (float)$3;
			printf("\nVariable value: %f", variable[i].fval);
		}
	}
	else{
		printf("\nVariable is not declared\n");
	}
}
	;

expression: NUM					{ $$ = $1; 	}
	
	| expression JOG expression	{ $$ = $1 + $3; }

	| expression BIYOG expression	{ $$ = $1 - $3; }

	| expression GUN expression	{ $$ = $1 * $3; }

	| expression VAAG expression	{ if($3){
				     					$$ = $1 / $3;
				  					}
				  					else{
										$$ = 0;
										printf("\ndivision by zero error\t");
				  					} 	
				    			}
	| expression '^' expression	{ $$ = pow($1 , $3);}
	| expression LT expression	{ $$ = $1 < $3; }
	
	| expression GT expression	{ $$ = $1 > $3; }
	| expression GOE expression	{ $$ = $1 >= $3; }
	
	| expression LOE expression	{ $$ = $1 <= $3; }

	| '(' expression ')'		{ $$ = $2;}
	
    
    
	| t {$$=$1};

t: '(' expression ')' {$$ = $2;}
	| ID {
	int id_index = getIndex($1);
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
			$$ = variable[id_index].ival;
		}
		else if(variable[id_index].vType == 2)
		{
			$$ = variable[id_index].fval;
		}
	}
}
	| NUM  {$$ = $1;}
	;

%%

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