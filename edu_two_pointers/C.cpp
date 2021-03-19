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
	
	int n,m;
	cin >> n >> m;
	vector<int> arr_n(n);
	vector<int> arr_m(m);

	for(int i =0; i < n;i++){
		cin >> arr_n[i];
	}

	for(int i =0;i<m;i++){
		cin >> arr_m[i];
	}

	int j = 0;
	long long counter = 0;
	
	for(int i =0;i<n;i++){
		long long count_n = 0;
		int count_n_indx = i;
		while(arr_n[i] == arr_n[count_n_indx]){
			i++;
			count_n++;
		}
		i--;
		long long count_m = 0;

		while(j < m && arr_m[j] <= arr_n[count_n_indx]) {
			if(arr_m[j] == arr_n[count_n_indx]) {
				count_m++;
			}
			j++;
		}
		// cout << count_m << " " << count_n << endl;
		counter += (count_n * count_m);
	}
	cout << counter << endl;

	system("pause");
	return 0;
}