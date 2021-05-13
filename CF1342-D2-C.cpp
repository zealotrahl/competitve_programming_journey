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
 
long long lcm_f(long long a, long long b){
	return (a*b)/__gcd(a, b);
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
		long long a,b;
 
		cin >> a >> b;
		long long temp;
		if(a > b){
			temp = a;
			a = b;
			b = temp;
		}
 
		long long q;
		cin >> q;
		long long l,r;
		long long lcm = lcm_f(a,b);
		while(q--) {
			cin >> l >> r;
			// a <= b;
			long long count = 0;


			long long nextLcm = l+lcm - l%lcm;
			long long startLcm = l - lcm + (lcm - l%lcm);

			if(nextLcm >= r) {
				if(l%lcm == 0) {
					if(l+b <= r) {
						count += r - (l + b);
						if (r%lcm != 0) {
							count++;
						}
					}
				} else {
					if(l >= startLcm + b) {
						long long adding = r - l;
						if (r%lcm != 0) {
							adding++;
						}
						count += max(0ll, adding);
					} else {
						long long adding = r - (l+b - l%b);
						if (r%lcm != 0) {
							adding++;
						}

						count += max(0ll, adding);
					}
				}
			} else {
				if(l%lcm == 0) {
					count += nextLcm - (l + b);
				} else {
					if(l >= (startLcm+b - startLcm%b)) {
						count += nextLcm - l;
					} else {
						count += nextLcm - (l+b - l%b);
					}
				}

				l = nextLcm;

				long long prevLcm = r-lcm + (lcm - r%lcm);
				if (prevLcm >= l) {
					if (prevLcm+b <= r) {
						count += r - (prevLcm + b);
						if (r%lcm != 0) {
							count++;
						}
					}
				}
				r = prevLcm;

				if(l < r) {
					long long range = r-l;
					long long ads = lcm - b;
					long long steps = range/lcm;
				
					count += ads*steps;
				}
			}

			cout << count << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
