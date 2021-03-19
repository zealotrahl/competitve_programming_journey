#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>
#include <iomanip>


using namespace std;

int main(){

	int l,n;
	cin >> n >> l;

	vector <int> arr(n);

	for(int i=0;i<n;i++)
		cin >> arr[i];





	double max_dist = 0;
	
	sort(arr.begin(), arr.end());
	for(int i=0;i<n-1;i++){
		max_dist = max(max_dist, (1.0*abs(arr[i] - arr[i+1]))/2);
	}

	
	int max_fonar = arr[n-1];
	int min_fonar = arr[0];

	max_dist = max(max_dist, 1.0*(min_fonar));
	max_dist = max(max_dist, 1.0*abs(l-max_fonar));


	cout << setprecision(10) << max_dist;
	


	return 0;
}
