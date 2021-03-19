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
		vector <long long> arr(n);
		for(int i =0;i<n;i++)
			cin >> arr[i];
		bool pos = (arr[0] > 0);
		long long sum = 0;
		for(int i =0;i<n;i++){
			long long curr_max = arr[i];
			if(pos){
				while(arr[i] > 0 && i < n){
					curr_max = max(curr_max, arr[i]);
					i++;
				}
				i--;
			}else{
				while(arr[i] < 0 && i < n){
					curr_max = max(curr_max, arr[i]);
					i++;
				}
				i--;
			}
			sum += curr_max;
			pos = !pos;
		}
		cout << sum << endl;
	}
	

	system("pause");
	return 0;
}

