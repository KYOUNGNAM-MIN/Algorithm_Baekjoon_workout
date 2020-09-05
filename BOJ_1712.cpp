#include <cstdio>

using namespace std;

int main(void){
	long long a,b,c, ans;
	scanf("%lld %lld %lld", &a, &b, &c);
	
	if(b>=c){
		printf("-1");
	}
	else{
		ans = a / (c-b) + 1;
		printf("%lld", ans);
	}
	return 0;
}
