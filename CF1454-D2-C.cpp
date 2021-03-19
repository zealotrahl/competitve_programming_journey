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
		int n;
		cin >> n;
		vector<long long> arr(n);
		bool all_equal = true;
		for(long long i = 0;i<n;i++){
			cin >> arr[i];
		}
		for(long long i =1;i<n;i++){
			if(arr[i] != arr[i-1]){
				all_equal = false;
				break;
			}
		}

		if(all_equal) {
			cout << 0 << endl;
			continue;
		}
		map<long long, long long> mp;
		for(long long i =0;i<n;i++){
			long long x = arr[i];
			long long j = i;
			while(i < n && arr[i] == x){
				i++;
			}
			i--;

			if(!mp.count(x) && j != 0) {
				mp[x]++;
			}

			if(i + 1 < n){
				mp[x]++;
			}
		}

		long long min_oper = INT_MAX;
		for(auto x : mp){
			min_oper = min(min_oper, x.second);
		}
		cout << min_oper << endl;
	}

	system("pause");
	return 0;
}