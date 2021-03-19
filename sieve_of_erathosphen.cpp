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

	vector <bool> primes(n+1, true);

	primes[0] = primes[1] = false;

	for(int i =2;i<=n;i++){
		if(primes[i]){
			for(int j =2;j*i <= n;j++){
				primes[i*j] = false;
			}
		}
	}
	


	cout << "HELLO";


	return 0;
}
