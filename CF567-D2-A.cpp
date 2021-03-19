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

	for(int i=0;i<n;i++)
		cin >> arr[i];


	
	for(int i=0;i<n;i++){

		if(i == 0){
			cout << abs(arr[i+1]-arr[i]) << " " << abs(arr[0] - arr[n-1]) << "\n";
		}else if(i == n-1){
			cout << abs(arr[i-1] - arr[i]) << " " << abs(arr[0] - arr[i]) << "\n";
		}else{
			if(abs(arr[i-1] - arr[i]) < abs(arr[i+1] - arr[i]))
				cout << abs(arr[i-1]-arr[i]) << " ";
			else
				cout << abs(arr[i+1]-arr[i]) << " ";


			if(abs(arr[0] - arr[i]) > abs(arr[i] - arr[n-1]))
				cout << abs(arr[0] - arr[i]) << "\n";
			else
				cout << abs(arr[n-1] - arr[i]) << "\n";
		}




	}


	return 0;
}
