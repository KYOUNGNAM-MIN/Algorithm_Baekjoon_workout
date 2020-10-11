#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int w[101], v[101];
int backpack[100001];

void dp(){
	for(int i=1; i<=n; i++){
		for(int j=k; j>=1; j--){
			if(w[i] <= j){
				backpack[j] = max(backpack[j], backpack[j-w[i]]+v[i]);
			}
		}
	}
	cout << backpack[k];
}

int main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
	cin >> n >> k;
	
	for(int i=1; i<=n; i++){
		cin >> w[i] >> v[i];
	}
	
	dp();
	
	return 0;
}
