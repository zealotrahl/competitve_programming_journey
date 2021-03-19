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


	long long x0, y0;

	cin >> x0 >> y0;

	int k;

	cin >> k;

	long long x,y;

	long long shagov = 0;

	for(int i =0;i<k;i++){
		cin >> x >> y;

		long long min_change = 0;


		if(x == 0){
			min_change = INT_MAX;
		}else{
			if(x < 0){
				min_change = abs((x0-1)/x);
			}else{
				min_change = (n-x0)/x;
			}
		}

		if(y != 0){
			if(y < 0){
				min_change = min(min_change, abs((y0-1)/y));
			}else{
				min_change = min(min_change, (m-y0)/y);
			}
		}

		x0 += min_change*x;
		y0 += min_change*y;

		shagov += min_change;
	}

	cout << shagov;





	

	system("pause");
	return 0;
}

