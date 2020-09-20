#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void){
	int stair[301];
	int dp[301];
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &stair[i]);
	}
	dp[0] = stair[0];
	dp[1] = max(stair[0]+stair[1], stair[1]);
	dp[2] = max(stair[0]+stair[2], stair[1]+stair[2]);
	
	for(int i=3; i<n; i++){
		dp[i] = max(dp[i-2]+stair[i], stair[i-1]+stair[i]+dp[i-3]);
	}
	printf("%d", dp[n-1]);
		
	return 0;
}
