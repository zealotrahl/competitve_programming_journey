#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef vector<int> vi;

#define PB push_back
#define MP make_pair
// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


struct P {
	int x, y;
	bool operator<(const P &p) {
		if (x != p.x) return x < p.x;
		else return y < p.y;
	}
};

void subsetGenerate(int n){
	for (int b = 0; b < (1<<n); b++) {
		vector<int> subset;
		for (int i = 0; i < n; i++) {
			if (b&(1<<i)) subset.push_back(i);
		}
	}
}

void permutationGenerate(int n){
	vector<int> permutation;
	for (int i = 0; i < n; i++) {
		permutation.push_back(i);
	}
	do {
	// process permutation
	} while (next_permutation(permutation.begin(),permutation.end()));
}

bool customSort(int a, int b) {
	return a < b;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int mp[n][n];
		for(int i =0;i<n;i++){
			string s;
			cin >> s;

			for(int j =0;j<n;j++){
				mp[i][j] = s[j] - '0';
			}
		}

		int ans = 0;

		vector <pair<int,int>> pl;
		if(mp[0][1] == 1 && mp[1][0] == 1){
			if(mp[n-2][n-1] == 1){
				ans++;
				pl.push_back({n-1, n});
			}
			if(mp[n-1][n-2] == 1){
				ans++;
				pl.push_back({n, n-1});
			}
		} else if(mp[0][1] == 0 && mp[1][0] == 0) {
			// 0 0
			if(mp[n-2][n-1] == 0){
				ans++;
				pl.push_back({n-1, n});
			}
			if(mp[n-1][n-2] == 0){
				ans++;
				pl.push_back({n, n-1});
			}
			// cout << mp[n-1][n-2] << endl;
		}else {
			// 0 1 or 1 0
			if(mp[n-1][n-2] == mp[n-2][n-1]){
				if(mp[n-1][n-2] == mp[0][1] || mp[n-2][n-1] == mp[0][1]){
					ans++;
					pl.push_back({1,2});
				} else if(mp[n-1][n-2] == mp[1][0] || mp[n-2][n-1] == mp[1][0]) {
					ans++;
					pl.push_back({2,1});
				}
			} else {
				ans = 2;
				if(mp[n-1][n-2] == mp[0][1]){
					pl.push_back({2,1});
					pl.push_back({n, n-1});
				} else if(mp[n-1][n-2] == mp[1][0]){
					pl.push_back({1,2});
					pl.push_back({n,n-1});
				} else if(mp[n-2][n-1] == mp[0][1]){
					pl.push_back({2,1});
					pl.push_back({n-1, n});
				} else if(mp[n-2][n-1] == mp[1][0]){
					pl.push_back({1,2});
					pl.push_back({n-1,n});
				}
			}
		}

		cout << ans << endl;
		for(int i =0;i<pl.size();i++){
			cout << pl[i].first << " " << pl[i].second << endl;
		}
	}

	system("pause");
	return 0;
}