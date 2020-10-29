#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	int n, a, b;
	int dp[100];
	vector<pair<int, int> > v;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a >> b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(), v.end());
	dp[0] = 1;
	for(int i=1; i<n; i++){
		int m = 0;
		for(int j=0; j<i; j++){
			if(v[j].second < v[i].second){
				m = max(m, dp[j]);
			}
		}
		dp[i] = m+1;
	}
	int mm = 0;
	for(int i=0; i<n; i++){
		mm = max(dp[i], mm);
	}
	cout << n-mm;
	
	return 0;
}
