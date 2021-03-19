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

	int n,x;

	cin >> n >> x;

	vector <int> arr(n);

	for(int i =0;i<n;i++){
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	int cur_sum = 0;
	int counter = 0;

	for(int i =0;i<n;i++){
		cur_sum += arr[i];
	}

	counter = ceil(abs(cur_sum)*1.0/x);

	cout << counter;



	system("pause");
	return 0;
}


