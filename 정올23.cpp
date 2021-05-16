#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char stringarr[100][100];


int main(void) {
	char str[10000];
	
	int i = 0;
	while(scanf("%s", str) != EOF) {
		strcpy(stringarr[i], str);
		i+=1;
	}
	
	for(int j = i - 1;j >= 0;--j) printf("%s\n", stringarr[j]);
}

//char str[1][101];
//char strres[100][100];
//int main(){
//	int i;
//	int n = 1;
//	scanf("%s", str[1]);
//	for(i=0; i<100; i++){
//		if(str[1][i] = " " && i<=101){
//			n++;
//			strncpy(strres[n], str[1], i+1);
//	}else{	
//		continue; 
//	}
//	
//	for(int j = n; j>0; j--){
//		printf("%s", strres[j]);
//	};
//	
//}
//}

