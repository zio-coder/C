#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void sort(int a[], int n){
	int i, j;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[i] < a[j]){
				int k = a[i];
				a[i] = a[j];
				a[j] = k;
				
			}
			
		} 
	}	
	
}

int main(){
	int arr[100];
	int* intptr;
	int N;
	scanf("%d", &N);
    
	for(int i = 0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	intptr = (int*)malloc(sizeof(int) * N);
	intptr = arr;
	for(int i=0; i<N; i++){
		intptr[i] = arr[i];
	}
	sort(intptr, N);
	for(int i = 0; i<N; i++){
		printf("%d ", intptr[i]);
	}
	
}

	
	




