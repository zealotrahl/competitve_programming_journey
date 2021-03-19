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
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int t;
	cin >> t;

	while(t--){
		int n;

		cin >> n;



		string out = "";

		if(!(n&1)){

			for(int i =0;i<n/2;i++){
				out += "1";
			}


		}else{

			out = "7";
			for(int i =0;i<n/2 - 1;i++){

				out += "1";
			}


		}


		cout << out << endl;
	}
	

	system("pause");
	return 0;
}


