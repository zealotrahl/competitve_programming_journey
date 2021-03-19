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
		long long n,k;
		cin >> n >> k;
		long long sum = (k-1)*(k-1);
		long long diff = n-sum;
		long long x = 1 + (k-1 - 1)*2;
		if((diff)&1 && diff > x){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	

	system("pause");
	return 0;
}


