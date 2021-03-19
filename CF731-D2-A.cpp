#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	string a;

	cin >> a;
	int counter = 0;


	int current = 0;

	for(unsigned int i =0;i<a.size();i++){
		int c = (a[i]-97);

		int len_l = current - c;

		if(len_l < 0)
			len_l += 26;

		int len_r = c - current;

		if(len_r < 0)
			len_r += 26;

		int len = len_r > len_l ? len_l : len_r;

		current =c;

		counter += len;
		
	}

	cout << counter;

	return 0;
}
