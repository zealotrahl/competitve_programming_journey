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
		int n;
		cin >> n;

		for(int i =2;i<=32;i++){
			int test_k = (1 << i);
			test_k--;
			if(n%test_k == 0){
				// cout << test_k << endl;
				cout << (n/test_k) << endl;
				break;
			}
		}
	}
	

	system("pause");
	return 0;
}


