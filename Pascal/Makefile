#a.out : tiny.l tiny.y global.h scan.h parse.h util.c main.c 
#	flex tiny.l
#	yacc -d tiny.y
#	gcc util.c lex.yy.c y.tab.c main.c -lfl -o com.exe
complier: main.o util.o tiny.tab.o lex.yy.o symtab.o CodeGenerater.o
	cc main.o util.o tiny.tab.o lex.yy.o symtab.o CodeGenerater.o -o compiler
util.o: util.c util.h global.h tiny.tab.h
	cc -c util.c
tiny.tab.o: tiny.tab.c tiny.tab.h util.h global.h lex.yy.c
	cc -c tiny.tab.c
lex.yy.o: lex.yy.c tiny.tab.h util.h global.h
	cc -c lex.yy.c
main.o: main.c global.h util.h tiny.tab.h
	cc -c main.c
CodeGenerater.o: CodeGenerater.c CodeGenerater.h global.h tiny.tab.h symtab.h
	cc -c CodeGenerater.c
symtab.o: symtab.c symtab.h util.h global.h
	cc -c symtab.c
tiny.tab.c: tiny.y
	bison -d tiny.y
lex.yy.c: tiny.l
	flex tiny.l
