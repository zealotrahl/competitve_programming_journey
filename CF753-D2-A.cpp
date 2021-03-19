#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


vector <vector<int>> dp(1e3+2);

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	cin >> n;

	for(int i =0;i<=1000;i++){
		int sum = 0;
		int j = 1;
		while(sum <= i){
			sum += j;
			if(sum > i)
				break;

			dp[i].push_back(j);
			j++;
		}
		int p_sum = 0;
		for(int j=0;j<dp[i].size();j++){
			p_sum += dp[i][j];
		}
		if(p_sum < i && i != 2){
			dp[i][dp[i].size() - 1] = i - (p_sum - dp[i][dp[i].size() - 1]);
		}
	}

	if(n == 2){
		cout << 1 << endl;
		cout << 2;
	}else{
		cout << dp[n].size() << endl;
		for(int i =0;i<dp[n].size();i++)
			cout << dp[n][i] << " ";
	}


	system("pause");
	return 0;
}


