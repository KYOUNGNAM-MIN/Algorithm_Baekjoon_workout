#include <iostream>
#include <cmath>
using namespace std;

bool is_sosu(int num){
  int root = sqrt(num);
  if(root == 1)
    return true;
  if(num%2){
    for(int i=2; i<=root; i++){
      if(!(num%i))
        return false;
    if(i == root)
      return true;
    }
  }
  return false;
}
int main(){
  int T;
  cin>>T;
  for(int i=0; i<T; i++){
  	int n, a, b, half;
    cin>>n;
    half = n/2;
    for(int j=half; j>=2; j--){
      a = j;
      b = n-a;
      if(is_sosu(a) && is_sosu(b)){
        cout << a << " " << b << '\n';
        break;
      }
    }	
  }
}
