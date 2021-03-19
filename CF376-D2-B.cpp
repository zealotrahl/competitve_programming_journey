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

	vector <int> men(n+1, 0);

	int a,b,c;

	for(int i =0;i<m;i++){
		cin >> a >> b >> c;
		men[a] -= c;
		men[b] += c;
	}


	int sum = 0;

	for(int i =0;i<=n;i++){
		if(men[i] < 0)
			sum += men[i];
	}

	cout << abs(sum);
	

	system("pause");
	return 0;
}


