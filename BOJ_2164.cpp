#include <iostream>
#include <queue>
using namespace std;

int main(void){
	int n;
	cin >> n;
	queue<int> q;
	for(int i = 1; i<=n; i++){
		q.push(i);
	}
	int tmp = 0;  
	while(true){
		if(q.size() == 1) break;
		
		if(tmp%2==0){
			q.pop();
		}
		else{
			q.push(q.front());
			q.pop();
		}
		tmp++;
	}
	cout << q.front() << endl;
	
	return 0;
}
