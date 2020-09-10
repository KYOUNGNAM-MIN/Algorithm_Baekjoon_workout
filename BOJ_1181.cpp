#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool compare(const string &a, const string &b){
	if(a.size() == b.size()){
		return a < b;
	}
	return a.size() < b.size();
}

int main(void){
	int n;
	cin >> n;
	vector<string> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end(), compare);
	v.erase(unique(v.begin(),v.end()),v.end());
	
	for(int i=0; i<v.size(); i++){
		cout << v[i] << "\n";
	}
	
	
	return 0;
}
