#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>
#include <string>
#include <cmath>
#include <stack>

using namespace std;

int main(){

	stack <char> skobki;

	int n;

	cin >> n;


	string s;

	cin >> s;


	int counter = 0;

	int def_lef = 0;

	for(int i =0;i<n;i++){

		if(s[i] == ')'){
			if(skobki.size() && skobki.top() == '('){
				skobki.pop();
				continue;
			}
			else
				def_lef++;
		}else{
			skobki.push('(');
		}

	}

	if((def_lef == 0 && skobki.size() == 0) || (def_lef == 1 && skobki.size() == 1))
		cout << "YES";
	else
		cout << "NO";
	

	system("pause");
	return 0;
}


