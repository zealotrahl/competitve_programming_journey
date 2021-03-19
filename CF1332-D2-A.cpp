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
		int a,b,c,d;

		cin >> a >> b >> c >> d;
		int x,y,x1,y1,x2,y2;
		cin >> x >> y >> x1 >> y1 >> x2 >> y2;

		int p = b-a;
		int k = d-c;

		int new_x = x + p;
		int new_y = y + k;


		if(x - min(abs(a),1) < x1 && x + min(abs(b),1) > x2){
			cout << "NO\n";
			continue;
		}else if(y - min(abs(c),1) < y1 && y + min(abs(d),1) > y2){
			cout << "NO\n";
			continue;
		}

		if(new_x >= x1 && new_x <= x2 && new_y >= y1 && new_y <= y2){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	
	

	system("pause");
	return 0;
}


