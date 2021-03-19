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

long long lcm(long long a, long long b){
	return (a*b)/__gcd(a, b);
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
		long long a,b;

		cin >> a >> b;
		int t;
		if(a > b){
			t = a;
			a = b;
			b = t;
		}

		int q;
		cin >> q;
		long long l,r;
		long long step = lcm(a,b);
		if(__gcd(a,b) == 1){
			step = min(a,b);
		}

		for(int i=0;i<q;i++){
			cin >> l >> r;
			if(a == b || a == 1 || b == 1){
				cout << 0 << " ";
			}else{
				long long count = 0;
				if(step >= l && step <= r){
					long long p = r-l;
					long long k = p/step;
					if(k>0)
						k--;

					count += k*step;
				}
				if(count == 0){
					for(int j = max(a,b);j<=r;j++){
						if((j%a)%b != (j%b)%a){
							count++;
						}
					}
				}

				cout << count << " ";
			}
		}
		cout << endl;
	}
	// for(int i =1;i<50;i++){
	// 	cout << i << " " << i%6%8 << " " << i%8%6 << endl;
	// }

	system("pause");
	return 0;
}


