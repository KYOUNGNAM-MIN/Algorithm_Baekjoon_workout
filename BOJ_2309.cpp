#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(void){
	int t[2];
	int sum=0;
	vector<int> out;
	int tmp;
	for(int i=0; i<9; i++){
		cin >> tmp;
		out.push_back(tmp);
		sum += tmp;
	}
	sort(out.begin(), out.end());
	int Subsum = sum - 100;
	
	for(int i=0; i<9; i++){
		for(int j=i+1; j<9; j++){
			if(out[i]+out[j] == Subsum){
				t[0] = i;
				t[1] = j;
			}
		}
	}
	for(int i=0; i<9; i++){
		if(i == t[0] || i == t[1]){
			continue;
		}
		cout << out[i] << endl;
	}
	
	return 0;
}
