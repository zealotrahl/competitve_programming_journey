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

	int n,m;

	cin >> n >> m;

	vector <int> arr(n);

	for(int i =0;i<n;i++){
		cin >> arr[i];
	}

	vector <int> ans(n);
	set <int> used;
	used.insert(arr[n-1]);
	ans[n-1] = 1;
	for(int i =n-2;i>=0;i--){
		if(used.count(arr[i])){
			ans[i] = ans[i+1];
		}else{
			ans[i] = ans[i+1] + 1;
			used.insert(arr[i]);
		}
	}

	int a;
	for(int i =0;i<m;i++){
		cin >> a;
		cout << ans[a-1] << endl;
	}
	

	system("pause");
	return 0;
}

