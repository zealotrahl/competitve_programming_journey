#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	int n,h;

	cin >> n >> h;


	int counter = n;

	for(int i=0;i<n;i++){
		int a;

		cin >> a;
		if(a > h){
			counter++;
		}
	}

	cout << counter;


	return 0;
}
