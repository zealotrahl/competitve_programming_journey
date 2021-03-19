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
		vector<int> arr(n);
		vector<int> mp(8001, 0);
		for(int i =0;i<n;i++){
			cin >> arr[i];
			mp[arr[i]]++;
		}
		int counter = 0;

		for(int i =0;i<n;i++){
			int sum = 0;
			for(int j =i;j<n;j++){
				sum += arr[j];
				if(i == j){
					continue;
				}
				if(sum <= n){
					counter += mp[sum];
					mp[sum] = 0;
				}
			}
		}

		cout << counter << endl;
	}


	return 0;
}


