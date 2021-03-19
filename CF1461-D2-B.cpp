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
		char mat[n][m];
		for(int i =0;i<n;i++){
			for(int j =0;j<m;j++){
				cin >> mat[i][j];
			}
		}

		int prefix[n][m];
		for(int i =0;i<n;i++){
			for(int j =0;j<m;j++){
				prefix[i][j] = 0;
			}
		}

		for(int i =0;i<n;i++){
			if(mat[i][0] == '*'){
				prefix[i][0] = 1;
			} else {
				prefix[i][0] = 0;
			}
		}

		for(int i =0;i<n;i++){
			for(int j =1;j<m;j++){
				if(mat[i][j] == '*'){
					prefix[i][j] = prefix[i][j-1] + 1;
				} else {
					prefix[i][j] = prefix[i][j-1];
				}
			}
		}

		// for(int i =0;i<n;i++){
		// 	for(int j =0;j<m;j++){
		// 		cout << prefix[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		long long ans = 0;
		for(int i =0;i<n;i++){
			for(int j =0;j<m;j++){
				if(mat[i][j] == '*'){
					ans++;

					// Spuskaemsa;

					int c = i+1;
					int level = 1;
					if(j == 0){
						continue;
					}
					while(c < n && mat[c][j] == '*') {
						int sprava = 0;
						int sleva = 0;
						if(j+ level >= m || j - level < 0){
							break;
						}
						sprava = prefix[c][j+level] - prefix[c][j];

						if(j - level == 0){ 
							sleva = prefix[c][j-1];
						} else {
							sleva = prefix[c][j-1] - prefix[c][j - level -1];
						}

						// cout << i << " " << j << " " << sleva << " " << sprava << endl;
						if(sleva == sprava && sleva == level) {
							
							ans++;
						} else {
							break;
						}
						c++;
						level++;
					}
				}
			}
		}
		cout << ans << endl;
	}

	system("pause");
	return 0;
}