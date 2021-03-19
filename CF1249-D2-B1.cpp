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

	int q;

	cin >> q;

	while(q--){

		int n;

		cin >> n;

		vector <int> arr(n);

		for(int i=0;i<n;i++)
			cin >> arr[i];




		for(int i =0;i<n;i++){


			int j = arr[i] - 1;
			int counter = 1;

			while(j != i){

				j = arr[j] - 1;
				counter++;
			}

			cout << counter << " ";
		}

		cout << endl;


	}
	

	system("pause");
	return 0;
}


