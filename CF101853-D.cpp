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

	int t;

	cin >> t;


	int n;


	while(t--){
		cin >> n;





		int not_solved = 0;

		int a;

		for(int i =0;i<n;i++){
			cin >> a;


			if(a == 0)
				not_solved++;
		}

		cout << n-not_solved << "\n";




	}
	

	system("pause");
	return 0;
}


