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
		vector<int> arr(n);
		vector<int> brr(n);
		vector<int> mrr(m);
		for(int i =0;i<n;i++){
			cin >> arr[i];
		}
		for(int i =0;i<n;i++){
			cin >> brr[i];
		}
		map<int,stack<int>> m_mrr;
		vector<int> out(m, -1);
		for(int i =0;i<m;i++){
			cin >> mrr[i];
			m_mrr[mrr[i]].push(i);
		}
		bool flag = true;
		for(int i=0;i<n;i++) {
			if(arr[i] != brr[i]) {
				if(m_mrr[brr[i]].size()) {
					out[m_mrr[brr[i]].top()] = i+1;
					m_mrr[brr[i]].pop();
				} else {
					flag = false;
					break;
				}
			}
		}

		if(out[m-1] == -1) {
			for(int i =0;i<n;i++){
				if(brr[i] == mrr[m-1]) {
					out[m-1] = i+1;
					break;
				}
			}
		}

		if(out[m-1] == -1) {
			flag = false;
		}
		if(flag) {
			cout << "YES" << endl;
			for(int i =0;i<m;i++){
				if(out[i] == -1) {
					cout << out[m-1] << " ";
				} else {
					cout << out[i] << " ";
				}
			}
			cout << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	system("pause");
	return 0;
}