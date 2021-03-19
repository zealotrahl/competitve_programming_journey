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
 
	int n;
 
	cin >>n;
 
 
	unsigned int count = 0; 
 
	while (n){
		count += n & 1;
		n >>= 1;
	}
 
	cout << count;
 
	return 0;
}