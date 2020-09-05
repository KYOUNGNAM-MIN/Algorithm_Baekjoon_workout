#include <iostream>
using namespace std;

int main(void){
	int h, m;
	cin >> h >> m;
	int sumMin = h*60 + m;
	sumMin -= 45;
	if(h==0 && m<45){
		h = 23;
		m = m+15;
	}
	else{
		h = sumMin/60;
		m = sumMin-h*60;
	}
	cout << h << " " << m;
	
	return 0;
}
