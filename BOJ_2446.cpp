#include <cstdio>

int main(void){
	int n;
	int temp=1;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(i>1){
			for(int j=2; j<=i; j++){
				printf(" ");
			}
		}
		for(int j=1; j<=n*2-temp; j++){
			printf("*");
		}
		temp+=2;
		printf("\n");
	}
	temp = n*2-3;
	for(int i=1; i<n; i++){
		if(i<n-1){
			for(int j=n-2; j>=i; j--){
				printf(" ");
			}
		}
		for(int j=n*2-temp; j>0; j--){
			printf("*");
		}
		temp-=2;
		printf("\n");
	}
	
	return 0;
}
