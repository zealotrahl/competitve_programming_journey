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

long long squares(int i){
	if ((i & 1) == 1)
		return i / 4 * 2 + 1;
	else
		return (i - 1) / 4 * 2 + 2;
}

long solve(int n) {
	if (2 * n - 1 < 3)
		return 0;

	long dp[n * 2][3 + 1];
	for(int i = 0; i < n * 2; i++) {
		for(int j = 0; j < 3 + 1; j++) {
			dp[i][j] = 0;
		}
	}
	for (int i = 0; i < n * 2; i++)
		dp[i][0] = 1;
	dp[1][1] = 1;

	for (int i = 2; i < n * 2; i++) {
		for (int j = 1; j <= 3; j++) {
			dp[i][j] = dp[i - 2][j] + dp[i - 2][j - 1] * (squares(i) - j + 1);
		}
	}
	// stores the answer
	long ans = 0;
	for (int i = 0; i <= 3; i++) {
		ans += dp[n * 2 - 1][i] * dp[n * 2 - 2][3 - i];
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	
	int n;
	cin >> n;
	cout << solve(n) << endl;

	system("pause");
	return 0;
}