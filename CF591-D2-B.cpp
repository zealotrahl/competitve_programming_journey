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
	string s;
	map<char,vector<int>> mp;
	cin >> s;

	for(int i =0; i < n; i++){
		if(mp.count(s[i])) {
			mp[s[i]].push_back(i);
		} else {
			mp[s[i]] = {i};
		}
	}
	for(int i =0; i< n; i++){
		char x,y;
		cin >> x >> y;

		if(mp.count(x)) {
			auto nodeHandler = mp.extract(x);
			nodeHandler.key() = y;
			if(mp.count(y)) {
				auto yHandler = mp.extract(y);
				yHandler.key() = x;
				mp.insert(std::move(yHandler));
			}
			mp.insert(std::move(nodeHandler));
		}
	}
	vector<pair<int,char>> ans_str;
	for(auto x : mp) {
		for(int i =0; i < x.second.size(); i++) {
			ans_str.push_back({x.second[i], x.first});
		}
	}
	sort(ans_str.begin(), ans_str.end());

	for(int i =0; i< n; i++) {
		cout << ans_str[i].second;
	}
	cout << endl;

	system("pause");
	return 0;
}