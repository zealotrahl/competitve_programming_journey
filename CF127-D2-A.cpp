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

	int n,k;

	cin >> n >> k;

	double x0,y0;

	cin >> x0 >> y0;

	double x,y;

	double took = 0;

	for(int i =1;i<n;i++){
		cin >> x >> y;


		took += sqrt((x-x0)*(x-x0) + (y-y0)*(y-y0));

		x0 = x;
		y0 = y;
	}

	took *= k;

	took /= 50;

	printf("%0.7lf",took);
	

	system("pause");
	return 0;
}
