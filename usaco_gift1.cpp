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
	
	// freopen("gift1.in", "r", stdin);
	// freopen("gift1.out", "w", stdout);

	int n;

	cin >> n;

	string s;

	map <string, int> mp;
	for(int i =0;i<n;i++){
		cin >> s;

		mp[s] = 0;
	}

	int gives,much;

	for(int j =0;j<n;j++){
		cin >> s >> gives >> much;

		mp[s] -= gives;

		int rest = gives%much;

		mp[s] += rest;

		gives = gives/much;

		for(int i =0;i<much;i++){
			cin >> s;

			mp[s] += gives;
		}
	}


	for(auto x : mp){
		cout << x.first << " " << x.second << endl;
	}


	
	


	return 0;
}


