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

	string p = "qwertyuiopasdfghjkl;zxcvbnm,./";


	string s;

	char l;

	cin >> l;


	cin >> s;

	for(int i =0;i<s.size();i++){
		for(int j =0;j<p.size();j++){
			if(s[i] == p[j]){
				if(l == 'L'){
					s[i] = p[j+1];
				}else{
					s[i] = p[j-1];
				}
			}
		}
	}

	cout << s;
	

	system("pause");
	return 0;
}


