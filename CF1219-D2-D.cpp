#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>
#include <string>
#include <cmath>


using namespace std;

int main(){

	long long n,k;

	cin >> n >> k;

	vector <long long> days(n);

	for(long long i =0;i<n;i++)
		cin >> days[i];

	long long a;

	cin >> a;

	vector <long long> coins(n);

	for(long long i=0;i<n;i++)
		cin >> coins[i];


	long long out = 0;

	for(long long i =0;i<n;i++){

		if(days[i] > k){
			k += a;

			out += coins[i];
		}


		if(days[i] > k){
			cout << -1;
			return 0;
		}


	}

	cout << out;
	

	system("pause");
	return 0;
}


