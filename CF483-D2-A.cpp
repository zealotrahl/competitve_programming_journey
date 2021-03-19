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

	long long l,r;

	cin >> l >> r;


	if(r-l < 2){
		cout << -1;
	}else{

		if(r-l == 2){


			if(__gcd(l,l+1) == 1 && __gcd(l, l+2) == 1 && __gcd(l+1, l+2) == 1)
				cout << -1;
			else
				cout << l << " " << l+1 << " " << l+2;
		}else{
			if(l&1){
				cout << l+1 << " " << l+2 << " " << l+3;
			}else{
				cout << l << " " << l+1 << " " << l+2;
			}
		}

		
	}
	

	system("pause");
	return 0;
}

