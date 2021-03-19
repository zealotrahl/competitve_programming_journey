#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


int hamming(string a, string b) {
	int d = 0;
	for (int i = 0; i < 7; i++) {
		if (a[i] != b[i]) d++;
	}
	return d;
}



map <string, int> mp;
mp["1110111"] = 0;
mp["0010010"] = 1;
mp["1011101"] = 2;
mp["1011011"] = 3;
mp["0111010"] = 4;
mp["1101011"] = 5;
mp["1101111"] = 6;
mp["1010010"] = 7;
mp["1111111"] = 8;
mp["1111011"] = 9;

vector<string> r_mp = {"1110111", "0010010", "1011101", "1011011", 
"0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};

vector <string> st;

string solve(int i, int k, string val){
	if(k < 0)
		return INT_MAX;
	if(k == 0){
		return val;
	}else{
		//for each dist
		for(auto m : mp){
			int dist = hamming(st[i], m.first);
			solve(i-1, k-dist, val + ((string)m.second));
		}
	}
}

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);


	int n;
	cin >> n;
	int k;
	cin >> k;
	string s;
	for(int i =0;i<n;i++){
		cin >> s;
		st.push_back(s);
	}


	// DP like knapsack
	// Total weight is "k"
	//

	system("pause");
	return 0;
}


