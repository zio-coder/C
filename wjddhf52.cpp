#include <stdio.h>
#include <stdlib.h>
int N;
int arr[100];
int checker = 0;
int cnt = 0;
int f(int N){
	if(N<=1)return 0;
	for(int i=2; i*i<=N; i++){
            if(N % i == 0) return 0;
        }
         return 1;
}
int main(){
	scanf("%d", &N);
	 for(int i=0; i<N;i++){
	 	scanf("%d", &arr[i]);
	 }
	 for(int i=0; i<N; i++){
	 	cnt += f(arr[i]);	
	 }
	
	
	printf("%d", cnt);
}
