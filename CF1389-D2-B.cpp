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
		long long n,k,z;
		cin >> n >> k >> z;

		vector<long long> arr(n);
		for(int i =0;i<n;i++){
			cin >> arr[i];
		}
		vector<long long> pref(n+1);
		pref[0] = 0;
		for(int i =1;i<=n;i++) {
			pref[i] = pref[i-1] + arr[i-1];
		}
		long long ans = 0;
		if(z == 0) {
			for(int i =0;i<=k;i++){
				ans += arr[i];
			}
		} else {
			ans = INT_MIN;
			for(int i =1;i<=k;i++) {
				long long count = k - (i - 1);
				long long curr_ans = pref[i];

				long long temp = min(count / 2, z);
				curr_ans += (arr[i] + arr[i - 1]) * temp;
				count -= 2 * temp;
				curr_ans += pref[i + count] - pref[i];

				// cout << curr_ans << " " << count << " " << i << " " << pref[i+1] << endl;
				ans = max(ans, curr_ans);
			}
		}

		cout << ans << endl;
	}

	system("pause");
	return 0;
}