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

	int a,b;

	cin >> a >> b;



	if(a > b){
		cout << b << " " << (a-b)/2;
	}else if(a < b){
		cout << a << " " << (b-a)/2;
	}else{
		cout << a << " " << 0;
	}
	

	system("pause");
	return 0;
}


