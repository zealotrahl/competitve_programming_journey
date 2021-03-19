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
	
	long long n,m,k;
	cin >> n >> m >> k;
	vector<int> arr_n(n);
	vector<int> arr_m(m);

	for(int i =0;i<n;i++){
		cin >> arr_n[i];
	}

	for(int i =0;i<m;i++){
		cin >> arr_m[i];
	}


	if(n < m){
		long long count = m%n + 1;
		long long ans = 0;

		long long summa_cycla = 0;
		for(long long i=0;i < count;i++) {
			long long j = 0;
			long long cc = 0;
			while(j < m) {
				if(arr_n[j%n] != arr_m[j]) {
					cc++;
				}
				j++;
			}
			summa_cycla += cc;
		}

		long long cycles = k/summa_cycla;
		long long left = k%summa_cycla;
		if(left == 0) {
			cycles--;
			left = summa_cycla;
		}
		ans += cycles * m * count;
		for(int i =0; i < count; i++) {
			long long j = 0;
			while(j < m && left) {
				if(arr_n[j%n] != arr_m[j]) {
					left--;
				}
				j++;
				ans++;
			}
			if(left == 0) {
				break;
			}
		}
		cout << ans << endl;
	} else {
		long long count = n%m + 1;
		long long ans = 0;

		long long summa_cycla = 0;
		for(long long i=0;i < count;i++) {
			long long j = 0;
			long long cc = 0;
			while(j < n) {
				if(arr_m[j%m] != arr_n[j]) {
					cc++;
				}
				j++;
			}
			summa_cycla += cc;
		}

		long long cycles = k/summa_cycla;
		long long left = k%summa_cycla;
		if(left == 0) {
			cycles--;
			left = summa_cycla;
		}
		ans += cycles * n * count;
		for(int i =0; i < count; i++) {
			long long j = 0;
			while(j < n && left) {
				if(arr_m[j%m] != arr_n[j]) {
					left--;
				}
				j++;
				ans++;
			}
			if(left == 0) {
				break;
			}
		}
		cout << ans << endl;
	}



	system("pause");
	return 0;
}