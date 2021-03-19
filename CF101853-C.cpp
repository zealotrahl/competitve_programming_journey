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


	int t;

	cin >> t;


	int n;

	int a_val, b_val;

	int a[100005];
	int b_indx[100005];


	while(t--){
		cin >> n;



		for(int i =0;i<n;i++){
			cin >> a_val;

			a_val--;
			a[i] = a_val;

		}

		for(int i=0;i<n;i++){
			cin >> b_val;

			b_val--;

			b_indx[b_val] = i;
		}


		long long ans = 0;


		int last_bindx = -1;

		for(int i  =0;i<n;i++){
			if(b_indx[a[i]] < i)
				continue;

			if(b_indx[a[i]] == i && i < last_bindx){
				ans--;

				continue;
			}

			if(b_indx[a[i]] == i)
				continue;

			ans += abs(i - b_indx[a[i]]);

			last_bindx = b_indx[a[i]];

		}


		cout << ans << "\n";





	}
	

	system("pause");
	return 0;
}


