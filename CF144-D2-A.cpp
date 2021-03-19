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


	vector <int> arr(n);


	for(int i =0;i<n;i++)
		cin >> arr[i];


	int min_el = INT_MAX;
	int max_el = INT_MIN;

	int min_el_indx = -1;
	int max_el_indx = -1;

	for(int i =0;i<n;i++){



		if(arr[i] <= min_el){
			min_el = arr[i];

			min_el_indx = i;
		}
	}

	int count = 0;

	if(arr[n-1] != arr[min_el_indx]){
		for(int i =min_el_indx; i<n-1;i++){
			count++;
			swap(arr[i], arr[i+1]);
		}
	}


	for(int i =0;i<n;i++){



		if(arr[i] > max_el){
			max_el = arr[i];
			max_el_indx = i;
		}
	}

	if(arr[0] != arr[max_el_indx]){
		for(int i =max_el_indx; i>0;i--){
			count++;
			swap(arr[i], arr[i-1]);
		}
	}

	


	cout << count;
	

	system("pause");
	return 0;
}


