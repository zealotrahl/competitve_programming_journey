#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>
#include <string>
#include <cmath>


using namespace std;

int main(){

	int n;
	
	cin >> n;


	vector <int> arr(n);
	for(int i =0;i<n;i++){

		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());


	int i =1;
	int j = n-2;

	int p = arr[0]+arr[n-1];

	while(i < j){

		p = min(p, arr[i]+arr[j]);
		i++;
		j--;
	}

	cout << p;

	system("pause");
	return 0;
}


