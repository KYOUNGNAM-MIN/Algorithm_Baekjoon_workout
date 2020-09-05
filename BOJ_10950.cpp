#include <iostream>
#include <cstdio>
using namespace std;

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
		printf("%d\n", sum[i]);
	}
	
	return 0;
}
