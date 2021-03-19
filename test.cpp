#include <bits/stdc++.h>


using namespace std;


typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers



const int n = 4;


int count(int i, int j){

	if(i > n-1 || j > n-1)
		return 0;

	if(i == n-1 && j == n-1){
		return 1;
	}else{
		return count(i+1,j)+count(j+1,i);
	}

}

int main(){

	int grid[n][n];

	

	cout << count(0,0) << endl;

	system("pause");
	return 0;
}


