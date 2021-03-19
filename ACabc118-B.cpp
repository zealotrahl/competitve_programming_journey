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

	vector <int> arr(m+1,0);


	int k;

	for(int i =0;i<n;i++){
		cin >> k;

		int a;

		for(int j = 0; j<k; j++){
			cin >> a;

			arr[a]++;
		}
	}


	int counter = 0;

	for(int i =0;i<=m;i++){
		if(arr[i] == n)
			counter++;
	}

	cout << counter;
	

	system("pause");
	return 0;
}


