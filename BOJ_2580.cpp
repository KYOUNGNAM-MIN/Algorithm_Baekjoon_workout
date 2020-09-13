#include <iostream>
using namespace std;

bool finish;
int sudoku[9][9];

bool check_cannot(int num, int x, int y){
	int crx = x/3*3;
	int cry = y/3*3;
	for(int i=0; i<9; i++){
		if(sudoku[x][i] == num || sudoku[i][y] == num) return false;
	}
	for(int i=crx; i<crx+3; i++){
		for(int j=cry; j<cry+3; j++){
			if(sudoku[i][j] == num) return false;
		}
	}
	return true;
}

void dfs(){
	if(finish) return;
	bool flag = false;
	int x = 0; int y = 0;
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			if(sudoku[i][j] == 0){
				flag = true;
				x = i;
				y = j;
			}
			if(flag) break;
		}
		if(flag) break;
	}
	if(!flag){
		finish = true;
		for(int i=0; i<9; i++){
			for(int j=0; j<9; j++){
				cout << sudoku[i][j] << " ";
			}
			cout << "\n";
		}
		return;
	}
	for(int i=1; i<10; i++){
		if(check_cannot(i,x,y)){
			sudoku[x][y] = i;
			dfs();
			sudoku[x][y] = 0;
		}
	}
}

int main(void){
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			cin >> sudoku[i][j];
		}
	}
	
	dfs();
	
	return 0;
}
