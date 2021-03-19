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

	int n;

	cin >> n;

	string s;

	cin >> s;


	int ans = 0;






	for(int i=1;i<n;i+=2){
		if(s[i] == s[i-1]){
			if(s[i] == 'a'){
				s[i-1] = 'b';
			}else{
				s[i-1] = 'a';
			}

			ans++;
		}
	}


	cout << ans << endl;
	cout << s << endl;
	

	system("pause");
	return 0;
}


