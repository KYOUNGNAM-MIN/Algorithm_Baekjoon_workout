#include <iostream>
#include <string>
using namespace std;

int main(void){
	int n, num=0;
	cin >> n;
	for(int i=666; ;++i){
		string s = to_string(i);
		
		if (s.find("666") != -1)
			++num;
		if (num == n){
			cout << i;
			break;
		}
	}
	
	return 0;
}
