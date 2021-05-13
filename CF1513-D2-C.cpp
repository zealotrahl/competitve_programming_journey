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
	
	int dp[10][(int)2e5+2];
	int mod = 1e9+7;
	for(int count =0;count<10;count++) {
		dp[count][0] = 1;
		vector<int> newArray(10, 0);
		newArray[count] = 1;
		vector<int> temp(10, 0);


		for(int step =1;step<2e5+2;step++){
			fill(temp.begin(), temp.end(), 0);
			for(int j =9;j>=0;j--) {
				if(j == 9) {
					if(newArray[j]){
						temp[0] = (temp[0]%mod + newArray[j]%mod)%mod;
						temp[1] = (temp[1]%mod + newArray[j]%mod)%mod;
					}
				} else {
					if(newArray[j]) {
						temp[j+1] = (temp[j+1]%mod + newArray[j]%mod)%mod;
					}
				}
			}
			int sum = 0;
			for(int i =0;i<10;i++){
				sum = (sum%mod + temp[i]%mod)%mod;
				newArray[i] = temp[i];
			}
			dp[count][step] = sum;
		}
	}

	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		string s = to_string(n);
		int ans = 0;

		for(int i =0;i<s.size();i++){
			ans = (ans%mod + dp[s[i] - '0'][m]%mod)%mod;
		}
		cout << ans << endl;
	}

	system("pause");
	return 0;
}