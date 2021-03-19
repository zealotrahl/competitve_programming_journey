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

int dp[15000][300];
int n,m, k;

vector<pair<int,bool>> arr;
set <pair<int,int>> ans;
int prosumirovat(int i, int w, int diff) {
	// cout << i << " " << w << " " << diff << endl;
	if (w == 0 && i == n+m && abs(diff) <= k) {
		ans.insert({i, w});
		return 1;
	}

	if (w < 0 || i == n+m) {
		return 0;
	}

	if (dp[w][i] != -1){
		return dp[w][i];
	}

	dp[w][i] = 0;

	if (i < n + m) {
		dp[w][i] = prosumirovat(i+1,  w - arr[i].first, diff + (arr[i].second ? arr[i].first : -arr[i].first)) + prosumirovat(i+1, w, diff);
	}

	return dp[w][i];
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
		int w;
		cin >> n >> m >> k >> w;

		int a;
		arr.resize(0);
		for(int i =0;i<n;i++){
			cin >> a;
			arr.push_back({a, true});
		}

		for(int i =0;i<m;i++){
			cin >> a;
			arr.push_back({a, false});
		}

		memset(dp, -1, sizeof dp);
		ans.clear();
		prosumirovat(0, w, 0);
		cout << ans.size() << endl;

	}

	system("pause");
	return 0;
}