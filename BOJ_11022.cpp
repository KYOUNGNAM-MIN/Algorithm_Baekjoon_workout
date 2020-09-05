#include <cstdio>

int main(void){
	int T;
	scanf("%d", &T);
	int sum[T];
	int a[T], b[T];
	for(int i=0; i<T; i++){
		scanf("%d %d", &a[i], &b[i]);
		sum[i] = a[i] + b[i];
	}
	for(int i=0; i<T; i++){
		printf("Case #%d: ", i+1);
		printf("%d + %d = %d\n", a[i], b[i], sum[i]);
	}
	
	return 0;
}
