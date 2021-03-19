#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	
	vector<int> arr(4);


	for(int i= 0;i<4;i++)
		cin >> arr[i];


	sort(arr.begin(), arr.end());

	int counter = 0;
	
	for(int i = 1; i < 4;i++){
		if(arr[i] == arr[i-1])
			counter++;

	}
	cout << counter;


	


	return 0;
}
