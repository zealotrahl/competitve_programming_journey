#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){


	int a,b,c;

	cin >> a >> b >> c;

	int counter = 0;

	int min_c = min(min(a, b/2), c/4);

	counter = 4*min_c + min_c + min_c*2;

	if(c/4 == 0 || b/2 == 0){
		cout << 0;
	}else{
		cout << counter;
	}

	return 0;
}
