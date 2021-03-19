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

	long long n;

	cin >> n;
	long long ans = 0;

	if(n&1){
		n++;

		ans = -1*ceil(n/2);
	}else{
		n++;

		ans = ceill(n/2);
	}
	

	cout << ans;

	system("pause");
	return 0;
}


