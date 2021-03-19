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

	int t;


	cin >> t;

	int n,m;

	string s,e;

	while(t--){
		cin >> n >> m;


		long long sum = 0;

		while(n--){
			cin >> s >> e;

			int started_hour = stoi(string(1,s[0])+string(1,s[1]))*60 + stoi(string(1,s[3])+string(1,s[4]));
			int ended_hour = stoi(string(1,e[0])+string(1,e[1]))*60 + stoi(string(1,e[3])+string(1,e[4]));


			sum += ended_hour-started_hour;

		}

		if((sum/60) >= m)
			cout <<"YES\n";
		else
			cout << "NO\n";


	}

	system("pause");
	return 0;
}


