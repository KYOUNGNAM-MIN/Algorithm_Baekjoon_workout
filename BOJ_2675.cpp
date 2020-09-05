#include <iostream>
#include <string>

using namespace std;

string solution(int r, string str){
	string result="";
	
	for(int i=0; i<str.length(); i++){
		for(int j=0; j<r; j++){
			result += str[i];
		}
	}
	return result;
}

int main(void){
	int t;
	cin >> t;
	int r[t];
	string str[t];
	for(int i=0; i<t; i++){
		cin >> r[i];
		cin >> str[i];
	}
	for(int i=0; i<t; i++){
		cout << solution(r[i], str[i]) << "\n";
	}
	return 0;
}
