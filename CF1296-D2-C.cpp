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

	int t;

	cin >> t;

	while(t--){
		int n;

		cin >> n;

		string s;

		cin >> s;


		pair <int,int> ch;

		ch.first = 0;
		ch.second = 0;

		map<pair<int,int>, int> mp;


		int min_len = INT_MAX;
		int l,r;
		for(int i =0;i<n;i++){
			mp[ch] = i+1;

			if(s[i] == 'L')
				ch.first--;
			else if(s[i] == 'R')
				ch.first++;
			else if(s[i] == 'U')
				ch.second++;
			else if(s[i] == 'D')
				ch.second--;


			if(mp[ch] && i != 0){

				if(i - mp[ch] < min_len){
					l = mp[ch];
					r = i+1;
					min_len = i-mp[ch];

					// cout << ch.first << " " << ch.second << " " << mp[ch] << " " << s[i] << " ";

					// cout << mp[make_pair(2,0)];
				}

			}
		}

		if(min_len == INT_MAX){
			cout << -1 << endl;
		}else{
			cout << l << " " << r << endl;
		}
	}
	

	system("pause");
	return 0;
}


