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

	int n;

	cin >> n;

	string s;

	cin >> s;

	set <char> st;


	for(int i =0;i<n;i++){
		if(s[i] < 97)
			s[i] += 32;

		st.insert(s[i]);
	}

	if(st.size() == 26){
		cout << "YES";
	}else{
		cout << "NO";
	}
	

	system("pause");
	return 0;
}


