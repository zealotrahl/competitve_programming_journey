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

	int n;

	long long x;


	cin >> n >> x;

	char c;

	int d;

	int deti = 0;


	for(int i =0;i<n;i++){
		cin >> c >> d;

		if(c == '-'){
			if( d <= x)
				x -= d;
			else
				deti++;

		}else if(c == '+'){
			x += d;
		}

	}

	cout << x << " " << deti;
	

	system("pause");
	return 0;
}


