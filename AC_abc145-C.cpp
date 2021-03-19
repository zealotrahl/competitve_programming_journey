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

	int n;

	cin >> n;

	vector <pair <long long, long long>> towns(n);

	long long a,b;

	for(int i =0;i<n;i++){
		cin >> a >> b;

		towns[i] = make_pair(a,b);
	}


	long double total_dist = 0;

	double j = 0;

	sort(towns.begin(), towns.end());

	do{
		j++;
		long double dist = 0;

		for(int i =0;i<n-1;i++){
			double x_dist = (towns[i].first - towns[i+1].first);
			double y_dist = (towns[i].second - towns[i+1].second);

			dist += hypot(x_dist, y_dist);

		}

		total_dist += dist;

		
	}while(next_permutation(towns.begin(), towns.end()));
	

	cout << setprecision(9) << total_dist/j;

	system("pause");
	return 0;
}


