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

	for(int i =0;i<n;i++)
		cin >> arr[i];


	sort(arr.begin(), arr.end());

	bool flag = false;

	for(int i=0;i<n;i++){
		if(arr[i] != arr[0]){
			cout << arr[i];
			flag = true;
			break;
		}
	}

	if(!flag)
		cout << "NO";
	

	system("pause");
	return 0;
}


