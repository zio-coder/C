#include <stdio.h>
int x;
int a[10];
int y;

int main(){
	scanf("%d", &x);
	for(int i=0; i<10; i++){
	scanf("%d", &a[i]);
	}
	for(int i=0; i<10; i++){
		
		if(a[i] < x){
			printf("%d \n", a[i]);
		}
	}
	
}
