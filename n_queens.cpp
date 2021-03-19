#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


const int n = 8;

int row[n];

bool possible(int r, int c){


	for(int i =0;i<c;i++){
		if(row[i] == r || (abs(r-row[i]) == abs(i-c)))
			return false;

	}

	return true;


}


void n_quens(int c){

	if(c == n){

		for(int i =0;i<n;i++)
			cout << row[i] << " ";

		cout << endl;

		return;
	}


	for(int r =0;r<n;r++){

		if(possible(r,c)){
			row[c] = r;

			n_quens(c+1);
		}
	}


}

int main(){

	


	n_quens(0);
	

	system("pause");
	return 0;
}


