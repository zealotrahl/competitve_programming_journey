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
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	
	string s;
	cin >> s;

	bool flag = true;

	vector<string> twos;
	vector<string> threes;

	for(int i =1;i<s.size();i++){	
		 if(s[i] == s[i-1]){
		 	char c = s[i-1];
		 	char c2 = s[i];

		 	string t = "";
		 	t += c;
		 	t += c2;
		 	twos.push_back(t);
		} 
		if(i+1 < s.size() && s[i-1] == s[i+1]){
			char c = s[i-1];
			char c2 = s[i];
			char c3 = s[i+1];

			string t = "";
			t += c;
			t += c2;
			t += c3;
			threes.push_back(t);
		}
	}
	sort(threes.begin(), threes.end());
	sort(twos.begin(), twos.end());

	if(twos.size() == 0 && threes.size() == 0)
		cout << "-1" << endl;
	else{
		if(twos.size())
			cout << twos[0] << endl;
		else
			cout << threes[0] << endl;
	}

	system("pause");
	return 0;
}