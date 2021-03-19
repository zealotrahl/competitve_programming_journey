#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

int main(){

	int n;

	cin >> n;

	multiset <int> home;
	multiset <int> guest;
	vector <pair <int, int>> teams(n);

	
	int counter = 0;
	for(int i =0;i<n; i++){
		int a,b;

		cin >> a >> b;

		teams[i] = make_pair(a,b);
		home.insert(a);
		guest.insert(b);
	}

	for(int i =0;i<n;i++){
		int a = teams[i].first;
		
		if(guest.count(a)){
			counter += guest.count(a);
		}

	}


	cout << counter;


	return 0;
}
