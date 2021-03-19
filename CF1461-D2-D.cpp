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
 
set <long long> sums;
long long prefix[(int)1e5 + 5];
set <pair<int,int>> done;
void solve(vector<long long> &arr, int l, int r) {
	// cout << l << " " << r << endl;
	if(done.count({l,r}))
		return;
	if(l >= r) {
		return;
	}
	done.insert({l,r});
	sums.insert(prefix[r] - prefix[l]);
 
	int pos = upper_bound(arr.begin() + l, arr.begin() + r, (arr[l] + arr[r-1])/2) - arr.begin();
	solve(arr, l, pos);
	solve(arr, pos, r);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x
	
	int t;
	cin >> t;
	while(t--){
		int n,q;
		cin >> n >> q;
 
		vector<long long> arr(n);
		for(int i =0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		prefix[0] = 0;
		for(int i = 0; i< n;i++){
			prefix[i+1] = prefix[i] + arr[i];
		}
		sums.clear();
		done.clear();
		solve(arr, 0, n);
		for(int i =0;i<q;i++){
			long long s;
			cin >> s;
			if(sums.count(s)){
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	}
 
	return 0;
}