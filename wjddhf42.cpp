#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int N;
int X;
int k;
int cnt = 0;
int res[4];
int main(){
	scanf("%d", &N);
	for(int i=1; i<=N; i++){
		k = i;
	
		if(k<100){
			X++;
		}else{
			while(k){
				int cur = k % 10;
				res[cnt] = cur;
				cnt++;
				k /= 10;
			}
			int a = res[1] - res[0];
			int chk = 1;
			for(int i=2; i<cnt; i++){
				if(a != res[i] - res[i-1]) chk = 0;
			}	
			if(chk)X++;
			cnt = 0;
		}
		res[0], res[1], res[2], res[3] = 0;
	}	
	printf("%d\n", X);
}
