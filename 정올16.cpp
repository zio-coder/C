#include <string.h>
#include <stdio.h>
#include <stdlib.h>

	

int main(){
	char che = 't';
	double floatptr = 17.89;
char* charptr = &che;
double* doubleptr = &floatptr;
	printf("%#p %#p", charptr, doubleptr);	
}
