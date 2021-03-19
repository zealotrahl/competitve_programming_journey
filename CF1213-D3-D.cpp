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

	int n,k;

	cin >> n >> k;

	vector <int> arr(n);

	map <int, int> mp;

	bool flag = false;

	for(int i =0;i<n;i++){
		cin >> arr[i];


		if(mp.count(arr[i]))
			mp[arr[i]]++;
		else
			mp[arr[i]] = 1;

		if(mp[arr[i]] >= k){
			flag = true;
		}
	}

	int ans = INT_MAX;


	if(flag){
		cout << 0;
	}else{


		for(int i =0;i<n;i++){

			int curr_count = 0;

			multiset <int> needs;

			int curr_min_n = INT_MAX;
			int curr_num = arr[i];
			int for_n_gen = INT_MAX;

			for(int j =0;j<n;j++){

				if(i == j)
					continue;

				int for_n_counter = 0;

				int num = arr[j];
				curr_num = arr[i];
 
				while(curr_num != num){
 
					if(curr_num > num){
						curr_num /= 2;
					}else{
						num /= 2;
					}
 
					for_n_counter++;
 
				}



				if(for_n_counter < for_n_gen){
					curr_min_n = curr_num;

					for_n_gen = for_n_counter;

				}


			}


			int for_n_counter_old = 0;

			int c_n = arr[i];



			while(c_n != curr_min_n){
				c_n /= 2;
				for_n_counter_old++;
			}


			for(int j =0;j<n;j++){

				if(i == j)
					continue;


				int for_n_counter = for_n_counter_old;
				int num = arr[j];

				curr_num = curr_min_n;
 			


				while(curr_num != num){
 
					if(curr_num > num){
						curr_num /= 2;
					}else{
						num /= 2;
					}
 
					for_n_counter++;
 
				}



				needs.insert(for_n_counter);
			}




			int p = 1;
			for(int x : needs){

				if(p == k)
					break;

				curr_count += x;
				p++;
			}


			ans = min(ans, curr_count);
		}

		cout << ans;

	}



	

	system("pause");
	return 0;
}


