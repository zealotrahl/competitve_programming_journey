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

	vector <int> contests(n);

	for(int i =0;i<n;i++)
		cin >> contests[i];


	sort(contests.begin(), contests.end());


	int k = 1;

	for(int i=0;i<n;i++){
		if(contests[i] >= k){
			k++;
		}
	}

	//cout << contests[i] << ", and k: " << k << "\n";

	cout << k-1;


	return 0;
}
