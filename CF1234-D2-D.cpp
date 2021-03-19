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

	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	string s;

	cin >> s;


	map <char, set <int>> un;

	for(int i =0;i<s.size();i++){
		
		if(un.find(s[i]) == un.end()){
			un[s[i]].insert(i);
			continue;
		}else{
			un[s[i]].insert(i);
		}
	}





	int q;

	cin >> q;

	int type, pos, l,r;

	char c;

	while(q--){

		cin >> type;

		if(type == 1){
			cin >> pos >> c;
			pos--;

			un[s[pos]].erase(pos);
			s[pos] = c;
			un[c].insert(pos);

		}else{
			cin >> l >> r;

			l--;
			r--;
			set <int> ans;
			// max 26 loop
			for(const auto &x : un){
				 auto indx = x.second.lower_bound(l);

				ans.insert(*indx);
			}

			int count = 0;
			
			for(auto x : ans){
				if(x >= l && x <= r){
					count++;
				}
			}

			cout << count << "\n";
		}
	}
	

	system("pause");
	return 0;
}


