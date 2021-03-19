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

	bool flag =false;
	for(int i =0;i<s.size();i++){
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
			flag =true;
		}
	}

	if(flag){
		cout << "YES";
	}else{
		cout << "NO";
	}
	

	system("pause");
	return 0;
}

