#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <cmath>


using namespace std;

int main(){
	int q;



	cin >> q;

	while(q){
			vector <long long> abc(3);

			cin >> abc[0] >> abc[1] >> abc[2];

			sort(abc.begin(), abc.end());

			cout << (abc[0] + abc[1] + abc[2])/2 <<"\n";


		q--;
	}



	return 0;
}
