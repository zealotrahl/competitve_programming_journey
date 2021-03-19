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
		string s;

		cin >> s;


		vector <pair<string, int>> ans(n);

		for(int k =1;k<=n;k++){
			string p = "";

			string pf = "";
			for(int i=k-1;i<n;i++)
				p.push_back(s[i]);

			for(int i=0;i<k-1;i++){
				pf.push_back(s[i]);
			}

			if((n-k+1)%2 != 0)
				reverse(pf.begin(), pf.end());

			p += pf;
			ans[k-1] = make_pair(p, k);
		}

		sort(ans.begin(), ans.end());

		cout << ans[0].first << endl;
		cout << ans[0].second << endl;
	}
	

	system("pause");
	return 0;
}

