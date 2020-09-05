#include <cstdio>

int main(void){
	int a[5];
	for(int i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	int cokeSet=a[3]-50, ciderSet=a[4]-50;
	int minCoke = cokeSet + a[0];
	int minCider = ciderSet + a[0];
	for(int i=1; i<3; i++){
		if(minCoke > cokeSet + a[i]){
			minCoke = cokeSet + a[i];
		}
		if(minCider > ciderSet + a[i]){
			minCider = ciderSet + a[i];
		}
	}
	int answer;
	if(minCoke < minCider) answer = minCoke;
	else answer = minCider;
	printf("%d", answer);
	
	
	return 0;
}
