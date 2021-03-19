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

	int sum_r = 0;


	for(int i =0;i<n-1;i++){
		sum_r += arr[i];
	}

	int sum = arr[n-1];

	int count = 1;

	int i = n-2;
	while(sum <= sum_r){
		sum += arr[i];
		sum_r -= arr[i];
		i--;
		count++;
	}


	cout << count;


	

	system("pause");
	return 0;
}


