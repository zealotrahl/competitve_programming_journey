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

	vector <int> arr(n);

	for(int i=0;i<n;i++)
		cin >> arr[i];


	int max_len = 0;
	for(int i=0;i<n;i++){
		int len = 1;

		int j = i+1;


		while(j<n && arr[j] <= arr[j-1]){
			len++;
			j++;
		}

		j = i-1;

		while(j >= 0 && arr[j] <= arr[j+1]){
			len++;
			j--;
		}


		max_len = max(max_len, len);

	}

	cout << max_len;


	return 0;
}
