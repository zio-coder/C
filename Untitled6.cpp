#include <stdio.h>

int func(int);
int end;
int start = 0;

int main(){
	int result = func();
	return result;
}

int func(){
	int value = 300;
	end = 10;
	for(int i = start; i < end; i++){
		printf("%d\n", value++);
	}
	return value;
}


