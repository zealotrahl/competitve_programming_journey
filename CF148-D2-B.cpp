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

	int vp, vd, t, f,c;

	cin >> vp >> vd >> t >> f >> c;

	c -= vp*t;


	if(c <= 0 || vp >= vd){
		cout << 0;
		return 0;
	}


	

	system("pause");
	return 0;
}


