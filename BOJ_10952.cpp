#include <cstdio>

int main(void){
	int sum[10000];
	int a, b;
	int n=0;
	while(true){
		scanf("%d %d", &a, &b);
		if(a==0 && b==0) break;
		sum[n] = a+b;
		n++;
	}
	for(int i=0; i<n; i++){
		printf("%d\n", sum[i]);
	}
	
	
	return 0;
}
