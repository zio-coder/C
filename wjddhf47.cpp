#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int N;
int i = 1, f = 1;
int j = 0;
void pact(){
	j++;
	f *= i++;
	if(N == 0){
		printf("1");
		exit(0);
	}
	if(j == N){
		printf("%d", f);
		exit(0);
	}else{
		pact();
	}
	
}

int main(){
	scanf("%d", &N);
	pact();
}
