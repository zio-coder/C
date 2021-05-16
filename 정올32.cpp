#include <stdio.h>
#include <stdlib.h>

int a;
int x, y, z;
int res;
int N;
int main(){
	scanf("%d", &a);
	int n = a;
	do{
		x = a/10;
		y = a%10;
		z = (x+y)%10;
		a = 10*y + z; 
		N++;	
	} while(a != n);
		
	printf("%d", N);
	return 0;
}
