#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){
	long long n,m;

	cin >> n >> m;


	long long current = 1;

	long long a;

	long long count = 0;
	
	while(m){
		cin >> a;

		if(a < current){
			count += n-current;
			current = 0;
			count += a-current;
			current = a;
		}else{
			count += a-current;
			current = a;
		}
		
		m--;
	}

	cout << count;



	return 0;
}
