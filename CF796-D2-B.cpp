#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	int n,m,k;

	cin >> n >> m >> k;

	vector <int> axis(n, 0);
	
	for(int i=0;i<m;i++){

		
		int a;

		cin >> a;

		axis[a-1] = 1;
	}

	int u,v;
	int initial = 0;
	while(k){
		cin >> u >> v;
		u--;
		v--;

		if(axis[initial]){
			cout << initial+1;
			return 0;
		}
		
		if(u == initial)
			initial = v;
		else if(v == initial)
			initial = u;

		k--;
	}

	cout << initial+1;

	


	return 0;
}
