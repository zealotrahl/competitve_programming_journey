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


	vector <int> arr(n+1, 0);

	arr[0] = 1;
	int a;
	cin >> a;

	int b;
	while(a){
		cin >> b;
		arr[b]++;
		a--;
	}

	cin >> a;

	while(a){
		cin >> b;

		arr[b]++;
		a--;
	}


	for(int x : arr){
		if(x == 0){
			cout << "Oh, my keyboard!\n";
			return 0;

		}
	}
	

	cout << "I become the guy.\n";

	system("pause");
	return 0;
}


