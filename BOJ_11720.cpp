#include <iostream>

using namespace std;

int main(void){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int sum = 0;
	for(int i=0; i<n; i++){
		sum += s[i]-48;
	}
	
	cout << sum;
	
	return 0;
}
