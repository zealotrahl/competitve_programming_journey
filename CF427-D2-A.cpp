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

	long long policeman = 0;
	int not_solved = 0;
	while(n){
		long long a;

		cin >> a;

		if(a == -1){
			if(policeman == 0){
				not_solved++;
			}else
				policeman--;
		}
		else
			policeman += a;

		n--;
	}

	cout << not_solved;


	return 0;
}
