#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


long long facto(long long n){

	long long ans = 1;

	for(long long i=1;i<=n;i++){
		ans *= i;
	}

	return ans;
}


int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	long long ans = 0;


	long long n,m;

	cin >> n >> m;

	

	system("pause");
	return 0;
}


