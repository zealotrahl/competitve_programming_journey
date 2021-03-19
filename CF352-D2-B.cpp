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

	vector <int> arr(n);

	int a;

	map <int, pair<int, int>> mp;

	int counter = 0;

	for(int i =0;i<n;i++){
		cin >> a;

		if(!mp.count(a)){
			mp[a] = make_pair(0,i);
			counter++;
			continue;
		}else{
			if(mp[a].first != -1){
				if(mp[a].first == 0){
					mp[a].first = abs(mp[a].second-i);
					mp[a].second = i;
				}else{
					if(abs(mp[a].second - i) != mp[a].first){
						mp[a].first = -1;
						counter--;
					}else{
						mp[a].second = i;
					}
				}
			}
		}

	}



	cout << counter << endl;
	for(auto const& [key, x] : mp){
		if(x.first != -1){
			cout << key << " " << x.first << "\n";
		}
	}
	

	system("pause");
	return 0;
}

