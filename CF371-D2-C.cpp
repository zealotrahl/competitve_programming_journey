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

long long need_b, need_s, need_c;
long long have_b, have_s, have_c;
long long price_b, price_s, price_c;
long long money;


bool canBuild(long long n) {
	long long left_b, left_c, left_s;
	long long minBuilt = INT_MAX;
	long long curr_money = money;
	if(need_b) {
		minBuilt = have_b/need_b;
	}
	if(need_c) {
		minBuilt = min(minBuilt, have_c/need_c);
	}
	if(need_s) {
		minBuilt = min(minBuilt, have_s/need_s);
	}
	left_b = have_b - minBuilt*need_b;
	left_c = have_c - minBuilt*need_c;
	left_s = have_s - minBuilt*need_s;

	long long left = n- minBuilt;
	if(left <= 0) {
		return true;
	}
	// cout << left << endl;
	if(left_b < need_b*left) {
		if(curr_money - left*price_b*need_b + left_b*price_b < 0) {
			return false;
		}
		curr_money = curr_money - left*price_b*need_b + left_b*price_b;
	}

	if(left_c < need_c*left) {
		if(curr_money - left*price_c*need_c + left_c*price_c < 0) {
			return false;
		}
		curr_money = curr_money - left*price_c*need_c + left_c*price_c;
	}

	if(left_s < need_s*left) {
		if(curr_money - left*price_s*need_s + left_s*price_s < 0) {
			return false;
		}
	}

	return true;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	
	string s;
	cin >> s;
	need_b = need_s = need_c = 0;

	for(int i =0;i<s.size();i++){
		if(s[i] == 'B') {
			need_b++;
		} else if(s[i] == 'S'){
			need_s++;
		} else {
			need_c++;
		}
	}

	cin >> have_b >> have_s >> have_c;
	cin >> price_b >> price_s >> price_c;
	cin >> money;

	long long left = 0;
	long long right = 1e13;

	for(long long jump =0; jump < 200;jump++) {
		// cout << left << " " << right << endl;
		long long middle = (left + right)/2;
		if(canBuild(middle)) {
			left = middle;
		} else {
			right = middle;
		}
	}

	cout << left << endl;

	system("pause");
	return 0;
}