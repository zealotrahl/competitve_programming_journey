#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>
#include <string>
#include <cmath>


using namespace std;

int main(){

	long long n, d,e;

	cin >> n >> d >> e;


	e *= 5;

	if(n%d == 0 || n%e == 0)
		cout << 0;
	else{
		long long p = (n%e)%d;
		long long q = (n%d)%e;

		if(p > q)
			cout << q;
		else
			cout << p;
	}

	system("pause");
	return 0;
}


