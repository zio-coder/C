#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	int* ap, bp, cp;
	scanf("%d", &a);
	scanf("%d", &b);
	if(a >= b){
		c = a-b;
	}else{
		c = b-a;
	}	
	printf("%d", abs(c));
}
