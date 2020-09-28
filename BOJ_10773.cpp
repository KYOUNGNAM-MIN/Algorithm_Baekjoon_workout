#include <iostream>
#include <stack>
using namespace std;

int main(void){
	int k;	
	stack<int> s;
	cin >> k;
	int tmp;
	for(int i=0; i<k; i++){
		cin >> tmp;
		if(tmp==0){
			s.pop();
		}
		else{
			s.push(tmp);
		}
	}
	int sum = 0;
	while(!s.empty()){
		sum += s.top();
		s.pop();
	}
	
	cout << sum;
	
	
	return 0;
}
