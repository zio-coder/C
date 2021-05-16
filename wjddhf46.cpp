#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int x, y, w, h;

int min(int a, int b) {
	if(a < b) return a;
	return b;
}
int main(){
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int x_length = abs(w-x);
	int y_length = abs(h-y);
	int x_length2 = abs(x);
	int y_length2 = abs(y);
	
	int ans = min(min(x_length, x_length2), min(y_length, y_length2));
	
	printf("%d", ans);
	return 0;
	
}

