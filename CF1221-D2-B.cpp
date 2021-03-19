#include <bits/stdc++.h>


using namespace std;


typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


int grid[100][100];


int n;


int main(){



	cin >> n;

	// for(int i=0;i<n;i++){
	// 	for(int j =0;j<n;j++)
	// 		grid[i][j] = 0;
	// }




	// for(int i=0;i<n;i++){
	// 	for(int j =0;j<n;j++){

	// 		if(grid[i][j])
	// 			continue;

	// 		if(i -1 > -1 && j-2 > -1 && grid[i-1][j-2] == 0)
	// 			grid[i-1][j-2] = 1;

	// 		if(i-2 > -1 && j-1 > -1 && grid[i-2][j-1] == 0)
	// 			grid[i-2][j-1] = 1;

	// 		if(i-2 > -1 && j+1 < n && grid[i-2][j+1] == 0)
	// 			grid[i-2][j+1] = 1;

	// 		if(i+1 < n && j-2 > -1 && grid[i+1][j-2] == 0)
	// 			grid[i+1][j-2] = 1;

	// 		if(i+2 < n && j-1 > -1 && grid[i+2][j-1] == 0)
	// 			grid[i+2][j-1] = 1;

	// 		if(i+2 < n && j+1 < n && grid[i+2][j+1] == 0)
	// 			grid[i+2][j+1] = 1;

	// 		if(i+1 < n && j+2 < n && grid[i+1][j+2] == 0)
	// 			grid[i+1][j+2] = 1;

	// 	}
	// }


	int c = 0;
	for(int i=0;i<n;i++){
		for(int j =0;j<n;j++){
			if(c == 0)
				cout << 'W';
			else
				cout << 'B';

			c = !c;
		}
		cout << "\n";
	}


	

	system("pause");
	return 0;
}


