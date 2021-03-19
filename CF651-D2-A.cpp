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

	int a,b;

	cin >> a >> b;

	int ans = 0;

	while(a > 0 && b > 0){
		if(a <= b){
			if( b== 1)
				break;

			a++;
			b -= 2;
		}else{
			if(a == 1)
				break;
			b++;
			a-=2;
		}
		ans++;
	}
	cout << ans;
	

	system("pause");
	return 0;
}


