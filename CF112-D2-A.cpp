#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

void stringToLower(string& t, unsigned int len){
	for(unsigned int i=0;i<len;i++){
		if(t[i] < 97){
			t[i] += 32;
		}
	}
}

int main(){


	string a,b;

	cin >> a >> b;
	
	stringToLower(a, a.size());
	stringToLower(b, b.size());

	if(a ==b){
		cout << 0;
	}else if(a<b){
		cout << -1;
	}else{
		cout << 1;
	}

	return 0;
}
