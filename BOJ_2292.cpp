#include <iostream>

using namespace std;

int main(void){
	int N, answer = 0;
	cin >> N;
	if(N==1){
		cout << 1;
		return 0;
	}
	for(int i=2; i<=N; answer++){
		i +=6*answer;
	}
	
	cout << answer;
	return 0;
}
