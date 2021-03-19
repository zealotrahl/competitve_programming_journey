#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	int n;

	cin >> n;

	string a;

	cin >> a;


	int counter = 0;
	for(int i=0;i<n-1;i++){
		while(a[i] == a[i+1] && i < n-1){
			counter++;
			i++;
		}
	}

	cout << counter;


	return 0;
}
