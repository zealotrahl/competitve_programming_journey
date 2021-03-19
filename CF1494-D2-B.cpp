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
		int n, u, r, d, l;
		cin >> n >> u >> r >> d >> l;

		bool graph[n][n];

		for(int i =0; i<n;i++){
			for(int j =0;j<n;j++){
				graph[i][j] = false;
			}
		}
		bool flag = true;
		if(n-2 >= u && n-2 >= d && n-2 >= r && n-2 >= l) {
			cout << "YES" << endl;
		} else {
			if(u + r + l + d == 4*n) {
				cout << "NO" << endl;
			} else {
				if(u == n && (r == 0 || l == 0)) {
					cout << "NO" << endl;
				} else if(r == n && (u == 0 || d == 0)) {
					cout << "NO" << endl;
				} else if(d == n && (r == 0 || l == 0)) {
					cout << "NO" << endl;
				} else if(l == n && (u ==0 || d == 0)) {
					cout << "NO" << endl;
				}else if((u == n-1) && (r == 0 && l == 0)) {
					cout << "NO" << endl;
				} else if((r == n-1) && u == 0 && d == 0) {
					cout << "NO" << endl;
				} else if((d == n-1) && r == 0 && l == 0) {
					cout << "NO" << endl;
				} else if((l == n-1) && u ==0 && d == 0) {
					cout << "NO" << endl;
				} else if(u == n && (r == n || l == n)) {
					cout << "NO" << endl;
				} else if(d == n && (r == n || l == n)) {
					cout << "NO" << endl;
				} else if(r == n && (u == n || d == n)) {
					cout << "NO" << endl;
				} else if(l == n && (u == n || d == n)) {
					cout << "NO" << endl;
				} else if(u == n-1 && (l == n && r == n)) {
					cout << "NO" << endl;
				} else if(d == n-1 && (l == n && r == n)) {
					cout << "NO" << endl;
				} else if(r == n-1 && (u == n && d == n)) {
					cout << "NO" << endl;
				} else if(l == n-1 && (u == n && d == n)) {
					cout << "NO" << endl;
				} else {
					cout << "YES" << endl;
				}
			}
		}

	}

	system("pause");
	return 0;
}