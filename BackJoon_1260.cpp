#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
  
int n, m, v;
vector<int> vec[1001];
int visitD[1001];
int visitB[1001];

void dfs(int x){
	if(visitD[x]) return;
	visitD[x] = true;
	printf("%d ", x);
	for(int i=0; i<vec[x].size(); i++){
		int y = vec[x][i];
		dfs(y);
	}
}

void bfs(int x){
	queue<int> q;
	q.push(x);
	visitB[x] = true;
	while(!q.empty()){
		int x= q.front();
		q.pop();
		printf("%d ", x);
		for(int i=0; i<vec[x].size(); i++){
			int y = vec[x][i];
			if(!visitB[y]){
				q.push(y);
				visitB[y] = true;
			}
		}
	}
}

int main(void){
	cin >> n >> m >> v;
	
	for(int i=1; i<=m; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	for(int i=1; i<=n; i++){
		sort(vec[i].begin(),vec[i].end());
	}
	
	dfs(v);
	cout << '\n';
	bfs(v);
	
	return 0;
}
