#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	long long n;

	cin >> n;

	vector <long long> arr(n);

	for(int i=0;i<n;i++)
		cin >> arr[i];

	

	long long total = 1 << n;

	long long out = 0;
	for(int b = 0; b < total;b++){
		int sum = 0;

		for(int i=0;i<n;i++){
			if(b&(1<<i))
				sum |= arr[i];
		}

		out += sum;
	}

	cout << out;


	return 0;
}
