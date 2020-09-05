#include <cstdio>

int main(void){
	char ch;
	int a, b;
	int sum[10000];
	int n=0;
	while(scanf("%d %d", &a, &b) != EOF){
		sum[n] = a + b;
		n++;
	}
	for(int i=0; i<n; i++){
		printf("%d\n", sum[i]);
	}
	
	return 0;
}
