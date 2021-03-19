#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){
	int n,x,y;

	cin >> n >> x >> y;

	string in;


	cin >> in;

	int count = 0;


	for(int i=n-x;i<(n-y-1);i++){
		if(in[i] == '1'){
			count++;
		}
	}

	for(int i=n-y;i<n;i++){
		if(in[i] == '1'){
			count++;
		}
	}

	if(in[n-y-1] == '0')
		count++;

	cout << count;



	return 0;
}
