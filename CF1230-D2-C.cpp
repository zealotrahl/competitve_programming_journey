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

	int n,m;

	cin >> n >> m;


	int ans = 0;

	int a,b;

	for(int i =0;i<m;i++)
		cin >> a >> b;



	if(n < 7)
		cout << m;
	else
		cout << min(m,16);





	

	system("pause");
	return 0;
}


