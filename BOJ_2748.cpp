#include <iostream>
using namespace std;

int n;
long long fibo[91];
long long answer;

void fibo_func(){
	fibo[0] = 0; fibo[1] = 1;
	if(n>1){
		for(int i=2; i<=n; i++){
			fibo[i] = fibo[i-1] + fibo[i-2];
		}
	}
	answer = fibo[n];
}

int main(void){
	cin >> n;
	fibo_func();
	cout << answer;
	
	return 0;
}
