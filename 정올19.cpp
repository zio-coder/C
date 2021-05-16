#include <string.h>
#include <stdio.h>
#include <stdlib.h>

	

int main(){
	int i;
	int j; 
	int* ptrinti;
	int* ptrintj;
	ptrinti = &i;
	ptrintj = &j;
scanf("%d %d", &i, &j);
printf("%d + %d = %d\n", *ptrinti, *ptrintj, *ptrinti + *ptrintj);
printf("%d - %d = %d\n", *ptrinti, *ptrintj, *ptrinti - *ptrintj);
printf("%d * %d = %d\n", *ptrinti, *ptrintj, *ptrinti * *ptrintj);
printf("%d / %d = %d\n", *ptrinti, *ptrintj, *ptrinti / *ptrintj);

}
