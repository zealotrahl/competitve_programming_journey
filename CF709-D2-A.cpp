#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){
	int n,b,d;

	cin >> n >> b >> d;

	int a;

	int counter = 0;
	int pocket = 0;
	for(int i=0;i<n;i++){
		cin >> a;

		if(a > b){
			continue;
		}
		
		if(pocket > d){
			pocket = 0;
			counter++;
		}

		pocket += a;
	}

	if(pocket > d){
		pocket = 0;
		counter++;
	}
	

	cout << counter;






	return 0;
}
