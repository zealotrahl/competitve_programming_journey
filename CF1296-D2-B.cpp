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
		long long in;
	
		cin >> in;

		long long ans = 0;

		while(true){
			if (in < 10) {
				ans += in;
				break;
			} else {
				long long carry = in / 10;
				in %= 10;
				in += carry;
				ans += carry * 10;
			}

		}

		cout << ans << endl;
	}
	

	system("pause");
	return 0;
}


