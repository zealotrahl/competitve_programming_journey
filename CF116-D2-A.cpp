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

	int cur_pas = 0;
	int a,b;

	int max_num = INT_MIN;
	for(int i =0;i<n;i++){
		cin >> a >> b;
		cur_pas -= a;
		cur_pas += b;

		max_num = max(cur_pas, max_num);

	}

	cout << max_num;
	

	system("pause");
	return 0;
}


