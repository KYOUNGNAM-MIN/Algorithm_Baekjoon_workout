#include <iostream>
#include <algorithm>
using namespace std;
int number = 9;
int heap[9] = {7, 6, 5, 8, 3, 5, 9, 1, 6};

int main(void){
	// 힙 정렬 :  힙 트리 구조를 이용하는 정렬 방법. >> 항상 O(NlogN)
	// 이진 트리: 모든 노드의 자식 노드가 2개 이하인 트리구조
	// 트리의 최상단: 루트 / 최하단: 리프
	// 완전 이진 트리: 데이터가 왼쪽 자식 노드, 오른쪽 자식 노드로 차근차근 들어가는 구조
	// 힙 : 최솟값이나 최댓값을 빠르게 찾아내기 위해 완전이진트리를 기반으로 하는 트리
	// 최대 힙: 부모 노드가 자식 노드보다 큰 힙. 
	// 힙 생성 알고리즘 : 특정한 노드의 두 자식 중에서 자기보다 더 큰 자식과
	// 					  자신의 위치를 바꾸는 알고리즘 >> O(logN)
	// 힙정렬은 병합정렬과 다르게 별도로 추가적인 배열이 필요하지 않다는 점에서
	// 메모리 측면에서 몹시 효율적임. 
	
	
	//먼저 전체 트리 구조를 최대 힙 구조로 바꿉니다. 
	for(int i=1; i<number ; i++){
		int c = i;
		do{
			int root = (c-1) /2;
			if(heap[root] < heap[c]){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while(c != 0);
	}
	//크기를 줄여가며 반복적으로 힙을 구성
	for(int i=number-1; i>=0; i--){
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0;
		int c= 1;
		do{
			c = 2*root + 1;
			//자식중에 더 큰 값을 찾기
			if(heap[c] < heap[c+1] && c < i-1){
				c++;
			} 
			//루트보다 자식이 더 크다면 교환
			if(heap[root] < heap[c] && c < i){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			} 
			root = c;
		} while(c < i);
	} 
	
	for(int i=0; i<number; i++){
		cout << heap[i] << ' ';
	}
	
	
	return 0;
}
