#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

char str[1000001];
char test[100];
int cnt = 0;

int main(){
	scanf("%[^\n]", str);
	
	int i = 0;
	int n = strlen(str);
	while(i < n){
		while(str[i] == ' '){
			i++;
		}
		int chk = 0;
		while(isalpha(str[i])) {
			chk = 1;
			i++;
		}
		if(chk)cnt++;
	}
	 
	printf("%d", cnt);
}
