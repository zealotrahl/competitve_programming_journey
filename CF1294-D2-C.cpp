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

		int a,b;
		a = b = 0;

		for(int i =2;i<=sqrt(n);i++){
			if(n%i == 0){
				a = i;
				n /= a;
				break;
			}
		}
		if(a != 0){
			for(int i =2;i<=sqrt(n);i++){
				if(i != a && n%i ==0){
					b = i;
					n /= b;
					break;
				}
			}
		}

		if(a == 0 || b == 0 || n == a || n == b || n == 1){
			cout << "NO\n";
		}else{
			cout << "YES\n";
			cout << a << " " << b << " " << n << endl;
		}

	}
	

	system("pause");
	return 0;
}