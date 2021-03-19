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
		string s;
		cin >> s;
		int n = s.size();
		bool t_f,s_f,f_f;
		t_f = s_f = f_f = false;
		set <char> check;
		for(int i =0;i<n;i++){
			if(s[i] == '3'){
				t_f = true;
			}else if(s[i] == '2'){
				s_f = true;
			}else if(s[i] == '1'){
				f_f = true;
			}
			if(t_f && s_f && f_f)
				break;
		}

		if(!t_f || !s_f || !f_f){
			cout << 0 << endl;
			continue;
		}
		int cur_length = 1;
		int ans = INT_MAX;
		char first_en = s[0];
		int first_indx =0;
		check.insert(s[0]);
		int sec_indx = 0;
		char sec_en = 0;

		for(int i =1;i<n;i++){
			if(check.size() == 1){
				if(check.count(s[i])){
					first_indx = i;
					continue;
				}
				else{
					check.insert(s[i]);
					sec_indx = i;
					sec_en = s[i];
					cur_length++;
					continue;
				}
			}
			if(check.size() == 2){
				// cout << cur_length << " " << i << endl;
				if(check.count(s[i])){
					if(s[i] == sec_en){
						sec_indx = i;
					}else if(s[i] == first_en){
						first_indx = i;
					}
					int dist = abs(sec_indx - first_indx) +1;
					if(dist <= cur_length){
						cur_length = dist;
						// cout << cur_length << endl;
						continue;
					}
					cur_length++;
				}else{
					check.clear();
					cur_length++;
					ans = min(ans, cur_length);
					cur_length = 1;
					check.insert(sec_en);
					first_en = sec_en;
					first_indx = sec_indx;
					i = sec_indx;
				}
			}
		}
		cout << ans << endl;
	}
	system("pause");
	return 0;
}