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


	char pirog[n][n];

	for(int i =0;i<n;i++)
		for(int j =0;j<n;j++)
			cin >> pirog[i][j];


	int ans = 0;
	for(int i =0;i<n;i++){
		for(int j = 0;j<n;j++){

			if(pirog[i][j] == 'C'){
				
				if(j-1 >= 0 && pirog[i][j-1] == 'C'){
					ans++;
				}


				if(j+1 < n && pirog[i][j+1] == 'C')
					ans++;


				if(i-1 >= 0 && pirog[i-1][j] == 'C')
					ans++;

				if(i+1 <n && pirog[i+1][j] == 'C')
					ans++;
			}

		}
	}

	cout << ans;
	

	system("pause");
	return 0;
}


