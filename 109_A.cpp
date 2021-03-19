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

	vector <int> nums(n);

	for(int i=0;i<n;i++)
		cin >> nums[i];


	int mi_v = nums[0];
	int mx_v = nums[0];

	int count = 0;
	
	for(int i=1;i<n;i++){
		if(nums[i] > mx_v){
			mx_v = nums[i];
			count++;
		}

		if(nums[i] < mi_v){
			mi_v = nums[i];
			count++;
		}
	}

	cout << count;


	return 0;
}
