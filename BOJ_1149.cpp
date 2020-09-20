#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void){
	int dp[1001][3] = {0};
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d %d %d", &dp[i][0], &dp[i][1], &dp[i][2]);
		
		dp[i][0] += min(dp[i-1][1], dp[i-1][2]);
		dp[i][1] += min(dp[i-1][0], dp[i-1][2]);
		dp[i][2] += min(dp[i-1][0], dp[i-1][1]);
	}
	int answer = min(dp[n][0],min(dp[n][1], dp[n][2]));
	printf("%d", answer);
		
	return 0;
}
