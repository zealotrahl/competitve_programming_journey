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

	int n;

	cin >> n;

	vector <long long> arr(n);

	for(int i =0;i<n;i++){
		cin >> arr[i];
	}

	long long left = arr[0];
	long long right = arr[n-1];

	int l_p = 0;
	int r_p = n-1;


	while(l_p < r_p){

		if(left < right){


			if(l_p + 1 == r_p)
				break;

			l_p++;

			left += arr[l_p];
		}else{
			if(r_p - 1 == l_p)
				break;

			r_p--;
			right += arr[r_p];
		}
	}

	long long ans = abs(right -left);

	cout << ans;

	

	system("pause");
	return 0;
}




