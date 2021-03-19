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


	int first = nums[0];
	int second = nums[1];
	int third = nums[2];

	bool even = false;
	
	if((first%2 == 0 && (second%2 ==0 || third%2 == 0)) || (second%2 == 0 && (first%2 == 0 || third%2 == 0)) || (third%2 == 0 && (first%2 == 0 || second%2 == 0)))
		even = true;
	else
		even = false;
		
	int i;
	if(even){
		for(i=0;i<n;i++){
			if(nums[i]%2 != 0){
				break;
			}
		}
	}else{
		for(i=0;i<n;i++){
			if(nums[i]%2 == 0)
				break;
		}
	}

	cout << i+1;

	return 0;
}
