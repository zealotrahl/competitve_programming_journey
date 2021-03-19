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
 
	int c = s.size();
	int counter = 0;
 
	for(int i =0;i<s.size();i++){
		if(s[i] == '1'){
			counter++;
		}
 
		if(counter == 2)
			break;
 
	}
 
	if(counter > 1 && s.size()&1){
		cout << floor(s.size()/2) + 1;
	}else{
		cout << floor(s.size()/2);
	}
 
 system("pause");
 
	return 0;
}