#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

int main(){
	int n;
	string s;

	cin >> n >> s;

	int r = 0;

	string t = "";

	int i =0;
	
	while(n){
		if(i != 0){
			int k = i-1;
			int count = 3;

			while(k != 0 && count != 0){
				if(t[k] == s[i]){
					
				}
			}

		}
		
		t += s[i];

		n--;
		i++;
	}
	


	return 0;
}
