#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s;
	cin >> s;
	int cnt = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='A' || s[i]=='B' || s[i]=='C'){
			cnt+=3;
		}
		else if(s[i]=='D' || s[i]=='E' || s[i]=='F'){
			cnt+=4;
		}
		else if(s[i]=='G' || s[i]=='H' || s[i]=='I'){
			cnt+=5;
		}
		else if(s[i]=='J' || s[i]=='K' || s[i]=='L'){
			cnt+=6;
		}
		else if(s[i]=='M' || s[i]=='N' || s[i]=='O'){
			cnt+=7;
		}
		else if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S'){
			cnt+=8;
		}
		else if(s[i]=='T' || s[i]=='U' || s[i]=='V'){
			cnt+=9;
		}
		else if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z'){
			cnt+=10;
		}
		else if(s[i]=='1'){
			cnt+=2;
		}
		else if(s[i]=='0'){
			cnt+=11;
		}
	}
	cout << cnt;
	
	return 0;
}
