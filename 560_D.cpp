#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>
#include <cmath>

using namespace std;

int gcd(int a, int b){
	if(a == 0)
		return b;
	return gcd(b%a, a);
}

bool isPrime(long long n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (long long i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}


int main(){

	int t;
	cin >> t;

	while(t){
		int n;

		cin >> n;

		if(n == 1){
			long long p;
			cin >> p;

			if(isPrime(p))
				cout << p*p << "\n";
			else
				cout << -1 << "\n";
		}else{
			vector <long long> divisors(n);
		
			long long max_n = 0;
			vector <long long> counting(1000006, 0);
						
			for(int i=0;i<n;i++){
				cin >> divisors[i];

				counting[divisors[i]]++;

				if(divisors[i] > max_n){
					max_n = divisors[i];
				}
			}




			


			long long ans = divisors[0];
			bool overflow = false;
			
			for(int i =1;i<n;i++){
				long long a,b;
				
				if(divisors[i] < ans){
					a = divisors[i];
					b = ans;
				}else{
					a = ans;
					b = divisors[i];
				}
				
				if(divisors[i] > (LLONG_MAX / ans)){
					cout << -1 << "\n";
					overflow = true;
					break;
				}
				
				ans = (((divisors[i]*ans)) / (gcd(a, b)));
			}

			

			if(overflow == false){
				if(ans == max_n)
					ans *= 2;
			}

		}
		

		t--;
	}


	return 0;
}
