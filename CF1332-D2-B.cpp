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
		int n;

		cin >> n;

		vector <int> arr(n);
		for(int i =0;i<n;i++)
			cin >> arr[i];

		map <int,vector<int>> mp;
		for(int j =0;j<n;j++){
			for(int i =2;i<arr[j];i++){
				if(arr[j]%i == 0){
					mp[i].push_back(j);
					break;
				}
			}
		}
		vector <int> ans(n);

		int krask = 1;
		for(auto x : mp){
			for(int j = 0;j<x.second.size();j++){
				// cout << x.first << " " << x.second[j] << endl;
				ans[x.second[j]] = krask;
			}
			krask++;
		}

		cout << krask-1 << endl;

		for(int i =0;i<n;i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	

	system("pause");
	return 0;
}


