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
	set<int> ans;
	map<int,int> mp;
	int level = 0;
	if(n == 0) {
		cout << 1 << endl;
	} else {
		int orig_n = n;
		ans.insert(n);
		int cur = n;
		while(n--){
			int k;
			cin >> k;

			bool changed = false;
			vector<int> arr(k);
			int nw = INT_MAX;
			for(int i =0;i<k;i++){
				int a;
				cin >> a;
				arr[i] = a;
				if(mp.count(a)){
					nw = min(nw, mp[a]);
				}
			}
			if(nw == INT_MAX){
				nw = cur;
			} else {
				nw--;
				cur = nw;
			}
			for(int i =0;i<k;i++){
				mp[arr[i]] = nw;
			}
			ans.insert(nw);
			// cout << endl;
			level++;
		}
		cout << ans.size() << endl;
	}


	// system("pause");
	return 0;
}