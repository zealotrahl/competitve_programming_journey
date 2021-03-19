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
		long long ans = 0;
		long long a,b,k;
		cin >> a >> b >> k;

		vector<long long> a_s(a, 0);
		vector<long long> b_s(b, 0);
		for(long long i =0;i<k;i++){
			long long x;
			cin >> x;
			a_s[x-1]++;
		}
		for(long long i =0;i<k;i++){
			long long x;
			cin >> x;
			b_s[x-1]++;
		}

		long long total = (k*(k-1))/2;

		// cout << total << endl;
		for(long long i =0;i<a;i++){
			if(a_s[i]) {
				total -= (a_s[i]*(a_s[i]-1))/2;
			}
		}
		for(long long i =0;i<b;i++){
			if(b_s[i]) {
				total -= (b_s[i]*(b_s[i]-1))/2;
			}
		}

		cout << total << endl;
	}

	system("pause");
	return 0;
}