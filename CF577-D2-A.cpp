#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <cmath>


using namespace std;

int main(){
	int n,x;

	cin >> n >> x;

	int counter= 0;

	for(int i=1;i<=sqrt(x);i++){
		if(x%i == 0 && x/i <= n){

			if(i == x/i)
				counter++;
			else
				counter+=2;
		}
	}

	cout << counter;



	return 0;
}
