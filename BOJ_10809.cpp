#include <iostream>
#include <string>
using namespace std;

int main(void){
	string s;
	cin >> s;
	int alpha[26];
	bool check[26];
	for(int i=0; i<26; i++){
		check[i] = false;
		alpha[i] = -1;
	}
	for(int i=0; i<s.size(); i++){
		if(!check[s[i]-97]){
			alpha[s[i]-97] = i;
			check[s[i]-97] = true;
		}
	}
	for(int i=0; i<26; i++){
		cout << alpha[i] << " ";
	}
	
	
	return 0;
}
