#include<stdio.h>
#include<stdlib.h>

int main(){
	int* ptr;
	int arr[5]{2, 6, 7, 9, 10};	
	ptr = arr;
	
	for(int i = 0; i<5; i++){
	    if((&arr[i]) % 2){
	    	&arr[i] = &arr[i] + 1;
		}else{
			&arr[i] = &arr[i] + 2;
		}
		printf("Ãâ·Â: %c\n", &arr[i]);
	}
}


