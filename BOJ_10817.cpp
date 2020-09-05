#include <cstdio>

int main(void){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int second = a<b ? (a>c ? a:(b<c ? b:c)):(b>c ? b:(c<a ? c:a));
	printf("%d", second);
	
	return 0;
}
