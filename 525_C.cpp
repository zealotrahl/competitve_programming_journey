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

	vector<int> arr(n);

	for(int i=0;i<n;i++)
		cin>>arr[i];



	cout << n +1 << "\n";
	
	cout << 1 << " " << n  << " "<< 2*n << "\n";

	for(int i =0;i<n;i++)
		cout << 2 << " " << i+1 << " " << (2*n+arr[i])-i<<"\n";
	


	return 0;
}
