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
		set<int> used;
		int doch = -1;
		for(int i =0;i<n;i++){
			int k;
			cin >> k;
			int a;
			bool flag = false;
			for(int j =0;j<k;j++){
				cin >> a;
				if(flag)
					continue;

				if(used.count(a)){
					continue;
				}else{
					flag =true;
					used.insert(a);
				}
			}
			if(doch == - 1 && !flag){
				doch = i+1;
			}
		}

		if(doch == -1){
			cout << "OPTIMAL\n";
		}else{
			cout << "IMPROVE\n";
			for(int i =1;i<=n;i++){
				if(!used.count(i)){
					cout << doch << " " << i << endl;
					break;
				}
			}
		}
	}
	

	system("pause");
	return 0;
}


