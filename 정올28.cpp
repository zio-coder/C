#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	int star;
	scanf("%d", &star);
	int* starptr;
	for(int i=0; i<star; i++){
		printf("*");
	}
}
