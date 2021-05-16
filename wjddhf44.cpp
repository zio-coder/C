#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

char str[101];

int cnt = 0;

int main(){
	scanf("%[^\n]", str);
	
	int i = 0;
	int n = strlen(str);
	while(i < n){
		if(str[i] == 'c'&& str[i+1] == '='){
			cnt++;
			i+=2;
		}else if(str[i] == 'c'&& str[i+1] == '-'){
			cnt++;
			i+=2;
		}else if(str[i] == 'd'&& str[i+1] == 'z'&& str[i+2] == '='){
			cnt++;
			i+=3;
		}else if(str[i] == 'd'&& str[i+1] == '-'){
			cnt++;
			i+=2;
		}else if(str[i] == 'l'&& str[i+1] == 'j'){
			cnt++;
			i+=2;
		}else if(str[i] == 'n'&& str[i+1] == 'j'){
			cnt++;
			i+=2;
		}else if(str[i] == 'z'&& str[i+1] == '='){
			cnt++;
			i+=2;
		}else if(str[i] == 's'&& str[i+1] == '='){
			cnt++;
			i+=2;
			
		}else{
			cnt++;
			
			i++;
		}
		
//		int chk = 0;
//		while(isalpha(str[i])) {
//			chk = 1;
//			i++;
//		}
//		if(chk)cnt++;
//	}
	 
}
	printf("%d", cnt);
}
