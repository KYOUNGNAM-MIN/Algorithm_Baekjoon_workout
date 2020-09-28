#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void){
	int t;
	cin >> t;
	string tmp;
	
	for(int i=0; i<t; i++){
		bool flag = true;
		stack<char> s;
		cin >> tmp;
		for(int j=0; j<tmp.size(); j++){
			if(tmp[j]==')'){
				if(s.empty()){
					flag = false;
					break;
				}
				else s.pop();
			}
			else{
				s.push(tmp[j]);
			}
		}
		if(!s.empty()) flag = false;
		
		if(flag) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}
	
	
	return 0;
}
