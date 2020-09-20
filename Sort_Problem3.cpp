#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[10001];

int main(void){
	cin >> n;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		a[x]++;
	}
	for(int i=0; i<10001; i++){
		while(a[i] != 0){
			cout << i << endl;
			a[i]--;
		}
	}
	
	return 0;
}
