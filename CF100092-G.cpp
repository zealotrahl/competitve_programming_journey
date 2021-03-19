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

	int a,b;

	ifstream fin("numbers.in");
	ofstream fout("numbers.out");

	fin >> a >> b;

	bool flag = false;

	int i,j;

	for(i = -10000;i<=10000;i++){
		for(j =-10000;j<=10000;j++){
			if(a*i + b*j == 1){
				flag = true;
				break;
			}
		}

		if(flag){
			break;
		}
	}

	if(flag){
		fout << i << " " << j;
	}else{
		fout << 0 << " " << 0;
	}
	
	return 0;
}


