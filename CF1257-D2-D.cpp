#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers



bool cmp(int n, pair<int, int> const& p)
{
    // For instance...
    return ((p.first < n));
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

		vector <int> monsters(n);

		int monst_power = 0;

		for (int i=0;i<n;i++){
			cin >> monsters[i];

			monst_power = max(monst_power, monsters[i]);
		}

		int m;

		cin >> m;

		vector <pair<int,int>> heroes(m);

		int p, s;

		int max_power = INT_MIN;

		for(int i =0;i<m;i++){

			cin >> p >> s;

			max_power = max(max_power, p);

			heroes[i] = make_pair(p,s);
		}

		sort(heroes.begin(), heroes.end());

		if(monst_power > max_power){
			cout << -1 << endl;
		}else{

			int counter = 0;

			for(int i =0;i<n;i++){

				counter++;

				auto it = upper_bound(heroes.begin(), heroes.end(), monsters[i], cmp);


				int max_dist = 1;

				for(int j = it - heroes.begin() - 1; j < m;j++){

					int max_killed = 1;

					int endurance = heroes[j].second - 1;

					for(int k = i+1;k<n;k++){
						if(monsters[k] > heroes[j].first || endurance == 0){
							break;
						}else{
							max_killed++;
							endurance--;
						}
					}

					max_dist = max(max_dist, max_killed);
				}


				i += max_dist;

				if( i >= n-1)
					break;

				i--;
			}

			cout << counter << endl;

			

		}









	}
	

	system("pause");
	return 0;
}


