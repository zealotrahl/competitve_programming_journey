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

	double xa,ya,xb,yb;

	double x,y;


	cin >> xa >> ya >> xb >> yb;



	int n;

	cin >> n;



	map <pair <double, double>, bool> mp;


	if(ya < yb){
		for(int i =ya; i<= yb; i++){

			mp[make_pair(xa, i)] = false;
			mp[make_pair(xb, i)] = false;

		}
	}else{
		for(int i =yb; i<= ya; i++){

			mp[make_pair(xa, i)] = false;
			mp[make_pair(xb, i)] = false;

		}
	}


	if(xa < xb){
		for(int i =xa; i<= xb;i++){
			mp[make_pair(i,ya)] = false;
			mp[make_pair(i, yb)] = false;
		}
	}else{
		for(int i =xb; i<= xa;i++){
			mp[make_pair(i,ya)] = false;
			mp[make_pair(i, yb)] = false;
		}
	}





	double r;

	for(int i =0;i<n;i++){
		cin >> x >> y >> r;

		for(auto x_v : mp){

			double dist = sqrt( (x - x_v.first.first)*(x-x_v.first.first) + (y - x_v.first.second)*(y- x_v.first.second));

			if(dist <= r){
				mp[x_v.first] = true;
			}
		}
	}


	int counter = 0;

	for(auto x_v : mp){
		if(x_v.second == false){

			counter++;
		}
	}

	cout << counter;
	

	system("pause");
	return 0;
}

