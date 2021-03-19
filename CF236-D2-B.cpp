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

	int a,b,c;

	cin >> a >> b >> c;

	long long ans = 0;

	vector<ll> arr(1000005, 0);

	for(int i=1;i<1000001;i++){
		for(int e=i;e<1000001;e+=i){
			arr[e]++;
		}
	}


	for(int i = 1;i<=a;i++){
		for(int j =1;j<=b;j++){
			for(int k = 1; k<=c;k++){
				int p = i*j*k;

				ans += arr[p];
			}
		}
	}

	cout << ans%1073741824;
	

	system("pause");
	return 0;
}

