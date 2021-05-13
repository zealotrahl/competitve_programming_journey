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
		string a,b;
		cin >> a >> b;

		int ones = 0;
		int zeros = 0;
		for(int i =0;i<n;i++){
			if(a[i] == '0'){
				zeros++;
			} else {
				ones++;
			}
		}
		bool checker = true;
		bool flag = true;
		for(int i =n-1;i>=0;i--) {
			if(!checker) {
				if(a[i] == '1'){
					a[i] = '0';
				} else {
					a[i] = '1';
				}
			}
			if(a[i] != b[i]) {
				if(zeros == ones) {
					a[i] = b[i];
				} else {
					flag = false;
					break;
				}
				int temp = zeros;
				zeros = ones;
				ones = zeros;
				checker = !checker;
			}
			if(a[i] == '1') {
				ones--;
			} else {
				zeros--;
			}
		}
		if(!flag) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}

	system("pause");
	return 0;
}