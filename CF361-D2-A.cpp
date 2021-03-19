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

	int n,k;

	cin >> n >> k;

	for(int i =0;i<n;i++){
		for(int j =0;j<n;j++){
			if(i == j){
				cout << k;
			}else{
				cout << 0;
			}

			cout << " ";
		}

		cout << "\n";
	}
	

	system("pause");
	return 0;
}


