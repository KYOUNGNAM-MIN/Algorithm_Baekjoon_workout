#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s;
	getline(cin, s); 
	int cnt = 1;
	for(int i=0; i<s.size(); i++){
		if(s[i] == ' '){
			cnt++;
		}
	}
	if(s[0] == ' '){
		cnt--;
	}
	if(s[s.size()-1] == ' '){
		cnt--;
	}
	cout << cnt;
	
	return 0;
}
