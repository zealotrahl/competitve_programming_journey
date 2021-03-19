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
		string s;


		cin >> s;

		int n = s.size();
		char a = 'F';
		if(s[n-1] == 'o' && s[n-2] == 'p'){
			a = 'F';
		}else if((s[n-1] == 'u' && s[n-2] == 's' && s[n-3] == 'e' && s[n-4] == 'd') ||
			(s[n-1] == 'u' && s[n-2] == 's' && s[n-3] == 'a' && s[n-4] == 'm')){
			a = 'J';
		}else if(s[n-1] == 'a' && s[n-2] == 'd' && s[n-3] == 'i' && s[n-4] == 'n' && s[n-5] == 'm')
			a = 'K';

			if(a == 'F'){
				cout << "FILIPINO" << endl;
			}else if(a == 'J'){
				cout << "JAPANESE" << endl;
			}else{
				cout << "KOREAN" << endl;
			}
	}
	

	system("pause");
	return 0;
}


