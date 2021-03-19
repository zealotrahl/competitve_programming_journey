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

	int count = 0;
	string k;

	cin >> k;

	int unsigned i =0;
	while(i < k.size()-1){
		if((i+1)%2 != 0 && k[i] == k[i+1]){
			k.erase(i,1);
			count++;
		}else
			i++;
	}

	if(k.size()%2 != 0){
		k.erase(k.size()-1, 1);
		count++;
	}
	
	cout << count << "\n";

	cout << k;



	return 0;
}
