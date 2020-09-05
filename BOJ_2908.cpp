#include <iostream>
#include <string>

using namespace std;

int main(void){
	int a, b;
	cin >> a >> b;
	int newA, newB;
	
	int tmp1 = a/100;
	int tmp2 = a%100/10;
	int tmp3 = a%100%10;
	newA = tmp3*100 + tmp2*10 + tmp1;
	
	tmp1 = b/100;
	tmp2 = b%100/10;
	tmp3 = b%100%10;
	newB = tmp3*100 + tmp2*10 + tmp1;
	
	int ans = newA > newB ? newA:newB;
	cout << ans;
	
	return 0;
}
