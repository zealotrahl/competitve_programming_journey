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

	int y,w;

	cin >> y >> w;


	int l = max(y,w);

	switch(l){
		case 1:
			cout << "1/1";
			break;
		case 2:
			cout << "5/6";
			break;
		case 3:
			cout << "2/3";
			break;
		case 4:
			cout << "1/2";
			break;
		case 5:
			cout << "1/3";
			break;
		case 6:
			cout << "1/6";
			break;
	}
	

	system("pause");
	return 0;
}


