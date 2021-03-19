#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


int s[200][200001];

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
		vector <int> nums(200, 0);
		vector <int> arr(n);

		vector <vector<pair<int,int>>> test_middles(200);

		for(int i =0;i<n;i++){
			cin >> arr[i];
			arr[i]--;
			s[arr[i]][i] += 1;
			nums[arr[i]]++;
		}
		for(int i = 0; i < 200; i++){
			for(int j = 1; j <= n; j++){
				s[i][j] += s[i][j - 1];
			}
		}

		int ans = 0;

		for(int i =0;i<200;i++){
			ans = max(ans, nums[i]);

			//find starting middles
			for(int k = 0;k<n;k++){
				if(arr[k] == i){
					int left_a = k;

					while(k < n && arr[k] == i)
						k++;

					if(k == n || arr[k] != i){
						k--;
					}

					int right_a = k;
					test_middles[i].push_back(make_pair(left_a, right_a));
				}
			}
		}

		for(int i =0;i<200;i++){
			for(int j =0;j<test_middles[i].size();j++){

				int left_p = test_middles[i][j].first;
				int right_p = test_middles[i][j].second;

				int cur_dist = right_p - left_p + 1;

				for(int c =0;c<200;c++){
					if(c == i){
						continue;
					}

					int count_left = s[c][left_p];
					int count_right = (s[c][n-1] - s[c][right_p]);
					

					int min_ls = min(count_left, count_right);
					
					
					ans = max(ans, cur_dist + extra_i + 2*min_ls);
				}
			}

		}

		cout << ans << endl;
	}
	

	system("pause");
	return 0;
}

