#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	string a, b;
	cin >> a >> b;
	
	if(a.size() > b.size()){
		string tmp;
		for(int i=0; i<a.size()-b.size(); i++)
			tmp += '0';
		b = tmp + b;
	}
	else{
		string tmp;
		for(int i=0; i<b.size()-a.size(); i++)
			tmp += '0';
		a = tmp + a;
	}
	
	int carry = 0;
	string answer;
	while(a.size() != 0 && b.size() != 0){
		int back_a = a.back() - '0';
		int back_b = b.back() - '0';
		int remain = (carry + back_a + back_b) % 10;
		
		carry = (carry + back_a + back_b) / 10;
		answer = (char)(remain + '0') + answer;
		
		a.pop_back();
		b.pop_back();
	}
	
	if(carry)
		answer = (char)(carry + '0') + answer;
	
	cout << answer << endl;
	
	return 0;
}
