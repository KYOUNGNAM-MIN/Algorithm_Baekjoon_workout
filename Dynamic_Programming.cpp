#include <iostream>
using namespace std;

//다이나믹 프로그래밍 : 하나의 문제를 단 한 번만 풀도록 하는 알고리즘 
//메모이제이션 : 이미 계산한 결과는 저장해둠 
int d[100];

int dp(int x){
	if(x==1) return 1;
	if(x==2) return 1;
	if(d[x] != 0) return d[x];
	return d[x] = dp(x-1) + dp(x-2);
}

int main(void){
	cout << dp[3];
	
	return 0;
}
