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
		int n,m;
		cin >> n >> m;
		vector<int> arr(n);
		for(int i =0;i<n;i++){
			cin >> arr[i];
		}

		int pos = -1;
		for(int i =n-1;i>=0;i--){
			if(arr[i] != i+1) {
				pos = i+1;
				break;
			}
		}
		vector<pair<int,double>> experiments(m);
		for(int i =0;i<m;i++){
			cin >> experiments[i].first >> experiments[i].second;
		}
		sort(experiments.begin(), experiments.end());

		bool found = false;
		for(int i =0;i<m;i++){
			if(experiments[i].first >= pos) {
				found = true;
				break;
			}
		}

		if(pos == -1){
			cout << 1 << endl;
			continue;
		}
		if(!found) {
			cout << 0 << endl;
			continue;
		}
		double ans = 1;
		for(int i =0;i<m;i++){
			if(experiments[i].first >= pos) {
				ans *= (1 - experiments[i].second);
			}
		}
		cout << setprecision(6) <<  1 - ans << endl;

	}

	system("pause");
	return 0;
}