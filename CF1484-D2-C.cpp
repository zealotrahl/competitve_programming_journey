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
		vector<vector<int>> arr(m, vector<int>(0));

		int k;
		for(int i =0;i<m;i++) {
			cin >> k;
			for(int j=0;j<k;j++){
				int x;
				cin >> x;
				arr[i].push_back(x);
			}
		}
		map<int,int> druzya;
		vector<int> ans(m);
		bool flag = true;
		for(int i =0;i<m;i++) {
			if(arr[i].size() == 1) {
				ans[i] = arr[i][0];
				druzya[arr[i][0]]++;
				if(druzya[arr[i][0]] > ceil(1.0*m/2)) {
					flag = false;
					break;
				}
			}
		}
		if(!flag) {
			cout << "NO" << endl;
			continue;
		}
		for(int i =0;i<m;i++) {
			if(arr[i].size() > 1) {
				int min_col = INT_MAX;
				int min_col_indx = -1;
				for(int j =0;j<arr[i].size();j++){
					if(druzya[arr[i][j]] < min_col) {
						min_col = druzya[arr[i][j]];
						min_col_indx = arr[i][j];
					}
				}
				ans[i] = min_col_indx;
				druzya[min_col_indx]++;
			}
		}
		cout << "YES" << endl;
		for(int i =0;i<m;i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}