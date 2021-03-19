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
	string s;
	getline(cin, s);
	//prlong longf("%.9f\n", x);
	
	int n = s.size();
	int dp[2][n+1];
	for(int i =0;i<=n;i++){
		dp[0][i] = 0;
		dp[1][i] = 0;
	}
	dp[1][0] = 2;
	for(int i = 1; i <= n; i++) {
		if(s[i-1] == ' ') {
			dp[0][i] = dp[0][i-1] + 1;
			dp[1][i] = dp[1][i-1] + 1;
		} else {
			bool flag = true;
			if(s[i-1] < 'a') {
				flag = false;
			}
			dp[0][i] = min(dp[0][i-1] + 1 + !flag, dp[1][i-1] + 3);
			dp[1][i] = min(dp[1][i-1] + 1 + flag, dp[0][i-1] + 3);
		}

	}

	cout << (min(dp[0][n], dp[1][n])) << endl;


	system("pause");
	return 0;
}