#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			int c;
			cin >> c;
			if(c == 1){
				cout << abs(i-2)+abs(j-2);
				return 0;
			}
		}
	}


	return 0;
}
