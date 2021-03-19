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

		vector <int> arr(n);
		for(int i =0;i<n;i++)
			cin >> arr[i];

		int df = 0;
		int curr_max = arr[0];
		for(int i =1;i<n-1;i++){
			if(arr[i] < curr_max){
				df = max(df, curr_max - arr[i]);
			}
			curr_max = max(arr[i], curr_max);
		}


		cout << ceil((int)log2(1.0*df)) << endl;
	}
	

	system("pause");
	return 0;
}
