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
		int a,b,c, r;

		cin >> a >> b >> c >> r;
		

		if(a > b){
			int temp = a;
			a = b;
			b = temp;
		}


		int ans = 0;

		int c_left = c-r;
		int c_right = c+r;


		if(c_left <= a && c_right >= b){
			ans = 0;
		}else if(c_left > a && c_right >= b){
			ans = min(c_left,b) - a;
		}else if(c_left <= a && c_right < b){
			ans = b - max(a,c_right);
		}else if(c_left > a && c_right < b){
			ans = (c_left - a) + (b - c_right);
		}


		cout << ans << endl;

	}
	system("pause");
	return 0;
}


