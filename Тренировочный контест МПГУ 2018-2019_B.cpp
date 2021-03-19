#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <unordered_map>


using namespace std;

int main(){

	unordered_map<long long, bool> table;


	int n;

	cin >> n;

	while(n){
		long long a;

		cin >> a;

		if(table.count(a)){
			cout << 0;
		}else{
			cout << 1;
			table[a] = true;
		}

		if(n != 1)
			cout << " ";


		n--;
	}

	return 0;
}
