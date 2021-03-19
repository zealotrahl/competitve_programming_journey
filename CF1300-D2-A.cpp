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

		int sum = 0;
		bool zero = false;
		for(int i=0;i<n;i++){
			cin >> arr[i];

			sum += arr[i];
			if(arr[i] == 0)
				zero = true;
		}

		int steps = 0;

		if(sum != 0 && !zero){
			cout << steps << endl;
			continue;
		}else{
			if(zero){
				for(int i =0;i<n;i++){
					if(arr[i] == 0){
						arr[i] =1;
						sum++;
						steps++;
					}
				}
			}


			if(sum == 0){
				steps++;
			}

			cout << steps << endl;
		}

	}
	

	system("pause");
	return 0;
}


