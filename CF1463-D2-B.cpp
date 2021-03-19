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
		vector<int> arr(n);
		long long tot_sum = 0;
		for(int i =0;i<n;i++){
			cin >> arr[i];
			tot_sum += arr[i];
		}

		long long s1 = 0;
		bool flag = true;
		for(int i =0;i<n;i++){
			if(flag){
				s1 += arr[i] - 1;
			}
			flag = !flag;
		}
		if(2*s1 < tot_sum) {
			flag = false;
			for(int i =0;i<n;i++){
				if(flag){
					cout << arr[i] << " ";
				} else {
					cout << 1 << " ";
				}
				flag = !flag;
			}
			cout << endl;
		} else {
			flag = true;
			for(int i =0;i<n;i++){
				if(flag){
					cout << arr[i] << " ";
				} else {
					cout << 1 << " ";
				}
				flag = !flag;
			}
			cout << endl;
		}


	}

	system("pause");
	return 0;
}