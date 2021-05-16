#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void find();
int A, B, C; 
int b[15];
int N;
int main(){
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	int multi;
	multi = A*B*C;
	
	while(multi) {
		int cur = multi % 10;
		b[cur] ++;
		multi /= 10;
	}
	
	find();	
}
void find(){
	for(int i=0; i<=9; i++){
		printf("%d\n", b[i]);
	}
}

