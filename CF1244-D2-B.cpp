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
		string s;

		cin >> n;

		cin >> s;

		int count_ones = 0;


		for(int i =0;i<s.size();i++)
			if(s[i] == '1')
				count_ones++;

		int ans = 0;

		if(count_ones == 0){
			cout << n << "\n";
		}else{
			if(s[0] == '1' || s[n-1] == '1'){
				cout << 2*n << "\n";
			}else{
			
				int left_indx = -1;

				int right_indx = -1;


				for(int i =0;i<n;i++){
					if(s[i] == '1'){
						left_indx = i;
						break;
					}
				}

				for(int i = n-1;i>=0;i--){
					if(s[i] == '1'){
						right_indx = i;
						break;
					}
				}

				int left_indx_dist = right_indx+1;

				int right_indx_dist = n-left_indx;


				left_indx_dist *= 2;

				right_indx_dist *= 2;

				cout << max(left_indx_dist, right_indx_dist) << "\n";
			}

		}


	}
	

	system("pause");
	return 0;
}


