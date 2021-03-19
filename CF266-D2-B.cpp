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

	int n,t;

	cin >> n >> t;

	string s;
	cin >> s;


	for(int i =0;i<t;i++){

		for(int j =0;j<n-1;j++){
			if(s[j] == 'B' && s[j+1] == 'G'){
				swap(s[j], s[j+1]);
				j++;
			}
		}

	}

	cout << s;
	

	system("pause");
	return 0;
}


