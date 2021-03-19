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
	cin >>t;

	while(t--){
		long long n,s;

		cin >> n >> s;

		vector <long long> arr(n);

		bool all_big = true;

		for(int i =0;i<n;i++)
			cin >> arr[i];

		long long sum = 0;


		for(int i =0;i<n;i++){
			sum += arr[i];

			if(arr[i] <= s){
				all_big = false;
			}
		}

		if(sum <= s || all_big){
			cout << 0 << endl;
			continue;
		}

		long long cur_sum = arr[0];
		long long max_el = arr[0];
		int max_el_index = 0;


		for(int i =1;i<n;i++){

			
			if(arr[i] > max_el){
				max_el = arr[i];
				max_el_index = i;
			}
			
			if(arr[i] + cur_sum > s){
				break;
			}

			cur_sum += arr[i];


		}

		cout << max_el_index+1 << endl;
	}
	

	system("pause");
	return 0;
}

