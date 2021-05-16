#include <string.h>
#include <stdio.h>
#include <stdlib.h>

	

int main(){
	double arr[5];
	double* arrptr;
	scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	arrptr = arr; 
	for(int i=0; i<5; i++){
		arrptr[i] = arr[i];
	}
	printf("%.1lf %.1lf %.1lf %.1lf %.1lf", arrptr[0], arrptr[1], arrptr[2], arrptr[3], arrptr[4]);
	
}
