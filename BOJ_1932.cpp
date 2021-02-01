#include <iostream>
#include <algorithm>
using namespace std;

int size;
int arr[501][501];
int dp[501][501];

int main(){
	cin >> size;
	for (int i = 0; i<size; i++){
		for (int j = 0; j <= i; j++){
			cin >> arr[i][j];
		}
	}

	dp[0][0] = arr[0][0];
	for (int i = 1; i<size; i++){
		for (int j = 0; j <= i; j++){
			if (j == 0)
				dp[i][j] = dp[i - 1][j] + arr[i][j];
			else if (i == j)
				dp[i][j] = dp[i - 1][j - 1] + arr[i][j];
			else
				dp[i][j] = max(dp[i - 1][j - 1] + arr[i][j], dp[i - 1][j] + arr[i][j]);
		}
	}

	int max = 0;
	for (int i = 0; i<size; i++){
		if (dp[size - 1][i] >= max)
			max = dp[size - 1][i];
	}

	cout << max;
	return 0;
}
