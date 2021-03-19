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
		int a,b;

		cin >> a >> b;

		vector <int> arr = {1,2,5};


		int count = 0;

		if(a < b){
			int left = (b-a)%5;

			count += (b-a)/5;

			count += left/2;

			left = left%2;

			count += left;

		}else if(a > b){
			int t =a;

			a = b;

			b = t;

			int left = (b-a)%5;

			count += (b-a)/5;

			count += left/2;

			left = left%2;

			count += left;
		}

		cout << count << endl;

	}

	

	system("pause");
	return 0;
}


