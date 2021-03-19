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
	cin >>t;
	while(t--){
		vector <long long> arr(3);

		cin >> arr[0] >> arr[1] >> arr[2];

		sort(arr.begin(), arr.end());

		long long sum = arr[0] + arr[1];

		if(sum >= arr[2]-1){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}

	}
	
	system("pause");
	return 0;
}


