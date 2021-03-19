#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){


	int n,m;

	cin >> n >> m;

	int ans = 0;



	
	
	while(m != n){
		if(m > n && !(m&1))
			m /=2;
		else
			m++;

		ans++;

	}


	cout << ans;

	return 0;
}
