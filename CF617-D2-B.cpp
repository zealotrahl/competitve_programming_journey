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

	vector <int> shokolad(n, 0);

	for(int i =0;i<n;i++){
		cin >> shokolad[i];
	}


	long long counter = 0;


	int cur_indx = -1;

	for(int i =0;i<n;i++){

		if(shokolad[i] == 1){

			if(cur_indx == -1){
				counter = 1;
			}else
				counter *= (i - cur_indx);

			cur_indx = i;
		}
		
	}


	cout << counter;

	system("pause");
	return 0;
}


