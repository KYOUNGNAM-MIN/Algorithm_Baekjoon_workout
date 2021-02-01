#include <iostream>
#include <vector>
using namespace std;
vector<pair<int, int> > v;

void hanoi(int N, int from, int tmp, int to){
	if(N==1){
		v.push_back({from,to});
	} 
	else{
		hanoi(N-1, from, to, tmp);
		v.push_back({from,to});
		hanoi(N-1, tmp, from, to);
	}
}

int main(void){
	int N;
	cin >> N;
	hanoi(N, 1, 2, 3);
	cout << v.size() << '\n';
	for(int i=0; i<v.size(); i++)
		cout << v[i].first << ' ' << v[i].second << '\n';
		
	return 0;
}
