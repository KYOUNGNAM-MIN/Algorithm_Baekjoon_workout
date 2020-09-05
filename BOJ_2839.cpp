#include <iostream>

using namespace std;

int main(void){
	int N;
	cin >> N;
	
	if(N < 3) return -1;
	
	int answer = -1;
	int big = N/5;
	while(big >= 0){
		int tmp = N - (5*big);
		if(tmp % 3 == 0){
			answer = big + (tmp/3);
			break;
		}
		big--;
	}
	
	cout << answer;
	
	return 0;
}
