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

		if(n == 2 || n == 3){
			cout << -1 << endl;
			continue;
		}

		for(int i =n;i>=6;i--){
			if(!(i&1))
				cout << i << " ";
		}

		cout << 2 << " " << 4 << " ";

		for(int i =1;i<=n;i++){
			if(i&1){
				cout << i << " ";
			}
		}
		cout << endl;
	}


	return 0;
}


