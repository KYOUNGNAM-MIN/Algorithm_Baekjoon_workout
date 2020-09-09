#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int n;
	cin >> n;
	vector<pair<int,int> > table(n);
	vector<pair<int,int> >::iterator iter;
	for(iter=table.begin(); iter!=table.end(); iter++){
		cin >> iter->first >> iter->second;
	}
	vector<pair<int,int> >::iterator iter2;
	int rank = 1;
	for(iter=table.begin(); iter!= table.end(); iter++){
		rank = 1;
		for(iter2=table.begin(); iter2!=table.end(); iter2++){
			if(iter->first<iter2->first && iter->second < iter2->second){
				rank++;
			}
		}
		cout << rank << ' ';	
	}
	
	return 0;
}
