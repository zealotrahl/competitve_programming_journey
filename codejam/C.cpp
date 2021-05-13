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
	int counter = 0;
	while(t--){
		counter++;
		int n,c;
		cin >> n >> c;
		vector<int> permutation(n);
		for(int i =0;i<n;i++){
			permutation[i] = i+1;
		}
		bool flag = false;
		int ans = 0;
		do {
			int cost = 0;
			vector<int> arr(n);
			for(int i =0; i <n;i++){
				arr[i] = permutation[i];
			}
			for(int i =0;i<n-1;i++) {
				int min_val = arr[i];
				int min_val_indx = i;
				for(int j =i+1; j<n; j++) {
					if(arr[j] < min_val) {
						min_val = arr[j];
						min_val_indx = j;
					}
				}
				cost += min_val_indx-i+1;
				reverse(arr.begin() + i, arr.begin() + min_val_indx + 1);
			}
			ans = max(cost, ans);
		} while (next_permutation(permutation.begin(),permutation.end()));
		cout << ans << endl;
		// if(flag) {
		// 	cout << "Case #" << counter << ": ";
		// 	for(int i =0; i < n; i++) {
		// 		cout << permutation[i] << " ";
		// 	}
		// 	cout << endl;
		// } else {
		// 	cout << "Case #" << counter << ": " << "IMPOSSIBLE" << endl;
		// }
	}

	system("pause");
	return 0;
}