#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int n, m;
int soo[9] = {0, };
bool visit[9] = {false, };

void dfs(int cnt, int nextI){
	if(cnt ==m){
		for(int i=0; i<m; i++){
			cout << soo[i] <<' ';
		}
		cout << "\n";
		return;
	}
	for(int i=nextI; i<=n; i++){
		if(!visit[i]){
			visit[i] = true;
			soo[cnt] = i;
			dfs(cnt+1, i+1);
			visit[i] = false;
		}
	}
}

int main(void){
	cin >> n >> m;
	dfs(0, 1);
	
	return 0;
}
