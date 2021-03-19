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

	vector <pair<int,int>> arr(n);

	int a;

	for(int i =0;i<n;i++){
		cin >> a;

		arr[i] = make_pair(a, i+1);
	}


	sort(arr.begin(), arr.end());

	int i =0;
	int j = n-1;

	while(i <= j){
		cout << arr[i].second << " " << arr[j].second;

		cout << "\n";
		i++;
		j--;
	}


	

	system("pause");
	return 0;
}

