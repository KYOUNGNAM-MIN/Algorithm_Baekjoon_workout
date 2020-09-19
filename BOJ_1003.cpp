#include <stdio.h>

int tmp;
int fibo_zero[41];
int fibo_one[41];
void fibonacci(){
	if(tmp>1){
		for(int i=2; i<=tmp; i++){
			fibo_zero[i] = fibo_zero[i-1] + fibo_zero[i-2];
			fibo_one[i] = fibo_one[i-1] + fibo_one[i-2];
		}
	}
}

int main(void){
	int t;
	scanf("%d", &t);
	fibo_zero[0] = 1; fibo_zero[1] = 0;
	fibo_one[0] = 0; fibo_one[1] = 1;
	
	for(int i=0; i<t; i++){
		scanf("%d", &tmp);
		fibonacci();
		printf("%d %d\n", fibo_zero[tmp], fibo_one[tmp]);
	}
	
	return 0;
}
