#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

int main(){

	int q;

	cin >> q;

	while(q){
		int l1,r1,l2,r2;

		cin >> l1 >> r1 >> l2 >> r2;

		int a, b;

		a = l1;

		b = l2;

		if( a== b){
			b = r2;
		}

		cout << a << " " << b << "\n";


		q--;
	}


	return 0;
}
