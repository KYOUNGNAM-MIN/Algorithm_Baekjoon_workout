#include <cstdio>
#include <stack>
#include <vector>
using namespace std;

int main(void){
	int n, i, j = 0;
    stack <int> s;
    vector <char> v;

    scanf("%d", &n);
    int arr[n];
    
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (i = 1; i <= n; i++) {
        s.push(i);
        v.push_back('+');

        while(!s.empty() && s.top() == arr[j]) {
            s.pop();
            v.push_back('-');
            j++;
        }
    }

    if (!s.empty()) printf("NO\n");
    else {
        for (i = 0; i < v.size(); i++) printf("%c\n", v[i]);
    }
    
	return 0;
}
