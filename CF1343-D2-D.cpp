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

	int T;
	cin >> T;
	while(T--){
		int n,k;
		cin >> n >> k;
		vector <int> arr(n);
		for(int i =0;i<n;i++)
			cin >> arr[i];
		//Count no changes, sum
		//Count 1 change, min(a,b)+1, max(a,b)+k;
		//Count 2 changes
		vector<int> k_sum(2*k+1,0);
		vector<int> pref(2*k+1,0);
		for(int i =0;i<n/2;i++){
			k_sum[arr[i] + arr[n-i-1]]++;
			pref[min(arr[i], arr[n-i-1])+1]++;
			pref[max(arr[i], arr[n-i-1])+k+1]--;
		}

		for(int i =1;i<pref.size();i++){
			pref[i] += pref[i-1];
		}
		for(int i =0;i<k_sum.size();i++){
			pref[i]+= k_sum[i];
		}

		int mx = *max_element(pref.begin(), pref.end());
		cout << n - mx << endl;
	}
	
	system("pause");
	return 0;
}