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
		int n,k;
		cin >> n >> k;
		string s;
		cin >> s;
		map<char,int> mp;
		for(int i =0;i<n;i++){
			mp[s[i]]++;
		}
		vector<string> ans(k);
		int smallest_there = (mp.begin())->second;
		if(smallest_there < k) {
			int kth_smallest = 0;
			for(auto x : mp) {
				if(kth_smallest + x.second >= k) {
					cout << x.first << endl;
					break;
				} else {
					kth_smallest += x.second;
				}
			}
			continue;
		}
		int curr = 0;
		for(auto x : mp) {
			int left = x.second;
			while(left--) {
				ans[curr].push_back(x.first);
				curr++;
				if (curr == k) {
					break;
				}
			}
			mp[x.first] = left;
			if(curr == k) {
				break;
			}
		}

		int ostatok = 0;
		bool flag = true;
		for(auto x : mp) {
			if(ostatok != 0 && x.second != 0) {
				flag = false;
				break;
			}
			ostatok = x.second;
		}
		if(flag) {
			curr = 0;
			for(auto x : mp) {
				int left = x.second;
				while(left-- > 0) {
					ans[curr].push_back(x.first);
					curr++;
					if (curr == k) {
						curr = 0;
					}
				}
			}
		} else {
			sort(ans.begin(), ans.end());

			for(auto x : mp) {
				int left = x.second;
				while(left-- > 0) {
					ans[0].push_back(x.first);
				}
			}
		}
		sort(ans.rbegin(), ans.rend());

		cout << ans[0] << endl;
	}

	system("pause");
	return 0;
}