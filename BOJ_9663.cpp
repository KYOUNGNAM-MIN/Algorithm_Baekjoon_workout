#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int n, answer=0;
int chess[15];

bool check(int i){
	for(int j=0; j<i; j++){
		if(chess[i] == chess[j] || abs(chess[i]-chess[j]) == (i-j))
			return false;
	}
	return true;
}

void queen(int i){
	if(i==n)
		answer += 1;
	else{
		for(int j=0; j<n; j++){
			chess[i] = j;
			if(check(i))
				queen(i+1);
		}
	}
}

int main(void){
	cin >> n;
	queen(0);
	
	cout << answer;
	
	return 0;
}
