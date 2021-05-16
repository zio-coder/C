#include <stdio.h>
#include <stdlib.h>
int N;
int main(){
	scanf("%d", &N);
	if(N%4 == 0 && N%100 != 0 || N%400 == 0 ){
		printf("1");
	}else{
		printf("0");
	}
	
}
