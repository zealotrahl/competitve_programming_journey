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

long long lcd(long long a, long long b) {
	return (a*b)/__gcd(a,b);
}

bool isPrime(long long n) {
	// Corner case
	if (n == 1)  return false;
	
	// Check from 2 to n-1
	for (int i=2; i*i<=n; i++)
		if (n%i == 0)
			return false;
	return true;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	
	long long n;
	cin >> n;


	if(n == 3) {
		cout << 6 << endl;
	} else if(n == 2) {
		cout << 2 << endl;
	} else if(n == 1) {
		cout << 1 << endl;
	} else {
		if(n&1) {
			cout << n*(n-1)*(n-2) << endl;
		} else {
			if(n%3 == 0) {
				cout << (n-1)*(n-2)*(n-3) << endl;
			} else {
				cout << n*(n-1)*(n-3) << endl;
			}
		}
	}

	system("pause");
	return 0;
}