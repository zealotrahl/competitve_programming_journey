#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main(){

	string k;

	cin >> k;

	set <char> sat;
	
	for(unsigned int i  =0;i<k.size();i++){
		sat.insert(k[i]);
	}

	if(sat.size()%2 != 0){
		cout << "IGNORE HIM!";
	}else{
		cout << "CHAT WITH HER!";
	}


	return 0;
}
