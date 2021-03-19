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
		long long n,p, k;

		cin >> n >> p >> k;

		vector <long long> prices(n);

		long long sum = 0;

		for(int i =0;i<n;i++){
			cin >> prices[i];
			sum += prices[i];
		}


		if(p >= sum){
			cout << n << endl;
			continue;
		}

		sort(prices.begin(), prices.end());


		for(int i =0;i<k;i++){
			int cur_count = 0;
			int sum = 0;

			for(int j =0;j<n/k;j+=k){
				if(sum >= p)
					break;

				sum += prices[j];

				cur_count += k;
			}

			count = max(count, cur_count);
		}




		cout << count << endl;
	}
	

	system("pause");
	return 0;
}


