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

	int n;

	cin >> n;

	if(n == 1){
		cout << 1;
	}else if(n <= 3){
		cout << "NO SOLUTION";
	}else{


		for(int i = 2;i<=n;i+=2){
			cout << i << " ";
		}

		for(int i =1;i<=n;i+=2){
			cout << i << " ";
		}

	}


	return 0;
}


