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
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;

	cin >> n;

	vector <int> arr(n);

	for(int i =0;i<n;i++)
		cin >> arr[i];




	int dp[n][3];
	

	dp[0][0] = 1;

	if(arr[0] == 0){
		dp[0][1] = 1;
		dp[0][2] = 1;
	}else if(arr[0] == 1){
		dp[0][1] = 0;
		dp[0][2] = 1;
	}else if(arr[0] == 2){
		dp[0][1] = 1;
		dp[0][2] = 0;
	}else if(arr[0] == 3){
		dp[0][1] = 0;
		dp[0][2] = 0; 
	}



	for(int i =1;i<n;i++){
		int cur = min(dp[i-1][2], min(dp[i-1][0], dp[i-1][1])) +1;

		if(arr[i] == 0){
			dp[i][0] = dp[i][1] = dp[i][2] = cur;
		}else if(arr[i] == 1){
			dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
			dp[i][2] = cur;
			dp[i][0] = cur;
		}else if(arr[i] == 2){
			dp[i][2] = min(dp[i-1][0], dp[i-1][1]);

			dp[i][1] = cur;
			dp[i][0] = cur;
		}else if(arr[i] == 3){
			dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
			dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
			dp[i][0] = cur;
		}
	}


	cout << min(dp[n-1][0], min(dp[n-1][1], dp[n-1][2]));

	
	system("pause");
	return 0;
}


