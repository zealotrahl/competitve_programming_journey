#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	int n;

	cin >> n;


	string a;

	cin >> a;


	int ones = 0;

	int zeros = 0;
	for(int i =0;i<n;i++){
		if(a[i] == '0')
			zeros++;
		else
			ones++;
	}

	cout << abs(ones-zeros);


	return 0;
}
