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


int minu(int a, int b) 
{ return (a < b)? a: b; } 
  
// A utility function to find min of three integers 
int min(int a, int b, int c) 
{ return minu(minu(a, b), c);} 
  
// A utility function to find max of two integers 
int max(int a, int b) 
{ return (a > b)? a: b; } 


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
		int n,m;
		cin >> n >> m;
		int mp[n][m];
		for(int i =0;i<n;i++){
			for(int j =0;j<m;j++){
				cin >> mp[i][j];
			}
		}

		map<int,vector<int>> dists;
		for(int i =0;i<n;i++){
			for(int j =0;j<m;j++){
				int init_dist = abs(0 - i) + abs(0 - j);
				int last_dist = abs(n - i - 1) + abs(m - j - 1);
				if(init_dist < last_dist){
					dists[init_dist].push_back(mp[i][j]);
				}else if(init_dist > last_dist){
					dists[last_dist].push_back(mp[i][j]);
				}
			}
		}
		int ans = 0;
		for(auto x : dists){
			int ones = 0;
			int zeros = 0;
			for(int i =0;i<x.second.size();i++){
				if(x.second[i]){
					ones++;
				}else{
					zeros++;
				}
			}
			ans += min(ones, zeros);
		}
		cout << ans << endl;
	}

	system("pause");
	return 0;
}