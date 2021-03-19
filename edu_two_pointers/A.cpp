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
	
	int n,m;
	cin >> n >> m;
	vector<int> arr_n(n);
	vector<int> arr_m(m);

	for(int i =0; i < n;i++){
		cin >> arr_n[i];
	}

	for(int i =0;i<m;i++){
		cin >> arr_m[i];
	}

	vector<int> ans(n+m);

	int i = 0;
	int r = 0;
	int j = 0;

	while(i < n && j < m) {
		if(arr_n[i] < arr_m[j]) {
			ans[r] = arr_n[i];
			i++;
		} else {
			ans[r] = arr_m[j];
			j++;
		}
		r++;
	}

	while(i < n) {
		ans[r++] = arr_n[i++];
	}
	while(j < m) {
		ans[r++] = arr_m[j++];
	}
	for(int i =0;i<n + m;i++){
		cout << ans[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}