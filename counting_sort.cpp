#include <iostream>
using namespace std; 

int main(void){
	// 계수 정렬 : 데이터의 크기를 기준으로 갯수만 세면 됨. 위치를 바꿀 필요 없음 
	//  범위 조건이 있는 경우에 한해서 O(N)
	
	int temp;
	int count[5]; // 범위가 5 이하 
	int array[30] = {
		1,3,2,4,3,2,5,3,1,2,
		3,4,4,3,5,1,2,3,5,2,
		3,1,4,3,5,1,2,1,1,1	
	};
	for(int i=0; i<5; i++){
		count[i] = 0;
	}
	for(int i=0; i<30; i++){
		count[array[i]-1]++;
	}
	for(int i=0; i<5; i++){
		if(count[i] != 0){
			for(int j=0; j<count[i]; j++){
				cout << i+1;
			}
		}
	}
	
	return 0;
}
