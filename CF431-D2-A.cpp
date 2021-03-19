#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){


	int a1,a2,a3,a4;

	cin >> a1 >> a2 >> a3 >> a4;

	string s;

	cin >> s;

	long long sum = 0;
	
	for(unsigned int i = 0;i<s.size();i++){
		int b = s[i] - 48;


		switch(b){
			case 1:
				sum += a1;
				break;
			case 2:
				sum += a2;
				break;
			case 3:
				sum += a3;
				break;
			case 4:
				sum += a4;
				break;
		}
	}

	cout << sum;

	return 0;
}
