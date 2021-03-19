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

	vector <int> arr(n-1);

	for(int i =0;i<n-1;i++){
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());


	bool flag = false;

	for(int i=0;i<n-1;i++){

		if(arr[i] != i+1){

			cout << i+1;
			flag = true;
			break;
		}

	}

	if(flag == false){
		cout << n;
	}
	


	return 0;
}

