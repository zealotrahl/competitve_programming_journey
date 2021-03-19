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
		string s;
		cin >> s;
		string ans = "";
		bool flag = false;
		int ones = 0;
		for(int i =0;i<s.size();i++){
			if(s[i] == '1')
				ones++;
		}
		if(ones == s.size() || ones == 0){
			cout << s << endl;
			continue;
		}
		int n = s.size();
		int j = 0;
		for(int i =0;i<n-1;i++){
			if(s[i] == s[i+1]){
				ans += s[i];
				if(s[i] == '0')
					ans += '1';
				else
					ans += '0';
			}else{
				ans += s[i];
			}
		}
		ans += s[n-1];
		cout << ans << endl;
	}

	system("pause");
	return 0;
}

