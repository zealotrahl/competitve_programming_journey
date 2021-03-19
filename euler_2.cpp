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

	long long a = 0;
	long long b = 1;

	long long c;

	long long count = 0;
	
	while(true){
		c = a + b;
		if(c > 4000000){
			break;
		}
		if(!(c&1)){
			count += c;
		}
		a = b;
		b = c;
	}

	cout << count;
	

	system("pause");
	return 0;
}

