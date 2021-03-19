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

	string s;

	cin >> s;


	int counter = INT_MIN;

	for(int i =0;i<s.size();i++){

		int j = 0;
		char p = s[i];

		while(s[i] == p && i < s.size()){
			j++;
			i++;
		}
		counter = max(counter, j);

		if(i == s.size() -1)
			break;

		i--;
	}

	cout << counter;
	

	return 0;
}



