	#include <iostream>
	#include <vector>
	#include <deque>
	#include <cstdio>
	#include <algorithm>
	#include <set>


	using namespace std;

	int main(){

		long long n,k;

		cin >> n >> k;


		vector <long long> arr(n);

		for(int i=0;i<n;i++)
			cin >> arr[i];


		sort(arr.begin(), arr.end());

		
		int counter = 0;
		long long b = 0;


		for(int i=0;i<n-1;i++){
			if(counter == k){
				break;
			}


			b += arr[i];
			arr[i+1] -= b;


			if(arr[i] == 0)
				continue;

			cout << arr[i] << "\n";

			counter++;
		}

		if(arr[n-1] != 0 && counter < k){
			cout << arr[n-1] << "\n";
			counter++;
		}

		while(counter < k){
			cout << 0 << "\n";
			counter++;
		}


		return 0;
	}
