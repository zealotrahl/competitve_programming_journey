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
	// ios::sync_with_stdio(0);
	// cin.tie(0);
	// freopen("input.txt","rt",stdin);
	// freopen("output.txt","wt",stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	int n;

	long long m = 1e9 + 7;
	while(cin >> n) {
		vector<long long> arr(n);
		for(long long i =0;i<n;i++){
			cin >> arr[i];
		}
		map<string, bool> mp;
		long long counter = 1;
		string s = "";
		for(int i =0;i<n;i++){
			s += to_string(arr[i]);
		}
		mp[s] = true;
		for(long long i=0;i<n;i++){
			s = s.substr(1, s.size() -1);
			s += to_string(arr[i]);
			cout << s << endl;
			if(!mp.count(s)) {
				counter++;
				counter %= m;
				mp[s] = true;
			}
		}
		cout << counter%m << endl;
	}
	// system("pause");
	return 0;
}