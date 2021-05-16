#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int data1 = 100;
	int *ptr1;
	double data2 = 3.14;
	double *ptr2;
	
	printf("ptr1: 변수명,\t\t주소값,\t\t\t저장값\n");
	printf("\t\t------\t\t------\t\t\t------\n");
	printf("%s\t\t%p\t%d\n", "data", &data1, data1);
	printf("%s\t\t%p\t%d\n", "ptrint", &ptr1, ptr1);
	printf("ptr2: 변수명,\t\t주소값,\t\t\t저장값\n");
	printf("\t\t------\t\t------\t\t\t------\n");
	printf("%s\t\t%p\t%lf\n", "data", &data2, data2);
	printf("%s\t\t%p\t%lf\n", "ptrint", &ptr2, ptr2);
	printf("---------------------------------------------");
	printf("%d\n", data1);
	printf("%d\n", *ptr1);
	printf("%d\lf", data2);
	printf("%d\lf", *ptr2);
}
