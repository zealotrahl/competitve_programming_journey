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
		long long x,y;
		long long p_x = 0;
		long long p_y = 0;
		cin >> x >> y;
		string s;
		cin >> s;
		int r_s = 0;
		int l_s = 0;
		int u_s = 0;
		int d_s = 0;
		for(int i =0; i< s.size();i++){
			if(s[i] == 'U') {
				p_y += 1;
				u_s++;
			} else if(s[i] == 'D') {
				p_y -= 1;
				d_s++;
			} else if(s[i] == 'R') {
				p_x += 1;
				r_s++;
			} else {
				p_x -= 1;
				l_s++;
			}
		}
		bool flag = true;
		if (x != p_x) {
			if(x > p_x && (x - p_x) > l_s) {
				flag = false;
			} else if(x < p_x && (p_x - x) > r_s) {
				flag = false;
			}
		}

		if(y != p_y) {
			if(y > p_y && (y - p_y) > d_s) {
				flag = false;
			} else if(y < p_y && (p_y - y) > u_s) {
				flag = false;
			}
		}

		if(flag) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}


	}

	system("pause");
	return 0;
}