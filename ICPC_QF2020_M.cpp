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

long long m = (long long)1e9+7;
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
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
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);

	long long n;
	while(cin >> n) {
		long long x;
		cin >> x;
		vector<long long> a_arr(n);
		vector<long long> b_arr(n);
		for(int i =0;i<n;i++){
			cin >> a_arr[i];
		}

		for(int i = 0;i<n;i++){
			cin >> b_arr[i];
		}

		long long sum = 0;
		for(int i =0;i<n;i++){
			sum += (a_arr[i]%m*b_arr[i]%m)%m;
		}



		long long x_n1 = binpow(x, n-1, m);
		// cout << sum << " " << x_n1 << endl;
		sum = (x_n1%m)*(sum%m)%m + (x_n1%m*x%m)%m;

		cout << sum%m << endl;
	}


	// system("pause");
	return 0;
}