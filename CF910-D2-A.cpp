#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


int n,d;
string s;
int dp[101];


int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);


	cin >> n >> d;
	cin >> s;

	for(int i =0;i<101;i++)
		dp[i] = INT_MAX;

	dp[0] = 0;

	for(int i =1;i<=n;i++){
		if(s[i] == '1'){
			int cur_min = INT_MAX;
			for(int j = max(0,i-d); j< i;j++){
				cur_min = min(cur_min, dp[j]);
			}

			if(cur_min == INT_MAX){
				dp[i] = INT_MAX;
			}else
				dp[i] = cur_min + 1;
		}
	}

	if(dp[n-1] == INT_MAX)
		cout << -1;
	else
		cout << dp[n-1];

	system("pause");
	return 0;
}


