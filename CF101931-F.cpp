#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers



int main(){


	int n;



	cin >> n;

	vector <int> prices(n);




	int a;

	for(int i =0;i<n;i++){
		cin >> prices[i];
	}



	int val[n+1]; 
	val[0] = 0; 
	int i, j; 
	
	// Build the table val[] in bottom up manner and return the last entry 
	// from the table 
	
	for (i = 1; i<=n; i++) 
	{
		int max_val = INT_MIN; 
		for (j = 0; j < i; j++) 
			max_val = max(max_val, prices[j] + val[i-j-1]); 
	
		val[i] = max_val; 
	}

	cout << val[n];


	

	system("pause");
	return 0;
}


