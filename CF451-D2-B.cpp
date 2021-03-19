#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>

using namespace std;

int main(){


	int n;

	cin >> n;


	vector <int> arr(n);

	int max_indx = -1;
	int max_val = INT_MIN;

	int min_indx = -1;
	int min_val = INT_MAX;
	for(int i=0;i<n;i++){

		cin >> arr[i];

		if(arr[i] > max_val){
			max_val = arr[i];
			max_indx = i;
		}

		if(arr[i] < min_val){
			min_val = arr[i];
			min_indx = i;
		}
	}

	if((min_indx !=0 && max_indx != n-1) && (min_indx != n-1 && max_indx != 0)){
		cout << "NO";
		return 0;
	}

	if(min_indx != 0 && max_indx == n-1){

		for(int c = min_indx + 2; c < n;c++){
			if(arr[c] < arr[c-1]){
				cout << "NO";
				return 0;
			}
		}


		for(int i =1;i<min_indx;i++){
			if(arr[i] < arr[i-1]){
				cout << "NO";
				return 0;
			}
		}

		cout << "YES\n";
		cout << 0 << " " << min_indx;

	}else if(max_indx != n-1 && min_indx == 0){
		for(int c = max_indx - 2; c >= 0;c--){
			if(arr[c] > arr[c+1]){
				cout << "NO";
				return 0;
			}
		}

		for(int i =n-1;i>max_indx;i--){
			if(arr[i] > arr[i-1]){
				cout << "NO";
				return 0;
			}
		}

		cout << "YES\n";
		cout << max_indx << " " << n-1;


	}else{
		int i = 1;

		int j = n-2;

		while(i != j){
			if(arr[i] > arr[j]){
				int min_indx = i;
				int max_indx = j;

				for(int i =min_indx+2; i < j;i++){
					if(arr[i] < arr[i-1]){
						cout << "NO";
						return 0;
					}
				}

				cout <<"YES\n";
				cout << min_indx << " " << max_indx;

			}

			i++;
			j--;
		}

	}



	return 0;
}
