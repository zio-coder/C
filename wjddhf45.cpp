#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int N;
int S[4997];

int min(int a, int b) {
	if(a > b) return b;
	return a;
}

int main(){
	scanf("%d", &N);
	
	S[0] = 0;
	S[1] = S[2] = S[4] = 1e9;
	S[3] = S[5] = 1;
	for(int i=6; i<=N; i++) S[i] = min(S[i - 3], S[i - 5]) + 1;
	
	printf("%d", (S[N] >= 1e9 ? -1 : S[N]));
	return 0;
}

		
	

