#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		
		int k = pow((x1-x2),2) + pow((y1-y2),2);
		int answer;
		if(x1==x2 && y1==y2 && r1==r2){
            answer = -1;
        }else if(sqrt(k) > r1+r2){
            answer = 0;
        }else if(sqrt(k) == r1+r2){
            answer = 1;
        }else if(k > (r1-r2)*(r1-r2)){
            answer = 2;
        }else if(k == pow((r1-r2),2)){
            answer = 1;
        }else{
            answer = 0;
        }
        cout << answer << "\n";
	}
	
	return 0;
}
