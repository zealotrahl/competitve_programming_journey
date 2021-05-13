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
		int a,b;
		cin >> a >> b;
		string s;
		cin >> s;
		int count_q = 0;
		int orig_a = a;
		int orig_b = b;
		int n = s.size();
		for(int i =0;i<n;i++){
			if(s[i] == '?') {
				if(s[n-i-1] == '0') {
					s[i] = '0';
				} else if(s[n-i-1] == '1') {
					s[i] = '1';
				}
			}
		}
		int count_a = 0;
		int count_b = 0;
		for(int i =0;i<n;i++){
			if(s[i] == '0'){
				count_a++;
			} else if(s[i] == '1'){
				count_b++;
			}
		}


		bool flag = true;
		if(n&1 && s[n/2] == '?') {
			// middle exist;
			if(a&1) {
				s[n/2] = '0';
				count_a++;
			} else if(b&1) {
				s[n/2] = '1';
				count_b++;
			} else {
				flag = false;
			}
		}

		if(flag) {
			for(int i =0;i<n;i++) {
				if(s[i] == '?') {
					if(count_a != a) {
						s[i] = '0';
						s[n-i-1] = '0';
						count_a += 2;
					} else if(count_b != b) {
						s[i] = '1';
						s[n-i-1] = '1';
						count_b += 2;
					}
				}
			}

			count_a = count_b = 0;
			for(int i =0;i<n;i++){
				if(s[i] == '1'){
					count_b++;
				} else {
					count_a++;
				}
				if(s[i] != s[n-i-1]) {
					flag = false;
					break;
				}
			}

			// cout << s << endl;
			// cout << count_a << " " << count_b <<endl;

			if(count_a != a || count_b != b){
				flag = false;
			}
		}


		if(!flag) {
			cout << -1 << endl;
		} else {
			cout << s << endl;
		}

	}

	system("pause");
	return 0;
}