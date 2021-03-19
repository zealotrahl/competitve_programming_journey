#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers



void minimize(int &a, int b) { a = std::min(a, b); }
void maximize(int &a, int b) { a = std::max(a, b); }

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;

	cin >> n;

	int ans = 0;
	string s;
	cin >> s;
	int check;
	cin >> check;
	char p;
	cin >> p;

	bool first = true;

	int mx = 2 * 1000 * 1000 * 1000;
	int mn = -mx;

	while(n--){
		cin >> s >> check >> p;

		if (p == 'N') {
			if(s == ">=") s = "<";
			else if(s == ">") s = "<=";
			else if(s == "<=") s = ">";
			else if(s == "<") s = ">=";
		}

		if (s == ">=") maximize(mn, x);
		else if (s == ">") maximize(mn, x + 1);
		else if (s == "<=") minimize(mx, x);
		else minimize(mx, x - 1);

	}

	if (mn <= mx) cout << mn;
	else cout << "Impossible";

	system("pause");
	return 0;
}

