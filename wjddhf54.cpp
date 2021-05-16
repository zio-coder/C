#include <stdio.h>
#include <stdlib.h>
int rx = 0, ry = 0, x, y;
int main(){
	for(int i=0; i<3; i++){
		scanf("%d %d", &rx, &ry);
		rx ^= x;
		ry ^= y;
	}
	printf("%d %d", x, y);
}
