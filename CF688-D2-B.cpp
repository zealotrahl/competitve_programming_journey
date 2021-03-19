#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){


	string n;

	cin >> n;


	for(unsigned long long i =0;i<2*n.size();i++){
		if(i < n.size()){
			cout << n[i];
		}else{
			
			cout << n[n.size()-1 - (i - n.size())];
		}
	}



	return 0;
}
