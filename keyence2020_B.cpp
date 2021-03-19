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

	vector <pair <long long,long long>> arr(n);

	for(int i =0;i<n;i++){
		cin >> arr[i].first >> arr[i].second;
	}

	
	sort(arr.begin(), arr.end());

	int count = 0;
	for(int i =0;i<n-1;i++){

		if(arr[i].first + arr[i].second > arr[i+1].first){
			count++;
		}
	}

	cout << n- count;

	system("pause");
	return 0;
}



