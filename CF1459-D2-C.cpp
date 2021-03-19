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
	
	int n,m;
	cin >> n >> m;
	vector<long long> arr(n);
	vector<long long> barr(m);

	for(int i =0;i<n;i++){
		cin >> arr[i];
	}
	for(int i =0;i<m;i++){
		cin >> barr[i];
	}
	sort(arr.begin(), arr.end());
	long long k = arr[0], initial_gcd = 0;
	for(int i =1;i<n;i++){
		initial_gcd = __gcd(initial_gcd, arr[i] - arr[i-1]);
	}

	for(int i =0;i<m;i++){
		cout << __gcd(initial_gcd, k + barr[i]) << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}