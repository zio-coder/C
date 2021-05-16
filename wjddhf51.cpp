#include <stdio.h>
#include <stdlib.h>
int A, B, V;
int i;
int main(){
	i = 0;
	scanf("%d %d %d", &A, &B, &V);
	int VA = V-A;
	int D = A-B;
	i = VA/D;
	if(VA%D==0){
		printf("%d", i+1);
	}else if(VA%D=0){
		printf("%d", i+2);
	}
	
}
