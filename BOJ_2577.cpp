#include <iostream>
using namespace std;

int main(void){
	int a1, b, c;
	cin >> a1 >> b >> c;
	int mul = a1*b*c;
	int answer[10];
	int a[10] = {0, };
	int length = to_string(mul).length();
	
	for(int i=0; i<length; i++){
		answer[i] = to_string(mul)[i] - 48;
		
		if(answer[i] == 0) a[0]++;
		else if(answer[i] == 1) a[1]++;
		else if(answer[i] == 2) a[2]++;
		else if(answer[i] == 3) a[3]++;
		else if(answer[i] == 4) a[4]++;
		else if(answer[i] == 5) a[5]++;
		else if(answer[i] == 6) a[6]++;
		else if(answer[i] == 7) a[7]++;
		else if(answer[i] == 8) a[8]++;
		else if(answer[i] == 9) a[9]++;
	}
	for(int i=0; i<10; i++){
		cout << a[i] << "\n";
	}
	
	return 0;
}
