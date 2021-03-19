#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){
	int n;

	cin >> n;


	int level = 0;
	int raznost = 1;
	
	while(n >= 0){

		
		n -= raznost;
		
		if(n >= 0){
			level++;

			raznost = 1.0*(1+level)*(1.0*(1+level+1)/2);
		}

		
	}

	cout << level;



	return 0;
}
