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
		int n,u,v;
		cin >> n >> u >> v;
		vector<int> arr(n);
		set<int> stolb;
		for(int i =0;i<n;i++){
			cin >> arr[i];
			stolb.insert(arr[i]);
		}

		int ans = INT_MAX;

		if(stolb.size() == 1) {
			ans = min(2*v, u+v);
		} else {
			int stb = arr[0];
			for(int i =1;i<n;i++){
				if(arr[i] == stb || arr[i] == stb + 1 || arr[i] == stb - 1) {
					stb = arr[i];
				} else {
					stb = -1;
					break;
				}
			}
			if(stb != -1) {
				ans = min(u,v);
			} else {
				ans = 0;
			}
		}

		cout << ans << endl;
	}

	system("pause");
	return 0;
}