#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

int main(){

	int n;

	cin >> n;

	vector <int> d(n);
	
	for(int i =0;i<n;i++)
		cin >> d[i];

	sort(d.begin(), d.end());

	int x,y;

	x = d.back();

	for(int i =d.size() -1;i>=0;i--){

		if(x % d[i] != 0){
			y = d[i];
			break;
		}
		
		if(i != 0 && d[i] == d[i-1]){
			y = d[i];
			break;
		}

	}

	cout << x << " " << y;

	return 0;
}
