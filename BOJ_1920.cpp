#include <cstdio>
#include <algorithm>
using namespace std;

int a[100001];

void bs(int n, int key){
	int start = 0;
	int end = n-1;
	int mid;
	while(start <= end){
		mid = (start + end) / 2;
		
		if(key == a[mid]){
			printf("1\n");
			return ;
		}
		else if(key > a[mid]){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
	}
	printf("0\n");
	return ;
}
 
int main(void){
	int n,m,tmp;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%d", &tmp);
		bs(n, tmp);
	}
	
	return 0;
}
