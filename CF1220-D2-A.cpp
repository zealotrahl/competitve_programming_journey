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
 
	cin >> n;
 
 
	string s;
 
	cin >> s;
 
 
 
 
	int ones = 0;
	int zeros = 0;
 
	for(int i = 0;i<n;i++){
		if(s[i] == 'z')
			zeros++;
		else if(s[i] == 'n')
			ones++;
	}
 
	for(int i =0;i<ones;i++)
		cout << 1 << ' ';
	
	for(int i =0;i<zeros;i++)
		cout << 0 << ' ';
 

	return 0;
}