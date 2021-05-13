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
	
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i =0;i<n;i++){
		cin >> arr[i];
	}

	vector<int> ans(n);
	ans[0] = 0;
	ans[1] = 0;
	ans[2] = max(0, arr[2] - arr[0]);

	int min_el = arr[0];
	int max_el = arr[2];
	// probably bug on if no min / max el exist due to 0 edge cases;

	for(int i =3; i < n; i++) {
		int check_ans = max(0, arr[i-1] - min_el);
		min_el = min(min_el, arr[i-2]);

		if (arr[i] > max_el) {
			max_el = arr[i];
			check_ans = max(check_ans, max_el - min_el);
		} else {
			check_ans = max(check_ans, arr[i] - min_el);
		}
		ans[i] = max(ans[i-1], check_ans);
	}

	for(int i =0;i<n;i++){
		cout << ans[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}