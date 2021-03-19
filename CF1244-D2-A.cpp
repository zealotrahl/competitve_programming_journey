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

	int a,b,c,d,k;

	while(t--){
		cin >> a >> b >> c >> d >> k;

		int x = ceil(1.0*a/c);
		int y = ceil(1.0*b/d);

		if(x + y > k){
			cout << -1 << "\n";
		}else{
			cout << x << " " << y << "\n";
		}


	}
	

	system("pause");
	return 0;
}


