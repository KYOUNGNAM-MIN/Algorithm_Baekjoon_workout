#include <iostream>
#include <algorithm>
using namespace std;

int n, a[1001], dp[1001], cnt;

int main(void){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	for(int i=1; i<=n; i++){
		dp[i] = 1;
		for(int j=1; j<i; j++){
			if(a[i] > a[j]){
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		cnt = max(cnt, dp[i]);
	}
	cout << cnt;	
	
	return 0;
}
