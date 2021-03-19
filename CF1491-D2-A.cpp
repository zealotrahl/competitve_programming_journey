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
	
	int n,q;
	cin >> n >> q;
	vector<int> arr(n);
	int ones = 0;
	for(int i =0;i<n;i++){
		cin >> arr[i];
		if(arr[i]){
			ones++;
		}
	}

	while(q--){
		int t;
		cin >> t;
		int x;
		cin >> x;
		if(t == 1) {
			x--;
			if(arr[x] == 1) {
				arr[x] = 0;
				ones--;
			} else {
				arr[x] = 1;
				ones++;
			}
		} else {
			if(x > ones) {
				cout << 0 << endl;
			} else {
				cout << 1 << endl;
			}
		}
	}


	system("pause");
	return 0;
}