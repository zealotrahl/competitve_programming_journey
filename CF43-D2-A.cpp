#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>
#include <string>
#include <cmath>


using namespace std;

int main(){

	int n;

	cin >> n;

	string a,b, s;

	cin >> a;

	int c = 0, d = 0;

	c++;

	for(int i =1;i<n;i++){
		cin >> s;
		if(s == a){
			c++;
		}else{
			b = s;
			d++;
		}
	}

	if(c > d){
		cout << a;
	}else{
		cout << b;
	}
	

	system("pause");
	return 0;
}


