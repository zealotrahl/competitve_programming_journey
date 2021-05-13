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
		n += 2;
		vector<pair<int,int>> arr(n);
		set<int> st;
		vector<int> orign(n);
		for(int i =0;i<n;i++){
			cin >> orign[i];
			arr[i] = {orign[i], i};
			st.insert(orign[i]);
		}

		long long sum = 0;
		for(int i =0;i<n;i++){
			sum += arr[i].first;
		}
		sort(arr.begin(), arr.end());
		bool first = true;
		int check_acc = arr[n-1].first;
		int check_acc_indx = arr[n-1].second;
		long long check_sum = sum - check_acc;
		int target_x = -1;
		for(int i =0;i<n-1;i++){
			if(check_sum - arr[i].first == check_acc) {
				target_x = arr[i].second;
				break;
			}
		}
		if(target_x == -1) {
			first = false;
			check_acc = arr[n-2].first;
			check_acc_indx = arr[n-2].second;
			check_sum = sum - check_acc;
			for(int i =0;i<n;i++){
				if(i == n-2) {
					continue;
				}
				if(check_sum - arr[i].first == check_acc) {
					target_x = arr[i].second;
					break;
				}
			}
		}
		if(target_x == -1) {
			cout << -1 << endl;
		} else {
			for(int i =0;i<n;i++){
				if(i != check_acc_indx && i != target_x) {
					cout << orign[i] << " ";
				}
			}
			cout << endl;
		}
	}

	system("pause");
	return 0;
}