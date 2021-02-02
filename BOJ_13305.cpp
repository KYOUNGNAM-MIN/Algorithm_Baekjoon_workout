#include <iostream>
#include <algorithm>
using namespace std;

long long dist[100001];
long long price[100001];
long long N, sum;
long long maxPrice = 1000000000;

int main(void){
	cin >> N;

	for (int i = 1; i <= N - 1; i++)
		cin >> dist[i];
	
	for (int i = 1; i <= N; i++)
		cin >> price[i];
	
	for (int i = 1; i <= N - 1; i++){
		if (price[i] < maxPrice)
			maxPrice = price[i];
		sum += maxPrice * dist[i];
	}

	cout << sum;
	
	return 0;
}
