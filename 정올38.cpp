#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int arr[10];
int arr2[10];
int b[1000];
int N=0; 
int main(){
	for(int i=0; i<10; i++){
		scanf("%d", &arr[i]);
		arr2[i] = arr[i]%42;
		int cur = arr2[i];
		b[cur] = 1;
	}
	for(int i=0; i<42; i++){
		if(b[i] == 1){
			N++;
		}
	}
	printf("%d", N);
}
	
	


	

