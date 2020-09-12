#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>
using namespace std;

int n, answer=987654321;
bool check[21];
int s[21][21];

void dfs(int player_start, int cnt){
	if(cnt==n/2){
		vector<int> link_team, start_team;
		for(int i=0; i<n; i++){
			if(check[i]) start_team.push_back(i);
			else link_team.push_back(i);
		}
		
		int start_status=0, link_status=0;
		for(int i=0; i<start_team.size(); i++){
			for(int j=i+1;j<start_team.size();j++){
				int start_x = start_team[i], start_y = start_team[j];
				int link_x = link_team[i], link_y = link_team[j];
				start_status += s[start_x][start_y] + s[start_y][start_x];
				link_status += s[link_x][link_y] + s[link_y][link_x];
			}
		}
		answer = min(abs(answer), abs(start_status-link_status));
		return;
	}
	for(int i=player_start+1; i<n; i++){
		if(!check[i]){
			check[i] = true;
			dfs(i, cnt+1);
			check[i]=false;
		}
	}
}

int main(void){
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> s[i][j];
		}
	}
	
	dfs(0,0);
	
	cout << answer << "\n";
	
	return 0;
}
