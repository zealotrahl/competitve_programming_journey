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

int n;
vector<long long> arr(1e5+2);
vector<long long> temp(1e5+2);

long long res(long long k) {

	for(long long i =0;i<n;i++) {
		temp[i] = arr[i] + (i+1)*k;
	}
	sort(temp.begin(), temp.begin() + n);
	long long ans = 0;
	for(int i =0;i<k;i++) {
		ans += temp[i];
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//prlong longf("%.9f\n", x);
	
	long long s;
	cin >> n >> s;

	for(long long i =0;i<n;i++){
		cin >> arr[i];
	}

	long long l = 0;
	long long r = n+1;
	while(l+1 < r) {
		int m = (l+r)/2;
		// cout << m << " " << res(m) << endl;
		if(res(m) <= s) {
			l = m;
		} else {
			r = m;
		}
	}

	cout << l << " " << res(l) << endl;


	system("pause");
	return 0;
}