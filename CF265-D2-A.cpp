#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){


	string t;

	cin >> t;

	string inst;

	cin >> inst;

	int current = 0;
	
	for(unsigned int i =0;i<inst.size();i++){
		if(inst[i] == t[current]){
			current++;
		}
	}

	cout << current+1;

	return 0;
}
