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
 
 
	vector <long long> arr(n);
 
	int negative = 0;
	for(int i =0;i<n;i++){
		cin >> arr[i];
 
		if(arr[i] < 0)
			negative++;
	}
 
 
	bool need_change = false;
 
	if(negative%2 != 0)
		need_change = true;
 
 
	sort(arr.begin(), arr.end());
 
	long long counter = 0;
 
 
	for(int i =0;i<n;i++){
		if(need_change && negative == 0){
			need_change  = false;
 
			if(abs(1 - arr[i-1]) < abs(-1 - arr[i])){
				counter += 2;
			}else{
				counter += abs(-1 - arr[i]);
			}
		}else{
			if(arr[i] < 0){
				negative--;
				counter += abs(-1- arr[i]);
			}else{
				counter += abs(1 - arr[i]);
			}
		}
 
 
	}
 
 	if(need_change){
 		counter += 2;
 	}
 	
	cout << counter;


	system("pause");
 
	return 0;
}