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

	int t;
	cin >> t;


	while(t--){
		int n;

		cin >> n;

		vector <int> dp(n, 1);
		vector <int> arr(n);

		for(int i =0;i<n;i++)
			cin >> arr[i];


		for(int i =n-2;i>=0;i--){
			if((arr[i] < 0 && arr[i+1] > 0) || (arr[i] > 0 && arr[i+1] < 0)){
				dp[i] = dp[i+1]+1;
			}
		}

		for(int i =0;i<n;i++)
			cout << dp[i] << " ";

		cout << endl;

	}
	

	system("pause");
	return 0;
}


