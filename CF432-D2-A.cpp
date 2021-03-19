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

	int n,k;

	cin >> n >> k;

	vector <int> arr(n);

	for(int i =0;i<n;i++)
		cin >> arr[i];


	sort(arr.begin(), arr.end());


	if(n < 3){
		cout << 0 << endl;
	}else{
		int ans = 0;

		for(int i =0;i<n-2;i+=3){
			if(arr[i] + k <= 5 && arr[i+1] +k <= 5 && arr[i+2] +k <= 5){
				ans++;
			}else{
				break;
			}
		}

		cout << ans;
	}

	

	system("pause");
	return 0;
}



