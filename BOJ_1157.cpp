#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	string s;
	cin >> s;
	
	int cnt[26] = {0, };
	for(int i=0; i<s.size(); i++){
		if(97 <= s[i] && s[i] <= 122){
			s[i] = s[i]-32;
		}
		cnt[(int)s[i]-65]++;
	}
	int max = cnt[0];
	int idx = 0;
	for(int i=1; i<26; i++){
		if(cnt[i] > max){
			max = cnt[i];
			idx = i;
		}
	}
	for(int i=0; i<26; i++){
		if(idx!=i && max == cnt[i]){
			cout << "?";
			return 0;
		}
	}
	cout << (char)(idx+65);
	
	return 0;
}
