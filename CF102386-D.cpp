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

	int n,k;

	cin >> n >> k;


	int a,b;

	for(int i =0;i<n;i++){
		cin >> a >> b;

		if(a == k)
			k = b;
		else if(b == k)
			k = a;
	}

	cout << k;
	

	system("pause");
	return 0;
}

