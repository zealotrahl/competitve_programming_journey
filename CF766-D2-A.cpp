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

	string s1,s2;

	cin >> s1 >> s2;


	if(s1.size() != s2.size()){
		cout << max(s1.size(), s2.size());
	}else{
		
		if(s1.find(s2) != string::npos){
			cout << -1;
		}else{
			cout << s1.size();
		}


	}
	

	system("pause");
	return 0;
}

