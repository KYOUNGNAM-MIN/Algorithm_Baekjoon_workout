#include <cstdio>

int main(void){
	int a, b;
	int T;
	scanf("%d", &T);
	int sum[T];
	for(int i=0; i<T; i++){
		scanf("%d %d", &a, &b);
		sum[i] = a + b;
	}
	for(int i=0; i<T; i++){
		printf("Case #%d: ", i+1);
		printf("%d\n", sum[i]);
	}
	
	return 0;
}
