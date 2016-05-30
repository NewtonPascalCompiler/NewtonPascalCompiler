#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>



//some extern functions of lex or yacc

extern int yylex();
extern void yyrestart(FILE* f);
void yyerror(const char *s, ...);

extern int yylineno;
extern FILE* yyin;
extern char* yytext;