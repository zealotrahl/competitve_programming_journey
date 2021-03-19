#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <cmath>
#include <iomanip>



using namespace std;

int main(){
	double H, L;

	cin >> H >> L;


	cout << std::setprecision(15) << (L*L-H*H)/(2*H);



	return 0;
}
