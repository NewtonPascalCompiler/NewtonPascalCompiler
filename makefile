all: newton-pascal

#compiler
CC = g++ 

#include path
INC = .

SRC = parser.cpp \
		scanner.cpp

newton-pascal: parser.cpp scanner.cpp
	$(CC) -o newton-pascal -I $(INC) $(SRC)

parser.cpp: parser.y
	bison -o parser.cpp -d parser.y

scanner.cpp: scanner.l
	flex -o scanner.cpp scanner.l
