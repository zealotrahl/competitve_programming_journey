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


	vector <tuple <int, int, int>> arr(n);

	int x,y,z;

	for(int i =0;i<n;i++){
		cin >> x >> y >> z;

		arr[i] = make_tuple(x,y,z);
	}



	vector <bool> done(n,false);

	vector <pair<int,int>> ans;

	int p = 0;

	for(int i =0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(i == j)
				continue;

			p = j;

			for(int c=0;c<n;c++){
				if(c == i || c == p)
					continue;

				int ix = get<0>(arr[i]);
				int iy = get<1>(arr[i]);
				int iz = get<2>(arr[i]);

				int jx = get<0>(arr[j]);
				int jy = get<1>(arr[j]);
				int jz = get<2>(arr[j]);

				int cx = get<0>(arr[c]);
				int cy = get<1>(arr[c]);
				int cz = get<2>(arr[z]);

				if(cx <= max(ix, jx) && cx >= min(ix,jx) && cy <= max(jy, iy) && cy >= min(jy, jx) && cz <= max(iz, jz) && cz >= min(iz, jz)){

					p = c;
				}
			}

			if(!done[i] && !done[p]){
				ans.push_back(make_pair(i+1,p+1));
				done[i] = true;
				done[p] = true;
				break;
			}
		}
	}

	for(int i =0;i<ans.size();i++){
		cout << ans[i].first << " " << ans[i].second << "\n";
	}
	

	system("pause");
	return 0;
}


