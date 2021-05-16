#include <stdio.h>

int getSum(int);
int getMult(int);
int getSubt(int);

int N;

int main(){
	printf("정수를 입력하시오")
	scanf("%d", &N);
	
 int result1 = getsum(N);
 int result2 = getMult(N);
 int finalres = getSubt(result1, result2);
 
   printf("1~ %d 까지의 합: %d", N, result1);
   printf("1~ %d 까지의 곱: %d", N, result2);
   printf("두수의 차: %d", N, finalres);	
}

int getSum(int N){
	int sum = 0;
	for(int i = 0; i <= N; i++){
		sum += i; 
	}
	return sum;	
}
int getMult(int N){
	int mult = 0;
	for(int i = 0; i <= N; i++){
		mult *= i; 
	}
	return mult;	
}
int getSubt(int sum, int mult){
	int subt = sum > mult ? sum-mult : mult-sum;
	
	return subt;
	
}
}
