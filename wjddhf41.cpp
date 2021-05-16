#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a[10001];
void d(int);
int i;
int k;
int main(){
	for(int i=0; i<=10000; i++){
		d(i);
	
}
	for(int i=0; i<=10000; i++){
		if(a[i] == 0){
			printf("%d\n", i);
		}
}

	
}
void d(int n){
	int k=n;
	while(1){
		k+=n%10;
		n/=10;
		if(n==0)
			break;
	}
	a[k]=1;
	return;
}
	

