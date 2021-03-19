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


		int a;

		set <int, std::greater<int>> nums;

		for(int i =0;i<n;i++){
			cin >> a;

			nums.insert(a);


		}

		vector <int> arr(nums.size());

		int i = 0;
		for(int x : nums){

			arr[i] = x;

			i++;
		}

		int p = nums.size();

		long long ans = 0;

		for(int i =0;i<p-1;i++){
			if(arr[i]&1)
				continue;
			else{
				while(!(arr[i]&1)){
					arr[i] >>= 1;


					ans++;

					if(nums.count(arr[i]))
						break;
				}
			}
		}

		while(!(arr[p-1]&1)){
			arr[p-1] >>= 1;
			ans++;
		}

		cout << ans << endl;

	}
	

	system("pause");
	return 0;
}



