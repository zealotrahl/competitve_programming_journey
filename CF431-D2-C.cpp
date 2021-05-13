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

int dp[101][2];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	

	int n,k,d;
	cin >> n >> k >> d;
	dp[0][0] = 1;
	dp[0][1] = 0;

	int MOD = 1e9 + 7;
	for(int i =1; i<= n;i++) {
		dp[i][0] = dp[i][1] = 0;
		for(int j =1; j <=k; j++) {
			if(i - j < 0) break;
			if(j < d) {
				dp[i][0] = (dp[i][0]%MOD + dp[i-j][0]%MOD)%MOD;
				dp[i][1] = (dp[i][1]%MOD + dp[i-j][1]%MOD)%MOD;
			} else {
				dp[i][1] = (dp[i][1]%MOD + dp[i-j][0]%MOD)%MOD;
				dp[i][1] = (dp[i][1]%MOD + dp[i-j][1]%MOD)%MOD;
			}
		}
	}
	cout << dp[n][1] << endl;


	system("pause");
	return 0;
}