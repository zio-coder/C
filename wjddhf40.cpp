#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int* ptr;
int a[3000000];
int cnt;
ptr = a;
int main(){
	for(int i=0; i<3000000; i++){
		scanf("%d", ptr[i]);
		cnt++;
	}
	int res = sum(ptr, cnt);
	
}
long long sum(int *a, int n) {
	long long ans = 0;
	for(int i=0; i<3000000; i++){
		ans += a[i];
	}
	return ans;
}
