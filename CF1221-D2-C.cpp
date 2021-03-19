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

	int q;

	cin >> q;


	int c,m,x;

	int ans;
	while(q--){


		cin >> c >> m >> x;

		int j = min(c,m);


		int ans = (c+m+x)/3;

		if(ans > j)
			ans = j;

		cout << ans << endl;

	}
	

	system("pause");
	return 0;
}


