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
		vector<int> ans(n);
		int k = 1;
		char c = s[0];
		ans[0] = 1;
		stack<int> ones;
		stack<int> zeros;
		if(s[0] == '0'){
			zeros.push(1);
		} else{
			ones.push(1);
		}

		for(int i =1;i<n;i++){
			if(s[i] == '0'){
				if(ones.size()){
					ans[i] = ones.top();
					ones.pop();
					zeros.push(ans[i]);
				} else {
					k++;
					ans[i] = k;
					zeros.push(k);
				}
			} else {
				if(zeros.size()){
					ans[i] = zeros.top();
					zeros.pop();
					ones.push(ans[i]);
				} else{
					k++;
					ans[i] = k;
					ones.push(k);
				}
			}
		}
		cout << k << endl;
		for(int i =0;i<n;i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}