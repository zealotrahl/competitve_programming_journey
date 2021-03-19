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

	vector <float> prices(n);


	for(int i =0;i<n;i++)
		cin >> prices[i];


	float dp[n];


	dp[0] = 0.0;



	float cur = prices[0];
	for(int i =1;i<n;i++){

		dp[i] = max(dp[i-1], prices[i] - cur);


		cur = min(cur, prices[i]);



	}

	cout << dp[n-1] << endl;

	system("pause");
	return 0;
}


