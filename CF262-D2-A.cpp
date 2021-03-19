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

	int n,k;

	cin >> n >> k;

	string s;

	int ans = 0;

	for(int i =0;i<n;i++){
		cin >> s;

		int counter = 0;

		for(int j =0;j<s.size();j++){
			if(counter > k)
				break;

			if(s[j] == '4' || s[j] == '7')
				counter++;
		}

		if(counter <= k)
			ans++;

	}

	cout << ans;
	

	system("pause");
	return 0;
}

