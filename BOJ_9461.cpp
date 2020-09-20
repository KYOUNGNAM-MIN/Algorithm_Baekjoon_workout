#include <stdio.h>
using namespace std;

long long a[101];

void fibo(){
	for(int i=4; i<101; i++){
		a[i] = a[i-2] + a[i-3];
	}
}

int main(void){
	int t;
	scanf("%d", &t);
	
	a[1] = 1, a[2] = 1, a[3] = 1;
	fibo();
	
	for(int i=0; i<t; i++){
		int tmp;
		scanf("%d", &tmp);
		printf("%lld\n", a[tmp]);
	}
	
	return 0;
}
