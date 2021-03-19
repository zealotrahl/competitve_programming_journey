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

	int t;
	cin >>t;

	while(t--){
		string s;
		cin >> s;

		int counter = 1;
		for(int i =0;i<s.size();i++){
			int cur_counter = 1;
			while(s[i] == 'L'){
				cur_counter++;
				i++;
			}
			counter = max(counter, cur_counter);
		}
		cout << counter << endl;
	}
	

	system("pause");
	return 0;
}


