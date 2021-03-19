#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

int main(){

	int a,b,c;

	cin >> a >> b >> c;

	if(c == 0){
		if(a == b)
			cout << "YES";
		else
			cout << "NO";
	}else if(b < a && c > 0){
		cout << "NO";
	}else{

		cout << abs(a-b)%c << endl;
		if((abs(a-b) >= c && abs(a-b)%c == 0) || a == b)
			cout << "YES";
		else
			cout << "NO";
	}



	return 0;
}
