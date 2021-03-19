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
		vector <int> arr(n);
		int odd,even;
		odd = even = 0;
		for(int i =0;i<n;i++){
			cin >> arr[i];

			if(arr[i]&1){
				odd++;
			}else{
				even++;
			}
		}

		if(odd&1 || even&1){
			bool brk = false;
			set <int> usd;
			for(int i =0;i<n;i++){
				bool flag = false;
				int j = 0;
				if( usd.count(arr[i]))
					continue;
				for(;j<n;j++){
					if(i == j){
						continue;
					}
					if(abs(arr[i] - arr[j]) == 1){
						flag = true;
						break;
					}
				}

				if(!flag && !usd.count(arr[i])){
					if(arr[i]&1){
						if(odd > 1){
							odd--;
						}
						else{
							brk = true;
							break;
						}
					}else{
						if(even > 1){
							even--;
						}else{
							brk = true;
							break;
						}
					}
				}else{
					usd.insert(arr[j]);
				}
			}

			if(brk){
				cout << "NO" << endl;
			}else{
				cout << "YES" << endl;
			}
		}else{
			cout << "YES" << endl;
		}


	}

	system("pause");
	return 0;
}