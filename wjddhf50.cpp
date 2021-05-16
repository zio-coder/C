#include <stdio.h>
int N;
int K;
int total;
int kinds[10];
int poss[10];
int dp(){
	for(int i=0; i<N; i++){
		int res = (K/poss[i])*poss[i];
		total += K%poss[i];
		K = res;
	}
}

int main(){
	scanf("%d %d", &N, &K);
	for(int i=0; i<N; i++){
		scanf("%d\n", &kinds[i]);
	}
	for(int i=0; i<N; i++){
		if(K-kinds[i] > 0){
			kinds[i] = poss[i];
		}
		printf("%d", poss[i]);
	}
	dp();
	
	
}


