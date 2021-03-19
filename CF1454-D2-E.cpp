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

		vector<pair<int,int>> arr(n);

		for(int i =0;i<n;i++){
			int f,d;
			cin >> f >> d;
			arr[i] = make_pair(f,d);
		}

		vector<int> used(n+1, 0);
		int a,b,c;

		for(int i=0;i<n;i++){
			if(used[arr[i].second]) {
				a = used[arr[i].second];
				b = arr[i].first;
				c = arr[i].second;
				break;
			} else {
				used[arr[i].second] = arr[i].first;
				used[arr[i].first] = arr[i].second;
			}
		}

		int count_a = 0;
		int count_b = 0;
		int count_c = 0;
		for(int i =0;i<n;i++){
			if(arr[i].first == a) {
				if(arr[i].second != b && arr[i].second != c){
					count_a++;
				}
			} else if(arr[i].second == a) {
				if(arr[i].first != b && arr[i].first != c){
					count_a++;
				}
			}

			if(arr[i].first == b) {
				if(arr[i].second != a && arr[i].second != c){
					count_b++;
				}
			} else if(arr[i].second == b) {
				if(arr[i].first != a && arr[i].first != c){
					count_b++;
				}
			}

			if(arr[i].first == c) {
				if(arr[i].second != a && arr[i].second != b){
					count_c++;
				}
			} else if(arr[i].second == c) {
				if(arr[i].first != a && arr[i].first != b){
					count_c++;
				}
			}
		}

		long long ans = 6 + (n-3)*5;

		if(count_a) {
			ans += count_a*(count_a -1) /2;
			ans += count_a*count_b*2;
			ans += count_a*count_c*2;
		}

		if(count_b) {
			ans += count_b*(count_b -1) /2;
			ans += count_b*count_c*2;
		}


		if(count_c) {
			ans += count_c*(count_c -1) /2;
		}


		cout << ans << endl;
	}

	system("pause");
	return 0;
}