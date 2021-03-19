#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

int main(){

	vector <int> as(3);
	vector <int> bs(3);
	


	int a,b,c;

	cin >> a >> b >> c;

	int kubki = a+b+c;

	cin >> a >> b >> c;

	int medali = a+b+c;

	int needed_k = ceil(1.0*kubki/5);
	int needed_m = ceil(1.0*medali/10);

	int n;
	cin >> n;

	
	if(needed_k + needed_m <= n)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
