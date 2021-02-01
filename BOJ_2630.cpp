#include <iostream>
#include <vector>
using namespace std;

int n;
int paper[n][n];
int length = n;

int PaperCnt(int xStart, yStart, xEnd, yEnd){
	for(int i=0; i<length; i++){
		for(int j=0; j<length; j++){
			if(paper[i][j] == 0){
				length = length/2;
				PaperCnt(length);
			}
			
		}
	}
}

int main(void){
	cin >> n;
	PaperCnt(n);
	
	
	return 0;
}
