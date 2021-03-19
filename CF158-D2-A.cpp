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

	
	int n,k;

	cin >> n >> k;


	vector <int> arr(n);


	k--;

	for(int i =0;i<n;i++){
		cin >> arr[i];
	}

	int min_score = arr[k];



	int counter = 0;

	for(int i =0; i<n;i++){
		if(arr[i] >= min_score && arr[i] != 0 ){
			counter++;
		}
	}

	cout << counter << endl;




	system("pause");
	return 0;
}


