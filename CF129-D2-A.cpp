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

	int n;

	cin >> n;


	vector <int> arr(n);

	int sum = 0;

	for(int i =0;i<n;i++){
		cin >> arr[i];

		sum += arr[i];
	}

	int ans = 0;

	if(sum&1){
		for(int i =0;i<n;i++){
			if(arr[i]&1)
				ans++;
		}
	}else{
		for(int i =0;i<n;i++){
			if(!(arr[i]&1))
				ans++;
		}
	}

	cout << ans;



	

	system("pause");
	return 0;
}

