#include <iostream>

using namespace std;

bool is_sosu(int num){
	bool flag = true;
	if(num < 2) return false;
	for(int i=2; i*i<=num; i++){
		if(num%i == 0)
			return false;
	}
	return flag;
}

int main(void){
	int n;
	cin >> n;
	int num;
	int count = 0;
	for(int i=0; i<n; i++){
		cin >> num;
		if(is_sosu(num))
			count++;
	}
	cout << count;
	
	return 0;
}
