#include <iostream>
using namespace std;

int main(void){ 
	//선택정렬 : 가장 작은 숫자를 찾아서 맨앞으로 보내기 >> O(N^2)
	int min, index, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(int i=0; i<10; i++){
		min = 9999; // 모든 원소의 숫자보다 큰 숫자로 넣기 
		for(int j=i; j<10; j++){
			if(min>array[j]){
				min = array[j];
				index = j;
			}
		}
		//swap하기
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(int i=0; i<10; i++)
		cout << array[i]<< ' ';
	
	return 0;
}
