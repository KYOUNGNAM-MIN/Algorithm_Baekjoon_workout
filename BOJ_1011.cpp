#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	int t;
	cin >> t;
	
	for(int i=0; i<t; i++){
		long long x, y;
		long long mv, max = 0;
		cin >> x >> y;
		while(pow(max,2) <= y-x){
			max++;
		}
		max--;
		mv = 2*max -1;
		long long rem = y-x-pow(max,2);
		rem = (long long)ceil((double)rem / (double)max);
		mv += rem;
		cout << mv << "\n";		
	}
	
	return 0;
}
