// https://unix.stackexchange.com/questions/37971/usr-bin-ld-cannot-find-lfl
// lex is the lexical analyzer preprocessor for C and C++
// flex-devel.x86_64 package  must be installed 

#include <stdio.h>
#include <stdlib.h>

extern int fee_count, fie_count, foe_count, fum_count;
extern int yylex(void);

int main(int argc, char ** argv){
	yylex();
	printf("%d %d %d %d\n", fee_count, fie_count, foe_count, fum_count);
	exit(0);
}
