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

	int h,w,n;

	cin >> h >> w >> n;


	if(h >= n || w >= n){
		cout << 1;
	}else{
		cout << (int)ceil(1.0*n/max(h,w));
	}
	

	system("pause");
	return 0;
}


