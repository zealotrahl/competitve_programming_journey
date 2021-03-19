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

	string s;


	cin >> s;



	set <char> sa;


	for(int i =0;i<s.size();i++){
		sa.insert(s[i]);
	}


	if(sa.size() > 2)
		cout << sa.size() - 2;
	else
		cout << 0;
	

	system("pause");
	return 0;
}


