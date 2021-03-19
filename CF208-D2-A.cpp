#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	string in;

	cin >> in;

	int c = in.find("WUB");


	while(c != -1){
		in = in.replace(c, 3, " ");

		c = in.find("WUB");
	}

	cout << in;


	return 0;
}
