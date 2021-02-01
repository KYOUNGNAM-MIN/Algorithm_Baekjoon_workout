#include <iostream>

using namespace std;

int main(void){
	int X;
	cin >> X;
	if(X==1)
		cout << "1/1";
	else{
		int i=1;
		int diff = 0;
		for(int sum = 0; sum+i<X; i++){
			sum += i;
			diff = X - sum;
		}
		if(i%2 == 1)
			cout << i-diff+1 << "/" << diff;
		else
			cout << diff << "/" << i-diff+1;
	}
	
	return 0;
}
