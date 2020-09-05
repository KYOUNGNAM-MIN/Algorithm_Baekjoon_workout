#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a){
	long long ans = 0;
	
	for(int i=0; i<a.size(); i++){
		ans += a[i];
	}
	
	return ans;
}

int main(void){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sum(a);
	return 0;
}
