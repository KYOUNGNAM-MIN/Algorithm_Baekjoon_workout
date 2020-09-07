#include <iostream>

using namespace std;

int sum = 0;
int mina = 10000;

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
	int m,n;
	cin >> m >> n;
	int count = 0;
	for(int i=m; i<=n; i++){
		if(is_sosu(i)){
			sum += i;
			if(mina>i){
				mina = i;
			}
		}
	}
	if(sum==0) cout << -1;
	else{
		cout << sum << "\n";
		cout << mina;
	}
	
	return 0;
}
