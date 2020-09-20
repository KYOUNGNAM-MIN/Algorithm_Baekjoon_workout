#include <iostream>
using namespace std;

int main(void){
	//버블정렬 : 옆에 있는 값과 비교하여 더 작은 값을 반복적으로 앞으로 보내기
	// 한번 반복이 끝났을 때 가장 큰 값이 맨 뒤로 보내짐  >> O(N^2)
	// 선택정렬과 시간복잡도는 같지만, 실제 작동시켰을 때 선택정렬보다 느리게작동함. 
	// 선택정렬은 스왑 1번만 하지만 버블정렬은 계속 스왑해주기 때문임. 
	int temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(int i=0; i<10; i++){
		for(int j=0; j<9-i; j++){
			if(array[j] > array[j+1]){
				//스왑하기 
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	for(int i=0;i<10;i++){
		cout << array[i] << ' ';
	}
	
	return 0;
}
