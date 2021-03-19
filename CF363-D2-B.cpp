#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>

using namespace std;

int main(){

	int n, k;

	cin >> n >> k;

	vector <int> doski(n);

	for(int i=0;i<n;i++)
		cin >> doski[i];


	for(int i=1;i<n;i++){
		doski[i] = doski[i] + doski[i-1];
	}
	
	int min_sum = INT_MAX;

	int out = -1;
	k--;
	for(int i=k;i<n;i++){
		int l = i-k;

		l--;
		
		int t = doski[i];

		if(l != -1)
			t -= doski[l];

			
		if(t < min_sum){
			min_sum = t;

			l+=2;
			out = l;

			if(out == -1)
				out = 0;
		}
	
	}


	
	cout << out;
	
	return 0;
}
