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

	cin >> t;


	while(t--){
		int n,m;

		cin >> n >> m;


		vector <pair <int, int>> arr(n);

		int a;

		for(int i =0;i<n;i++){
			cin >> a;
			arr[i] = make_pair(a, i);
		}


		int count = 0;




		vector <pair <int, int>> ans;



		if(n == 2 || m < n){

			cout << -1 << endl;


		}else{

			for(int i =0;i<n-1;i++){
				count += arr[i].first + arr[i+1].first;
				ans.push_back(make_pair(arr[i].second+1, arr[i+1].second+1));
			}

			count += arr[n-1].first + arr[0].first;
			ans.push_back(make_pair(arr[n-1].second+1, arr[0].second+1));


			int f_min = 0;
			int s_min = 0;

			for(int i =1;i<n;i++){
				
				if(arr[i].first < arr[f_min].first){
					s_min = f_min;
					f_min = i;
				}else if(arr[i].first < arr[s_min].first && arr[i].first != arr[f_min].first)
					s_min = i;
			}

			for(int i =n;i<m;i++){
				count += arr[f_min].first + arr[s_min].first;

				ans.push_back(make_pair(arr[f_min].second+1, arr[s_min].second+1));
			}


			cout << count << endl;


			for(int i =0;i<ans.size();i++){
				cout << ans[i].first << " " << ans[i].second << endl;
			}

		}





	}
	

	system("pause");
	return 0;
}


