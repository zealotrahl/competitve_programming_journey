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

	int n,t,k,d;

	cin >> n >> t >> k >> d;

	if(k >= n){
		cout << "NO\n";
		return 0;
	}

	int odna_pech = ceil(1.0*n/k)*t;

	int uspeet = floor(1.0*d/t)*k;

	if(uspeet == 0)
		n -= k;
	else
		n -= uspeet;

	int dve_pechi = d;

	dve_pechi += ceil(1.0*n/(2*k))*t;


	if(odna_pech <= dve_pechi)
		cout << "NO";
	else
		cout << "YES";

	

	system("pause");
	return 0;
}


