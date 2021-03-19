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
		map <int, int> mp;
		int a;

		for(int i =0;i<n;i++){
			cin >> a;
			if(mp.count(a))
				mp[a]++;
			else
				mp[a] = 1;
		}

		int mx = INT_MIN;
		int un_num = 0;
		for(auto p : mp){
			mx = max(mx, p.second);
			un_num++;
		}

		int ans = 0;
		if(un_num == mx){
			ans = mx -1;
		}

		else if(un_num > mx)
			ans = mx;
		else
			ans = un_num;

		cout << ans << endl;

	}
	

	system("pause");
	return 0;
}
