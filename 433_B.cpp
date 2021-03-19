#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	long long n, k;


	cin >> n >> k;

	if(n == k || k == 0)
		cout << 0 << " " << 0;
	else{
		
		cout << 1 << " ";

		if(3*k <= n)
			cout << 2*k;
		else
			cout << (2*k - (3*k - n));
	}


	return 0;
}
