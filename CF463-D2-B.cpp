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

	int out = INT_MIN;
	for(int i=0;i<n;i++){
		int a;

		cin >> a;
		
		out = max(out, a);
	}

	cout << out;


	



	return 0;
}
