#include <iostream>
#include <algorithm>
using namespace std;

string a[20000];
int n;

int getSum(string a){
	int length = a.length();
	int sum = 0;
	for(int i=0; i<length; i++){
		//숫자인 경우에만 더합니다.
		if(a[i] - '0' <= 9 && a[i] - '0' >= 0){
			sum += a[i] - '0';
		}
	}
	return sum;
}

bool compare(string a, string b){
	//길이가 짧은 순서
	if(a.length() < b.length()){
		return 1;
	} 
	else if(a.length() > b.length()){
		return 0;
	}
	//길이가 같은 경우 자리수의 합을 비교해서 작은 합이 먼저. 이래도 비교불가하면 사전순서대로 
	else{
		int aSum = getSum(a);
		int bSum = getSum(b);
		if(aSum != bSum){
			return aSum < bSum;
		}
		else{
			return a < b;
		}
	}
}
int main(void){
	// 
	
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n, compare);
	
	for(int i=0; i<n; i++){
		cout << a[i] << endl;
	}
	
	return 0;
}
