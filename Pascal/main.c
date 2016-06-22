#include "global.h"
#include "util.h"
#include "scan.h"
#include "parse.h"
#include "CodeGenerater.h"

char filename[30] = "system_test.p";
FILE * source ;
FILE * listing ;
int TraceScan = True;
int lineno=0;
void print_help(void);

int main(int argc, char **argv)
{
	TreeNode* syntaxTree;
	//char* outputfile;
	if(argc < 2) {
		print_help();
		exit(1);
	}
    source = fopen(argv[1], "r");
    
    //file not found
    if (source == NULL) {
        printf("fatal error: file %s does not exists\n", argv[1]);
        return 1;
    }
    
    listing = fopen("tmp.list", "w+");
    // listing = stdout;
	if(argc == 3){
		InitialGenerater(argv[2]);
	}
	else{
		InitialGenerater("out.asm");
	}
   
    syntaxTree = parse();
    
    printTree(syntaxTree);
    
    if (syntaxTree == NULL) {
        printf("由于前面的错误，编译无法进行。\n");
        return 1;
    }
    
    //printf("Begin Coding: \n");
    BuildCode(syntaxTree);
    // printf("The SymTab is :\n");
    // printSymTab();
	//printf("End Coding: \n");

	fclose(listing);
	
    return 0;

}



void print_help(void)
{
	printf("The Usage:\n");
	printf("compiler pascal_source_filename [assemble_filename]\n");
}

