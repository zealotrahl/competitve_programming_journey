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


	string s;

	cin >> s;


	if(n > 0 && k > 0){

		if(n > 1 && s[0] != '1'){
			s[0] = '1';
			k--;
		}
		else if(n == 1 && s[0] != '0')
			s[0] = '0';


	}

	for(int i =1;i<n && k > 0 ;i++){

		if(s[i] != '0'){
			s[i] = '0';
			k--;
		}

	}
	

	cout << s;

	system("pause");
	return 0;
}


