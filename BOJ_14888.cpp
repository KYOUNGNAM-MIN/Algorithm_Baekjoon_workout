#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int cal[4];
vector<int> v;
vector<int> answer;
vector<int> current;

int calculator(){
	int answer = v[0];
	for(int i=0; i<n-1; i++){
		if(current[i] == 0){
			answer += v[i+1];
		}
		else if(current[i] == 1){
			answer -= v[i+1];
		}
		else if(current[i] == 2){
			answer *= v[i+1];
		}
		else if(current[i] == 3){
			answer /= v[i+1];
		}
	}
	return answer;
}

void dfs(int depth){
	if(depth == n-1){
		int ans = calculator();
		answer.push_back(ans);
	}
	else{
		for(int i=0; i<4; i++){
			if(cal[i] != 0){
				cal[i]--;
				current.push_back(i);
				dfs(depth+1);
				cal[i]++;
				current.pop_back();
			}
		}
	}
}

int main(void){
	cin >> n;
	v.resize(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	for(int i=0; i<4; i++){
		cin >> cal[i];
	}
	dfs(0);
	sort(answer.begin(), answer.end());
	cout << answer.back() << "\n" << answer[0];
	
	return 0;
}
