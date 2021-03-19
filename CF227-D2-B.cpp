#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>

using namespace std;




int main(){
	
	int n;

	cin >> n;



	unordered_map<int, int> arr;
	
	for(int i=0;i<n;i++){
		int o;
		cin >> o;

		arr[o] = i;
	}

	int m;

	cin >> m;
	
	long long petya = 0;
	long long vasya = 0;
	
	while(m){

		int b;

		cin >> b;

		int indx = arr[b];

		vasya += indx+1;

		petya += n-indx;

			
		m--;
	}

	cout << vasya << " " << petya;

	return 0;
}
