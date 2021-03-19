#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	string s, t;


	cin >> s >> t;

	
	int unsigned i =0;
	int indx = 0;
	
	for(i=1;i<s.size();i++){
		indx = i;
		if(s[i] == 'z'){

			
			while(s[i] == 'z'){
				s[i] = 'a';
				i++;
			}
			break;
		}
	}

	s[indx]++;
	if(s < t){
		cout << s << "\n";
	}else{
		cout << "No such string\n";
	}


	return 0;
}
