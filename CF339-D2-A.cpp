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

	string s;

	cin >> s;


	vector <int> arr;


	for(int i  =0;i<s.size();i++){
		if(s[i] == '+')
			continue;
		else
			arr.push_back(s[i]-'0');
	}

	sort(arr.begin(), arr.end());

	for(int i =0;i<arr.size();i++){
		cout << arr[i];

		if(i != arr.size() -1)
			cout << "+";
	}
	

	system("pause");
	return 0;
}

