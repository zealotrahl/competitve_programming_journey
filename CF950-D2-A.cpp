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

	int l,r,a;

	cin >> l >> r >> a;

	int t = min(l,r);

	int ans;

	if(l < r){
		if(l + a > r){
			ans = r+ (l + a - r)/2;
		}else{
			ans = l + a;
		}
	}else if(l > r){
		if(r + a > l){
			ans = l+ (r + a - l)/2;
		}else{
			ans = r + a;
		}

	}else{
		ans = l+a/2;
	}



	cout << ans*2;
	

	system("pause");
	return 0;
}


