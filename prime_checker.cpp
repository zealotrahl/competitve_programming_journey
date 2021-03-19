#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


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
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	
	cout << (isPrime(228148814881489) ? "YES" : "NO") << endl;

	system("pause");
	return 0;
}


