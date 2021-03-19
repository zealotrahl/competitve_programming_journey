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

	long long n,sx,sy;

	cin >> n >> sx >> sy;

	vector <pair<long long,long long>> arr(n);

	for(int i =0;i<n;i++){
		cin >> arr[i].first >> arr[i].second;
	}

	vector <long long> initial_dist(n);

	for(int i =0;i<n;i++){
		long long x,y;

		x = arr[i].first;
		y = arr[i].second;

		long long dist = abs(sx-x)+abs(sy-y);

		initial_dist[i] = dist;
	}

	long long x_s, y_s;

	long long ans = 0;

	pair<long, long> coordinate;

	for(int j =0;j<4;j++){
		int counter = 0;

		if(j==0){
			x_s = sx+1;
			y_s = sy;
		}else if(j == 1){
			x_s = sx-1;
			y_s = sy;
		}else if(j == 2){
			x_s = sx;
			y_s = sy+1;
		}else{
			x_s = sx;
			y_s = sy-1;
		}

		for(int i =0;i<n;i++){
			long long x,y;

			x = arr[i].first;
			y = arr[i].second;

			long long long_in_dist = initial_dist[i];

			long long dist = abs(x_s-x)+abs(y_s-y);

			if(dist < long_in_dist){
				counter++;
			}
		}

		if(counter > ans){
			ans = counter;
			coordinate = make_pair(x_s, y_s);
		}
	}

	cout << ans << endl;
	cout << coordinate.first << " " << coordinate.second;


	




	system("pause");
	return 0;
}


