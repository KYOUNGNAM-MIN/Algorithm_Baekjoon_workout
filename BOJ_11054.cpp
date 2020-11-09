#include <iostream>
using namespace std;

int dp[1001];
int rdp[1001];
int A[1001];

int main(void){
	int n;
	cin >> n;
	for(int i=1; i<=n; i++) cin >> A[i];
	
	for(int i=1; i<=n; i++){
		dp[i] = 1;
		for(int j=1; j<=i; j++){
			if(A[j] < A[i] && dp[i] < dp[j]+1){
				dp[i] = dp[j]+1;
			}
		}
	}
	
	for(int i=n; i>=1; i--){
		rdp[i] = 1;
		for(int j=n; j>=i; j--){
			if(A[i] > A[j] && rdp[j]+1 > rdp[i]){
				rdp[i] = rdp[j]+1;
			}
		}
	}
	
	int answer=0;
	for(int i=0; i<=n; i++){
		if(answer < dp[i] + rdp[i] - 1) answer = dp[i] + rdp[i] - 1;
	}
	cout << answer;
	
	
	return 0;
}
