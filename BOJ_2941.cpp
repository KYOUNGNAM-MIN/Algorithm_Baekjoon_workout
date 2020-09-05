#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s;
	cin >> s;
	
	int cnt = 0;
	
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'n' || s[i] == 'l'){
			if(s[i+1] == 'j') i++;
		}
		else if(s[i] == 'c'){
			if(s[i+1] == '-' || s[i+1] == '=') i++;
		}
		else if(s[i] == 'd'){
			if(s[i+1] == '-') i++;
			else if(s[i+1] == 'z'){
				if(s[i+2] == '='){
					i += 2;
				}
			}
		}
		else if(s[i] == 's'){
			if(s[i+1] == '=') i++;
		}
		else if(s[i] == 'z'){
			if(s[i+1] == '=') i++;
		}
		cnt++;
	}
	cout << cnt;
	
	
	return 0;
}
