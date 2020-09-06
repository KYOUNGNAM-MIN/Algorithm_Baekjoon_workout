#include <iostream>

using namespace std;

int main(void){
	int apt[15][14];
	for(int i=0; i<15; i++){
		for(int j=0; j<14; j++){
			if(i==0){
				apt[i][j] = j+1;
			}
			else{
				if(j==0){
					apt[i][j] = 1;
				}
				else{
					apt[i][j] = apt[i][j-1] + apt[i-1][j];
				}
			}
		}
	}
	
	int t, k, n;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> k >> n;
		cout << apt[k][n-1] << endl;
	}
	
	return 0;
}
