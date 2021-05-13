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
		long long n;

		cin >> n;

		vector <long long> arr(n);

		for(long long i =0;i<n;i++) {
			cin >> arr[i];
		}

		long long mn = INT_MAX;
		long long mx = INT_MIN;
		int count = 0;
		for(long long i =0;i<n;i++){
			if(arr[i] != -1){
				// cout << arr[i] << " ";
				if(i != n-1 && arr[i+1] == -1) {
					count++;
					mx = max(mx, arr[i]);
					mn = min(mn, arr[i]);
				} else if(i != 0 && arr[i-1] == -1) {
					count++;
					mx = max(mx, arr[i]);
					mn = min(mn, arr[i]);
				}
			}
		}
		if(count == 0) {
			cout << 0 << " " << 5 << endl;
			continue;
		}
		long long middle = (mn+mx)/2;
		for(int i =0;i<n;i++){
			if(arr[i] == -1){
				arr[i] = middle;
			}
		}
		long long abs_d = INT_MIN;
		for(int i=0;i<n-1;i++){
			abs_d = max(abs_d, abs(arr[i] - arr[i+1]));
		}
		cout << abs_d << " " << middle << endl;
	}
	

	system("pause");
	return 0;
}


