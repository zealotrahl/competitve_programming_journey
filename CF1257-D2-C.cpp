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

	int t;

	cin >>t;

	while(t--){
		int n;

		cin >> n;

		vector <int> arr(n);

		for(int i =0;i<n;i++){
			cin >> arr[i];
		}



		
		map <int, int> was;

		map <int, int> min_dist;

		bool pair = false;

		for(int i =0;i<n;i++){
			if(was.count(arr[i])){

				if(min_dist.count(arr[i])){
					min_dist[arr[i]] = min(min_dist[arr[i]], i - was[arr[i]]);
				}else{
					min_dist[arr[i]] = i - was[arr[i]];
				}

				pair = true;
				was[arr[i]] = i;
			}else{
				was[arr[i]] = i;
			}
		}

		int out = -1;

		if(n ==1 || pair == false){
			cout << -1 << endl;
		}else{

			out = INT_MAX;

			for( auto el : min_dist){
				out = min(out, el.second + 1);
			}

			cout << out << endl;
		}



	



	}
	

	system("pause");
	return 0;
}


