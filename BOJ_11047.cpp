#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	int n;
	cin >> n;
	vector<int> time;
	for(int i=0; i<n; i++){
		int tmp;
		cin >> tmp;
		time.push_back(tmp);
	}
	sort(time.begin(), time.end());
	
	int sum = 0;
	for(int i=0; i<time.size(); i++){
		sum += time[i]*(n-i);
	}
	
	cout << sum;
	
	return 0;
}
