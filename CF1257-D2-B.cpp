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
		int x,y;

		cin >> x >> y;


		if(x >= y){
			cout << "YES\n";
		}else{
			if(x == 1){
				cout << "NO\n";
			}else if((x == 2 && (y != 1 && y != 3))){
				cout << "NO\n";
			}else if(x == 3 && y > 3){
				cout << "NO\n";
			}else{
				cout << "YES\n";
			}
		}
	}
	

	system("pause");
	return 0;
}


