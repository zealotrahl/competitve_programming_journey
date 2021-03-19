#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <stdio>

using namespace std;



int factorialRecursiveHelper(int x){
	if(x <= 1)
		return 1;
	else
		return x * factorialRecursiveHelper(x-1);
}

void factorialRecursive(int x){
	cout << factorialRecursiveHelper(x*x) << endl;
}

void factorialNonRecursive(int x){
	int ans = 1;

	for(int i=x*x;i>=1;i--){
		ans *= i;
	}

	cout << ans;
}

void addPreviousToEachHelper(vector <int> &arr, unsigned int n){

	if(n == arr.size()){
		return;
	}else{
		arr[n] += arr[n-1];

		addPreviousToEachHelper(arr, n+1);

	}
}

void addPreviousToEach(){
	vector<int> arr = {1,2,3,4,5,6};
	addPreviousToEachHelper(arr, 1);

	
	for(auto x : arr){
		cout << x << ", ";
	}
}

void towerOfHanoe(char s, char d, char e, int n){
	if( n <= 0)
		return;

		towerOfHanoe(s, e, d, n-1);

		printf("Move disk-%d from %d to %d", n, s, d);

		towerOfHanoe(e, d, s, n-1);
}

void recursiveBubbleSort(vector <int> &arr, int n){
	//Perform one pass
	for(int i=0;i<n-1;i++){
		if(arr[i] > arr[i+1])
			swap(arr[i], arr[i+1]);
	}

	recursiveBubbleSort(arr, n-1);
}



int main(){



	

	return 0;
}
