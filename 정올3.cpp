#include <stdio.h>
#include <stdlib.h>
int max(int*);
int min(int*);
int n;
int maxv = 0;
int minv = 100000;
int main(){
	
  int *arrx;

  scanf("%d", &n);

  arrx = (int *)malloc(sizeof(int) * n);
  for(int i=0; i<n; i++){
  	scanf("%d", &arrx[i]);
  }
  int resmax = max(arrx);
  int resmin = min(arrx);
  printf("max : %d\n", resmax);
  printf("min : %d", resmin);
  
}
int max(int* arrx){
	for(int i=0; i<n; i++){
		if(arrx[i] > maxv){
		 	maxv = arrx[i];
		 }	  	
	}
	return maxv;  
  }	
int min(int* arrx){
	for(int j=0; j<n; j++){
		 if(arrx[j] < minv){
		 	minv = arrx[j];
		 }	  
	}
	return minv;
}



