#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers




bool compare(tuple<double,int,int> a, tuple<double,int,int> b) 
{ 
	return ((get<0>(a)) < (get<0>(b))); 
} 

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int t;

	cin >> t;

	while(t--){

		int n;

		cin >> n;


		vector <tuple<double,int,int>> arr(n);

		int x,y;

		for(int i =0;i<n;i++){
			cin >> x >> y;

			double dist = sqrt(x*x + y*y);

			arr[i] = make_tuple(dist, x, y);
		}

		sort(arr.begin(), arr.end(), compare);

		string out = "";

		int cur_x = 0;
		int cur_y = 0;

		bool flag =true;
		for(int i =0;i<n;i++){
			x = get<1>(arr[i]);
			y = get<2>(arr[i]);

			if(x < cur_x || y < cur_y){
				flag = false;
				break;
			}else{

				for(int j=0;j<x-cur_x;j++){
					out += "R";
				}

				for(int j =0;j<y-cur_y;j++){
					out += "U";
				}


				cur_y = y;
				cur_x = x;

			}
		}

		if(!flag){
			cout << "NO\n";
		}else{
			cout << "YES\n";
			cout << out << endl;
		}

	}
	

	system("pause");
	return 0;
}


