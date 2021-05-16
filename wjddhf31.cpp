#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char stringarr[5][100];
char letter;
char string[100];
char res[100][100];
int check[5];
int sum;

int compare(char *a, char *b, int s, int lenb){
	for(int i=s;i<s+lenb;i++){
		if(a[i] != b[i-s]) return 0;
	} 
	return 1;
}

int main(void) {
	for(int i=0; i<5; i++){
		scanf("%s", stringarr[i]);
	}
	scanf(" %c", &letter);
	scanf("%s", &string);
	
    int i, j;
	int lenb = strlen(string);
    for(i=0; i<5; i++){
    	int lena = strlen(stringarr[i]);
        for(j=0; j<lena; j++){
            if(stringarr[i][j] == letter) {
				check[i] = 1;
				break;
			}		
	    }
	    if(check[i] == 1) continue;
	    for(j=0;j + lenb <= lena;j++){
	    	int result = compare(stringarr[i], string, j, lenb);
	    	if(result == 1){
	    		check[i] = 1;
	    		break;
			}
		}
	}
	
	for(int l=0; l<5; l++){
		sum += check[l];
			if(check[l] == 1){
				printf("%s\n", stringarr[l]);
				
			}
		}
		printf("%d", sum);
		if(sum == 0){
				printf("none");
			}
}



