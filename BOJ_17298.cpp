#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

int main(void){
	int n;
	cin >> n;
	
	vector<int> A(n+1);
	stack<int> s;
	vector<int> NGE(n+1, -1);
	
	for(int i = 1; i <= n; i++)
		cin >> A[i];
	
	for (int i = 1; i <= n; i++){
		while (!s.empty() && A[s.top()] < A[i]){
			NGE[s.top()] = A[i];
			s.pop();
		}
		s.push(i);
	}

	for (int i = 1; i <= n; i++){
		cout << NGE[i] << ' ';
	}
	
	return 0;
}
