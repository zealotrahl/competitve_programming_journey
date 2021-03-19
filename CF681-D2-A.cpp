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

	int n;

	cin >> n;

	string s;

	int a,b;

	bool flag = false;

	for(int i =0;i<n;i++){
		cin >> s >> a >> b;

		if(a >= 2400 && b > 2400 && b > a){
			flag = true;
		}

	}

	if(flag){
		cout << "YES";
	}else
		cout << "NO";
	

	system("pause");
	return 0;
}



