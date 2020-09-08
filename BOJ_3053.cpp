#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

int main(void){
	double r;
	cin >> r;
	double s1 = M_PI*r*r;
	double s2 = r*r*2;
	
	cout << fixed;
	cout.precision(6);
	cout << s1 << "\n" << s2;
	
	return 0;
}
