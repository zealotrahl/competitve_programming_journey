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

	int n,m;

	cin >> n >> m;

	vector <long long> arr(n);

	for(int i =0;i<n;i++)
		cin >> arr[i];


	sort(arr.begin(),arr.end());



	vector <long long> prefix(n);


	prefix[0] = arr[0];


	for(int i =1;i<n;i++){
		prefix[i] = prefix[i-1] + arr[i];
	}




	vector <long long> ans(n);

	ans[0] = arr[0];

	for(int i =1;i<m;i++){
		ans[i] = ans[i-1] + arr[i];
	}


	for(int i =m;i<n;i++){
		ans[i] = prefix[i] + ans[i-m]; 
	}

	for(int i =0;i<n;i++){
		cout << ans[i] << " ";
	}

	

	system("pause");
	return 0;
}


