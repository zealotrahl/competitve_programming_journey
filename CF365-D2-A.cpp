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

	int n,k;

	cin >> n >> k;

	string s;

	int counter = 0;


	for(int i =0;i<n;i++){
		cin >> s;

		bool flag = true;

		set <int> st;
		for(int j = 0;j<s.size();j++){
			int p = s[j] - '0';

			if(p <= k)
				st.insert(p);
		}

		if(st.size() == k+1)
			counter++;
	}

	cout << counter;
	

	system("pause");
	return 0;
}


