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


	if(n == 0){
		cout << 1;
		return 0;
	}
	int arr[] = {8,4,2,6};

	int indx = n%4;
	indx--;

	if(indx == -1)
		indx = 3;

	cout << arr[indx];
	

	system("pause");
	return 0;
}


