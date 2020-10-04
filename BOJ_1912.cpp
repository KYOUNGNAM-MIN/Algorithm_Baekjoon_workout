#include <iostream>
#include <algorithm>
using namespace std;

int n;
long long a[100001];
long long dp[100001];

int main(void){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	dp[0] = 0;
	dp[1] = a[1];
	long long ans = dp[1];
	
	for(int i=2; i<=n; i++){
		dp[i] = max(dp[i-1] + a[i], a[i]);
		ans = max(ans, dp[i]);
	}
	cout << ans;
	
	return 0;
}
