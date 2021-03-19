#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	long long l1,r1,l2,r2,k;

	cin >> l1 >> r1 >> l2 >> r2 >> k;


	long long l;
	long long r;
	
	long long out = 0;
	
	if(l2 <= r1){
		l = max(l1,l2);
		r = min(r1,r2);

		out = r-l;

		if(l > r){
			cout << 0;

			return 0;
		}

		out++;


		
		if(out > 0 && k <=r && k >= l)
			out--;
		
		
	}

	cout << out;


	return 0;
}
