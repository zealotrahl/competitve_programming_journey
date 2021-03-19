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

bool customSort(pair<int,int> a, pair<int,int> b) {
	return a > b;
}
vector <set<int>> ct(100001);
vector <int> dp(1e5+1,0);
int calc(int x, int deep){
	if(dp[x] != 0)
		return dp[x];

	if(ct[x].size() == 0){
		dp[x] = 1;
	}else{
		int max_deep = 0;
		for(int p : ct[x]){
			max_deep = max(max_deep, calc(p, deep+1));
		}
		dp[x] = 1 + max_deep;
	}
	return dp[x];
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
		vector<int> arr(n+1);
		for(int i =1;i<=n;i++){
			cin >> arr[i];
			dp[i] = 0;
		}

		for(int i =1;i<=n;i++)
			ct[i].clear();
		for(int i =1;i<=n/2;i++){
			for(int j =i;j<=n;j+=i){
				if(j > n){
					break;
				}else{
					if(arr[j] > arr[i]){
						ct[i].insert(j);
					}
				}
			}
		}

		int ans = 0;
		for(int i =1;i<=n;i++){
			ans = max(ans, calc(i,0));
		}
		cout << ans << endl;

	}

	system("pause");
	return 0;
}