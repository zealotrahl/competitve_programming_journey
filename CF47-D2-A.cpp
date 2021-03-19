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

	int dp[501];

	dp[0] = 0;
	dp[1] = 1;

	for(int i =2;i<501;i++){
		dp[i] = dp[i-1] + i;
	}

	int n;

	cin >> n;

	bool flag = false;
	for(int i =0;i<501;i++){
		if(dp[i] == n){
			flag = true;
			break;
		}
	}

	if(flag){
		cout << "YES";
	}else{
		cout << "NO";
	}


	

	system("pause");
	return 0;
}


