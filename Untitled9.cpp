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
			printf("폭탄이터집니다. 철수님, 다음생에 다시도전하시길...");
			return 0;
		}
		if (input == rand){
			printf("error:폭탄이 해제되었습니다");
			return 0;	
		}else{
			bell -= 1;
			printf("벨이울립니다. 남은기회:%d", bell);
		}	  
	}
	
}
