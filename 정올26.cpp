#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
	double arr[100];
	double* dbleptr;
	int N;
	double sum = 0;
	scanf("%d", &N);
    
	for(int i = 0; i<N; i++){
		scanf("%lf", &arr[i]);
	}
	dbleptr = (double*)malloc(sizeof(double) * N);
	dbleptr = arr;
	for(int i=0; i<N; i++){
		dbleptr[i] = arr[i];
	}
	
	for(int i = 0; i<N; i++){
		printf("%.2lf ", dbleptr[i]);
	 	sum = sum + dbleptr[i];
	 	
	}
	printf("\n");
	printf("hap : %.2lf\n", sum);
	printf("avg : %.2lf\n", sum/N);
}




