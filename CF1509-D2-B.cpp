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
		string s;
		cin >> s;
		vector<int> t_arr;
		vector<int> m_arr;
		for(int i =0;i<n;i++){
			if(s[i] == 'T') {
				t_arr.push_back(i);
			} else {
				m_arr.push_back(i);
			}
		}
		int t_left_p = 0;
		int t_right_p = t_arr.size() - 1;
		int m_arr_p = 0;
		int counter = 0;
		while(true) {
			if(t_left_p == t_right_p ||
				!t_arr.size() || !m_arr.size() ||
				t_left_p >= t_arr.size() ||
				t_right_p >= t_arr.size() ||
				m_arr_p >= m_arr.size() ||
				t_arr[t_left_p] > m_arr[m_arr_p] || t_arr[t_right_p] < m_arr[m_arr_p]) {
				break;
			}
			t_left_p++;
			t_right_p--;
			m_arr_p++;
			counter++;
		}
		if(counter != n/3) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}

	system("pause");
	return 0;
}