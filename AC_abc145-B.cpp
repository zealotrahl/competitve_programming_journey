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

	string s;

	cin >> s;


	if(n&1){
		cout << "No";
	}else{
		int mid = n/2;

		bool flag = true;
		for(int i =0;i<mid;i++){

			if(s[i] != s[i+mid]){
				flag = false;
				break;
			}
		}

		if(flag){
			cout << "Yes";
		}else{
			cout << "No";
		}
	}
	

	system("pause");
	return 0;
}



