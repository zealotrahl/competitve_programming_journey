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
		int n,l,r,s;
		cin >> n >> l >> r >> s;
		vector<int> ans(n, 0);
		l--;
		r--;
		set<int> st;
		vector<int> arr(n+1);
		arr[0] = 0;
		for(int i =1;i<=n;i++){
			st.insert(i);
			arr[i] = i;
		}

		bool dp[s+1][n+1];


		for(int k=1;k<=s;k++){
			for(int x= 0;x <= n;x++) {
				dp[k][x] = false;
			}
		}
		dp[0][0] = false;
		dp[1][1] = true;

		for(int k=1;k<=n;k++) {
			for(int x=0;x<=s;x++){
				if(x-arr[k] >= 0)	 dp[x][k] |= dp[x-arr[k]][k-1];
				dp[x][k] |= dp[x][k-1];
			}
		}


		for(int i =1;i<=n;i++){
			for(int j =1;j<=s;j++){
				cout << dp[j][i] << " ";
			}
			cout << endl;
		}
		for(int i=0;i<n;i++){
			if(ans[i] != 0) {
				continue;
			}
			
		}
	}

	system("pause");
	return 0;
}