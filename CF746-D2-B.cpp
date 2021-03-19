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

	int counter = 0;

	int index_check = n%2 == 0 ? 0 : 1;
	
	int index = n-2;
	bool flag = true;

	if(n == 1){
		cout << k;
		return 0;
	}
	
	while(counter < n){
		counter++;
		cout << k[index];

		
		if(index == index_check){

			if(index_check == 1)
				index = 0;
			else
				index++;
				
			flag = false;
		}else{
			if(flag)
				index -= 2;
			else
				index += 2;
		}

	}


	return 0;
}
