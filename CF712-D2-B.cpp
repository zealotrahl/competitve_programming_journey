#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>

using namespace std;

int main(){


	int n;

	cin >> n;

	vector <int> arr(n);


	int min_val = INT_MAX;
	int max_val = INT_MIN;

	for(int i =0;i<n;i++){
		cin >> arr[i];

		max_val = max(max_val, arr[i]);
		min_val = min(min_val, arr[i]);
	}

	int distance = (max_val - min_val);

	sort(arr.begin(), arr.end());

	int cur = 0;

	int cur_r = n-1;


	while(cur < cur_r){
		if((arr[cur_r] - arr[cur]) != distance){

			cout << "NO";
			return 0;
		}

		cur++;
		cur_r--;
	}
	
	cout << "YES";


	

	return 0;
}
