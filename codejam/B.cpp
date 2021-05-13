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
//memset(s, 0, sizeof arr); //clear array of integers


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
	
	long long t;
	cin >> t;
	long long counter = 0;
	while(t--){
		counter++;
		long long x,y;
		cin >> x >> y;
		string s;
		cin >> s;
		long long ans = 0;
		long long n = s.size();
		for(long long i =0;i<n;i++){
			if(s[i] == '?') {
				long long current_f = 0;
				long long j = i;
				string pos = "";

				if(i > 0) {
					pos += s[i-1];
				}
				bool flag = true;
				while(j < n && s[j] == '?') {
					if(flag)
						pos += "J";
					else
						pos += "C";
					flag = !flag;
					j++;
				}
				if(j < n) {
					pos += s[j];
				}

				for(long long c = 1; c < pos.size(); c++) {
					if(pos[c] == 'C' && pos[c-1] == 'J') {
						current_f += y;
					} else if(pos[c] == 'J' && pos[c-1] == 'C') {
						current_f += x;
					}
				}
				pos = "";
				if(i > 0) {
					pos += s[i-1];
				}
				flag = false;
				j = i;
				while(j < n && s[j] == '?') {
					if(flag)
						pos += "J";
					else
						pos += "C";
					flag = !flag;
					j++;
				}
				if(j < n) {
					pos += s[j];
				}
				long long current_s = 0;
				for(long long c = 1; c < pos.size(); c++) {
					if(pos[c] == 'C' && pos[c-1] == 'J') {
						current_s += y;
					} else if(pos[c] == 'J' && pos[c-1] == 'C') {
						current_s += x;
					}
				}
				pos = "";
				if(i > 0) {
					pos += s[i-1];
				}
				j = i;
				while(j < n && s[j] == '?') {
					pos += "J";
					j++;
				}
				if(j < n) {
					pos += s[j];
				}
				long long current_j = 0;
				for(long long c = 1; c < pos.size(); c++) {
					if(pos[c] == 'C' && pos[c-1] == 'J') {
						current_j += y;
					} else if(pos[c] == 'J' && pos[c-1] == 'C') {
						current_j += x;
					}
				}
				pos = "";
				if(i > 0) {
					pos += s[i-1];
				}
				j = i;
				while(j < n && s[j] == '?') {
					pos += "C";
					j++;
				}
				if(j < n) {
					pos += s[j];
				}
				long long current_c = 0;
				for(long long c = 1; c < pos.size(); c++) {
					if(pos[c] == 'C' && pos[c-1] == 'J') {
						current_c += y;
					} else if(pos[c] == 'J' && pos[c-1] == 'C') {
						current_c += x;
					}
				}
				i = j;
				ans += min(current_j, min(current_c, min(current_s, current_f)));
			} else {
				long long add = 0;
				while(i < n && s[i] != '?') {
					if(i == 0){
						i++;
						continue;
					}
					if(s[i] == 'C' && s[i-1] == 'J') {
						add += y;
					} else if(s[i] == 'J' && s[i-1] == 'C') {
						add += x;
					}
					i++;
				}
				ans += add;
				i--;
			}
		}
		cout << "Case #" << counter << ": " << ans << endl;
	}

	system("pause");
	return 0;
}