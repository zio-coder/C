#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random();
int bomb(int);
int bell;
int input;

int main(){
	bell = 5;
	int res = random();
	bomb(res);
}	


int random(){
	srand(time(NULL));
		
		int ran;
		ran = rand() % 9 + 1;
		
		return ran;
}

int bomb(int rand){
	while (1){
		scanf("%d",&input);
		if (bell = 0){
			printf("��ź�������ϴ�. ö����, �������� �ٽõ����Ͻñ�...");
			return 0;
		}
		if (input == rand){
			printf("error:��ź�� �����Ǿ����ϴ�");
			return 0;	
		}else{
			bell -= 1;
			printf("���̿︳�ϴ�. ������ȸ:%d", bell);
		}	  
	}
	
}
