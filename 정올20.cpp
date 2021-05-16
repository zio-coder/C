#include <string.h>
#include <stdio.h>
#include <stdlib.h>

	

int main(){
	int arr[5];
	int* arrptr;
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	arrptr = arr; 
	for(int i=0; i<5; i++){
		arrptr[i] = arr[i];
	}
	printf("%d %d %d", arrptr[0], arrptr[2], arrptr[4]);
}
