#a.out : tiny.l tiny.y global.h scan.h parse.h util.c main.c 
#	flex tiny.l
#	yacc -d tiny.y
#	gcc util.c lex.yy.c y.tab.c main.c -lfl -o a.out
complier: main.o util.o lex.yy.o symtab.o CodeGenerater.o tiny.tab.o
	gcc main.o util.o lex.yy.o symtab.o CodeGenerater.o tiny.tab.o -o compiler
util.o: util.c util.h global.h
	gcc -c util.c
lex.yy.o: lex.yy.c util.h global.h
	gcc -c lex.yy.c
main.o: main.c global.h util.h
	gcc -c main.c
CodeGenerater.o: CodeGenerater.c CodeGenerater.h global.h symtab.h
	gcc -c CodeGenerater.c
symtab.o: symtab.c symtab.h util.h global.h
	gcc -c symtab.c
tiny.tab.o: tiny.tab.c tiny.tab.h
	gcc -c tiny.tab.c
