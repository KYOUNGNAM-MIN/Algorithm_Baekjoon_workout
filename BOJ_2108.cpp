#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void){
	int n;
	int visit[8001] = {0,};
	int maxN = -4000, minN = 4000;
	int maxVisit = 0, maxCount;
	cin >> n;
	vector<int> number(n);
	float sum = 0;
	
	for(int i=0; i<n; i++){
		cin >> number[i];
		sum += number[i];
		visit[number[i]+4000]++;
		maxN = max(maxN, number[i]);
		minN = min(minN, number[i]);
	}
	
	sort(number.begin(), number.end());
	int curIdx = 0;
	for(int i=0; i<8001; i++){
		if(visit[i] > maxVisit){
			maxVisit = visit[i];
			curIdx = i;
			maxCount = i-4000;
		}
	}
	for(int i=0; i<8001; i++){
		if((visit[i]==maxVisit) && (curIdx<i)){
			maxCount = i-4000;
			break;
		}
	}
	
	
	cout << round(sum/n) << "\n";
	cout << number[n/2] << "\n";
	cout << maxCount << "\n";
	cout << maxN-minN;
	
	
	return 0;
}
