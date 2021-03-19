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
		int x;
		cin >> x;
		int min_val = INT_MAX;
		for (int b = 0; b < (1<<9); b++) {
			vector<char> subset;
			for (int i = 0; i < 9; i++) {
				char c = i + '0';
				if (b&(1<<i)) subset.push_back(c+1);
			}

			int sum = 0;
			string s = "";
			for(int i =0;i<subset.size();i++){
				sum += subset[i] - '0';
				// cout << subset[i] << " ";
				s.push_back(subset[i]);
			}
			// cout << endl;
			if(sum == x) {
				min_val = min(min_val, stoi(s));
			}
		}
		if(min_val != INT_MAX){
			cout << min_val << endl;
		} else {
			cout << -1 << endl;
		}
	}

	system("pause");
	return 0;
}