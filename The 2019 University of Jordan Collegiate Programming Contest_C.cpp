#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	int S,X;

	int counter = 1;

	cin >> S >> X;
	
	while(S >= X){
		S/=X;

		counter++;
	}

	cout << counter;


	return 0;
}
