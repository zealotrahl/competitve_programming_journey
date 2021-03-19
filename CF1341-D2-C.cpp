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
		map<int,int> mp;
		vector<int> arr(n);
		for(int i =0;i<n;i++){
			cin >> arr[i];
			arr[i]--;
			mp[arr[i]] = i;
		}

		vector <int> r_s(n);
		for(int i =0;i<n;i++){
			r_s[i] = i;
		}
		int posb = -1;
		int last = n-1;
		bool flag = true;
		for(int i =0;i<n;i++){
			int pos = mp[i];
			if(posb != -1 && posb != pos){
				flag = false;
				break;
			}
			if(pos == last){
				posb = -1;
				r_s[pos] = 0;
				continue;
			}else{
				r_s[pos] = 0;
				if(!r_s[pos+1]){
					posb = -1;
				}else{
					posb = pos+1;
				}
			}
		}
		if(flag){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	

	system("pause");
	return 0;
}


