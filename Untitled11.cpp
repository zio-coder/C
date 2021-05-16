#include<stdio.h>
#include<stdlib.h>
int add2(int, int);

int main(){
   int result;
   int num1 = 123;
   int num2 = 972;
   result = add2(&num1, &num2);
   printf("%d\n", result);	
	
}
int add2(int* x , int* y){
	int result;
	*x + *y = result;
	return result;
}
