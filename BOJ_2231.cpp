#include <iostream>
#include <cmath>
using namespace std;

int func(int n){
	int tmp = 0;
	int chk = 0;
	
	for(int i=1; i<n; i++){
		chk = i;
		tmp = i;
		while(tmp>0){
			chk += tmp%10;
			tmp = tmp/10;
		}
		if(chk == n)
			return i;
	}
	
	return 0;
}

int main(void){
	int n;
	cin >> n;
	cout << func(n);
	
	return 0;
}
