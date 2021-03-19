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

	vector <pair<int,int>> arr(n);

	for(int i =0;i<n;i++)
		cin >> arr[i].first >> arr[i].second;

	bool ans = false;

	for(int i =0;i<n;i++){
		int spit = arr[i].first + arr[i].second;

		for(int j=0;j<n;j++){
			if(i == j)
				continue;

			if(spit == arr[j].first && arr[i].first == arr[j].first + arr[j].second){
				ans = true;
				break;
			}
		}
		if(ans)
			break;
	}

	cout << (ans ? "YES" : "NO") << endl;
	

	system("pause");
	return 0;
}

