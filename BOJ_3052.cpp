#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
	vector<int> a(10);
	int temp;
	for(int i=0; i<10; i++){
		scanf("%d", &temp);
		a[i] = temp%42;
	}
	sort(a.begin(), a.end());
	int count = 1;
	temp = a[0];
	for(int i=1; i<a.size(); i++){
		if(a[i] != temp){
			temp = a[i];
			count++;
		}
	}
	cout << count;
	
	return 0;
}
