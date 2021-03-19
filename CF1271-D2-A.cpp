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

	
	long long a,b,c,d,e,f;

	cin >> a >> b >> c >> d >> e >> f;

	long long ans = 0;

	if(e < f){
		long long num = min(min(b,c),d);
		ans += num*f;

		d -= num;

		ans += min(a,d)*e;
	}else{
		long long num = min(a,d);

		ans += num*e;

		d -= num;

		ans += min(min(b,c),d)*f;
	}

	cout << ans;

	system("pause");
	return 0;
}


