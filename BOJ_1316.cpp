#include <iostream>
#include <string>

using namespace std;

int main(void){
	int n;
	cin >> n;
	string s;
	int count = 0;
	
	for(int i=0; i<n; i++){
		cin >> s;
		
		bool c[26]={false};
		bool flag = false;
		
		for(int j=0; j<s.size(); j++){
			if(c[s[j]-'a']){
				flag = true;
				break;
			}
			else{
				c[s[j]-'a'] = true;
				char temp = s[j];
				while(true){
					if(s[++j] != temp){
						j--;
						break;
					}
				}
			}
		}
		if(flag) ;
		else count++;
	}
	
	
	
	
	cout << count;
	
	return 0;
}
