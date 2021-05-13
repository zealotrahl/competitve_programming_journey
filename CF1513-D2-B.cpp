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

long long factorial(int n) {
	long long res = 1, i;
	long long mod = 1e9+7;
	for (i = 2; i <= n; i++)
	    res = (i%mod*res%mod)%mod;
	return res;
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
		int n;
		cin >> n;
		vector<int> arr(n);
		map<int,int> mp;
		for(int i =0;i<n;i++){
			cin >> arr[i];
			mp[arr[i]]++;
		}

		long long final_mask = arr[0];
		for(int i = 0;i < n;i++) {
			final_mask &= arr[i];
		}

		long long total_count = mp[final_mask];
		long long add = factorial(n-2);
		long long ans = 0;
		long long mod = 1e9 + 7;
		if(total_count >= 2) {
			long long add2 = (total_count%mod*(total_count-1)%mod)%mod;
			ans += (add%mod) * (add2%mod)%mod;
		}
		cout << ans << endl;
	}

	system("pause");
	return 0;
}