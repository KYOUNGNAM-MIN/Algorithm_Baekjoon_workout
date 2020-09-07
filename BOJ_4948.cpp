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
	int n, count;
	while(true){
		count = 0;
		cin >> n;
		if(n==0) break;
		else{
			for(int i=n+1; i<=2*n; i++){
				if(is_sosu(i)){
					count++;
				}
			}
			cout << count << "\n";
		}
	}
	
	return 0;
}
