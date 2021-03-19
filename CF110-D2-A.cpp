#include <bits/stdc++.h>
#include <string>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers




int main(){

	string s;

	cin >> s;

	int num = 0;


	for(int i =0;i<s.size();i++){

		if(s[i] == '4' || s[i] == '7')
			num++;
	}

	s = to_string(num);


	bool flag = true;

	for(int i =0;i<s.size();i++){
		if(s[i] != '4' && s[i] != '7'){
			flag = false;
			break;
		}
	}

	if(flag)
		cout << "YES";
	else
		cout << "NO";


	

	system("pause");
	return 0;
}


