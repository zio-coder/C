#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int elem[10];
int odd;
int even;
int main(){
	for(int i = 0; i<10; i++){
		scanf("%d ", &elem[i]);
	}
	int* elemptr = elem; 
	
	for(int i = 0; i<10; i++){
		if(elemptr[i] % 2 == 0){                //num1�� 2�� �������� �� �������� 0�̸� ¦��
		      even += 1;
		}
		else if(elemptr[i] % 2 == 1){                       //num1�� 2�� �������� �� �������� 1�̸� Ȧ��
		      odd += 1;    
		}
	}

	printf("odd : %d\n", odd);
	printf("even : %d", even);
}

