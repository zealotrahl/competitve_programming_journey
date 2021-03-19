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

	int x1,x2,x3;

	cin >> x1 >> x2 >> x3;

	int tochka = 0;


	if((x1 < x2 && x1 > x3) || (x1 > x2 && x1 < x3)){
		tochka = x1;
	}else if((x2 < x1 && x2 > x3) || (x2 > x1 && x2 < x3)){
		tochka = x2;
	}else if((x3 < x1 && x3 > x2) || (x3 > x1 && x3 < x2)){
		tochka = x3;
	}else{
		tochka = x1;
	}

	int ans = abs(x1-tochka);
	ans += abs(x2-tochka);
	ans += abs(x3-tochka);

	cout << ans;
	

	system("pause");
	return 0;
}


