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
		int x;
		cin >> x;
		vector<int> arr(n);
		for(int i =0;i<n;i++){
			cin >> arr[i];
		}

		if (accumulate(arr.begin(),arr.end(),0) == x) {
			cout<<"NO" << endl;
			continue;
		}

		sort(arr.rbegin(), arr.rend());
		long long curr_sum = 0;
		vector<int> ans(n);
		int check = 0;
		for(int i =0;i<n;i++) {
			if(curr_sum + arr[i] == x) {
				i++;
				ans[check++] = arr[i];
				ans[check++] = arr[i-1];
				continue;
			} else {
				curr_sum += arr[i];
				ans[check++] = arr[i];
			}
		}
		cout << "YES" << endl;
		for(int i =0;i<n;i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}