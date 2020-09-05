#include <iostream>
using namespace std;

int main(void){
	int a[9];
	for(int i=0; i<9; i++){
		cin >> a[i];
	}
	int max = a[0];
	int index = 1;
	for(int i=1; i<9; i++){
		if(a[i] > max){
			max = a[i];
			index = i+1;
		}
	}
	cout << max << "\n";
	cout << index;
	
	return 0;
}
