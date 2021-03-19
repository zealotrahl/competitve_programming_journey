#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <math.h>
#include <iomanip>
#define PI 3.1415926535897932384626433832795

using namespace std;

int main(){

	double V, S;

	cin >> V >> S;
	
	double sin_n = sin(PI/V);
	
	double R = (S/2.0)/sin_n;


	cout << setprecision(10) << PI*R*R;

	return 0;
}
