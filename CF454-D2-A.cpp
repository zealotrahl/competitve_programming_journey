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


	int kolvo = 1;

	int mid = n/2;



	for(int i =0;i<n;i++){
		for(int j =0;j<n;j++){
			if(j < mid && mid - j+1 <= kolvo){
				cout << "D";
			}else if(j >= mid && j - mid + 1 <= kolvo){
				cout << "D";
			}else{
				cout << "*";
			}
		}
		cout << "\n";

		if(i >= mid){
			kolvo--;
		}else{
			kolvo++;
		}
		
	}
	

	system("pause");
	return 0;
}

