#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	string s;
	cin >> s;
	string temp = "";
	int sum = 0;
	bool minus  = false;
	for(int i=0; i<=s.size(); i++){
		if(s[i]== '-' || s[i]=='+' || s[i]=='\0'){
			if(minus){
				sum -= stoi(temp);
			}
			else{
				sum += stoi(temp);
			}
			temp = "";
			if(s[i]=='-')
				minus = true;
			continue;
		}
		temp +=s[i];
	}
	
	cout << sum;
	
	return 0;
}
