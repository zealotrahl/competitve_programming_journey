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
	int n,a,b,k;
	cin >> n >> a >> b >> k;
	vector <int> arr(n);
	for(int i =0;i<n;i++){
		cin >> arr[i];
	}
	int left = 0;
	vector <int> ans(n);
	for(int i =0;i<n;i++){
		if(arr[i] <= a){
			ans[i] = 0;
		}else{
			left = arr[i]%(a+b);
			if(left != 0 && left <= a){
				ans[i] = 0;
			}else{
				if(left == 0){
					left += b;
					ans[i] = ceil(1.0*left/a);
				}else{
					ans[i] = ceil(1.0*left/a) - 1;
				}
			}
		}
	}
	sort(ans.begin(), ans.end());
	int out = 0;
	for(int i =0;i<n;i++){
		if(ans[i] > k){
			continue;
		}
		// cout << ans[i] << endl;
		out++;
		k -= ans[i];
	}
	cout << out << endl;
	system("pause");
	return 0;
}
