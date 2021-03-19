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

		vector <long long> arr(n);

		for(int i =0;i<n;i++)
			cin >> arr[i];

		long long k = 0;

		long long m = INT_MIN;


		long long sum = 0;
		int count = 0;



		for(int i =0;i<n;i++){
			if(arr[i] == -1){

				if(i != 0 && arr[i-1] != -1){
					sum += arr[i-1];

					count++;
				}

				if(i != n-1 && arr[i+1] != -1){
					sum += arr[i+1];

					count++;
				}
			}
		}



		if(count == 0){
			cout << 0 << " " << 5;
		}else{

			int ans = round(1.0*sum/count);


			int res = ans, min = INT_MAX;
			int mxx = INT_MIN;

			for (int x = max(0, ans - 1); x <= ans + 1; x++) {
			      int mxx = 0;
			      for (int i = 0; i < n - 1; i++) {
			          int x1 = arr[i], x2 = arr[i + 1];
			          if (x1 < 0)
			              x1 = x;
			          if (x2 < 0)
			              x2 = x;
			          mxx = max(mxx, abs(x1 - x2));
			      }
			      if (mxx < min) {
			          min = mxx;
			          res = x;
			      }
			  }






			   cout << min << ' ' << res;
		}

		cout << endl;
	}
	

	system("pause");
	return 0;
}


