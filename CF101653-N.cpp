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

	int n,t;

	cin >> t;




	while(t--){
		vector <pair<int,int>> arr(1001);
		vector <bool> used(1001);

		cin >> n;

		int a;

		for(int i =0;i<n;i++){

			cin >> a;


			if(used[a])
				arr[a].first++;
			else{
				arr[a] = make_pair(1, a);
				used[a] = true;
			}
		}

		sort(arr.rbegin(), arr.rend());

		int i =0;


		while(i < 1001 && arr[i].first == arr[0].first)
			i++;

		if(arr[i].first < arr[0].first)
			i--;

		cout << arr[i].second << "\n";
	}


	

	system("pause");
	return 0;
}

