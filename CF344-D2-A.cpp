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

	string a,b;

	b = "";
	int counter = 0;
	while(n>0){
		cin >> a;

		if(b != "" && a == b){
			
		}else{
			counter++;
		}

		b = a;

		n--;
	}
	cout << counter;


	return 0;
}
