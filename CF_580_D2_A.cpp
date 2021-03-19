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


	int n;

	cin >> n;


	set <int> arr;

	for(int i =0;i<n;i++){

		int a;

		cin >> a;

		arr.insert(a);
	}

	int m;

	cin >> m;

	set <int> brr;

	for(int i =0;i<m;i++){

		int b;

		cin >> b;

		brr.insert(b);
	}


	for(int x : arr){
		for(int b : brr){
			if(!arr.count(x+b) && !brr.count(x+b)){
				cout << x << " " << b;
				return 0;
			}
		}
	}




	return 0;
}


