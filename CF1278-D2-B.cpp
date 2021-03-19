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
	vector <long long> dp(10000000);

	dp[0] = 0;

	for(int i =1;i<10000000;i++){
		dp[i] = dp[i-1] + i;
	}

	while(t--){
		long long a,b;

		cin >> a >> b;

		long long ans = 0;







		if(a == b){
			cout << ans << endl;
			continue;
		}else{
			long long t = a;
			if(a > b){
				a = b;
				b = t;
			}

			
			long long diff = abs(a - b);

			auto lower = std::lower_bound(dp.begin(), dp.end(), diff);


			int index = abs(dp.begin() - lower);


			ans = index;

			if(a < b)
				a += dp[index];
			else
				b += dp[index];


			if(a != b){
				ans++;
			}

			cout << ans << endl;
		}
	}
	

	system("pause");
	return 0;
}


