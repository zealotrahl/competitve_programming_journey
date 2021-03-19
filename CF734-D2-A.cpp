#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){


	int n;
	cin >> n;

	string k;

	cin >> k;

	int ant = 0;
	int dan = 0;
	
	for(int i=0;i<n;i++){
		if(k[i] == 'A')
			ant++;

		if(k[i] == 'D')
			dan++;
	}

	if(ant > dan){
		cout << "Anton";
	}else if(ant < dan){
		cout << "Danik";
	}else{
		cout << "Friendship";
	}



	return 0;
}
