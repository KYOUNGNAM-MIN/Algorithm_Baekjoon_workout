#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(void){
	int N, K;
	cin >> N >> K;
	vector<pair<int, int> > baglist;
	for(int i=0; i<N; i++){
		int w, v;
		cin >> w >> v;
		baglist.push_back(make_pair(w,v));
	}
	
	int maxD[100001];
	vector<pair<int, int> >::iterator iter;
	vector<pair<int, int> >::iterator iter2;
	for(iter = baglist.begin(); iter != baglist.end(); iter++){
		for(int j=K; j>=1; j--){
			if(iter->first <= j){
				maxD[j] = max(maxD[j], maxD[j-iter->first]+iter->second);
			}
		}
	}
	cout << maxD[K] << '\n';
	
	return 0;
}
