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


	int even = 0;

	int odd = 0;

	for(int i =0;i<n;i++){
		cin >> arr[i];

		if((arr[i]&1))
			odd++;
		else
			even++;
	}


	bool even_d = even < odd ? true : false;


	cout << min(even, odd) << endl;

	for(int i =0;i<n;i++){


		if(!even_d){
			if(arr[i]&1){
				cout << arr[i] << " ";
			}
		}else{
			if(!(arr[i]&1))
				cout << arr[i] << " ";
		}
	}
	

	system("pause");
	return 0;
}

