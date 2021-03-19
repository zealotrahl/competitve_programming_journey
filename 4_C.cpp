#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
	int n;

	cin >> n;

	unordered_map <string, int> db;

	string in;
	
	while(n){
		cin >> in;

		if(db.count(in) == 0){
			db[in] = 0;
			cout << "OK\n";
		}else{
			db[in]++;

			cout << in + to_string(db[in]) << "\n";
		}

		n--;
	}



	return 0;
}
