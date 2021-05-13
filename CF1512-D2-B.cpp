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
		char graph[n][n];
		pair<int,int> zvezda1;
		pair<int,int> zvezda2;
		bool first = false;
		for(int i =0;i<n;i++){
			for(int j=0;j<n;j++){
				char c;
				cin >> c;
				graph[i][j] = c;
				if(c == '*') {
					if(!first) {
						zvezda1 = {i,j};
						first = true;
					} else {
						zvezda2 = {i,j};
					}
				}
			}
		}

		if(zvezda1.first == zvezda2.first) {
			// odna stroka
			if(zvezda1.first + 1 == n) {
				graph[zvezda1.first-1][zvezda1.second] = '*';
				graph[zvezda2.first-1][zvezda2.second] = '*';
			} else {
				graph[zvezda1.first+1][zvezda1.second] = '*';
				graph[zvezda2.first+1][zvezda2.second] = '*';
			}
		} else if(zvezda1.second == zvezda2.second) {
			// odin stolb
			if(zvezda1.second + 1 == n) {
				graph[zvezda1.first][zvezda1.second - 1] = '*';
				graph[zvezda2.first][zvezda2.second - 1] = '*';
			} else {
				graph[zvezda1.first][zvezda1.second + 1] = '*';
				graph[zvezda2.first][zvezda2.second + 1] = '*';
			}
		} else {
			// raznie;
			graph[zvezda1.first][zvezda2.second] = '*';
			graph[zvezda2.first][zvezda1.second] = '*';
		}

		for(int i =0;i<n;i++){
			for(int j =0;j<n;j++){
				cout << graph[i][j];
			}
			cout << endl;
		}


	}

	system("pause");
	return 0;
}