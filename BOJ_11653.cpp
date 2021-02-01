#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int n;
	cin >> n;
	
	while(true){
		if(n==1) break;
		
		for(int i=2; i<=n; i++){
			if(n%i == 0){
				cout << i << endl;
				n = n / i;
				break;
			}
		}
	}
	
	
	return 0;
}
