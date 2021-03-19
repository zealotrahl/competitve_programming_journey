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
		int n,x,a,b;

		cin >> n >> x >> a >> b;

		if(a > b){
			int t = a;
			a = b;
			b = t;
		}


		while(a > 1 && x != 0){
			a--;
			x--;
		}


		while(b < n && x != 0){
			b++;
			x--;
		}

		

		int ans = abs(b-a);

		cout << ans << endl;





	}
	

	system("pause");
	return 0;
}



