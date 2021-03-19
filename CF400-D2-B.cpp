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

	int n,m;

	cin >> n >> m;

	string s;

	bool flag = false;

	set <int> ans;
	for(int i =0;i<n;i++){
		cin >> s;

		int gnomik = -1;
		int konfeta = -1;

		for(int j=0;j<m;j++){

			if(s[j] == 'G'){
				gnomik = j;
			}else if(s[j] == 'S'){
				konfeta = j;
			}
		}


		if(gnomik > konfeta){
			flag = true;
		}else
			ans.insert(konfeta - gnomik);
	}

	if(flag){
		cout << -1;
	}else{
		cout << ans.size();
	}
	

	system("pause");
	return 0;
}

