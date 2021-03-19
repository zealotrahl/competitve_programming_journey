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
		long long a,b,n;
bool customSort(pair<long long, long long> d, pair<long long, long long> b) {
	// long long nado1 = ceil(1.0*d.second / a);
	// long long x1 = nado1 * d.first;

	// long long nado2 = ceil(1.0*b.second / a);
	// long long x2 = nado2 * b.first;

	return d.first < b.first;
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

		cin >> a >> b >> n;

		vector<pair<long long,long long>> monster(n);
		for(long long i =0;i<n;i++){
			cin >> monster[i].first;
		}
		for(long long i =0;i<n;i++){
			cin >> monster[i].second;
		}

		sort(monster.begin(), monster.end(), customSort);
		long long i = 0;
		for(;i<n;i++){
			if(b <= 0) {
				break;
			}
			long long nado = ceil(1.0*monster[i].second / a);

			b -= nado * monster[i].first;
			if (b < 0 && nado > 1) {
				if((b + monster[i].first) <= 0) {
					i = -1;
					break;
				}
			}
		}
		if(i == n) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	system("pause");
	return 0;
}