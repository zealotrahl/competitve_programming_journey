#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <math.h>

using namespace std;

int main(){
	int n;

	long long a;
	cin >> n;

	int max_n = 1000005;
	vector <bool> primes(max_n, true);

	primes[0] = primes[1] = false;

	for(int i = 2;i <= max_n;i++){
		if(primes[i]){
			for(int j =2; i*j <= max_n;j++)
				primes[i*j] = false;
		}
	}

	
	
	while(n){
		cin >> a;
		
		long long s = sqrtl(a);
		
		if(s*s == a && primes[s]){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}

		n--;
	}



	return 0;
}
