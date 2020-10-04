#include <iostream>
#include <algorithm>
using namespace std;

long long podo[10001];
long long dp[10001];
int n;

void func(){
	dp[0] = 0; 
	dp[1] = podo[1];
	dp[2] = podo[1] + podo[2];
	for(int i=3; i<=n; i++){
		dp[i] = dp[i-1];
		if(dp[i] < dp[i-2] + podo[i]){
			dp[i] = dp[i-2] + podo[i];
		}
		if(dp[i] <dp[i-3] + podo[i-1] + podo[i]){
			dp[i] = dp[i-3] + podo[i-1] + podo[i];
		} 
	}
}

int main(void){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> podo[i];
	}
	func();
	cout << dp[n];	
	
	return 0;
}
