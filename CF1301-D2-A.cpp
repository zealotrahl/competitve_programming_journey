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
		string a,b,c;

		cin >> a >> b >> c;

		int n = a.length();


		bool flag = true;

		for(int i=0;i<n;i++){
			if(a[i] != b[i]){
				if((c[i] != a[i] && c[i] != b[i])){
					flag = false;
					break;
				}
			}else{
				if(c[i] != a[i] && c[i] != b[i]){
					flag = false;
					break;
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


