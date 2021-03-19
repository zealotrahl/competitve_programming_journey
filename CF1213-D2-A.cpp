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


	int a;

	int even = 0;
	int odd = 0;

	while(n--){
		cin >> a;


		if(a%2 == 0)
			even++;
		else
			odd++;
	}


	cout << min(odd, even);
	

	system("pause");
	return 0;
}


