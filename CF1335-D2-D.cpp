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
	cin >> t;
	while(t--){
		for(int j=0;j<9;j++){
			string s;
			cin >> s;

			for(int i =0;i<9;i++){
				if(s[i] == '1'){
					s[i] = '2';
					break;
				}
			}

			cout << s << endl;
		}

	}
	

	system("pause");
	return 0;
}

