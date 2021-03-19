#include <bits/stdc++.h>
#include <fstream>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers




int main(){

	ifstream fin("gcd.in");
	ofstream fout("gcd.out");
	
	int a,b;

	fin >> a >> b;


	fout << __gcd(a,b);

	system("pause");
	return 0;
}


