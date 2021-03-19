#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

int main(){

	long long n,k;

	cin >> n >> k;


	if(k <= ceil(1.0*n/2))
		cout << 2*k-1;
	else{
		k -= 1.0*n/2;
		cout << 2*k;
	}

	
	return 0;
}
