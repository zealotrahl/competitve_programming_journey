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
long long MOD = 1e9 + 7;

bool isSquare(long long mid) {
	long long d = sqrt(mid);
	return d*d == mid;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);

	long long l = 0;
	long long r = 1e17;

	long long a,b,c,n;
	cin >> a >> b >> c >> n;
	long long ans = 1;
	for(int i =1;i<n;i++){
		// long long calc = ((((a%MOD)*((i%MOD)*(i%MOD)%MOD)%MOD) + ((b%MOD)*(i%MOD)%MOD) + c%MOD)%MOD);
		long long calc = a*i*i + b*i + c;
		cout << calc << " ";
		ans = ans * calc;
	}
	cout << endl;
	cout << ans << endl;

	while(l + 1 < r){
		long long middle = (l+r)/2;
		cout << middle << endl;
		if(ans%middle == 0 && isSquare(middle)){
			l = middle;
		} else {
			r = middle;
		}
	}
	cout << l << endl;
	

	system("pause");
	return 0;
}