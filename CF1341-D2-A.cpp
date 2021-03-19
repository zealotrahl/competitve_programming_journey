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
		float a,b,c,d;
		cin >> a >> b >> c >> d;

		bool flag =false;
		for(int i =c-d;i<=c+d;i++){
			float checkWeight = 1.0*(i)/n;
			if((checkWeight >= a-b && checkWeight <= a+b)){
				flag = true;
				break;
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


