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

	int n;

	cin >> n;

	vector <int> arr(n);

	for(int i =0;i<n;i++){

		cin >> arr[i];
	}
	
	sort(arr.begin(), arr.end());

	int ans = -1;

	for(int i =1;i<=3000;i++){

		if(arr[i-1] != i){
			ans = i;
			break;
		}
	}

	if(ans == -1){
		ans = 3001;
	}

	cout << ans;



	system("pause");
	return 0;
}

