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

	int x,y;

	cin >> x >> y;

	long long ans = 0;

	if(x == 3){
		ans += 100000;
	}else if(x == 2){
		ans += 200000;
	}else if(x == 1){
		ans += 300000;
	}
	

	if(y == 3){
		ans += 100000;
	}else if(y == 2){
		ans += 200000;
	}else if(y == 1){
		ans += 300000;
	}

	if(x == 1 && y == 1){
		ans += 400000;
	}

	cout << ans;

	system("pause");
	return 0;
}


