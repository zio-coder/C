#include <stdio.h>
#include <string.h>

int main(){
	int i=0,n,j,tmp;
	char arr[11]={0,};
	scanf("%s",&arr[0]);	
	int len = strlen(arr);
	for(i=0;i<len;i++){
		for(j=i+1; arr[j]!='\0'; j++){
		if (arr[i]<arr[j]){
		tmp=arr[i];
		arr[i]=arr[j];
		arr[j]=tmp;
		}	
			
		}
	}
	printf("%s",arr);
	return 0;
}
