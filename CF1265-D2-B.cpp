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


		vector <bool> out(n,0);


		int a;


		vector <int> mp(n);

		vector <int> arr(n);

		int start_indx = -1;

		for(int i =0;i<n;i++){
			cin >> arr[i];

			mp[arr[i]-1] = i;
		}


		out[0] = true;

		out[n-1] = true;


		int sum_must = 1;
		int sum_is = 1;

		int l_i = mp[0];
		int r_i = mp[0];


		for(int i = 1;i<n-1;i++){

			sum_must += i+1;


			if(l_i == 0){
				sum_is += arr[r_i+1];

				r_i++;
			}
			else if(r_i == n-1){
				sum_is += arr[l_i-1];

				l_i--;
			}
			else{

				int p_l = arr[l_i-1];
				int p_r = arr[r_i+1];

				if(p_l < p_r){
					sum_is += p_l;
					l_i--;
				}else{
					sum_is += p_r;
					r_i++;
				}
				
			}



			if(sum_must == sum_is){
				out[i] = true;
			}

		}



		for(int i =0;i<n;i++){
			if(out[i]){
				cout << 1;
			}else{
				cout << 0;
			}
		}

		cout << endl;


	}
	

	system("pause");
	return 0;
}


