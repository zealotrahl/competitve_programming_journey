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

	while(n--){
		cin >> s;


		if(s.size() <= 10){
			cout << s << "\n";
		}else{
			cout << s[0] << s.size()-2 << s[s.size()-1] << "\n";
		}



	}
	

	system("pause");
	return 0;
}



