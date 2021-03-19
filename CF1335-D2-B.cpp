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
		int n,a,b;

		cin >> n >> a >> b;
		char c = 'a';
		string s = "";
		for(int i =0;i<n/b;i++){
			c = 'a' -1;
			for(int k = 0;k<b;k++){
				c++;
				s += c;
			}
		}
		c = 'a';
		for(int i =s.size();i<n;i++,c++)
			s += c;
		cout << s << endl;
	}
	

	system("pause");
	return 0;
}

