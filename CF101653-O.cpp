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

	float a,b;
	int n;


	while(t--){
		cin >> n;

		vector <pair<float, float>> arr(n);

		vector <int> dp(n, 1);


		for(int i =0;i<n;i++){
			cin >> a >> b;

			arr[i] = make_pair(a,b);

		}

		sort(arr.begin(), arr.end());

		for(int i = 1;i<n;i++){
			bool found = false;

			for(int j = i-1;j>=0;j--){
				if(arr[j].first < arr[i].first && arr[j].second > arr[i].second){
					found = true;

					dp[i] = max(dp[i], dp[j]);
				}
			}

			if(found)
				dp[i]++;
		}


		cout << *max_element(dp.begin(), dp.end()) << "\n";



	}
	

	system("pause");
	return 0;
}

