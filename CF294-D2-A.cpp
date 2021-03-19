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


	vector <int> arr(n);

	for(int i =0;i<n;i++)
		cin >> arr[i];

	int m;

	cin >> m;


	int x,y;

	for(int  i=0;i<m;i++){
		cin >> x >> y;





		if(x != 1){
			arr[x-2] += y-1;
		}

		if(x != n){
			arr[x] += (arr[x-1] - y);
		}

		arr[x-1] = 0;

	}

	for(int i =0;i<n;i++)
		cout << arr[i] << endl;
	

	system("pause");
	return 0;
}


