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

	int a,b;

	cin >> a >> b;


	int first,second,nichya;

	first = second = nichya = 0;

	for(int i =1;i<=6;i++){

		if(abs(a-i) < abs(b-i))
			first++;
		else if(abs(a-i) > abs(b-i))
			second++;
		else
			nichya++;

	}
	

	cout << first << " " << nichya << " " << second;

	system("pause");
	return 0;
}


