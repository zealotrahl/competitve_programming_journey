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
		string s;
		cin >> s;
		bool flag = false;
		string start = s.substr(0, 4);
		string end = s.substr(n-4);
		if(start == "2020" || end == "2020") {
			cout << "YES" << endl;
			continue;
		}
		bool found = false;
		string str = "";

		found |= (s[0] == '2' && s[n-1] == '0' && s[n-2] == '2' && s[n-3] == '0');

		found |= (s[0] == '2' && s[1] == '0' && s[n-2] == '2' && s[n-1] == '0');

		found |= (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n-1] == '0');

		if(found){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	system("pause");
	return 0;
}