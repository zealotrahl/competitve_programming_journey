#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	int m = 3;

	string in;

	char a,b,c;

	a = 'A';
	b = 'B';
	c = 'C';

	char d,e;

	cin >> in;

	if(in[1] == '<'){
		a = in[0];
		b = in[2];
	}else{
		a = in[2];
		b = in[0];
	}

	cin >> in;

	
	while(m){
		cin >> in;

		d = in[0];
		e = in[2];

		if(in[1] == '<')

		m--;
	}


	return 0;
}
