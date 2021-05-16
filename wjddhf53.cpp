#include <stdio.h>
#include <stdlib.h>
int N, M, n;
int sum;
int res;
int arr[100];
int j=0;
int f(int N){
	if(N<=1){
		return 0;
	}
	for(int i=2; i*i<=N; i++){
		if(N%i == 0)return 0;
	}
	return 1;
}

int main(){
	scanf("%d", &M);
	scanf("%d", &N);
	int min = 1000000;
	for(int i=M; i<=N; i++){
		res = f(i);
		
		if(res == 1){
			sum += i;
			n++;
			j++;
			if(i<min){
				min = i;
			}
		}
		
	}
	if(sum == 0){
		printf("-1");
		exit(0);
	}
	printf("%d\n%d", sum, min);
}
