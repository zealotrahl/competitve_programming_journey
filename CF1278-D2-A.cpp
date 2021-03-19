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

	cin >>t;

	while(t--){
		string p;

		string h;

		cin >> p >> h;

		map <char,int> mp;

		for(int i =0;i<p.size();i++){
			if(mp.count(p[i]))
				mp[p[i]]++;
			else
				mp[p[i]] = 1;
		}

		bool flag = false;

		map <char, int> dubl;

		for(int i =0;i<h.size();i++){

			if(flag)
				break;

			if(mp.count(h[i])){
				for(auto x : mp){
					dubl[x.first] = x.second;
				}


				int len = 0;
				string check = "";
				for(int j = i;j < h.size();j++){
					if(!dubl.count(h[j]) || dubl[h[j]] < 1){
						break;
					}
					len++;
					if(len == p.size()){
						flag =true;
						cout << check << endl;
						break;
					}

					check += h[j];

					dubl[h[j]]--;
				}

			}
		}

		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	

	system("pause");
	return 0;
}


