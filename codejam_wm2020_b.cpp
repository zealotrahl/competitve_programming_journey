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

	int test_case = 0;
	while(t--){
		test_case++;
		int n;
		cin >> n;
		char ans[n+1];
		ans[n] = '\0';

		vector <int> permut(n);

		for(int i =0;i<n;i++)
			cin >> permut[i];


		bool flag= true;
		for(int i=0;i<n;i++){
			if(flag){
				ans[permut[i] -1] = 'L';
			}else{
				ans[permut[i] -1] = 'R';
			}

			flag = !flag;
		}

		cout << ans << endl;
		printf("Case #%d: %s\n", test_case, ans);
	}
	

	system("pause");
	return 0;
}

