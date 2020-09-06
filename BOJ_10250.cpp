#include <cstdio>

using namespace std;

int main(void){
	int t, h, w, n;
	scanf("%d", &t);
	int ans[t];
	for(int i=0; i<t; i++){
		scanf("%d %d %d", &h, &w, &n);
		int hn = n%h;
		int wn = n/h;
		if(hn>0) wn++;
		else hn = h;
		ans[i] = hn*100 + wn;
	}
	for(int i=0; i<t; i++){
		printf("%d\n", ans[i]);	
	}
	
	return 0;
}
