#include <iostream>
using namespace std;

int main(void){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n ;i++){
		cin >> a[i];
	}
	int min = a[0];
	int max = a[0];
	for(int i=1; i<n; i++){
		if(a[i] > max){
			max = a[i];
		}
		if(a[i] < min){
			min = a[i];
		}
	}
	cout << min << " " << max;
	
	return 0;
}
