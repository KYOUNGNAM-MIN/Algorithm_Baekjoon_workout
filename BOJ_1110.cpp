#include <cstdio>

int main(void){
	int N, cycle=1;
	scanf("%d", &N);
	int realN = N;
	while(true){
		N = (N%10)*10 + (N/10 + N%10)%10;
		if(N == realN){
			break;
		}
		cycle++;
	}
	printf("%d", cycle);
	
	return 0;
}
