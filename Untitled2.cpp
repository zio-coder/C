#include <stdio.h>
float C_;


float tempCtoF(float C){
	
float F =	9.0/5.0 * C + 32.0;
return F;	
}

int main(){
	scanf("%lf", &C_);
	float result = tempCtoF(C_);
	printf("%f", result);
}
