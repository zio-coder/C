#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct info {
	char a[100];
	int idx;
};
struct info arr[10];

int main(){
	int N = 5;
	char tmp[100] = "asdf";
	for(int i=0;i<N;i++){
		tmp[3] = i + 'A';
		strcpy(arr[i].a, tmp);
		arr[i].idx = i * 7 % 5;
	}
	
	for(int i=0;i<N;i++){
		printf("%d %s %d\n", i, arr[i].a, arr[i].idx);	
	}
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N - 1;j++){
			if(arr[j].idx > arr[j + 1].idx){
				struct info ttmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = ttmp;
			}
		}
	}
	
	printf("\n\n");
	for(int i=0;i<N;i++){
		printf("%d %s %d\n", i, arr[i].a, arr[i].idx);	
	}
}
