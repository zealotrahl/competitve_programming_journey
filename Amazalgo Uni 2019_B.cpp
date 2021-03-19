#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int GCD(int a, int b){
	if (a == 0) 
        return b; 
    return GCD(b % a, a); 
}

int main(){

	int a,b;

	cin >> a >> b;

	cout << (a*b)/GCD(a,b);


	return 0;
}
