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
		int n,k;
		cin >> n >> k;
		vector<long long> arr(n);
		for(int i =0;i<n;i++)
			cin >> arr[i];

		vector<int> pref(n);
		vector<bool> pik(n, false);
		for(int i =1;i<n-1;i++){
			pref[i] += pref[i-1];
			if(arr[i] > arr[i+1] && arr[i] > arr[i-1]){
				pref[i]++;
				pik[i] = true;
			}
		}
		pref[n-1] = pref[n-2];
		int max_p = 0;
		int max_l = 0;
		for(int i =0;i<n;i++){
			int r = i+k - 1;
			if(r > n-1){
				break;
			}

			int p = 0;
			if(i == 0){
				p = pref[r];
			}else{
				p = pref[r] - pref[i];
			}
			if(pik[r]){
				p--;
			}

			if(p+1 > max_p){
				max_l = i+1;
				max_p = p+1;
			}
		}
		cout << max_p << " " << max_l << endl;
	}
	

	system("pause");
	return 0;
}

