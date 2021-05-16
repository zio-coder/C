#include <stdio.h>
#include <stdlib.h>
int arr[9];
int main(){
	for(int i = 0; i<9; i++){
		scanf("%d", &arr[i]);	
	}
	int max = 0; 
	int resfinal = 0;
	for(int i=0; i<9; i++){
		if(arr[i] > max){
			max = arr[i];
			resfinal = i + 1;
		}
	}
	printf("%d\n%d", max, resfinal);
}

