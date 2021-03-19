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
		long long mat[n][m];

		for(int i =0;i<n;i++){
			for(int j =0;j<m;j++){
				cin >> mat[i][j];
			}
		}

		// delaem ryadi palindromami
		ll steps = 0;
		for(int i =0;i<n/2;i++){
			for(int j =0;j<m/2;j++){
				if(mat[i][j] != mat[i][m - j-1]){
					vector<int> diffs(4);
					diffs[0] = mat[i][j];
					diffs[1] = mat[i][m-j - 1];
					diffs[2] = mat[n-i - 1][j];
					diffs[3] = mat[n-i - 1][m-j - 1];
					sort(diffs.begin(), diffs.end());

					steps += diffs[2] - diffs[0] + diffs[3] - diffs[1];

					// proverit diff na ryadu;
					mat[i][j] = mat[i][m-j - 1] = mat[n-i - 1][j] = mat[n-i - 1][m-j - 1] = 1;
				}
			}
		}

		for(int j =0;j<m/2;j++){
			for(int i =0;i<n/2;i++){
				if(mat[i][j] != mat[n - i - 1][m - j-1]){
					vector<int> diffs(4);
					diffs[0] = mat[i][j];
					diffs[1] = mat[i][m-j - 1];
					diffs[2] = mat[n-i - 1][j];
					diffs[3] = mat[n-i - 1][m-j - 1];
					sort(diffs.begin(), diffs.end());

					steps += diffs[2] - diffs[0] + diffs[3] - diffs[1];

					// proverit diff na ryadu;
					mat[i][j] = mat[i][m-j - 1] = mat[n-i - 1][j] = mat[n-i - 1][m-j - 1] = 1;
				}
			}
		}

		if(m % 2 == 1){
			for(int i = 0;i<n/2;i++){
		    	steps += abs(mat[i][m/2] - mat[n-i-1][m/2]);
			}
		}

		 if(n % 2 == 1){
		     for(int j = 0;j<m/2;j++){
		         steps += abs(mat[n/2][j] - mat[n/2][m-j-1]);
		     }
		 }

		// for(int i =0;i<n;i++){
		// 	for(int j =0;j<m;j++){
		// 		cout << mat[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		cout << steps << endl;
	}

	system("pause");
	return 0;
}