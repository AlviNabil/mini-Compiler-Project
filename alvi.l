%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include <math.h>
	#include "alvi.tab.h"
	extern char* strdup(const char*);
	void yyerror(char *s);
%}



VARIABLE	[_a-zA-Z][_a-zA-Z0-9]*
Assoc	"bring"[ ][a-z]+.[h]
DIGIT	[-]?[0-9][0-9]*[.]?[0-9]*
singleLineComment		[ ]*[s][l][-][-][a-zA-Z0-9@$%^&*(){}_+-,.:\|?>< ]*
multiLineComment		[ ]*[m][l][-][-][a-zA-Z0-9@$*(){}_+-,.:\|?><\n\t ]*[-][-][m][l]	



%%

[ \t]+
"task" return(MAIN);
PURNO	return(INT);
OKKHOR	return(CHAR);
DOSHOMIK	return(FLOAT);
SHURU return(SHURU);
SHESH return(SHESH);
JOG return(JOG);
BIYOG		return(BIYOG);
GUN	    return(GUN);
VAAG		return(VAAG);
LOG 	return(LOG);
LOG10 	return(LOG10);
SIN		return(SIN);
COS		return(COS);
TAN		return(TAN);
SHOW	return(SHOW);
POW	return(POW);


SHOMAN	return(EQUAL);
OSHOMAN	return(NOTEQUAL);
BORO		return(GT);
BOROSHOMAN	return(GOE);
CHOTO	return(LT);
CHOTOSHOMAN	return(LOE);
LOOP return (LOOP);
THEKE return (THEKE);
OFFSET return (OFFSET);
WHILE	return(WHILE);
STEP	return(SWITCH);
SCENE	return(CASE);
ROOT	return(DEFAULT);
JODI	return(IF);
OTHOBA	return(ELIF);
NOILE	return(ELSE);


{Assoc}	printf("Bringing associative files\n");
{VARIABLE}	{yylval.stringValue = strdup(yytext); return(ID);}
{DIGIT}	{	int length = strlen(yytext);
			int i = 0;
			while(i<length){
				if(yytext[i]=='.'){
					yylval.val = atof(yytext); 
					return(NUM);
				}
				i++;
			}
			yylval.val = atoi(yytext); 
			return(NUM);
		}

{singleLineComment} 	{printf("This is a single line comment\n\n");}
{multiLineComment} 	{printf("This is a multi line comment\n\n");}






[,;{}=()]	{yylval.stringValue = strdup(yytext); return *yytext;}
.		yyerror("Invalid Character for this edition.");
[\n]	{}

%% 

int yywrap(void){
	return 1;
}