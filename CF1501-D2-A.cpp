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
		long long n;
		cin >> n;
		vector<pair<long long,long long>> arr(n);
		for(long long i=0;i<n;i++){
			cin >> arr[i].first >> arr[i].second;
		}
		vector<long long> tms(n);
		for(long long i =0;i<n;i++){
			cin >> tms[i];
		}
		long long time = arr[0].first + tms[0];

		if(n > 1) {
			time = max(time, max( time + (arr[0].second - arr[0].first + 2 - 1)/2, arr[0].second));
		}
		// cout << time << endl;
		for(long long i =1;i<n;i++){
			time += arr[i].first - arr[i-1].second + tms[i];
			if(i < n-1) {
				time = max(time, max( time + (arr[i].second - arr[i].first + 2 - 1)/2, arr[i].second));
			}
		}
		cout << time << endl;
	}

	system("pause");
	return 0;
}