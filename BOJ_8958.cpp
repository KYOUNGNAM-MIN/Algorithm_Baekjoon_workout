#include <iostream>
#include <string>
using namespace std;

int main(void){
	int t;
	cin >> t;
	string s[t];
	for(int i=0; i<t; i++){
		cin >> s[i];
	}
	int score;
	int answer[t] = {0, };
	for(int i=0; i<t; i++){
		score = 0;
		for(int j=0; j<s[i].size(); j++){
			if(s[i][j]=='O'){
				score++;
				answer[i] += score;
			}
			else if(s[i][j]=='X'){
				score = 0;
			}
		}
	}
	for(int i=0; i<t; i++){
		cout << answer[i] << "\n";
	}
	return 0;
}
