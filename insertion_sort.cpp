#include <iostream>
using namespace std;

int main(void){
	//삽입정렬 : 각 숫자를 적절한 위치에 삽입하는 방법. >> O(N^2)
	//선택 & 버블은 무조건 위치를 바꿨지만, 삽입정렬은 필요할 때만 위치를 바꾸게됨.
	//데이터가 이미 거의 정렬된 상태에 한해서는 어떤 알고리즘보다 빠름. 
	int temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(int i=0; i<9; i++){
		int j = i;
		while(array[j] > array[j+1]){
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			j--;
		}
	}
	for(int i=0; i<10; i++){
		cout << array[i] << ' ';
	}
	
	return 0;
}
