#include <iostream>
#include <vector>

using namespace std;

int n =0, s; int cnt =0;
int visit[101];
vector<int> worm[101];

void dfs(int x){
	if(visit[x]) return;
	visit[x] = true;
	cnt++;
	for(int i=0; i<worm[x].size(); i++){
		int y = worm[x][i];
		dfs(y);
	}
}

int main(void){
	cin >> n >> s;
	
	for(int i=0; i<s; i++){
		int a, b;
		cin >> a >> b;
		worm[a].push_back(b);
		worm[b].push_back(a);
	}
	dfs(1);
	cnt--;
	cout << cnt;
	
	return 0;
}
