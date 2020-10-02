#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void){
	string str; bool flag = false;
	
	while(true){
		stack<char> s;
		flag = false;
		getline(cin, str);
		if(str == "."){
			break;
		}
		for(int i=0; i<str.size(); i++){
			if(str[i] == '(' || str[i] == '[') s.push(str[i]);
			else if(str[i] == ')'){
				if(s.empty() || s.top() != '('){
					flag = true;
					break;
				}
				s.pop();
			}
			else if(str[i] == ']'){
				if(s.empty() || s.top() != '['){
					flag = true;
					break;
				}
				s.pop();
			}
		}
		if(!s.empty() || flag) cout << "no\n";
		else cout << "yes\n";
	}
	
	return 0;
}
