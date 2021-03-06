//유니온 파인드 : 그래프 알고리즘 / 합집합 찾기
//여러개의 노드가 존재할 때 두개의 노드를 선택해서,
//현재 이 두노드가 서로 같은 그래프에 속하는 지 판별하는 알고리즘
#include <iostream>
using namespace std;

//부모 노드를 찾는 함수 
int getParent(int parent[], int x){
	if(parent[x] == x) return x;
	return parent[x] = getParent(parent,parent[x]);
}

//두 부모 노드를 합치는 함수
int unionParent(int parent[], int a, int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a < b) parent[b] = a;
	else parent[a] = b;
} 

// 같은 부모를 가지는 지 확인
int findParent(int parent[], int a, int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if(a == b) return 1;
	else return 0;
} 
int main(void){
	int parent[11];
	for(int i=1; i<=10; i++){
		parent[i] = i;
	}
	unionParent(parent, 1, 2);
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);
	
	unionParent(parent, 5, 6);
	unionParent(parent, 6, 7);
	unionParent(parent, 7, 8);
	cout << "1과 5는 연결되어 있나요? " << findParent(parent, 1, 5) << "\n";
	//밑 처럼 연결해도 1과5가 연결 됨 >> 서로 다른 그래프의 노드들을 연결하면 연결됨. 
	//unionParent(parent, 2, 5);
	//unionParent(parent, 2, 4);
	unionParent(parent, 1, 5);
	cout << "1과 5는 연결되어 있나요? " << findParent(parent, 1, 5) << "\n";
	
	return 0;
}

