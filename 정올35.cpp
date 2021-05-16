#include <stdio.h>
#include <stdlib.h>
void maxmin(int[], int); 
int N;
int arr[1000000];

int main(){
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	maxmin(arr, N);
}

void maxmin(int a[], int n){
	int max = -1000000;
	int min = 1000000;
	for(int j=0; j<n; j++){
			if(a[j]>max){
				max = a[j];
			}
	}
		for(int j=0; j<n; j++){
			if(a[j]<min){
				min = a[j];
			}
	}
	
	printf("%d %d", min, max);
}
