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

	vector <int> coins(n);


	for(int i =0;i<n;i++)
		cin >> coins[i];



	int amount;

	cin >> amount;


	vector <int> dp(amount+1, -1);
	
	for(int i =0;i<coins.size();i++)
		dp[coins[i]] = 1;
	
	
	dp[0] = 0;
	

	
	for(int i = 1;i<=amount;i++){
		
		int min_val = INT_MAX;
		
		for(int j =0;j<coins.size();j++){
			
			if(i-coins[j] < 0 || dp[i-coins[j]] == -1)
				continue;
			
			min_val = min(min_val, dp[i-coins[j]]);
		}
		
		if(min_val == INT_MAX)
			min_val = -1;
		else
			min_val++;
		
		dp[i] = min_val;
	}


	cout << dp[amount] << endl;
	cout << dp[1] << endl;

	system("pause");
	return 0;
}


