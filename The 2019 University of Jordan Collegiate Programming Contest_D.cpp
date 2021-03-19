#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;
bool grid[12][12];


void solve(r,c){


}

int main(){

	int L;

	cin >> L;

	for(int i =0;i<12;i++){
		for(int j=0;j<12;j++)
			grid[i][j] = true;
	}


	grid[9][1] = grid[8][1] = grid[8][2] = grid[8][10] = grid[8][9] = grid[9][10] = grid[6][5] = grid[6][6] = grid[5][5] = grid[5][6] = false;
	


	while(L){
		int r,c;

		cin >> r >> c;

		solve(r,c);

		L--;
	}

	return 0;
}
