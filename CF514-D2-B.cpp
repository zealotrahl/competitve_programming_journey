#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers




pair <double, double> dist(double x, double y){
	double len = sqrt((x)*(x) + (y)*(y));


	int sign = 1;

	if((x <= 0 && y <= 0) || (x>=0 && y >= 0)){
		return make_pair(abs(x/len), abs(y/len));
	}else if((x > 0 && y < 0) || (x < 0 && y > 0)){
		if(x > 0)
			x *= -1;

		if(y > 0)
		y *= -1;

		return make_pair(x/len, y/len);
	}
}


int main(){

	int n;

	double x1, y1;

	set <pair<double,double>> ans;

	cin >> n >> x1 >> y1;

	double x,y;

	for(int i =0;i<n;i++){

		cin >> x >> y;

		x -= x1;
		y -= y1;

		ans.insert(dist(x,y));
	}


	cout << ans.size();
	

	system("pause");
	return 0;
}


