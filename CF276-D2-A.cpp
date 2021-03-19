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

	int n,k;

	cin >> n >> k;


	vector <pair<long long,long long>> arr(n);

	for(int i =0;i<n;i++){
		cin >> arr[i].first >> arr[i].second;
	}

	long long max_suc = 0;

	if(arr[0].second <= k){
		max_suc = arr[0].first;
	}else
		max_suc = arr[0].first - (arr[0].second - k);

	for(int i =1;i<n;i++){
		long long cur_suc = 0;

		if(arr[i].second <= k){
			cur_suc = arr[i].first;
		}else
			cur_suc = arr[i].first - (arr[i].second - k);

		max_suc = max(cur_suc, max_suc);
	}

	cout << max_suc;
	

	system("pause");
	return 0;
}


