#include <iostream>
using namespace std;

// 정점 간 연결관계가 없는 것을 무한대로 표현하는데 이를 INF로 정의함. 
#define INF 987654321
// 정점의 개수 정의. 
#define SIZE 4

// 최단 경로의 거리를 표현하는 배열 D와, 최단 경로 사이에 놓인 정점을 표현하는 배열 P 선언. 
int D[SIZE][SIZE];
int P[SIZE][SIZE];

// 입력 데이터를 나타내는 배열 W 선언 후 초기화. 
int W[SIZE][SIZE] = {
	// 자작 입력 데이터
	{0,3,INF,8},
	{6,0,7,INF},
	{2,INF,0,5},
	{INF,INF,2,0}
	
	/*
	// 교재 입력 데이터
	{0,1,INF,1,5},
	{9,0,3,2,INF},
	{INF,INF,0,4,INF},
	{INF,INF,2,0,3},
	{3,INF,INF,INF,0}*/
};

// 매개변수: 정점의 개수 n, 입력 데이터 W, 참조 배열 D, 참조 배열 P. 
void floyd2(int n, const int W[][SIZE], int(*D)[SIZE], int(*P)[SIZE]){
	int i, j, k;
	
	// P배열을 -1로 초기화, 배열의 인덱스(정점)가 0부터 시작하기 때문.
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			P[i][j] = -1;
		}
	}
	// D배열의 초기값을 W의 값으로 초기화. 
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			D[i][j] = W[i][j];
		}
	}
	
	/*
	최단경로의 길이와 최단경로 사이의 정점 파악.
	i와 j의 최단경로의 길이 D[i][j]보다 정점 k를 거쳐 가는 경우가 더 작은 경우,
	D[i][j]에 k를 거쳐 가는 경우의 값을 대입 & P[i][j]에 k 대입.
	*/
	for(k=0; k<n; k++){
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				if(D[i][k] + D[k][j] < D[i][j]){
					P[i][j] = k;
					D[i][j] = D[i][k] + D[k][j];
				}
			}
		}
	}
	
	//D 출력  
	printf ("D: 최단경로의 길이\n"); 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (D[i][j] == INF)
                printf("%7s", "INF");
            else
                printf ("%7d", D[i][j]);
        }
        printf("\n");
    }
    
    //P 출력 
    printf ("P: 최단경로 간 놓인 정점\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf ("%7d", P[i][j]);
        }
        printf("\n");
    }
}

// 매개변수: 정점 q와 정점 r
void path(int q, int r){
	// P의 초기값을 -1로 초기화 했기 때문에 -1로 비교
	if(P[q][r] != -1){
		//재귀를 통해 반복되는 연결 비교 실행. 
		path(q, P[q][r]);
		cout << " v" << P[q][r];
		path(P[q][r], r);
	}
}

int main(void){
	floyd2(SIZE, W, D, P);
	
	// 교재는 노드의 이름으로 배열을 나타내어 path(5,3)이지만,
	// 이 프로그램에서는 정점의 이름 5와 3은 배열로는 4와 2로 표현되기 때문에,
	// path(5,3) => path(4,2) 로 표현한다. 
	path(3,1);
	
	return 0;
}
