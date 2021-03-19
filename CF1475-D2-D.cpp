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
		int n,m;
		cin >> n >> m;
		vector<int> a_s(n);
		for(int i =0;i<n;i++){
			cin >> a_s[i];
		}
		vector<vector<int>> pp(2, vector<int>(0));
		for(int i=0;i<n;i++){
			int x;
			cin >> x;
			if(x == 1){
				pp[0].push_back(a_s[i]);
			} else {
				pp[1].push_back(a_s[i]);
			}
		}
		sort(pp[0].begin(), pp[0].end(), greater<int>());
		sort(pp[1].begin(), pp[1].end(), greater<int>());

		int left = 0;
		int right = 0;
		int ans = 0;
		while(m > 0) {
			int l_s = 0;
			int r_s = 0;

				if(left + 1 < pp[0].size()) {
					if(right < pp[1].size()) {
						if(pp[0][left] + pp[0][left+1] > pp[1][right]) {
							m -= pp[0][left] + pp[0][left+1];
							left += 2;
						} else {
							m -= pp[1][right];
							right++;
						}
						ans += 2;
					} else {
						m -= pp[0][left];
						left++;
						ans++;
					}
				} else if(left < pp[0].size()) {
					if(right < pp[1].size()) {
						if(pp[0][left] > pp[1][right]) {
							m -= pp[0][left];
							left++;
							ans++;
						} else {
							m -= pp[1][right];
							right++;
							ans += 2;
						}
					} else {
						m -= pp[0][left];
						left++;
						ans++;
					}
				} else if(right < pp[1].size()) {
					m -= pp[1][right];
					right++;
					ans += 2;
				} else {
					break;
				}

		}

		if( m > 0) {
			cout << -1 << endl;
		} else {
			cout << ans << endl;
		}

	}

	system("pause");
	return 0;
}