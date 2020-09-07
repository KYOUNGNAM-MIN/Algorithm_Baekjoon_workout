#include <iostream>

using namespace std;

int m, n;
bool eratos[1000001]={false,};
int eratos_num[1000001];
bool is_sosu(int num){
	bool flag = true;
	if(num < 2) return false;
	for(int i=2; i*i<=num; i++){
		if(num%i == 0)
			return false;
	}
	return flag;
}

void sosu_eratos(){
	for(int i=m; i<=n; i++){
		if(is_sosu(i)){
			eratos[i] = true;
		}
	}
}

int main(void){
	cin >> m >> n;
	sosu_eratos();
	for(int i=1; i<=1000000; i++){
		eratos_num[i] = i;
	}
	for(int i=m; i<=n; i++){
		if(eratos[i] == true){
			cout << eratos_num[i] << "\n";
		}
	}
	return 0;
}
