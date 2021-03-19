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

	ifstream fin("fib.in");
	ofstream fout("fib.out");

	int n;

	fin >> n;


	int prev= 1;

	int cur = 1;

	for(int i = 2;i<=n;i++){

		cur = prev + cur;

		prev = cur - prev;
	}

	fout << cur;
	

	system("pause");
	return 0;
}


