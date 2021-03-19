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
		vector <int> brr(n);

		for(int i =0;i<n;i++){
			cin >> arr[i];
		}

		for(int i =0;i<n;i++)
			cin >> brr[i];


		bool used = false;

		int diff = 0;

		bool more_than = false;

		bool breaked = false;

		for(int i =0;i<n;i++){

			if(arr[i] > brr[i]){
				more_than = true;
				break;
			}

			if(arr[i] != brr[i]){

				if(breaked){
					more_than = true;
					break;
				}

				if(used == false){
					used = true;

					diff = brr[i] -arr[i];
				}else{

					if((brr[i] - arr[i]) != diff){
						more_than = true;
						break;
					}

				}

			}else if(used && arr[i] == brr[i]){
				breaked = true;
			}
		}

		if(more_than){
			cout << "NO\n";
		}else{
			cout << "YES\n";
		}

	}

	system("pause");
	return 0;
}


