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


	vector <long long> arr(n);


	for(int i=0;i<n;i++)
		cin >> arr[i];


	sort(arr.begin(), arr.end());


	long long sum = 0;


	//get pairs of odd numbers;

	bool even = true;

	long long last_num = 0;
	long long even_sum = 0;
	
	for(int i=n-1;i>=0;i--){
		if(arr[i]%2 != 0){
			last_num = arr[i];
			sum += arr[i];
			even = !even;
		}else
			even_sum += arr[i];
	}

	if(even == false){
		sum -= last_num;
	}


	cout << even_sum + sum;

	


	return 0;
}
