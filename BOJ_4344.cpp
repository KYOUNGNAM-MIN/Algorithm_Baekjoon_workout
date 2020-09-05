#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
	int C;
	cin >> C;
	double per[C];
	int N;
	for(int i=0; i<C; i++){
		cin >> N;
		int score[N];
		int sum = 0;
		for(int j=0; j<N; j++){
			cin >> score[j];
			sum += score[j];
		}
		double average = sum/N;
		int up = 0;
		for(int j=0; j<N; j++){
			if(score[j] > average) up++;
		}
		per[i] = (double)up/N*100;
	}
	for(int i=0; i<C; i++){
		cout << fixed;
		cout.precision(3);
		cout << per[i] << "%\n";
	}
	
	return 0;
}
