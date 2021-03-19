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
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	long long n;

	cin >> n;




	while(n != 1){
		cout << n << " ";
		if(n&1){
			n *=3;
			n++;
		}else{
			n /= 2;
		}
	}

	cout << "1\n";
	

	return 0;
}


