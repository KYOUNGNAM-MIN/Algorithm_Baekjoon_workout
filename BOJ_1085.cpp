#include <iostream>

using namespace std;

int main(void){
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int d1 = (w-x)<=(h-y)?(w-x):(h-y);
	int d2 = x<=y?x:y;
	cout << (d1<=d2?d1:d2);
	
	return 0;
}
