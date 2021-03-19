#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	int n;

	cin >> n;


	vector <int> arr(n);
	vector <int> new_arr(n);

	for(int i=0;i<n;i++)
		cin >> arr[i];


	for(int i=0;i<n;i++){
		new_arr[arr[i]-1] = i+1;
	}

	for(int i=0;i<n;i++)
		cout << new_arr[i] << " ";
		



	return 0;
}
