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

	int n,m;

	cin >> n >> m;

	vector <int> arr(n, 0);

	int a;

	for(int i =0;i<m;i++){
		cin >> a;

		for(int j = a-1;j<n;j++){
			if(arr[j] != 0)
				break;

			arr[j] = a;
		}
	}

	for(int i =0;i<n;i++)
		cout << arr[i] << " ";

	system("pause");
	return 0;
}


