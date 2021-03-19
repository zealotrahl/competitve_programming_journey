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
		int n,x,m;
		cin >> n >> x >> m;
		int l,r;

		int ans = INT_MIN;
		int min_l = -1;
		int max_r = -1;
		bool start = true;
		for(int i =0;i<m;i++){
			cin >> l >> r;
			if(start){
				if(x >= l && x <=r){
					min_l = l;
					max_r = r;
					start = false;
				}
			}else{
				if((min_l >= l && min_l <= r) ||(max_r <= r && max_r >= l)){
					min_l = min(l,min_l);
					max_r = max(r,max_r);
				}
			}
		}
		if(min_l == -1){
			ans = 1;
		}else{
			ans = max_r - min_l + 1;
		}
		cout << ans << endl;
	}

	system("pause");
	return 0;
}