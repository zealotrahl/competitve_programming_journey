#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers



vector <int> prefix(1e5+1);
int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	string s;
	cin >> s;

	int n,m;

	n = s.size();

	if(s[0] == s[1])
		prefix[0] = 1;
	else
		prefix[0] = 0;

	for(int i =1;i<n;i++){
		if(s[i] == s[i-1])
			prefix[i] = prefix[i-1] + 1;
		else
			prefix[i] = prefix[i-1];
	}

	if(s[n-2] == s[n-1])
		prefix[n-1] = prefix[n-2] + 1;
	else
		prefix[n-1] = prefix[n-2];

	cin >> m;

	int l,r;
	for(int i =0;i<m;i++){
		cin >> l >> r;

			cout << prefix[r-1] - prefix[l-1] << endl;
	}
	

	system("pause");
	return 0;
}


