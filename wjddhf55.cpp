#include <stdio.h>
#include <stdlib.h>

int T;
int N;
int M;
int C[30][30];
int res;
int fact(int n){

   if (n == 1)      
        return 1;    

    return n * fact(n - 1);    

}
int main(){
	scanf("%d", &T);
	int i;
	for(int k=0; k<T; k++){
		scanf("%d %d", &N, &M);
		
		for(i=0; i<M; i++){
			for(int j=0; j<N; j++)
			{
				C[i][j] = C[i-1][j] + C[i-1][j-1];
				printf("%d\n", C[i][j]);
			}
		}	
	}
}
