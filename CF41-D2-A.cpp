#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){
	string s,t;


	cin >> s >> t;


	if(s.size() != t.size())
		cout << "NO";
	else{
		for(unsigned int i = 0;i<t.size();i++){
			if(s[i] != t[t.size()-1 - i]){
				cout << "NO";
				return 0;

			}
		}

		cout << "YES";


	}



	return 0;
}
