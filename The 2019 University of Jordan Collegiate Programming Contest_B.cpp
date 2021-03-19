#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	int n = 10000005;
	vector <bool> primes(n+1, true);

	primes[0] = primes[1] = false;

	for(int i =2;i<=n;i++){
		if(primes[i]){
			for(int j =2;j*i <= n;j++){
				primes[i*j] = false;
			}
		}
	}

	int k;

	cin >> k;
	bool flag = false;
	int i =2;
	
	for(i =2;i<k;i++){
		if(primes[i] && primes[k-i]){
			flag = true;
			break;
		}
	}

	if(flag)
		cout << i << " " << k-i;
	else
		cout << -1;

	


	return 0;
}
