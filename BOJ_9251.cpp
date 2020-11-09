#include <iostream>
#include <cstring>
using namespace std;

int dp[1001][1001];
char A[1001];
char B[1001];

int main(void){
	cin >> A >> B;
	int sizeA = strlen(A);
	int sizeB = strlen(B);
	
	for(int i=1; i<=sizeA; i++){
		for(int j=1; j<=sizeB; j++){
			if(A[i-1]==B[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
			}
			else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	cout << dp[sizeA][sizeB];
	
	return 0;
}
