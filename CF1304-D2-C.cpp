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
	
	int q;
	cin >> q;
	while(q--){
		int n,m;
		cin >> n >> m;
		bool can = true;
		int min_pos = m;
		int max_pos = m;
		int curr_t = 0;
		for(int i =0;i<n;i++){
			int t,l,h;
			cin >> t >> l >> h;
			int diff = t - curr_t;
			min_pos -= diff;
			max_pos += diff;
			curr_t = t;

			if(
				(min_pos >= l && min_pos <= h) || (max_pos >= l && max_pos <= h)
				|| (l >= min_pos && h <= max_pos)
			) {
				// ok
				min_pos = max(min_pos, l);
				max_pos = min(max_pos, h);
			} else {
				// bad;
				can = false;
			}
		}

		if(can) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	system("pause");
	return 0;
}