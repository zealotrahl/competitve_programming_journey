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
	
	int n;
	cin >> n;
	vector<int> arr(n+2, 0);
	if(n == 1){
		cout << "! 1" << endl;
		cout.flush();
	} else if(n==2) {
		cout << "? 1" << endl;
		cout.flush();
		int a;
		cin >> a;
		if(a==1) {
			cout << "! 1" << endl;
			cout.flush();
		} else {
			cout << "! 2" << endl;
			cout.flush();
		}
	} else {
		int l,r,m;
		m = INT_MAX;
		l = 1;
		r = n;
		int a;
		cout << "? 1" << endl;
		cout.flush();
		cin >> arr[1];
		cout << "? " << n << endl;
		cout.flush();
		cin >> arr[n];
		while(true) {

			m = (l+r)/2;

			cout << "? " << m << endl;
			cout.flush();
			cin >> arr[m];
			if (l+1 == m && m+1 == r) {
				if(arr[m] < arr[r] && arr[m] < arr[l]) {
					cout << "! " << m << endl;
				} else if(arr[l] < arr[m]) {
					cout << "! " << l << endl;
				} else {
					cout << "! " << r << endl;
				}
				cout.flush();
				break;
			}
			if(arr[l] < arr[m]) {
				r = m;
			} else {
				l = m;
			}
		}
	}


	system("pause");
	return 0;
}