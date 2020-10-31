#include <iostream>
#include <queue>
using namespace std;

int main(void){
	int tcase;
	cin >> tcase;
	
	for(int i=0; i<tcase; i++){
		int n, m, count = 0;
		queue<pair<int, int> > q;
		priority_queue<int> pq;
		cin >> n >> m;
		
		for(int j=0; j<n; j++){
			int v;
			cin >> v;
			q.push(make_pair(j, v));
			pq.push(v);
		}
		
		while(!q.empty()){
			int nowidx = q.front().first;
			int nowval = q.front().second;
			q.pop();
			
			if(nowval == pq.top()){
				pq.pop();
				count++;
				if(nowidx == m){
					cout << count << "\n";
					break;
				}
			}
			else{
				q.push(make_pair(nowidx, nowval));
			}
		}
	}
	return 0;
}
