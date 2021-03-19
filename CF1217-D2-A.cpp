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

	int T;

	cin >> T;

	int str, intl, exp;

	int a, max_str;

	while(T){
		cin >> str >> intl >> exp;

		a = 0;

		max_str = 0;

		max_str = str + exp;



		if(exp == 0){
			if(str > intl)
				cout << 1 << endl;
			else
				cout << 0 << endl;


			T--;
			continue;
		}

		a += ceil(1.0*(max_str - intl)/2);


		if(a < 0)
			a = 0;

		if(a > exp + 1)
			a = exp +1;



		cout << a << endl;






		T--;
	}
	

	system("pause");
	return 0;
}


