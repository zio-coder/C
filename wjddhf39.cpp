#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N;
int C;
int arr[1000];
int cnt = 0;
float floatres;
int main(){
	scanf("%d", &C);
	int i = 0;
	
	int k = 0;	
	for(i=0; i<C; i++){
		float avg = 0;
		scanf("%d", &N);
			for(k=0; k<N; k++){
				scanf("%d", &arr[k]);
				avg += arr[k];
			}
				avg = avg/N;
				
			for(k=0;k<N;k++){
				if(avg < arr[k]){
					cnt++;
				}	
			}
		
		floatres = (float)cnt/(float)N;	
		
		printf("%.3lf", 100 * floatres);
		printf("%%\n");
		cnt = 0;
	}
	
}
	
	
