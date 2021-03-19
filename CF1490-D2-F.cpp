#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<long long,long long> pi;
typedef vector<pi> vpi;
typedef vector<long long> vi;

#define PB push_back
#define MP make_pair
// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of long longegers


struct P {
	long long x, y;
	bool operator<(const P &p) {
		if (x != p.x) return x < p.x;
		else return y < p.y;
	}
};

void subsetGenerate(long long n){
	for (long long b = 0; b < (1<<n); b++) {
		vector<long long> subset;
		for (long long i = 0; i < n; i++) {
			if (b&(1<<i)) subset.push_back(i);
		}
	}
}

void permutationGenerate(long long n){
	vector<long long> permutation;
	for (long long i = 0; i < n; i++) {
		permutation.push_back(i);
	}
	do {
	// process permutation
	} while (next_permutation(permutation.begin(),permutation.end()));
}

bool customSort(pair<long long,long long> a, pair<long long,long long> b) {
	return a.first > b.first;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//prlong longf("%.9f\n", x);
	
	long long t;
	cin >>t;
	while(t--){
		long long n;
		cin >> n;
		map<long long,long long> mp;

		long long a;
		for(long long i =0;i <n;i++){
			cin >> a;
			mp[a]++;
		}
		map<long long,long long> mp2;
		for(auto x : mp) {
			mp2[x.second]++;
		}

		vector<pair<long long,long long>> arr;

		for(auto x : mp2) {
			arr.push_back({x.first, x.second});
		}
		sort(arr.begin(), arr.end(), customSort);

		long long ans = INT_MAX;
		for(long long i = 0; i < arr.size();i++) {
			long long curr = 0;
			for(long long j =0;j < i;j++) {
				curr += (arr[j].first - arr[i].first)*arr[j].second;
			}

			for(long long j =i+1;j < arr.size();j++) {
				curr += arr[j].first*arr[j].second;
			}
			ans = min(ans, curr);
		}
		cout << ans << endl;
	}

	system("pause");
	return 0;
}