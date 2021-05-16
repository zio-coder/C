#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int N;
int loc = 0;
int arr[100000];
int* intptr;
void sort(int a[]){
	int i;
	for(i=0; i<loc; i++){
		for(int j=0; j<loc-1; j++){
			int x = a[i];
			int y = a[j];
			int z = x;
			x = y;
			y = z;
		}
	}
}
int main(){
	scanf("%d", N);
	while(N){
		int cur = N%10;
		cur = arr[loc];
		loc++;
		N /= 10;
		
	}
	
	sort(arr);
	
	for(int i=0; i<N; i++){
		printf("%d", arr[i]);	
	}
	
}
