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

	int q,n,r;

	cin >> q;


	while(q--){
		cin >> n >> r;

		int ans = 0;


		vector <int> arr(n, 0);


		int raznost = 0;

		set <int> checker;

		int a;

		for(int i =0;i<n;i++){
			cin >> a;

			if(checker.count(a))
				continue;
			else
				checker.insert(a);

			arr[i] = a;
		}


		sort(arr.rbegin(), arr.rend());

		for(int i =0;i<n;i++){
			if(arr[i] - raznost > 0){
				raznost += r;
				ans++;
			}
		}

		cout << ans << "\n";
	}
	

	system("pause");
	return 0;
}


