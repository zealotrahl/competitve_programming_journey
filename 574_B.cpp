#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <stack>


using namespace std;

int main(){


	int n,k;

	cin >> n >> k;

	int banka = 0;
	int last_put = 0;

	while(n != 0){
		if(banka - n == k){
			break;
		}
		
		last_put++;
		banka += last_put;
		n--;
	}

	cout << n;


	return 0;
}
