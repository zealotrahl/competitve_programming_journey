#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers




int main(){

	int n;

	cin >> n;


	char grid[n][n];

	string s;

	for(int i =0;i<n;i++){
		cin >> s;
		for(int j =0;j<n;j++){
			grid[i][j] = s[j];
		}
	}

	char x = grid[0][0];
	char ne_x = grid[0][1];

	if( x== ne_x){
		cout << "NO";
		return 0;
	}

	int j = 1;

	bool flag = true;

	for(int i =0;i<n;i++){
		if(grid[i][i] != x || grid[i][n-i-1] != x){
			flag = false;
			break;
		}
	}

	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(i == j || i == n-j-1)
				continue;

			if(grid[i][j] != ne_x){
				flag = false;
				break;
			}
		}

		if(flag == false)
			break;
	}


	if(flag)
		cout << "YES";
	else
		cout << "NO";
	

	system("pause");
	return 0;
}

