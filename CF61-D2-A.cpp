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

	string s1,s2;

	cin >> s1 >> s2;

	for(int i =0;i<s1.size();i++){
		if(s1[i] != s2[i]){
			cout << 1;
		}else{
			cout << 0;
		}
	}
	

	system("pause");
	return 0;
}


