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
	
	int n;
	cin >> n;
	vector<int> arr(n);
	int dp[n][2];


	for(int i =0;i<n;i++){
		cin >> arr[i];
	}

	for(int i =0;i<n;i++){
		int padenie = -1;
		int rost = -1;
		for(int j =0; j < i; j++) {
			if(arr[j] > arr[i]) {
				padenie = max(padenie, dp[j][0]);
			} else if(arr[j] < arr[i]) {
				rost = max(rost, dp[j][1]);
			}
		}

		if (padenie != -1) {
			dp[i][1] = padenie + 1;
		} else {
			dp[i][1] = 1;
		}

		if(rost != -1) {
			dp[i][0] = rost + 1;
		} else {
			dp[i][0] = 1;
		}
	}

	int ans = 0;

	for(int i =0;i<n;i++){
		ans = max(dp[i][0], dp[i][1]);
	}

	cout << ans << endl;
	system("pause");
	return 0;
}