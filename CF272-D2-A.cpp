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

	int n;

	cin >> n;


	int sum = 0;
	int a;

	for(int i =0;i<n;i++){
		cin >> a;
		sum += a;
	}

	int ans = 0;

	n++;

	for(int i =1;i<=5;i++){
		sum += i;

		if(sum%n != 1){
			ans++;
		}

		sum -= i;
	}

	cout << ans;
	

	system("pause");
	return 0;
}
