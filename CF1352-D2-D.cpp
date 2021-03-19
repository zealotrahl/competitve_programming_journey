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
		vector<int> arr(n);
		for(int i =0;i<n;i++){
			cin >> arr[i];
		}
		ll alice = arr[0];
		ll bob = 0;
		int p_l = 1;
		int p_r = n-1;
		int steps = 1;
		bool flag = false;
		int prev = alice;
		while(true){
			int current = 0;
			if(!flag){
				//bob
				while(current <= prev && p_r >= p_l){
					current += arr[p_r];
					p_r--;
				}
				bob += current;
			} else {
				while(current <= prev && p_l <= p_r){
					current += arr[p_l];
					p_l++;
				}
				alice += current;
			}
			if(current == 0)
				break;
			steps++;
			if(current <= prev){
				break;
			}
			prev = current;
			flag = !flag;
		}
		cout << steps << " " << alice << " " << bob << endl;
	}


	return 0;
}


