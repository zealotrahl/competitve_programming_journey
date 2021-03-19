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

	int x,y;

	cin >> x >> y;


	long long dp_x_f = 0;
	long long dp_x_s = 1;

	long long dp_y_f = 0;
	long long dp_y_s = 1;



	long long ans_x;
	long long ans_y;


	for(int i =2;i<=x+1;i++){
		ans_x = dp_x_f + dp_x_s;


		dp_x_s = dp_x_f;
		dp_x_f = ans_x;
	}

	for(int i =2;i<=y+1;i++){
		ans_y = dp_y_f + dp_y_s;

		dp_y_s = dp_y_f;
		dp_y_f = ans_y;
	}


	long long ans_mod = 1e9;
	ans_mod += 7;

	cout << ans_x%ans_mod << " " << ans_y%ans_mod << endl; 
	

	system("pause");
	return 0;
}


