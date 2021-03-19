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

	int n,m;

	cin >> n >> m;


	char grid[n][m];

	bool flag = true;
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			if(!(i&1)){
				grid[i][j] = '#';
			}else if(j == m-1 && flag){
				grid[i][j] = '#';
			}else if(j == 0 && !flag){
				grid[i][j] = '#';
			}else{
				grid[i][j] = '.';
			}
		}
		if(i&1)
			flag = !flag;
		
	}


	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			cout << grid[i][j];
		}
		cout << "\n";
	}



	system("pause");
	return 0;
}

