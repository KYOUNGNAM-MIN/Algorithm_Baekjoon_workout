#include <iostream>
#include <vector>
using namespace std;

int n;
vector<long long> ans = {0,1,2};

void fibo(){
	long long tmp;
	for(int i=3; i<=n; i++){
		tmp = 0;
		tmp = ans[i-1] + ans[i-2];
		ans.push_back(tmp%15746);
	}
}


int main(void){
	cin >> n;
	fibo();
	cout << ans[n]%15746;
	
	return 0;
}
