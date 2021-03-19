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
		int n;

		cin >> n;

		int a,b,c;

		cin >> a >> b >> c;

		string s;

		cin >> s;

		int f,r;

		f = 0;
		r = 0;

		vector<int> count(26);

		for (char x : s)
			count[x - 'A']++;
		
		int wins = min(a, count['S' - 'A']) + min(b, count['R' - 'A']) + min(c, count['P' - 'A']);

		if (2 * wins < n)
		{
			cout << "NO" << '\n';continue;
		}


		vector <char> ans(n);

		for(int i =0;i<n;i++){
			if(s[i] == 'R' && b){
				b--;
				ans[i] = 'P';
			}else if(s[i] == 'S' && a){
				a--;
				ans[i] = 'R';

			}else if(s[i] == 'P' && c){
				c--;
				ans[i] = 'S';
			}else{
				ans[i] = 'x';
			}
		}

		for(int i =0;i<n;i++){
			if(ans[i] == 'x'){
				if(a){
					a--;
					ans[i] = 'R';
				}else if(b){
					b--;
					ans[i] = 'P';
				}else if(c){
					c--;
					ans[i] = 'S';
				}else{
					break;
				}
			}
		}

		cout << "YES\n";
		for(int i=0;i<n;i++){
			cout << ans[i];
		}
		cout << endl;


	}
	

	system("pause");
	return 0;
}


