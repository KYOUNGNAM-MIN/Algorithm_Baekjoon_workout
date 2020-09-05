#include <cstdio>
#include <iostream>

using namespace std;

int main(void){
	int N;
	scanf("%d", &N);
	int score[N];
	for(int i=0; i<N; i++){
		scanf("%d", &score[i]);
	}
	int M = score[0];
	for(int i=1; i<N; i++){
		if(score[i] > M){
			M = score[i];
		}
	}
	double sum=0;
	double newScore[N];
	for(int i=0; i<N; i++){
		newScore[i] = (double)score[i]/M*100;
		sum += newScore[i];
	}
	cout << sum/N;
	
	return 0;
}
