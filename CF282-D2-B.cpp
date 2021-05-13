#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers




int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;

	cin >> n;

	long long a_s = 0;
	long long g_s = 0;
	int a,b;
	string out = "";
	for(int i =0;i<n;i++){
		cin >> a >> b;

		if(abs(g_s - (a_s+a)) > 500) {
			g_s += b;
			out += "G";
		} else {
			a_s += a;
			out += "A";
		}
	}
	// cout << out << endl;
	if(abs(a_s - g_s) > 500) {
		cout << -1 << endl;
	} else {
		cout << out << endl;
	}
	system("pause");
	return 0;
}


