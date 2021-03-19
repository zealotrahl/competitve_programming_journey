#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>
#include <string>
#include <cmath>


using namespace std;

int main(){

	int b,g;
	int n;

	cin >> b >> g >> n;


	int counter = 0;


	for (int i =0;i<n+1;i++){
		int p = n-i;


		if(p > g){
			continue;
		}else if(n-p > b)
			continue;
		else
			counter++;
	}



	cout << counter;

	

	system("pause");
	return 0;
}


