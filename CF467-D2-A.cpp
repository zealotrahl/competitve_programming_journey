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

	int n;
	cin >> n;

	int p,q;

	int ans = 0;
	for(int i =0;i<n;i++){
		cin >> p >> q;

		if(q - p >= 2){
			ans++;
		}
	}
	cout << ans;




	

	system("pause");
	return 0;
}


