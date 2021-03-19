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

bool customSort(tuple<int,string,int> a, tuple<int,string,int>  b) {
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
	
	int n;
	cin >> n;
	vector<tuple<int, string, int>> arr(n);
	for(int i =0;i<n;i++){
		int a;
		string s;
		cin >> a >> s;

		arr[i] = make_tuple(a,s,i+1);
	}
	sort(arr.begin(), arr.end());

	int min_indx = 0;
	int min_p = INT_MAX;
	for(int i =0;i<n;i++){
		int count2 = 0;
		int ones = 0;
		int zeros = 0;
		string s = get<1>(arr[i]);
		for(int j =0;j<s.size();j++){
			if(s[j] == '2'){
				count2++;
			}
			if(s[j] == '0'){
				zeros++;
			}
			if(s[j] == '1'){
				ones++;
			}
		}
		if(count2 > 1 && ones > 0 && zeros > 0){
			if(get<0>(arr[i]) < min_p) {
				min_indx = get<2>(arr[i]);
				min_p = get<0>(arr[i]);
			}
		}
	}
	cout << min_indx << endl;
	// system("pause");
	return 0;
}